#pragma once

#include "TDissTypes.h"

namespace TDiss
{
	// links
	// REX: http://wiki.osdev.org/X86-64_Instruction_Encoding#REX_prefix
	// VEX: https://en.wikipedia.org/wiki/VEX_prefix

	/*
	Intel 64 instruction format using VEX prefix
		# of bytes	 0,2,3			1					1			 0,1			0,1,2,4		   0,1
		[Prefixes]	[VEX]	OPCODE  	ModR/M	[SIB]		[DISP]		[IMM]
	*/

	struct Prefix
	{
		enum Enum
		{
			LOCK = 0xf0,
			REPNZ = 0xf2,
			REP = 0xf3,

			// in 64-bit mode: Null Prefix.
			ES = 0x26,
			CS = 0x2e,
			SS = 0x36,
			DS = 0x3e,
			// valid in 64bit mode
			FS = 0x64,
			GS = 0x65,

			OP_SIZE = 0x66,
			ADD_SIZE = 0x67,

			// Vex
			VEX2b = 0xc5,
			VEX3b = 0xc4
		};
	};

	struct PrefixGroup
	{
		enum Enum
		{
			NONE = -1,
			REX,
			LOCK_REP,
			SEG,
			OP_SIZE,
			ADD_SIZE
		};
		static const size_t INDEX_NUM = 5;
	};

	struct PrefixExtType
	{
		enum Enum
		{
			NONE,
			REX,		// long mode only (64bit instructions)
			VEX2,
			VEX3
		};
	};

	struct RexPrefixMask
	{
		enum Enum
		{
			// 1:1 mapping of the flag order in the 4 LSB's of a rex prefix.
			B = BIT(0),	// Extension of r/m field, base field, or opcode reg field
			X = BIT(1),	// Extension of SIB index field
			R = BIT(2), // Extension of ModR/M reg field
			W = BIT(3), // 64 Bit Operand Size
			// manually set
			L = BIT(4) // vec len
		};
	};


	struct PrefixState
	{
		PrefixState(IDissLogger* pLogger);
		~PrefixState() = default;

		void decode(CodeStream& info);

		void addUsedPrefix(size_t idx, PrefixGroup::Enum group);
		void addUsedPrefix(InstructionFlag::Enum pre);
		void ignorePrefix(PrefixGroup::Enum group);
		void removeDecodedPrefix(InstructionFlag::Enum pre);

		void useSegment(InstructionFlag::Enum segPrefix, CodeType::Enum ct, Instruction* pInst);

		X_INLINE size_t prefixSize(void) const {
			return pEnd_ - pStart_;
		}

	public:
		static bool isValidPrefix(CodeStream& strm);
		static bool isValidPrefix(const uint8_t op, CodeType::Enum ct);
		static PrefixGroup::Enum getPrefixGroup(const uint8_t op, CodeType::Enum ct);

	public:
		IDissLogger* pLogger_;

		const uint8_t* pStart_;
		const uint8_t* pEnd_;
		const uint8_t* pVex_;
		const uint8_t* pRex_;

		PrefixExtType::Enum ExtType;

		uint32_t decodedPrefixFlags;
		uint32_t usedPrefixFlags;
		uint16_t unusedPrefixMask; // 15bits max, set bits are the byte index of unused prefixes.
		uint16_t _pad;

		// store VEX.vvvv
		uint32_t vexV;
		// REX BXRW flags
		uint32_t vrex;

		// offsets to prefix byte based on group / index.
		int32_t pfIndexOff[PrefixGroup::INDEX_NUM];
	};


} // namespace TDiss