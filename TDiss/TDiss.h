#pragma once

#include "TDissTypes.h"
#include "TDissLogger.h"

#include <functional>

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
		typedef std::function<bool(const Instruction& inst)> AddInstructionFunc;

		static TDISS_API DisResult::Enum disassemble(CodeStream& strm, const AddInstructionFunc& instructionOutFunc, IDissLogger* pLogger = nullptr);

		static X_INLINE DisResult::Enum disassemble(CodeStream& strm, Instruction* pDecodeInst, size_t maxInstructions, size_t* usedInstructionsCount, IDissLogger* pLogger = nullptr);
		static X_INLINE DisResult::Enum disassemble(CodeStream& strm, std::vector<Instruction>& instructionsOut, IDissLogger* pLogger = nullptr);

	private:
		Diss(IDissLogger* pLogger, CodeStream& strm, const AddInstructionFunc& instructionOutFunc);

		bool StopForFlow(const Instruction& inst) const;

		DisResult::Enum disassemble_int(void);

		const InstInfo* instGetInfo(InstNode in, int32_t index) const;
		CodeType::Enum GetEffectiveOperandSize(uint32_t prefixes, uint32_t instructionFlags, uint32_t rex) const;
		CodeType::Enum GetEffectiveAddressSize(uint32_t prefixes) const;
		const InstInfo* instLookup(PrefixState& ps);
		const InstInfo* instLookupPreFixed(PrefixState& ps, InstNode in) const;
		const InstInfo* instLookup3DNow(void);
		InstrDecodeResult::Enum decodeInst(PrefixState& ps, Instruction* pInst);

	private:
		IDissLogger* pLogger_;
		CodeStream strm_;
		const OffsetT addMask_;
		const AddInstructionFunc& instructionOutFunc_;
	};

	X_INLINE DisResult::Enum Diss::disassemble(CodeStream& strm, Instruction* pDecodeInst, size_t maxInstructions, size_t* usedInstructionsCount, IDissLogger* pLogger)
	{
		if (usedInstructionsCount == nullptr || pDecodeInst == nullptr) {
			return DisResult::INVALID_PARAM;
		}

		size_t usedInstructions = 0;
		auto result = disassemble(
			strm, [&](const Instruction& inst) -> bool {
				if (usedInstructions < maxInstructions) {
					pDecodeInst[usedInstructions] = inst;
					usedInstructions++;
					return true;
				}

				// ran out of space.
				return false;
			},
			pLogger);

		*usedInstructionsCount = usedInstructions;

		return result;
	}

	X_INLINE DisResult::Enum Diss::disassemble(CodeStream& strm, std::vector<Instruction>& instructionsOut, IDissLogger* pLogger)
	{
		return disassemble(
			strm, [&instructionsOut](const Instruction& inst) -> bool {
				instructionsOut.emplace_back(inst);
				return true;
			},
			pLogger);
	}

} // namespace TDiss