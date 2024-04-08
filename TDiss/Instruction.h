#pragma once

#ifndef X_TDISS_TABLE_BUILDER
#include "mnemonics.h"
#endif // !X_TDISS_TABLE_BUILDER

#ifdef OVERFLOW
#undef OVERFLOW
#endif // !OVERFLOW

#define BIT(n) (1 << n)
#define BIT64(n) (1llu << n)

namespace TDiss
{
	// Links
	// https://en.wikipedia.org/wiki/List_of_instruction_sets
	// http://ref.x86asm.net/#Instruction-Operand-Codes
	// http://ref.x86asm.net/coder.html

	static size_t MAX_INSTRUCTION_SIZE = 15;
	static const size_t MAX_OPERANDS = 4;


	struct RegIndex
	{
		enum Enum : uint8_t
		{
			// 32 bit
			EAX,	// R01D
			ECX,	// R02D
			EDX,	// etc..
			EBX,
			ESP,
			EBP,
			ESI,
			EDI,
			// 32bit extended.
			R8D,
			R9D,
			R10D,
			R11D,
			R12D,
			R13D,
			R14D,
			R15D,

			// 64 bit
			RAX,
			RCX,
			RDX,
			RBX,
			RSP,
			RBP,
			RSI,
			RDI,
			// 64bit extended.
			R8,
			R9,
			R10,
			R11,
			R12,
			R13,
			R14,
			R15,

			// 16 bit
			AX,
			CX,
			DX,
			BX,
			SP,
			BP,
			SI,
			DI,
			// 16bit extended.
			R8W,
			R9W,
			R10W,
			R11W,
			R12W,
			R13W,
			R14W,
			R15W,

			// 8 bit
			AL,
			CL,
			DL,
			BL,
			//
			AH,
			CH,
			DH,
			BH,
			// 8bit extended.
			R8B,
			R9B,
			R10B,
			R11B,
			R12B,
			R13B,
			R14B,
			R15B,

			// 8bit shiz
			SPL,
			BPL,
			SIL,
			DIL,

			/*
			SIL,	// si
			DIL,	// di
			BPL,	// bp
			SPL,	// sp
			*/

			// segment
			ES,
			CS,
			SS,
			DS,
			FS,
			GS,
			RIP, // where to place this...(seg :S ?)

			// Cregs https://en.wikipedia.org/wiki/Control_register
			CR0,
			CR1, // reserver
			CR2,
			CR3,
			CR4,
			CR8 = CR4 + 4, // keep index correct (accessible in 64-bit mode using the REX)

			// Dregs https://en.wikipedia.org/wiki/X86_debug_register
			DR0,
			DR1,
			DR2,
			DR3,

			DR6 = DR3 + 3, // status
			DR7,	// control.

			// fpu
			ST0,
			ST1,
			ST2,
			ST3,
			ST4,
			ST5,
			ST6,
			ST7,

			MM0,
			MM1,
			MM2,
			MM3,
			MM4,
			MM5,
			MM6,
			MM7,

			XMM0,
			XMM1,
			XMM2,
			XMM3,
			XMM4,
			XMM5,
			XMM6,
			XMM7,
			XMM8,
			XMM9,
			XMM10,
			XMM11,
			XMM12,
			XMM13,
			XMM14,
			XMM15,

			YMM0,
			YMM1,
			YMM2,
			YMM3,
			YMM4,
			YMM5,
			YMM6,
			YMM7,
			YMM8,
			YMM9,
			YMM10,
			YMM11,
			YMM12,
			YMM13,
			YMM14,
			YMM15,

			NONE,
		};

		static const uint8_t EX_GPR_OFFSET = 8; // offset from base to extended GPR's

		static const uint8_t REG_8_BASE = AL;
		static const uint8_t REG_8_REX_BASE = SPL;
		static const uint8_t REG_16_BASE = AX;
		static const uint8_t REG_32_BASE = EAX;
		static const uint8_t REG_64_BASE = RAX;
		static const uint8_t REG_SREG_BASE = ES;
		static const uint8_t REG_CREG_BASE = CR0;
		static const uint8_t REG_DREG_BASE = DR0;
		static const uint8_t REG_FPU_BASE = ST0;

		static const uint8_t REG_MMX_BASE = MM0;
		static const uint8_t REG_SSE_BASE = XMM0;
		static const uint8_t REG_AVX_BASE = YMM0;

		static TDISS_API const char* ToString(Enum reg);
	};

	struct ImmVal
	{
		ImmVal() {
			uint64 = 0;
		}

		union {
			int8_t sint8;
			uint8_t uint8;

			int16_t sint16;
			uint16_t uint16;

			int32_t sint32;
			uint32_t uint32;

			int64_t sint64;
			uint64_t uint64;

			// ptr.
			struct
			{
				uint16_t seg;
				uint32_t off;
			} ptr;
		};
	};



	struct InstructionSet
	{
		enum Enum : uint8_t
		{
			NONE,
			FPU,
			P6,
			MMX,
			SSE,
			SSE2,
			SSE3,
			SSSE3,
			SSE4_1,
			SSE4_2,
			SSE4_A,
			SSE5,
			NOW3D,
			NOW3DEXT,
			VMX,
			SVM,
			AVX,
			FMA,
			CLMUL,
			AES
		};
	};

	struct FlowControl
	{
		enum Enum : uint8_t
		{
			NONE,
			CALL,
			RET,
			SYS,
			UNC_BRANCH,
			CND_BRANCH,
			CMOV,
			INT
		};
	};

	struct InstructionFlag
	{
		enum Enum : uint64_t
		{
			NONE,

			MODRM_REQUIRED = BIT(0),
			MODRM_INCLUDED = BIT(1),

			INVALID_64 = BIT(2), // not valid in 64 bits.

								 // prefixes
			PRE_LOCK = BIT(3),
			// for string ops
			PRE_REPNZ = BIT(4),
			PRE_REP = BIT(5),

			// seg prefixes
			PRE_CS = BIT(6),
			PRE_SS = BIT(7),
			PRE_DS = BIT(8),
			PRE_ES = BIT(9),
			PRE_FS = BIT(10),
			PRE_GS = BIT(11),

			PRE_OP_SIZE = BIT(12),
			PRE_ADDR_SIZE = BIT(13),

			PRE_REX = BIT(14),
			PRE_VEX = BIT(15),

			// uses op 3/4
			// auto set if we have more than 2 ops, 
			USE_OP3 = BIT(16),
			USE_OP4 = BIT(17),

			// for marking instructions as 32 or 64
			// both are set when it behaves different depending on mode.
			BITS64 = BIT(18), // instruction auto prompted
			BITS32 = BIT(19),
			BITS16 = BIT(20),

			// 3dnow shizzz
			NOW3D_FETCH = BIT(21),

			// instructions which require suffix letter to indicate op size.
			NATIVE = BIT(22),

			// Flag for supporting op codes that have 2 or 3 mnemocis.
			// eg: CBW, CWDE, CDQE
			EX_MNEMONIC = BIT(23),
			EX_MNEMONIC2 = BIT(24),

			NOT_DIVIDED = BIT(25),

			BITS64_FETCH = BIT(26),

			// instruction uses a ModR/M byte which the MOD must be 11
			MODRR_REQUIRED = BIT(27),
			// mnemonic from modR/m
			EX_MNEMONIC_MODRM_BASED = BIT(28),

			// Clipped.

			REG_BLOCK = BIT64(32), // op+r
			COLLISION = BIT64(33),

			SEGMENTS_MASK = (PRE_CS | PRE_SS | PRE_DS | PRE_ES | PRE_FS | PRE_GS),
			EXTENDED_MASK = (EX_MNEMONIC | EX_MNEMONIC2 | USE_OP3 | USE_OP4),
			SEG_OVERRIDE_MASK32 = (PRE_CS | PRE_SS | PRE_DS | PRE_ES),
			SEG_OVERRIDE_MASK64 = (PRE_FS | PRE_GS),
			SEG_OVERRIDE_MASK = (SEG_OVERRIDE_MASK32 | SEG_OVERRIDE_MASK64)
		};
	};

	struct OperandIdx
	{
		enum Enum
		{
			Dest,
			Src,
			Op3,
			Op4
		};
	};

	// the types of operands.
	struct OperandType
	{
		enum Enum : uint8_t
		{
			NONE,

			// for op codes that set or update the values of 1 or many register(s) but it's fixed 
			// based on op code, not specified.
			// Eg: DDA, DAS, AAA, AAS, PUSHA
			EXPLICIT_REG,

			// Immediate data
			IMM_8,
			IMM_16,
			IMM_32,
			IMM_FULL,

			// sign extended 8 bits.
			IMM_S_8,

			// The instruction has no ModR/M byte; the offset of the operand is coded as a word,
			// double word or quad word (depending on address size attribute) in the instruction.
			// mov only
			MOFFS_8,
			MOFFS_FULL,

			// 16:16/32 -> 16bit seg + full (can be operand size prefixed)
			PTR16_FULL,

			// The mod field of the ModR/M byte may refer only to a general register
			REG_8,
			REG_16,
			REG_32,
			REG_32_64,
			REG_FULL,

			// MOV reg16/32/64/mem16
			// It supports all decoding modes, for memory indirection it's 16 bit ModR/M indirection.
			REG_FULL_M16,

			// Specific Registers
			REG_ESI,
			REG_EDI,
			REG_DX,
			REG_CL,

			// :[EBX + AL]
			REG_EBXAL,

			// relative to current instruction 8 bits IMM
			REL_CI_8,
			// relative to current instruction full.
			REL_CI_FULL,

			// these block operands are to deal with the fact I add op codes that specifically
			// register in the opcode themselves with REG_BLOCK.
			// These two are to specify what size the reg is across the block range.
			BLOCK_R_8,
			BLOCK_R_FULL,

			CREG, // control reg's
			DREG, // debug reg's
			SREG, // seg's

				  // segment but which one depends on the opcodes. aka PUSH ES
			SEG,

			// accumulator
			ACC_8,
			ACC_16,
			ACC_FULL,
			ACC_FULL_NOT64, // special case for op#s not supporting 64bit reg's only AX/EAX

			// general memory indirection.
			MEM,
			MEM_32,
			MEM_32_64, //  either 32 or 64 bits (with REX)
			MEM_64,
			MEM_64_128,
			MEM_128,
			// m16:16/32
			MEM_FULL_M16,
			MEM_OPT,

			// Use or read (indirection) a 8bit register or immediate byte
			RM_8,
			// Some instructions force 16 bits (mov sreg, rm16)
			RM_16,

			RM_32,
			// Use or read a 16/32/64bit register or immediate word/dword/qword
			RM_FULL,
			// same op code can be 32 or 64 op. Eg: MOVD, MOVQ
			RM_32_64,

			// immediate of 1
			CONST1,

			// ModR/M might be a 32 bits register or 8 bits memory indirection operand.
			R32_M8,
			// 16 bits memory operand or 32 bits register. In 16 bits decoding mode R32 becomes R16, operand size cannot affect this.
			R32_M16,


			// Same as above except: The operand is either an MMX technology register or a memory address.
			MM,
			MM_32,
			MM_32_64,
			MM_64,
			// The R/M field of the ModR/M byte selects a packed quadword MMX technology register.
			MM_RM,

			// The reg field of the ModR / M byte selects a 128 - bit XMM register.
			XMM_16,
			XMM_32,
			XMM_64,
			XMM_128,
			// The R/M field of the ModR/M byte selects a 128-bit XMM register.
			XMM,
			XMM_RM,

			// 
			REGXMM0,

			// Same as RM** but POINTS. GPR not allowed
			FPUM16,
			FPUM32, // single	
			FPUM64, // double
			FPUM80,	// extended

			// fpu registers. i means has index.
			FPU_SI,	
			FPU_SSI,
			FPU_SIS, // ST(i), ST(0)
		};

		static TDISS_API const char* ToString(Enum opt);

		static const size_t NUM_ENUM = FPU_SIS + 1;
	};

	// this is just the abstract types.
	struct OperandTypeAbs
	{
		enum Enum : uint8_t
		{
			NONE,		// operand ignored
			REG,			// global reg index

			IMM,			// 
			IMM1,			//
			IMM2,			//

			DISP,			// mem deref with displacement only
			SMEM,		// mem deref with opt displacement.
			MEM,			// complex memory dereference (optional fields: s/i/b/disp)
			PC,				// rel address of a branch instruction
			PTR				// absolute add of far branch
		};
	};

	struct Operand
	{
		Operand()
		{
			type = OperandTypeAbs::NONE;
			index = 0;
			size = 0;
		}

		OperandTypeAbs::Enum type;

		// When type is:
		// REG:		global reg index
		// SMEM:	base register.
		// MEM:		index register
		union {
			RegIndex::Enum regIndex;
			uint8_t index;
		};

		// When type is X size in bits of:
		// REG:		register
		// IMM:		
		// IMM1:		
		// IMM2		
		// DISP:		size in bits of displacement
		// SMEM:	indirection
		// MEM:		indirection
		// PC:		rel offset
		// PTR:		size of instruction off 16 / 32
		uint16_t size;

	public:
		void Set8(OperandTypeAbs::Enum type);
		void Set16(OperandTypeAbs::Enum type);
		void Set32(OperandTypeAbs::Enum type);
		void Set64(OperandTypeAbs::Enum type);

		void Set8(OperandTypeAbs::Enum type, int32_t index);
		void Set16(OperandTypeAbs::Enum type, int32_t index);
		void Set32(OperandTypeAbs::Enum type, int32_t index);
		void Set64(OperandTypeAbs::Enum type, int32_t index);
		void Set(OperandTypeAbs::Enum type, RegIndex::Enum regIndex, uint16_t size);
	};


	// https://en.wikipedia.org/wiki/FLAGS_register
	/*
	Carry: 0 -> 1
	Parity: 2 -> 2
	Adjust: 4 -> 8
	Zero: 6, -> 32
	Sign: 7 -> 64
	TrapFlag: 8 (single step) -> 128
	Interrupt: 9 -> 256
	Direction: 10 -> 512
	Overflow: 11 -> 1024

	*/
	struct CpuFlag
	{
		// 1:1 mapping of EFLAGS
		enum Enum : uint16_t
		{
			CARRY = 0x1,					
			PARITY = 0x4,
			AUX = 0x10,					 // Adjust flag: https://en.wikipedia.org/wiki/Adjust_flag
			ZERO = 0x40,
			SIGN = 0x80,
			// skip trap!
			INTERRUPT = 0x200,
			DIRECTION = 0x400,
			OVERFLOW = 0x800
		};
	};

	struct PackedCpuFlag
	{
		enum Enum
		{
			CARRY = 0x1,
			PARITY = 0x4,
			AUX = 0x10,
			ZERO = 0x40,
			SIGN = 0x80,

			// these don't map 1:1 they are interleaved
			INTERRUPT = 0x2,
			DIRECTION = 0x8,
			OVERFLOW = 0x20,

			EFLAGS_COMPAT = (CARRY | PARITY | AUX | ZERO | SIGN)
		};
	};


	// we are going to build tables, we have 4 possible tables sizes.
	// full:256
	// divided:72
	// group:8 r+
	// prefixed:12
	// each node needs to be able to store a value and have a child table.

	struct NodeType
	{
		enum Enum : uint8_t
		{
			NONE,
			INFO,
			INFOEX,
			FULL,
			DIVIDED, // 0x0-0x7 and 0xc0-0xff
			GROUP,
			PREFIXED
		};

		static NodeType::Enum GetNodeType(uint32_t val)
		{
			return static_cast<NodeType::Enum>(val >> 13);
		}
		static int32_t GetNodeIndex(uint32_t val)
		{
			return static_cast<int32_t>(val & 0x1fff);
		}

		static const char* ToString(Enum type)
		{
			switch (type)
			{
			case NONE:
				return "NONE";
			case INFO:
				return "INFO";
			case INFOEX:
				return "INFOEX";
			case FULL:
				return "FULL";
			case DIVIDED:
				return "DIVIDED";
			case GROUP:
				return "GROUP";
			case PREFIXED:
				return "PREFIXED";
			default:
				X_ASSERT_UNREACABLE();
			}
			return "<unk>";
		}
	};

	struct InstInfo
	{
#ifndef X_TDISS_TABLE_BUILDER
		InstInfo(uint16_t sharedIdx_, InstructionID::Enum opcodeId_) :
			sharedIdx(sharedIdx_),
			opcodeId(opcodeId_)
		{}
#endif // !X_TDISS_TABLE_BUILDER

		inline bool operator==(const InstInfo& rhs) const
		{
			return opcodeId == rhs.opcodeId && sharedIdx == rhs.sharedIdx;
		}

		uint16_t sharedIdx;

#ifndef X_TDISS_TABLE_BUILDER
		InstructionID::Enum opcodeId;
#else
		uint16_t opcodeId;
#endif // !X_TDISS_TABLE_BUILDER
	};

	struct InstInfoEx : public InstInfo
	{
#ifndef X_TDISS_TABLE_BUILDER
		InstInfoEx(uint16_t sharedIdx_, InstructionID::Enum opcodeId_, 
			InstructionID::Enum opcodeId2_, InstructionID::Enum opcodeId3_,
			OperandType::Enum op3_, OperandType::Enum op4_) :
			InstInfo(sharedIdx_, opcodeId_),
			opcodeId2(opcodeId2_),
			opcodeId3(opcodeId3_),
			op3(op3_),
			op4(op4_)
		{}
#endif // !X_TDISS_TABLE_BUILDER

		inline bool operator==(const InstInfoEx& rhs) const
		{
			return op3 == rhs.op3 &&
				op4 == rhs.op4 &&
				opcodeId2 == rhs.opcodeId2 &&
				opcodeId3 == rhs.opcodeId3 &&
				opcodeId == rhs.opcodeId &&
				sharedIdx == rhs.sharedIdx;
	}

#ifndef X_TDISS_TABLE_BUILDER
		InstructionID::Enum opcodeId2;
		InstructionID::Enum opcodeId3;
#else
		uint16_t opcodeId2;
		uint16_t opcodeId3;
#endif // !X_TDISS_TABLE_BUILDER

		OperandType::Enum op3;
		OperandType::Enum op4;
	};

	struct InstSharedInfo
	{
		bool operator==(const InstSharedInfo& oth) const {
			return flagsIdx == oth.flagsIdx && 
				s == oth.s && 
				d == oth.d &&
				instSet == oth.instSet &&
				flow == oth.flow &&
				modifiedFlags == oth.modifiedFlags &&
				testedFlags == oth.testedFlags &&
				undefinedFlags == oth.undefinedFlags;
		}

		uint8_t flagsIdx;
		OperandType::Enum s;
		OperandType::Enum d;
		InstructionSet::Enum instSet;
		FlowControl::Enum flow;

		uint8_t modifiedFlags;
		uint8_t testedFlags;
		uint8_t undefinedFlags;
	};

	typedef uint16_t InstNode;

} // namespace TDiss

#include "Instruction.inl"