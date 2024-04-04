#pragma once


#include "TDissTypes.h"
#include "TDissLogger.h"

namespace TDiss
{
	struct PrefixState;
	struct Instruction;
	struct InstInfo;

	class Diss
	{
		typedef uint64_t OffsetT;

		struct InstrDecodeResult
		{
			enum Enum
			{
				OK,
				OPERAND_DECODE_FAIL,
				STREAM_END,
				INVALID,
				UNKNOWN_INST,
			};
		};

	public:
		static TDISS_API DisResult::Enum disassemble(CodeStream& strm, Instruction* pDecodeInst, size_t maxInstructions, size_t* usedInstructionsCount, IDissLogger* pLogger = nullptr);

	private:
		Diss(IDissLogger* pLogger, CodeStream& strm, size_t maxInstruction);

		bool StopForFlow(const Instruction& inst) const;

		DisResult::Enum disassemble_int(Instruction* pDecodeInst, size_t* usedInstructionsCount);

		const InstInfo* instGetInfo(InstNode in, int32_t index) const;
		CodeType::Enum GetEffectiveOperandSize(uint32_t prefixes, uint32_t instructionFlags, uint32_t rex) const;
		CodeType::Enum GetEffectiveAddressSize(uint32_t prefixes) const;
		const InstInfo* instLookup(PrefixState* ps) ;
		const InstInfo* instLookupPreFixed(PrefixState* ps, InstNode in) const;
		const InstInfo* instLookup3DNow(void);
		InstrDecodeResult::Enum decodeInst(PrefixState* ps, Instruction* pInst);

	private:
		IDissLogger* pLogger_;
		CodeStream strm_;
		const OffsetT addMask_;
		const size_t maxInstructions_;
	};

} // namespace TDiss