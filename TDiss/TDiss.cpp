#include "pch.h"

#include "TDiss.h"
#include "Prefix.h"

#include "Instruction.h"

namespace TDiss
{
	DisResult::Enum Diss::disassemble(CodeStream& strm, Instruction* pDecodeInst, size_t maxInstructions, size_t* usedInstructionsCount, IDissLogger* pLogger)
	{
		if (!usedInstructionsCount || !pDecodeInst) {
			return DisResult::INVALID_PARAM;
		}
		if (!strm.begin()) {
			return DisResult::INVALID_PARAM;
		}
		if (strm.length() < 1) {
			return DisResult::OK;
		}

		if (strm.codeType() == CodeType::CODE_32BIT) {
			strm.setOptions(bitUtil::SetFlag(strm.options(), DisOptions::ADDRESS_MASK_32));
		}

		Diss inst(pLogger, strm, maxInstructions);

		return inst.disassemble_int(pDecodeInst, usedInstructionsCount);
	}

	// --------------------------------------------------------

	Diss::Diss(IDissLogger* pLogger, CodeStream& strm, size_t maxInstructions) :
		pLogger_(pLogger),
		strm_(strm),
		maxInstructions_(maxInstructions),
		addMask_(strm_.IsAddMask32() ? std::numeric_limits<uint32_t>::max() : std::numeric_limits<OffsetT>::max())
	{
	}

	bool Diss::StopForFlow(const Instruction& inst) const
	{
		if (inst.flow != FlowControl::NONE)
		{
			uint32_t disOptions = strm_.options();

			if (bitUtil::IsFlagSet(disOptions, DisOptions::STOP_ON_CALL) && inst.flow == FlowControl::CALL) {
				return true;
			}
			if (bitUtil::IsFlagSet(disOptions, DisOptions::STOP_ON_CMOV) && inst.flow == FlowControl::CMOV) {
				return true;
			}
			if (bitUtil::IsFlagSet(disOptions, DisOptions::STOP_ON_CND_BRANCH) && inst.flow == FlowControl::CND_BRANCH) {
				return true;
			}
			if (bitUtil::IsFlagSet(disOptions, DisOptions::STOP_ON_UNC_BRANCH) && inst.flow == FlowControl::UNC_BRANCH) {
				return true;
			}
			if (bitUtil::IsFlagSet(disOptions, DisOptions::STOP_ON_INT) && inst.flow == FlowControl::INT) {
				return true;
			}
			if (bitUtil::IsFlagSet(disOptions, DisOptions::STOP_ON_RET) && inst.flow == FlowControl::RET) {
				return true;
			}
			if (bitUtil::IsFlagSet(disOptions, DisOptions::STOP_ON_SYS) && inst.flow == FlowControl::SYS) {
				return true;
			}
		}
		return false;
	}

	DisResult::Enum Diss::disassemble_int(Instruction* pDecodeInst, size_t* usedInstructionsCount)
	{
		X_ASSERT_NOT_NULL(usedInstructionsCount);
		*usedInstructionsCount = 0;

		size_t currentInstOut = 0; // Keep the count in a local
		OffsetT instVAStart;

		const bool canStopOnFlow = strm_.stopOnFlowEnabled();

		while (!strm_.isEof())
		{
			// offset of current instruction.
			instVAStart = strm_.currentVA();

			PrefixState ps(pLogger_);

			ps.decode(strm_);

			if (ps.prefixSize() > 0) {
				TDISS_LOG2("0x%x prefixes. flags: 0x%x", ps.prefixSize(), ps.decodedPrefixFlags);
			}

			if (strm_.is64BitDecode())
			{
				// REX
				if (bitUtil::IsFlagSet(ps.decodedPrefixFlags, InstructionFlag::PRE_REX))
				{
					// check the res was preceding byte before instruction.
					if (ps.pRex_ != (strm_.current() - 1))
					{
						// not valid :(
						ps.decodedPrefixFlags = bitUtil::ClearBit(ps.decodedPrefixFlags, InstructionFlag::PRE_REX);
						ps.ExtType = PrefixExtType::NONE;
						// ignore the prefix.
						ps.ignorePrefix(PrefixGroup::REX);
					}
				}

				// in 64 CS DS ES SS segment goats are slapped.
				const uint32_t segMask = (InstructionFlag::PRE_CS | InstructionFlag::PRE_DS |
					InstructionFlag::PRE_ES | InstructionFlag::PRE_SS);

				if (ps.decodedPrefixFlags & segMask) {
					ps.decodedPrefixFlags &= ~segMask;
					// ignore them.
					ps.ignorePrefix(PrefixGroup::SEG);
				}
			}

			// check we have output space.
			if (currentInstOut >= maxInstructions_) {
				*usedInstructionsCount = currentInstOut;
				TDISS_LOG1("Instruction output buffer is full");
				return DisResult::OUTDATAFULL;
			}

			// now need to decode the instruction. 
			Instruction& curInst = pDecodeInst[currentInstOut];

			InstrDecodeResult::Enum res = decodeInst(&ps, &curInst);

			curInst.add = (instVAStart & addMask_);

			if (res == InstrDecodeResult::OK)
			{
				// add prefix size to instruction
				curInst.size += static_cast<uint8_t>(ps.prefixSize());

				TDISS_LOG2("Decoded instruction: %s size: 0x%x", InstructionID::ToString(curInst.opcode), static_cast<int32_t>(curInst.size));

				currentInstOut++;
			}
			else if ((res == InstrDecodeResult::UNKNOWN_INST
				|| res == InstrDecodeResult::OPERAND_DECODE_FAIL
				|| res == InstrDecodeResult::INVALID)
				&& bitUtil::IsFlagSet(strm_.options(), DisOptions::SKIP_INVALID))
			{
				const size_t numPrefix = ps.prefixSize();
				if (numPrefix > 0)
				{
					// we don't seek the stream for these.
					const uint8_t* pStart = ps.pStart_;
					for (size_t i = 0; i < numPrefix; i++, instVAStart++)
					{
						Instruction& curInstSub = pDecodeInst[currentInstOut];
						curInstSub = Instruction();
						curInstSub.size = 1;
						curInstSub.imm.uint8 = pStart[i];
						curInstSub.add = (instVAStart & addMask_);

						// blank instruction for each invalid byte
						currentInstOut++;

						if (currentInstOut >= maxInstructions_) {
							*usedInstructionsCount = currentInstOut;
							TDISS_LOG1("Instruction output buffer is full");
							return DisResult::OUTDATAFULL;
						}
					}

					// the end of the prefixes should be the current stream postion.
					X_ASSERT(ps.pEnd_ == strm_.current());
				}

				// these need to be read out the stream.
				Instruction& curInstSub = pDecodeInst[currentInstOut++];
				curInstSub = Instruction();
				curInstSub.size = 1;
				curInstSub.imm.uint8 = strm_.get<uint8_t>();
				curInstSub.add = (instVAStart & addMask_);

				strm_.SeekBytes(1);
			}
			else if (res == InstrDecodeResult::STREAM_END && bitUtil::IsFlagSet(strm_.options(), DisOptions::SKIP_INVALID))
			{
				curInst = Instruction();

				TDISS_ERR("Reached end of stream mid decode");
				*usedInstructionsCount = currentInstOut;
				return DisResult::OK;
			}
			else
			{
				TDISS_ERR("Invalid / unknown instruction");
				*usedInstructionsCount = currentInstOut;
				return DisResult::DATAERR;
			}

			// stop on flow?
			if (canStopOnFlow)
			{
				if (StopForFlow(curInst)) {
					*usedInstructionsCount = currentInstOut;
					return DisResult::OK;
				}
			}
		}

		*usedInstructionsCount = currentInstOut;
		return DisResult::OK;
	}


	#if 0
	void Diss::Log(Verbosity::Enum verLvl, const char* fmt, ...)
	{
#if TDISS_LOGGING
		if (verbosityLvl_ >= verLvl)
		{
			va_list args;
			va_start(args, fmt);
			gLogger.LogVa(fmt, args);
			va_end(args);
		}
#else
		X_UNUSED(verLvl);
		X_UNUSED(fmt);
#endif // !TDISS_LOGGING
	}

	void Diss::Log(const char* fmt, ...)
	{
#if TDISS_LOGGING
		va_list args;
		va_start(args, fmt);
		gLogger.LogVa(fmt, args);
		va_end(args);
#else
		X_UNUSED(fmt);
#endif // !TDISS_LOGGING
	}

	void Diss::Warning(const char* fmt, ...)
	{
#if TDISS_LOGGING
		va_list args;
		va_start(args, fmt);
		gLogger.WarningVa(fmt, args);
		va_end(args);
#else
		X_UNUSED(fmt);
#endif // !TDISS_LOGGING
	}

	void Diss::Error(const char* fmt, ...)
	{
#if TDISS_LOGGING
		va_list args;
		va_start(args, fmt);
		gLogger.ErrorVa(fmt, args);
		va_end(args);
#else
		X_UNUSED(fmt);
#endif // !TDISS_LOGGING
	}
	#endif


} // namespace TDiss