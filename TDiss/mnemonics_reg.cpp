#include "pch.h"
#include "TDissTypes.h"


namespace TDiss
{
	namespace
	{
		const char* pReg[] =
		{
			"EAX",	// R01D
			"ECX",	// R02D
			"EDX",	// etc..
			"EBX",
			"ESP",
			"EBP",
			"ESI",
			"EDI",
			// 32bit extended.
			"R8D",
			"R9D",
			"R10D",
			"R11D",
			"R12D",
			"R13D",
			"R14D",
			"R15D",

			// 64 bit
			"RAX",
			"RCX",
			"RDX",
			"RBX",
			"RSP",
			"RBP",
			"RSI",
			"RDI",
			// 64bit extended.
			"R8",
			"R9",
			"R10",
			"R11",
			"R12",
			"R13",
			"R14",
			"R15",

			// 16 bit
			"AX",
			"CX",
			"DX",
			"BX",
			"SP",
			"BP",
			"SI",
			"DI",
			// 16bit extended.
			"R8W",
			"R9W",
			"R10W",
			"R11W",
			"R12W",
			"R13W",
			"R14W",
			"R15W",

			// 8 bit
			"AL",
			"CL",
			"DL",
			"BL",
			//
			"AH",
			"CH",
			"DH",
			"BH",
			// 8bit extended.
			"R8B",
			"R9B",
			"R10B",
			"R11B",
			"R12B",
			"R13B",
			"R14B",
			"R15B",

			// 8bit shiz
			"SPL",	// sp
			"BPL",	// bp
			"SIL",	// si
			"DIL",	// di

			// segment
			"ES",
			"CS",
			"SS",
			"DS",
			"FS",
			"GS",
			"RIP", // where to place this...(seg :S ?)


			"CR0",
			"CR1", // reserver
			"CR2",
			"CR3",
			"CR4",
			"",
			"",
			"",
			"CR8", // = CR4 + 4, keep index correct (accessible in 64-bit mode using the REX)

			"DR0",
			"DR1",
			"DR2",
			"DR3",
			"",
			"",
			"DR6", // = DR3 + 3, // status
			"DR7",	// control.

			// st0.
			"ST0",
			"ST1",
			"ST2",
			"ST3",
			"ST4",
			"ST5",
			"ST6",
			"ST7",


			"MM0",
			"MM1",
			"MM2",
			"MM3",
			"MM4",
			"MM5",
			"MM6",
			"MM7",

			"XMM0",
			"XMM1",
			"XMM2",
			"XMM3",
			"XMM4",
			"XMM5",
			"XMM6",
			"XMM7",
			"XMM8",
			"XMM9",
			"XMM10",
			"XMM11",
			"XMM12",
			"XMM13",
			"XMM14",
			"XMM15",

			"YMM0",
			"YMM1",
			"YMM2",
			"YMM3",
			"YMM4",
			"YMM5",
			"YMM6",
			"YMM7",
			"YMM8",
			"YMM9",
			"YMM10",
			"YMM11",
			"YMM12",
			"YMM13",
			"YMM14",
			"YMM15",

			"NONE",
		};

		static const size_t numStrings = sizeof(pReg) / sizeof(const char*);
	} // namespace 


	const char* RegIndex::ToString(Enum reg)
	{
		static_assert(NONE + 1 == numStrings, ""); // + 1 for index to count.

		if (static_cast<size_t>(reg) < numStrings) {
			return pReg[reg];
		}

		X_ASSERT(static_cast<size_t>(reg) < numStrings);
		return "<invalid>";
	}

} // namespace TDiss