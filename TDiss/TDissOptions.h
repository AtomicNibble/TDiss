#pragma once

// moved out of TDissTypes so builder can include it.
namespace TDiss
{

	// flags for ending decoding.
	struct DisOptions
	{
		enum Enum
		{
			STOP_ON_CALL = BIT(0), // stop on call 
			STOP_ON_RET = BIT(1),	// ret
			STOP_ON_SYS = BIT(2),	// sys call/ret
			STOP_ON_UNC_BRANCH = BIT(3), //unconditional branch
			STOP_ON_CND_BRANCH = BIT(4), // conditional branch
			STOP_ON_CMOV = BIT(5), // cmov (conditional move+ branch)
			STOP_ON_INT = BIT(6),	// int3 (breakpoint), int, int1, int0

			ADDRESS_MASK_32 = BIT(7), // used for masking address and offset in 32bit mode

			SKIP_INVALID = BIT(8), // skip past unkown instructions and decode them as single bytes

			STOP_ON_FLOW_ALL = (STOP_ON_CALL | STOP_ON_RET | STOP_ON_SYS | STOP_ON_UNC_BRANCH | STOP_ON_CND_BRANCH | STOP_ON_CMOV | STOP_ON_INT),
		};
	};

	struct CodeType
	{
		enum Enum
		{
			CODE_16BIT,
			CODE_32BIT,
			CODE_64BIT,
		};

		static const char* ToString(Enum e)
		{
			switch (e)
			{
			case CodeType::CODE_16BIT:
				return "16Bit";
			case CodeType::CODE_32BIT:
				return "32Bit";
			case CodeType::CODE_64BIT:
				return "64Bit";
			default:
				return "<invalid>";
			}
		}
	};


} // namespace TDiss