#pragma once

#include "TDissTypes.h"
#include "Instruction.h"

namespace TDiss
{
	class CodeStream;
	struct PrefixState;

	struct OperandDecodeResult
	{
		enum Enum
		{
			INVALID = 0,
			OK = 1,
			STREAM_END
		};
	};


	// quite a lot of params, but we need a fair bit of info about current context in order to correctly work out the operand.
	// and these params come from all diffrent places..

	OperandDecodeResult::Enum ExtractOperand(CodeStream* info, Instruction* pInst, PrefixState& ps, uint32_t instructionFlag, uint32_t modRm,
		OperandType::Enum opType, OperandIdx::Enum opIdx, CodeType::Enum effOp, CodeType::Enum effAdd);


} // namespace TDiss