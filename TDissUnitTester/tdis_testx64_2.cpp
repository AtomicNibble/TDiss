#include "pch.h"

using namespace TDiss;


// This file is generated, below is a summary for all generated 64Bit tests
// Some of the instructions we fail to generate tests for are covered by manual tests
// Total instructions: 866
// Total instructionTests: 861
// Total instructions without tests: 56
// Total real instructions: 5720

// Failed Test names:
// NONE-> NOP_O_RM_FULL ops(1)
// NONE-> SHLD_O_RM_FULL_REG_FULL_IMM_8 ops(3)
// NONE-> SHLD_O_RM_FULL_REG_FULL_REG_CL ops(3)
// NONE-> SHRD_O_RM_FULL_REG_FULL_IMM_8 ops(3)
// NONE-> SHRD_O_RM_FULL_REG_FULL_REG_CL ops(3)
// NONE-> FXSAVE_INVALID_FXSAVE64_O_MEM ops(1)
// NONE-> FXRSTOR_INVALID_FXRSTOR64_O_MEM ops(1)
// NONE-> LFENCE_XRSTOR_XRSTOR64_O_MEM_OPT ops(1)
// NONE-> MFENCE_XSAVEOPT_XSAVEOPT64_O_MEM_OPT ops(1)
// NONE-> SFENCE_CLFLUSH_O_MEM_OPT ops(1)
// NONE-> BSF_O_RM_FULL_IMM_8 ops(2)
// NONE-> BSR_O_RM_FULL_IMM_8 ops(2)
// NONE-> CMPXCHG8B_INVALID_CMPXCHG16B_O_MEM_64_128 ops(1)
// NONE-> IMUL_O_REG_FULL_RM_FULL_IMM_FULL ops(3)
// NONE-> IMUL_O_REG_FULL_RM_FULL_IMM_S_8 ops(3)
// NONE-> MOV_O_ACC_8_MOFFS_8 ops(2)
// NONE-> MOV_O_ACC_FULL_MOFFS_FULL ops(2)
// NONE-> MOV_O_MOFFS_8_ACC_8 ops(2)
// NONE-> MOV_O_MOFFS_FULL_ACC_FULL ops(2)
// NONE-> XSAVE_INVALID_XSAVE64_O_MEM ops(1)
// FPU-> FUCOM_O_FPU_SIS ops(1)
// FPU-> FUCOM ops(0)
// FPU-> FUCOMP ops(0)
// MMX-> MOVD_MOVQ_MOVQ_O_MM_MM_32_64 ops(2)
// NONE-> ARPL_O_RM_16_REG_16 ops(2)
// SSE-> MOVHLPS_MOVLPS_O_XMM_XMM_64 ops(2)
// SSE-> MOVLHPS_MOVHPS_O_XMM_XMM_64 ops(2)
// SSE-> PSHUFW_O_MM_MM_64_IMM_8 ops(3)
// SSE-> CMP_PS_O_XMM_XMM_128 ops(2)
// SSE-> PINSRW_O_MM_R32_M16_IMM_8 ops(3)
// SSE-> PEXTRW_O_REG_32_MM_RM_IMM_8 ops(3)
// SSE-> SHUFPS_O_XMM_XMM_128_IMM_8 ops(3)
// SSE-> CMP_SS_O_XMM_XMM_32 ops(2)
// SSE2-> MOVD_INVALID_MOVQ_O_XMM_RM_32_64 ops(2)
// SSE2-> PSHUFD_O_XMM_XMM_128_IMM_8 ops(3)
// SSE2-> MOVD_INVALID_MOVQ_O_RM_32_64_XMM ops(2)
// SSE2-> CMP_PD_O_XMM_128_XMM ops(2)
// SSE2-> PINSRW_O_XMM_R32_M16_IMM_8 ops(3)
// SSE2-> PEXTRW_O_REG_32_XMM_RM_IMM_8 ops(3)
// SSE2-> SHUFPD_O_XMM_XMM_128_IMM_8 ops(3)
// SSE2-> MOVNTDQ_O_XMM_XMM_128 ops(2)
// SSE2-> PSHUFLW_O_XMM_XMM_128_IMM_8 ops(3)
// SSE2-> CMP_SD_O_XMM_XMM_64 ops(2)
// SSE2-> PSHUFHW_O_XMM_XMM_128_IMM_8 ops(3)
// SSE3-> LDDQU_O_XMM_XMM_128 ops(2)
// SSSE3-> PALIGNR_O_MM_MM_64_IMM_8 ops(3)
// SSSE3-> PALIGNR_O_XMM_XMM_128_IMM_8 ops(3)
// SSE4_1-> ROUNDPD_O_XMM_XMM_128_IMM_8 ops(3)
// SSE4_1-> ROUNDPS_O_XMM_XMM_128_IMM_8 ops(3)
// SSE4_1-> ROUNDSD_O_XMM_XMM_64_IMM_8 ops(3)
// SSE4_1-> ROUNDSS_O_XMM_XMM_32_IMM_8 ops(3)
// SSE4_1-> CRC32_O_REG_32_64_RM_FULL ops(2)
// SSE4_1-> PCMPESTRI_O_XMM_XMM_128_IMM_8 ops(3)
// SSE4_1-> PCMPESTRM_O_XMM_XMM_128_IMM_8 ops(3)
// SSE4_1-> PCMPISTRI_O_XMM_XMM_128_IMM_8 ops(3)
// SSE4_1-> PCMPISTRM_O_XMM_XMM_128_IMM_8 ops(3)

namespace
{
	static void ValidateOperand(const Operand& op, OperandTypeAbs::Enum type,
		size_t index, size_t size, const char* pFileName, uint32_t LineNo)
	{
		EXPECT_EQ(type, op.type) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(index, op.index) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(size, op.size) << pFileName << "(" << LineNo << ") ";
	}

	static void ValidateOperandNotSet(const Operand& op, const char* pFileName, uint32_t LineNo)
	{
		EXPECT_EQ(OperandTypeAbs::NONE, op.type) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(0, op.index) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(0, op.size) << pFileName << "(" << LineNo << ") ";
	}

	static void ValidateInstruction(const Instruction& inst,
		InstructionID::Enum id, FlowControl::Enum flow,
		InstructionSet::Enum instSet,
		size_t size, size_t displacement, size_t scale,
		RegIndex::Enum seg, RegIndex::Enum base,
		uint16_t modified, uint16_t tested, uint16_t undefined,
		const char* pFileName, uint32_t LineNo)
	{
		EXPECT_EQ(id, inst.opcode) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(flow, inst.flow) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(instSet, inst.instSet) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(size, inst.size) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(displacement, inst.displacement) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(scale, inst.scale) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(seg, inst.segment) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(base, inst.base) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(modified, inst.modifiedFlags) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(tested, inst.testedFlags) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(undefined, inst.undefinedFlags) << pFileName << "(" << LineNo << ") ";
	}
} // namespace
			
TEST(x64, MOV_O_REG_FULL_M16_SREG)
{
	Instruction instructions[0x60];
	size_t instructionCount;

	// ops: 0x8c 
	const uint8_t pOps[0xfc] = {
		0x8c, 0x0,  /* MOV word [RAX], ES */
		0x8c, 0x8,  /* MOV word [RAX], CS */
		0x8c, 0x10,  /* MOV word [RAX], SS */
		0x8c, 0x18,  /* MOV word [RAX], DS */
		0x8c, 0x20,  /* MOV word [RAX], FS */
		0x8c, 0x28,  /* MOV word [RAX], GS */
		0x8c, 0x1,  /* MOV word [RCX], ES */
		0x8c, 0x9,  /* MOV word [RCX], CS */
		0x8c, 0x11,  /* MOV word [RCX], SS */
		0x8c, 0x19,  /* MOV word [RCX], DS */
		0x8c, 0x21,  /* MOV word [RCX], FS */
		0x8c, 0x29,  /* MOV word [RCX], GS */
		0x8c, 0x2,  /* MOV word [RDX], ES */
		0x8c, 0xa,  /* MOV word [RDX], CS */
		0x8c, 0x12,  /* MOV word [RDX], SS */
		0x8c, 0x1a,  /* MOV word [RDX], DS */
		0x8c, 0x22,  /* MOV word [RDX], FS */
		0x8c, 0x2a,  /* MOV word [RDX], GS */
		0x8c, 0x3,  /* MOV word [RBX], ES */
		0x8c, 0xb,  /* MOV word [RBX], CS */
		0x8c, 0x13,  /* MOV word [RBX], SS */
		0x8c, 0x1b,  /* MOV word [RBX], DS */
		0x8c, 0x23,  /* MOV word [RBX], FS */
		0x8c, 0x2b,  /* MOV word [RBX], GS */
		0x8c, 0x4, 0x24,  /* MOV word [RSP], ES */
		0x8c, 0xc, 0x24,  /* MOV word [RSP], CS */
		0x8c, 0x14, 0x24,  /* MOV word [RSP], SS */
		0x8c, 0x1c, 0x24,  /* MOV word [RSP], DS */
		0x8c, 0x24, 0x24,  /* MOV word [RSP], FS */
		0x8c, 0x2c, 0x24,  /* MOV word [RSP], GS */
		0x8c, 0x45, 0x0,  /* MOV word [RBP], ES */
		0x8c, 0x4d, 0x0,  /* MOV word [RBP], CS */
		0x8c, 0x55, 0x0,  /* MOV word [RBP], SS */
		0x8c, 0x5d, 0x0,  /* MOV word [RBP], DS */
		0x8c, 0x65, 0x0,  /* MOV word [RBP], FS */
		0x8c, 0x6d, 0x0,  /* MOV word [RBP], GS */
		0x8c, 0x6,  /* MOV word [RSI], ES */
		0x8c, 0xe,  /* MOV word [RSI], CS */
		0x8c, 0x16,  /* MOV word [RSI], SS */
		0x8c, 0x1e,  /* MOV word [RSI], DS */
		0x8c, 0x26,  /* MOV word [RSI], FS */
		0x8c, 0x2e,  /* MOV word [RSI], GS */
		0x8c, 0x7,  /* MOV word [RDI], ES */
		0x8c, 0xf,  /* MOV word [RDI], CS */
		0x8c, 0x17,  /* MOV word [RDI], SS */
		0x8c, 0x1f,  /* MOV word [RDI], DS */
		0x8c, 0x27,  /* MOV word [RDI], FS */
		0x8c, 0x2f,  /* MOV word [RDI], GS */
		0x48, 0x8c, 0xc0,  /* MOV RAX, ES */
		0x48, 0x8c, 0xc8,  /* MOV RAX, CS */
		0x48, 0x8c, 0xd0,  /* MOV RAX, SS */
		0x48, 0x8c, 0xd8,  /* MOV RAX, DS */
		0x48, 0x8c, 0xe0,  /* MOV RAX, FS */
		0x48, 0x8c, 0xe8,  /* MOV RAX, GS */
		0x48, 0x8c, 0xc1,  /* MOV RCX, ES */
		0x48, 0x8c, 0xc9,  /* MOV RCX, CS */
		0x48, 0x8c, 0xd1,  /* MOV RCX, SS */
		0x48, 0x8c, 0xd9,  /* MOV RCX, DS */
		0x48, 0x8c, 0xe1,  /* MOV RCX, FS */
		0x48, 0x8c, 0xe9,  /* MOV RCX, GS */
		0x48, 0x8c, 0xc2,  /* MOV RDX, ES */
		0x48, 0x8c, 0xca,  /* MOV RDX, CS */
		0x48, 0x8c, 0xd2,  /* MOV RDX, SS */
		0x48, 0x8c, 0xda,  /* MOV RDX, DS */
		0x48, 0x8c, 0xe2,  /* MOV RDX, FS */
		0x48, 0x8c, 0xea,  /* MOV RDX, GS */
		0x48, 0x8c, 0xc3,  /* MOV RBX, ES */
		0x48, 0x8c, 0xcb,  /* MOV RBX, CS */
		0x48, 0x8c, 0xd3,  /* MOV RBX, SS */
		0x48, 0x8c, 0xdb,  /* MOV RBX, DS */
		0x48, 0x8c, 0xe3,  /* MOV RBX, FS */
		0x48, 0x8c, 0xeb,  /* MOV RBX, GS */
		0x48, 0x8c, 0xc4,  /* MOV RSP, ES */
		0x48, 0x8c, 0xcc,  /* MOV RSP, CS */
		0x48, 0x8c, 0xd4,  /* MOV RSP, SS */
		0x48, 0x8c, 0xdc,  /* MOV RSP, DS */
		0x48, 0x8c, 0xe4,  /* MOV RSP, FS */
		0x48, 0x8c, 0xec,  /* MOV RSP, GS */
		0x48, 0x8c, 0xc5,  /* MOV RBP, ES */
		0x48, 0x8c, 0xcd,  /* MOV RBP, CS */
		0x48, 0x8c, 0xd5,  /* MOV RBP, SS */
		0x48, 0x8c, 0xdd,  /* MOV RBP, DS */
		0x48, 0x8c, 0xe5,  /* MOV RBP, FS */
		0x48, 0x8c, 0xed,  /* MOV RBP, GS */
		0x48, 0x8c, 0xc6,  /* MOV RSI, ES */
		0x48, 0x8c, 0xce,  /* MOV RSI, CS */
		0x48, 0x8c, 0xd6,  /* MOV RSI, SS */
		0x48, 0x8c, 0xde,  /* MOV RSI, DS */
		0x48, 0x8c, 0xe6,  /* MOV RSI, FS */
		0x48, 0x8c, 0xee,  /* MOV RSI, GS */
		0x48, 0x8c, 0xc7,  /* MOV RDI, ES */
		0x48, 0x8c, 0xcf,  /* MOV RDI, CS */
		0x48, 0x8c, 0xd7,  /* MOV RDI, SS */
		0x48, 0x8c, 0xdf,  /* MOV RDI, DS */
		0x48, 0x8c, 0xe7,  /* MOV RDI, FS */
		0x48, 0x8c, 0xef   /* MOV RDI, GS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xfc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x60, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x60_sz, instructionCount);
	{
		/* MOV word [RAX], ES */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RAX], CS */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RAX], SS */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RAX], DS */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RAX], FS */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RAX], GS */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RCX], ES */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RCX], CS */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RCX], SS */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RCX], DS */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RCX], FS */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RCX], GS */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDX], ES */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDX], CS */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDX], SS */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDX], DS */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDX], FS */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDX], GS */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBX], ES */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBX], CS */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBX], SS */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBX], DS */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBX], FS */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBX], GS */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSP], ES */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSP], CS */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSP], SS */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSP], DS */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSP], FS */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSP], GS */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBP], ES */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBP], CS */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBP], SS */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBP], DS */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBP], FS */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RBP], GS */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSI], ES */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSI], CS */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSI], SS */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSI], DS */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSI], FS */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RSI], GS */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDI], ES */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDI], CS */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDI], SS */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDI], DS */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDI], FS */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [RDI], GS */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, ES */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, CS */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, SS */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, DS */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, FS */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, GS */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, ES */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, CS */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, SS */
		const Instruction& inst = instructions[0x38];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, DS */
		const Instruction& inst = instructions[0x39];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, FS */
		const Instruction& inst = instructions[0x3a];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, GS */
		const Instruction& inst = instructions[0x3b];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, ES */
		const Instruction& inst = instructions[0x3c];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, CS */
		const Instruction& inst = instructions[0x3d];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, SS */
		const Instruction& inst = instructions[0x3e];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, DS */
		const Instruction& inst = instructions[0x3f];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, FS */
		const Instruction& inst = instructions[0x40];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, GS */
		const Instruction& inst = instructions[0x41];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, ES */
		const Instruction& inst = instructions[0x42];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, CS */
		const Instruction& inst = instructions[0x43];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, SS */
		const Instruction& inst = instructions[0x44];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, DS */
		const Instruction& inst = instructions[0x45];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, FS */
		const Instruction& inst = instructions[0x46];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, GS */
		const Instruction& inst = instructions[0x47];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, ES */
		const Instruction& inst = instructions[0x48];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, CS */
		const Instruction& inst = instructions[0x49];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, SS */
		const Instruction& inst = instructions[0x4a];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, DS */
		const Instruction& inst = instructions[0x4b];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, FS */
		const Instruction& inst = instructions[0x4c];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, GS */
		const Instruction& inst = instructions[0x4d];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, ES */
		const Instruction& inst = instructions[0x4e];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, CS */
		const Instruction& inst = instructions[0x4f];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, SS */
		const Instruction& inst = instructions[0x50];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, DS */
		const Instruction& inst = instructions[0x51];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, FS */
		const Instruction& inst = instructions[0x52];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, GS */
		const Instruction& inst = instructions[0x53];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, ES */
		const Instruction& inst = instructions[0x54];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, CS */
		const Instruction& inst = instructions[0x55];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, SS */
		const Instruction& inst = instructions[0x56];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, DS */
		const Instruction& inst = instructions[0x57];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, FS */
		const Instruction& inst = instructions[0x58];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, GS */
		const Instruction& inst = instructions[0x59];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, ES */
		const Instruction& inst = instructions[0x5a];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, CS */
		const Instruction& inst = instructions[0x5b];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, SS */
		const Instruction& inst = instructions[0x5c];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, DS */
		const Instruction& inst = instructions[0x5d];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, FS */
		const Instruction& inst = instructions[0x5e];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, GS */
		const Instruction& inst = instructions[0x5f];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LEA_O_REG_FULL_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x8d 
	const uint8_t pOps[0x40] = {
		0x48, 0x8d, 0x4, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA RAX, [rdx*4] */
		0x48, 0x8d, 0xc, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA RCX, [rdx*4] */
		0x48, 0x8d, 0x14, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA RDX, [rdx*4] */
		0x48, 0x8d, 0x1c, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA RBX, [rdx*4] */
		0x48, 0x8d, 0x24, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA RSP, [rdx*4] */
		0x48, 0x8d, 0x2c, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA RBP, [rdx*4] */
		0x48, 0x8d, 0x34, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA RSI, [rdx*4] */
		0x48, 0x8d, 0x3c, 0x95, 0x0, 0x0, 0x0, 0x0   /* LEA RDI, [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x40, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x8_sz, instructionCount);
	{
		/* LEA RAX, [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA RCX, [rdx*4] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA RDX, [rdx*4] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA RBX, [rdx*4] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA RSP, [rdx*4] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA RBP, [rdx*4] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA RSI, [rdx*4] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA RDI, [rdx*4] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOV_O_SREG_RM_16)
{
	Instruction instructions[0x30];
	size_t instructionCount;

	// ops: 0x8e 
	const uint8_t pOps[0x60] = {
		0x8e, 0xc0,  /* MOV ES, AX */
		0x8e, 0xc1,  /* MOV ES, CX */
		0x8e, 0xc2,  /* MOV ES, DX */
		0x8e, 0xc3,  /* MOV ES, BX */
		0x8e, 0xc4,  /* MOV ES, SP */
		0x8e, 0xc5,  /* MOV ES, BP */
		0x8e, 0xc6,  /* MOV ES, SI */
		0x8e, 0xc7,  /* MOV ES, DI */
		0x8e, 0xc8,  /* MOV CS, AX */
		0x8e, 0xc9,  /* MOV CS, CX */
		0x8e, 0xca,  /* MOV CS, DX */
		0x8e, 0xcb,  /* MOV CS, BX */
		0x8e, 0xcc,  /* MOV CS, SP */
		0x8e, 0xcd,  /* MOV CS, BP */
		0x8e, 0xce,  /* MOV CS, SI */
		0x8e, 0xcf,  /* MOV CS, DI */
		0x8e, 0xd0,  /* MOV SS, AX */
		0x8e, 0xd1,  /* MOV SS, CX */
		0x8e, 0xd2,  /* MOV SS, DX */
		0x8e, 0xd3,  /* MOV SS, BX */
		0x8e, 0xd4,  /* MOV SS, SP */
		0x8e, 0xd5,  /* MOV SS, BP */
		0x8e, 0xd6,  /* MOV SS, SI */
		0x8e, 0xd7,  /* MOV SS, DI */
		0x8e, 0xd8,  /* MOV DS, AX */
		0x8e, 0xd9,  /* MOV DS, CX */
		0x8e, 0xda,  /* MOV DS, DX */
		0x8e, 0xdb,  /* MOV DS, BX */
		0x8e, 0xdc,  /* MOV DS, SP */
		0x8e, 0xdd,  /* MOV DS, BP */
		0x8e, 0xde,  /* MOV DS, SI */
		0x8e, 0xdf,  /* MOV DS, DI */
		0x8e, 0xe0,  /* MOV FS, AX */
		0x8e, 0xe1,  /* MOV FS, CX */
		0x8e, 0xe2,  /* MOV FS, DX */
		0x8e, 0xe3,  /* MOV FS, BX */
		0x8e, 0xe4,  /* MOV FS, SP */
		0x8e, 0xe5,  /* MOV FS, BP */
		0x8e, 0xe6,  /* MOV FS, SI */
		0x8e, 0xe7,  /* MOV FS, DI */
		0x8e, 0xe8,  /* MOV GS, AX */
		0x8e, 0xe9,  /* MOV GS, CX */
		0x8e, 0xea,  /* MOV GS, DX */
		0x8e, 0xeb,  /* MOV GS, BX */
		0x8e, 0xec,  /* MOV GS, SP */
		0x8e, 0xed,  /* MOV GS, BP */
		0x8e, 0xee,  /* MOV GS, SI */
		0x8e, 0xef   /* MOV GS, DI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x60, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x30, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x30_sz, instructionCount);
	{
		/* MOV ES, AX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ES, CX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ES, DX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ES, BX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ES, SP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ES, BP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ES, SI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ES, DI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CS, AX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CS, CX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CS, DX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CS, BX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CS, SP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CS, BP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CS, SI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CS, DI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SS, AX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SS, CX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SS, DX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SS, BX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SS, SP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SS, BP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SS, SI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SS, DI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DS, AX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DS, CX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DS, DX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DS, BX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DS, SP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DS, BP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DS, SI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DS, DI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV FS, AX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV FS, CX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV FS, DX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV FS, BX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV FS, SP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV FS, BP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV FS, SI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV FS, DI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV GS, AX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV GS, CX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV GS, DX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV GS, BX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV GS, SP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV GS, BP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV GS, SI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV GS, DI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, POP_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x8f 
	const uint8_t pOps[0x10] = {
		0x8f, 0x1,  /* POP qword [RCX] */
		0x8f, 0x2,  /* POP qword [RDX] */
		0x8f, 0x3,  /* POP qword [RBX] */
		0x8f, 0x4, 0x24,  /* POP qword [RSP] */
		0x8f, 0x45, 0x0,  /* POP qword [RBP] */
		0x8f, 0x6,  /* POP qword [RSI] */
		0x8f, 0x7   /* POP qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* POP qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::POP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::POP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::POP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::POP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::POP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::POP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::POP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, XCHG_O_BLOCK_R_FULL_ACC_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x90 
	const uint8_t pOps[0xe] = {
		0x48, 0x91,  /* XCHG RCX, RAX */
		0x48, 0x92,  /* XCHG RDX, RAX */
		0x48, 0x93,  /* XCHG RBX, RAX */
		0x48, 0x94,  /* XCHG RSP, RAX */
		0x48, 0x95,  /* XCHG RBP, RAX */
		0x48, 0x96,  /* XCHG RSI, RAX */
		0x48, 0x97   /* XCHG RDI, RAX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* XCHG RCX, RAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XCHG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG RDX, RAX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XCHG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG RBX, RAX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XCHG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG RSP, RAX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XCHG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG RBP, RAX */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XCHG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG RSI, RAX */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XCHG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG RDI, RAX */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XCHG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CBW_CWDE_CDQE)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x98 
	const uint8_t pOps[0x5] = {
		0x66, 0x98,  /* CBW */
		0x98,  /*  CWDE */
		0x48, 0x98   /*  CDQE */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* CBW */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CBW,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/*  CWDE */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CWDE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/*  CDQE */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CDQE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CWD_CDQ_CQO)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x99 
	const uint8_t pOps[0x5] = {
		0x66, 0x99,  /* CWD */
		0x99,  /*  CDQ */
		0x48, 0x99   /*  CQO */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* CWD */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CWD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/*  CDQ */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CDQ,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/*  CQO */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CQO,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, PUSHF)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x9c 
	const uint8_t pOps[0x1] = {
		0x9c   /* PUSHF */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* PUSHF */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUSHF,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, POPF)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x9d 
	const uint8_t pOps[0x1] = {
		0x9d   /* POPF */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* POPF */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::POPF,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xed5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAHF)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x9e 
	const uint8_t pOps[0x1] = {
		0x9e   /* SAHF */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* SAHF */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SAHF,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xd5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LAHF)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x9f 
	const uint8_t pOps[0x1] = {
		0x9f   /* LAHF */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LAHF */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LAHF,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOVSB_O_REG_EDI_REG_ESI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa4 
	const uint8_t pOps[0x1] = {
		0xa4   /* MOVSB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* MOVSB */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVSB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOVS_O_REG_EDI_REG_ESI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa5 
	const uint8_t pOps[0x2] = {
		0x48, 0xa5   /* MOVSQ */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* MOVSQ */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x400,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CMPSB_O_REG_ESI_REG_EDI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa6 
	const uint8_t pOps[0x1] = {
		0xa6   /* CMPSB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CMPSB */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMPSB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CMPS_O_REG_ESI_REG_EDI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa7 
	const uint8_t pOps[0x2] = {
		0x48, 0xa7   /* CMPSQ */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CMPSQ */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMPS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x400,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, TEST_O_ACC_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa8 
	const uint8_t pOps[0x5] = {
		0xa8, 0xaf,  /* TEST AL, 0xaf */
		0xf6, 0xc4, 0xaf   /* TEST AH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* TEST AL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST AH, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, TEST_O_ACC_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa9 
	const uint8_t pOps[0x6] = {
		0x48, 0xa9, 0xbb, 0xee, 0xaf, 0xab   /* TEST RAX, 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* TEST RAX, 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, STOSB_O_REG_EDI_ACC_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xaa 
	const uint8_t pOps[0x1] = {
		0xaa   /* STOSB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* STOSB */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::STOSB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, STOS_O_REG_EDI_ACC_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xab 
	const uint8_t pOps[0x2] = {
		0x48, 0xab   /* STOSQ */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* STOSQ */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::STOS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x400,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LODSB_O_ACC_8_REG_ESI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xac 
	const uint8_t pOps[0x1] = {
		0xac   /* LODSB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LODSB */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LODSB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LODS_O_ACC_FULL_REG_ESI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xad 
	const uint8_t pOps[0x2] = {
		0x48, 0xad   /* LODSQ */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LODSQ */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LODS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x400,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SCASB_O_REG_EDI_ACC_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xae 
	const uint8_t pOps[0x1] = {
		0xae   /* SCASB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* SCASB */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SCASB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SCAS_O_REG_EDI_ACC_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xaf 
	const uint8_t pOps[0x2] = {
		0x48, 0xaf   /* SCASQ */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* SCASQ */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SCAS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x400,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOV_O_BLOCK_R_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xb0 
	const uint8_t pOps[0x8] = {
		0x88, 0xc0,  /* MOV AL, AL */
		0x88, 0xc1,  /* MOV CL, AL */
		0x88, 0xc2,  /* MOV DL, AL */
		0x88, 0xc3   /* MOV BL, AL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOV AL, AL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CL, AL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DL, AL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BL, AL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOV_O_BLOCK_R_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xb8 
	const uint8_t pOps[0x50] = {
		0x48, 0xb8, 0xbb, 0xee, 0xaf, 0xab, 0xbb, 0xee, 0xaf, 0xab,  /* MOV RAX, 0xabafeebbabafeebb */
		0x48, 0xb9, 0xbb, 0xee, 0xaf, 0xab, 0xbb, 0xee, 0xaf, 0xab,  /* MOV RCX, 0xabafeebbabafeebb */
		0x48, 0xba, 0xbb, 0xee, 0xaf, 0xab, 0xbb, 0xee, 0xaf, 0xab,  /* MOV RDX, 0xabafeebbabafeebb */
		0x48, 0xbb, 0xbb, 0xee, 0xaf, 0xab, 0xbb, 0xee, 0xaf, 0xab,  /* MOV RBX, 0xabafeebbabafeebb */
		0x48, 0xbc, 0xbb, 0xee, 0xaf, 0xab, 0xbb, 0xee, 0xaf, 0xab,  /* MOV RSP, 0xabafeebbabafeebb */
		0x48, 0xbd, 0xbb, 0xee, 0xaf, 0xab, 0xbb, 0xee, 0xaf, 0xab,  /* MOV RBP, 0xabafeebbabafeebb */
		0x48, 0xbe, 0xbb, 0xee, 0xaf, 0xab, 0xbb, 0xee, 0xaf, 0xab,  /* MOV RSI, 0xabafeebbabafeebb */
		0x48, 0xbf, 0xbb, 0xee, 0xaf, 0xab, 0xbb, 0xee, 0xaf, 0xab   /* MOV RDI, 0xabafeebbabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x50, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x8_sz, instructionCount);
	{
		/* MOV RAX, 0xabafeebbabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbabafeebb_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, 0xabafeebbabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbabafeebb_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, 0xabafeebbabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbabafeebb_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, 0xabafeebbabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbabafeebb_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, 0xabafeebbabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbabafeebb_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, 0xabafeebbabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbabafeebb_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, 0xabafeebbabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbabafeebb_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, 0xabafeebbabafeebb */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbabafeebb_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROL_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x9] = {
		0xc0, 0xc1, 0xaf,  /* ROL CL, 0xaf */
		0xc0, 0xc2, 0xaf,  /* ROL DL, 0xaf */
		0xc0, 0xc3, 0xaf   /* ROL BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* ROL CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROR_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x9] = {
		0xc0, 0xc9, 0xaf,  /* ROR CL, 0xaf */
		0xc0, 0xca, 0xaf,  /* ROR DL, 0xaf */
		0xc0, 0xcb, 0xaf   /* ROR BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* ROR CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCL_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x9] = {
		0xc0, 0xd1, 0xaf,  /* RCL CL, 0xaf */
		0xc0, 0xd2, 0xaf,  /* RCL DL, 0xaf */
		0xc0, 0xd3, 0xaf   /* RCL BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* RCL CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCR_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x9] = {
		0xc0, 0xd9, 0xaf,  /* RCR CL, 0xaf */
		0xc0, 0xda, 0xaf,  /* RCR DL, 0xaf */
		0xc0, 0xdb, 0xaf   /* RCR BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* RCR CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHL_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x9] = {
		0xc0, 0xe1, 0xaf,  /* SHL CL, 0xaf */
		0xc0, 0xe2, 0xaf,  /* SHL DL, 0xaf */
		0xc0, 0xe3, 0xaf   /* SHL BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SHL CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHR_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x9] = {
		0xc0, 0xe9, 0xaf,  /* SHR CL, 0xaf */
		0xc0, 0xea, 0xaf,  /* SHR DL, 0xaf */
		0xc0, 0xeb, 0xaf   /* SHR BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SHR CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAL_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x9] = {
		0xc0, 0xe1, 0xaf,  /* SAL CL, 0xaf */
		0xc0, 0xe2, 0xaf,  /* SAL DL, 0xaf */
		0xc0, 0xe3, 0xaf   /* SAL BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SAL CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAR_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x9] = {
		0xc0, 0xf9, 0xaf,  /* SAR CL, 0xaf */
		0xc0, 0xfa, 0xaf,  /* SAR DL, 0xaf */
		0xc0, 0xfb, 0xaf   /* SAR BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SAR CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROL_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x1e] = {
		0x48, 0xc1, 0x1, 0xaf,  /* ROL qword [RCX], 0xaf */
		0x48, 0xc1, 0x2, 0xaf,  /* ROL qword [RDX], 0xaf */
		0x48, 0xc1, 0x3, 0xaf,  /* ROL qword [RBX], 0xaf */
		0x48, 0xc1, 0x4, 0x24, 0xaf,  /* ROL qword [RSP], 0xaf */
		0x48, 0xc1, 0x45, 0x0, 0xaf,  /* ROL qword [RBP], 0xaf */
		0x48, 0xc1, 0x6, 0xaf,  /* ROL qword [RSI], 0xaf */
		0x48, 0xc1, 0x7, 0xaf   /* ROL qword [RDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROL qword [RCX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RSP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RSI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROR_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x1e] = {
		0x48, 0xc1, 0x9, 0xaf,  /* ROR qword [RCX], 0xaf */
		0x48, 0xc1, 0xa, 0xaf,  /* ROR qword [RDX], 0xaf */
		0x48, 0xc1, 0xb, 0xaf,  /* ROR qword [RBX], 0xaf */
		0x48, 0xc1, 0xc, 0x24, 0xaf,  /* ROR qword [RSP], 0xaf */
		0x48, 0xc1, 0x4d, 0x0, 0xaf,  /* ROR qword [RBP], 0xaf */
		0x48, 0xc1, 0xe, 0xaf,  /* ROR qword [RSI], 0xaf */
		0x48, 0xc1, 0xf, 0xaf   /* ROR qword [RDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROR qword [RCX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RSP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RSI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCL_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x1e] = {
		0x48, 0xc1, 0x11, 0xaf,  /* RCL qword [RCX], 0xaf */
		0x48, 0xc1, 0x12, 0xaf,  /* RCL qword [RDX], 0xaf */
		0x48, 0xc1, 0x13, 0xaf,  /* RCL qword [RBX], 0xaf */
		0x48, 0xc1, 0x14, 0x24, 0xaf,  /* RCL qword [RSP], 0xaf */
		0x48, 0xc1, 0x55, 0x0, 0xaf,  /* RCL qword [RBP], 0xaf */
		0x48, 0xc1, 0x16, 0xaf,  /* RCL qword [RSI], 0xaf */
		0x48, 0xc1, 0x17, 0xaf   /* RCL qword [RDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCL qword [RCX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RSP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RSI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCR_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x1e] = {
		0x48, 0xc1, 0x19, 0xaf,  /* RCR qword [RCX], 0xaf */
		0x48, 0xc1, 0x1a, 0xaf,  /* RCR qword [RDX], 0xaf */
		0x48, 0xc1, 0x1b, 0xaf,  /* RCR qword [RBX], 0xaf */
		0x48, 0xc1, 0x1c, 0x24, 0xaf,  /* RCR qword [RSP], 0xaf */
		0x48, 0xc1, 0x5d, 0x0, 0xaf,  /* RCR qword [RBP], 0xaf */
		0x48, 0xc1, 0x1e, 0xaf,  /* RCR qword [RSI], 0xaf */
		0x48, 0xc1, 0x1f, 0xaf   /* RCR qword [RDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCR qword [RCX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RSP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RSI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHL_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x1e] = {
		0x48, 0xc1, 0x21, 0xaf,  /* SHL qword [RCX], 0xaf */
		0x48, 0xc1, 0x22, 0xaf,  /* SHL qword [RDX], 0xaf */
		0x48, 0xc1, 0x23, 0xaf,  /* SHL qword [RBX], 0xaf */
		0x48, 0xc1, 0x24, 0x24, 0xaf,  /* SHL qword [RSP], 0xaf */
		0x48, 0xc1, 0x65, 0x0, 0xaf,  /* SHL qword [RBP], 0xaf */
		0x48, 0xc1, 0x26, 0xaf,  /* SHL qword [RSI], 0xaf */
		0x48, 0xc1, 0x27, 0xaf   /* SHL qword [RDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHL qword [RCX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RSP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RSI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHR_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x1e] = {
		0x48, 0xc1, 0x29, 0xaf,  /* SHR qword [RCX], 0xaf */
		0x48, 0xc1, 0x2a, 0xaf,  /* SHR qword [RDX], 0xaf */
		0x48, 0xc1, 0x2b, 0xaf,  /* SHR qword [RBX], 0xaf */
		0x48, 0xc1, 0x2c, 0x24, 0xaf,  /* SHR qword [RSP], 0xaf */
		0x48, 0xc1, 0x6d, 0x0, 0xaf,  /* SHR qword [RBP], 0xaf */
		0x48, 0xc1, 0x2e, 0xaf,  /* SHR qword [RSI], 0xaf */
		0x48, 0xc1, 0x2f, 0xaf   /* SHR qword [RDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHR qword [RCX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RSP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RSI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAL_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x1e] = {
		0x48, 0xc1, 0x21, 0xaf,  /* SAL qword [RCX], 0xaf */
		0x48, 0xc1, 0x22, 0xaf,  /* SAL qword [RDX], 0xaf */
		0x48, 0xc1, 0x23, 0xaf,  /* SAL qword [RBX], 0xaf */
		0x48, 0xc1, 0x24, 0x24, 0xaf,  /* SAL qword [RSP], 0xaf */
		0x48, 0xc1, 0x65, 0x0, 0xaf,  /* SAL qword [RBP], 0xaf */
		0x48, 0xc1, 0x26, 0xaf,  /* SAL qword [RSI], 0xaf */
		0x48, 0xc1, 0x27, 0xaf   /* SAL qword [RDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAL qword [RCX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RSP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RSI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAR_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x1e] = {
		0x48, 0xc1, 0x39, 0xaf,  /* SAR qword [RCX], 0xaf */
		0x48, 0xc1, 0x3a, 0xaf,  /* SAR qword [RDX], 0xaf */
		0x48, 0xc1, 0x3b, 0xaf,  /* SAR qword [RBX], 0xaf */
		0x48, 0xc1, 0x3c, 0x24, 0xaf,  /* SAR qword [RSP], 0xaf */
		0x48, 0xc1, 0x7d, 0x0, 0xaf,  /* SAR qword [RBP], 0xaf */
		0x48, 0xc1, 0x3e, 0xaf,  /* SAR qword [RSI], 0xaf */
		0x48, 0xc1, 0x3f, 0xaf   /* SAR qword [RDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAR qword [RCX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RSP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RSI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RETN_O_IMM_16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc2 
	const uint8_t pOps[0x3] = {
		0xc2, 0xaf, 0xab   /* RETN 0xabaf */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_RET);

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* RETN 0xabaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RETN,
			FlowControl::RET,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafu, inst.imm.uint16);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RETN_O_IMM_16_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc2 
	const uint8_t pOps[0x3] = {
		0xc2, 0xaf, 0xab   /* RETN 0xabaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_RET;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* RETN 0xabaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RETN,
			FlowControl::RET,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafu, inst.imm.uint16);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RETN)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc3 
	const uint8_t pOps[0x1] = {
		0xc3   /* RETN */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_RET);

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* RETN */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RETN,
			FlowControl::RET,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RETN_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc3 
	const uint8_t pOps[0x1] = {
		0xc3   /* RETN */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_RET;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* RETN */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RETN,
			FlowControl::RET,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOV_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc6 
	const uint8_t pOps[0x3] = {
		0x40, 0x88, 0xc6   /* MOV SIL, AL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* MOV SIL, AL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SIL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x42)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOV_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc7 
	const uint8_t pOps[0x33] = {
		0x48, 0xc7, 0x1, 0xbb, 0xee, 0xaf, 0xab,  /* MOV qword [RCX], 0xabafeebb */
		0x48, 0xc7, 0x2, 0xbb, 0xee, 0xaf, 0xab,  /* MOV qword [RDX], 0xabafeebb */
		0x48, 0xc7, 0x3, 0xbb, 0xee, 0xaf, 0xab,  /* MOV qword [RBX], 0xabafeebb */
		0x48, 0xc7, 0x4, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* MOV qword [RSP], 0xabafeebb */
		0x48, 0xc7, 0x45, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* MOV qword [RBP], 0xabafeebb */
		0x48, 0xc7, 0x6, 0xbb, 0xee, 0xaf, 0xab,  /* MOV qword [RSI], 0xabafeebb */
		0x48, 0xc7, 0x7, 0xbb, 0xee, 0xaf, 0xab   /* MOV qword [RDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x33, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* MOV qword [RCX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ENTER_O_IMM_16_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc8 
	const uint8_t pOps[0x4] = {
		0xc8, 0xaf, 0xab, 0xaf   /* ENTER 0xabaf, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* ENTER 0xabaf, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ENTER,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LEAVE)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc9 
	const uint8_t pOps[0x1] = {
		0xc9   /* LEAVE */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LEAVE */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LEAVE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RETF_O_IMM_16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xca 
	const uint8_t pOps[0x4] = {
		0x48, 0xca, 0xaf, 0xab   /* RETF 0xabaf */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_RET);

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* RETF 0xabaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RETF,
			FlowControl::RET,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafu, inst.imm.uint16);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RETF_O_IMM_16_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xca 
	const uint8_t pOps[0x4] = {
		0x48, 0xca, 0xaf, 0xab   /* RETF 0xabaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_RET;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* RETF 0xabaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RETF,
			FlowControl::RET,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafu, inst.imm.uint16);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RETF)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcb 
	const uint8_t pOps[0x2] = {
		0x48, 0xcb   /* RETF */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_RET);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* RETF */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RETF,
			FlowControl::RET,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RETF_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcb 
	const uint8_t pOps[0x2] = {
		0x48, 0xcb   /* RETF */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_RET;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* RETF */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RETF,
			FlowControl::RET,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, INT3)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcc 
	const uint8_t pOps[0x1] = {
		0xcc   /* INT3 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_INT);

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* INT3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INT3,
			FlowControl::INT,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, INT3_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcc 
	const uint8_t pOps[0x1] = {
		0xcc   /* INT3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_INT;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* INT3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INT3,
			FlowControl::INT,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, INT_O_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcd 
	const uint8_t pOps[0x2] = {
		0xcd, 0xaf   /* INT 0xaf */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_INT);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* INT 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INT,
			FlowControl::INT,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, INT_O_IMM_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcd 
	const uint8_t pOps[0x2] = {
		0xcd, 0xaf   /* INT 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_INT;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* INT 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INT,
			FlowControl::INT,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, IRET)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcf 
	const uint8_t pOps[0x1] = {
		0xcf   /* IRET */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_RET);

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* IRET */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IRET,
			FlowControl::RET,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xed5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, IRET_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcf 
	const uint8_t pOps[0x1] = {
		0xcf   /* IRET */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_RET;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* IRET */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IRET,
			FlowControl::RET,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xed5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROL_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0x6] = {
		0xd0, 0xc1,  /* ROL CL, 0x1 */
		0xd0, 0xc2,  /* ROL DL, 0x1 */
		0xd0, 0xc3   /* ROL BL, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* ROL CL, 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL DL, 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL BL, 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROR_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0x6] = {
		0xd0, 0xc9,  /* ROR CL, 0x1 */
		0xd0, 0xca,  /* ROR DL, 0x1 */
		0xd0, 0xcb   /* ROR BL, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* ROR CL, 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR DL, 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR BL, 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCL_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0x6] = {
		0xd0, 0xd1,  /* RCL CL, 0x1 */
		0xd0, 0xd2,  /* RCL DL, 0x1 */
		0xd0, 0xd3   /* RCL BL, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* RCL CL, 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL DL, 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL BL, 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCR_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0x6] = {
		0xd0, 0xd9,  /* RCR CL, 0x1 */
		0xd0, 0xda,  /* RCR DL, 0x1 */
		0xd0, 0xdb   /* RCR BL, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* RCR CL, 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR DL, 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR BL, 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHL_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0x6] = {
		0xd0, 0xe1,  /* SHL CL, 0x1 */
		0xd0, 0xe2,  /* SHL DL, 0x1 */
		0xd0, 0xe3   /* SHL BL, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SHL CL, 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL DL, 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL BL, 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHR_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0x6] = {
		0xd0, 0xe9,  /* SHR CL, 0x1 */
		0xd0, 0xea,  /* SHR DL, 0x1 */
		0xd0, 0xeb   /* SHR BL, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SHR CL, 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR DL, 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR BL, 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAL_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0x6] = {
		0xd0, 0xe1,  /* SAL CL, 0x1 */
		0xd0, 0xe2,  /* SAL DL, 0x1 */
		0xd0, 0xe3   /* SAL BL, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SAL CL, 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL DL, 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL BL, 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAR_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0x6] = {
		0xd0, 0xf9,  /* SAR CL, 0x1 */
		0xd0, 0xfa,  /* SAR DL, 0x1 */
		0xd0, 0xfb   /* SAR BL, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SAR CL, 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR DL, 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR BL, 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROL_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x17] = {
		0x48, 0xd1, 0x1,  /* ROL qword [RCX], 0x1 */
		0x48, 0xd1, 0x2,  /* ROL qword [RDX], 0x1 */
		0x48, 0xd1, 0x3,  /* ROL qword [RBX], 0x1 */
		0x48, 0xd1, 0x4, 0x24,  /* ROL qword [RSP], 0x1 */
		0x48, 0xd1, 0x45, 0x0,  /* ROL qword [RBP], 0x1 */
		0x48, 0xd1, 0x6,  /* ROL qword [RSI], 0x1 */
		0x48, 0xd1, 0x7   /* ROL qword [RDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROL qword [RCX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RSP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RSI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROR_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x17] = {
		0x48, 0xd1, 0x9,  /* ROR qword [RCX], 0x1 */
		0x48, 0xd1, 0xa,  /* ROR qword [RDX], 0x1 */
		0x48, 0xd1, 0xb,  /* ROR qword [RBX], 0x1 */
		0x48, 0xd1, 0xc, 0x24,  /* ROR qword [RSP], 0x1 */
		0x48, 0xd1, 0x4d, 0x0,  /* ROR qword [RBP], 0x1 */
		0x48, 0xd1, 0xe,  /* ROR qword [RSI], 0x1 */
		0x48, 0xd1, 0xf   /* ROR qword [RDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROR qword [RCX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RSP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RSI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCL_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x17] = {
		0x48, 0xd1, 0x11,  /* RCL qword [RCX], 0x1 */
		0x48, 0xd1, 0x12,  /* RCL qword [RDX], 0x1 */
		0x48, 0xd1, 0x13,  /* RCL qword [RBX], 0x1 */
		0x48, 0xd1, 0x14, 0x24,  /* RCL qword [RSP], 0x1 */
		0x48, 0xd1, 0x55, 0x0,  /* RCL qword [RBP], 0x1 */
		0x48, 0xd1, 0x16,  /* RCL qword [RSI], 0x1 */
		0x48, 0xd1, 0x17   /* RCL qword [RDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCL qword [RCX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RSP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RSI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCR_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x17] = {
		0x48, 0xd1, 0x19,  /* RCR qword [RCX], 0x1 */
		0x48, 0xd1, 0x1a,  /* RCR qword [RDX], 0x1 */
		0x48, 0xd1, 0x1b,  /* RCR qword [RBX], 0x1 */
		0x48, 0xd1, 0x1c, 0x24,  /* RCR qword [RSP], 0x1 */
		0x48, 0xd1, 0x5d, 0x0,  /* RCR qword [RBP], 0x1 */
		0x48, 0xd1, 0x1e,  /* RCR qword [RSI], 0x1 */
		0x48, 0xd1, 0x1f   /* RCR qword [RDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCR qword [RCX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RSP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RSI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHL_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x17] = {
		0x48, 0xd1, 0x21,  /* SHL qword [RCX], 0x1 */
		0x48, 0xd1, 0x22,  /* SHL qword [RDX], 0x1 */
		0x48, 0xd1, 0x23,  /* SHL qword [RBX], 0x1 */
		0x48, 0xd1, 0x24, 0x24,  /* SHL qword [RSP], 0x1 */
		0x48, 0xd1, 0x65, 0x0,  /* SHL qword [RBP], 0x1 */
		0x48, 0xd1, 0x26,  /* SHL qword [RSI], 0x1 */
		0x48, 0xd1, 0x27   /* SHL qword [RDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHL qword [RCX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RSP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RSI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHR_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x17] = {
		0x48, 0xd1, 0x29,  /* SHR qword [RCX], 0x1 */
		0x48, 0xd1, 0x2a,  /* SHR qword [RDX], 0x1 */
		0x48, 0xd1, 0x2b,  /* SHR qword [RBX], 0x1 */
		0x48, 0xd1, 0x2c, 0x24,  /* SHR qword [RSP], 0x1 */
		0x48, 0xd1, 0x6d, 0x0,  /* SHR qword [RBP], 0x1 */
		0x48, 0xd1, 0x2e,  /* SHR qword [RSI], 0x1 */
		0x48, 0xd1, 0x2f   /* SHR qword [RDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHR qword [RCX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RSP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RSI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAL_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x17] = {
		0x48, 0xd1, 0x21,  /* SAL qword [RCX], 0x1 */
		0x48, 0xd1, 0x22,  /* SAL qword [RDX], 0x1 */
		0x48, 0xd1, 0x23,  /* SAL qword [RBX], 0x1 */
		0x48, 0xd1, 0x24, 0x24,  /* SAL qword [RSP], 0x1 */
		0x48, 0xd1, 0x65, 0x0,  /* SAL qword [RBP], 0x1 */
		0x48, 0xd1, 0x26,  /* SAL qword [RSI], 0x1 */
		0x48, 0xd1, 0x27   /* SAL qword [RDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAL qword [RCX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RSP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RSI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAR_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x17] = {
		0x48, 0xd1, 0x39,  /* SAR qword [RCX], 0x1 */
		0x48, 0xd1, 0x3a,  /* SAR qword [RDX], 0x1 */
		0x48, 0xd1, 0x3b,  /* SAR qword [RBX], 0x1 */
		0x48, 0xd1, 0x3c, 0x24,  /* SAR qword [RSP], 0x1 */
		0x48, 0xd1, 0x7d, 0x0,  /* SAR qword [RBP], 0x1 */
		0x48, 0xd1, 0x3e,  /* SAR qword [RSI], 0x1 */
		0x48, 0xd1, 0x3f   /* SAR qword [RDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAR qword [RCX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RSP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RSI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROL_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0x6] = {
		0xd2, 0xc1,  /* ROL CL, CL */
		0xd2, 0xc2,  /* ROL DL, CL */
		0xd2, 0xc3   /* ROL BL, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* ROL CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL DL, CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL BL, CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROR_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0x6] = {
		0xd2, 0xc9,  /* ROR CL, CL */
		0xd2, 0xca,  /* ROR DL, CL */
		0xd2, 0xcb   /* ROR BL, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* ROR CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR DL, CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR BL, CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCL_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0x6] = {
		0xd2, 0xd1,  /* RCL CL, CL */
		0xd2, 0xd2,  /* RCL DL, CL */
		0xd2, 0xd3   /* RCL BL, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* RCL CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL DL, CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL BL, CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCR_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0x6] = {
		0xd2, 0xd9,  /* RCR CL, CL */
		0xd2, 0xda,  /* RCR DL, CL */
		0xd2, 0xdb   /* RCR BL, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* RCR CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR DL, CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR BL, CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHL_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0x6] = {
		0xd2, 0xe1,  /* SHL CL, CL */
		0xd2, 0xe2,  /* SHL DL, CL */
		0xd2, 0xe3   /* SHL BL, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SHL CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL DL, CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL BL, CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHR_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0x6] = {
		0xd2, 0xe9,  /* SHR CL, CL */
		0xd2, 0xea,  /* SHR DL, CL */
		0xd2, 0xeb   /* SHR BL, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SHR CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR DL, CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR BL, CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAL_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0x6] = {
		0xd2, 0xe1,  /* SAL CL, CL */
		0xd2, 0xe2,  /* SAL DL, CL */
		0xd2, 0xe3   /* SAL BL, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SAL CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL DL, CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL BL, CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAR_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0x6] = {
		0xd2, 0xf9,  /* SAR CL, CL */
		0xd2, 0xfa,  /* SAR DL, CL */
		0xd2, 0xfb   /* SAR BL, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SAR CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR DL, CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR BL, CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROL_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x17] = {
		0x48, 0xd3, 0x1,  /* ROL qword [RCX], CL */
		0x48, 0xd3, 0x2,  /* ROL qword [RDX], CL */
		0x48, 0xd3, 0x3,  /* ROL qword [RBX], CL */
		0x48, 0xd3, 0x4, 0x24,  /* ROL qword [RSP], CL */
		0x48, 0xd3, 0x45, 0x0,  /* ROL qword [RBP], CL */
		0x48, 0xd3, 0x6,  /* ROL qword [RSI], CL */
		0x48, 0xd3, 0x7   /* ROL qword [RDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROL qword [RCX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RSP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RSI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL qword [RDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ROR_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x17] = {
		0x48, 0xd3, 0x9,  /* ROR qword [RCX], CL */
		0x48, 0xd3, 0xa,  /* ROR qword [RDX], CL */
		0x48, 0xd3, 0xb,  /* ROR qword [RBX], CL */
		0x48, 0xd3, 0xc, 0x24,  /* ROR qword [RSP], CL */
		0x48, 0xd3, 0x4d, 0x0,  /* ROR qword [RBP], CL */
		0x48, 0xd3, 0xe,  /* ROR qword [RSI], CL */
		0x48, 0xd3, 0xf   /* ROR qword [RDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROR qword [RCX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RSP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RSI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR qword [RDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCL_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x17] = {
		0x48, 0xd3, 0x11,  /* RCL qword [RCX], CL */
		0x48, 0xd3, 0x12,  /* RCL qword [RDX], CL */
		0x48, 0xd3, 0x13,  /* RCL qword [RBX], CL */
		0x48, 0xd3, 0x14, 0x24,  /* RCL qword [RSP], CL */
		0x48, 0xd3, 0x55, 0x0,  /* RCL qword [RBP], CL */
		0x48, 0xd3, 0x16,  /* RCL qword [RSI], CL */
		0x48, 0xd3, 0x17   /* RCL qword [RDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCL qword [RCX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RSP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RSI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL qword [RDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, RCR_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x17] = {
		0x48, 0xd3, 0x19,  /* RCR qword [RCX], CL */
		0x48, 0xd3, 0x1a,  /* RCR qword [RDX], CL */
		0x48, 0xd3, 0x1b,  /* RCR qword [RBX], CL */
		0x48, 0xd3, 0x1c, 0x24,  /* RCR qword [RSP], CL */
		0x48, 0xd3, 0x5d, 0x0,  /* RCR qword [RBP], CL */
		0x48, 0xd3, 0x1e,  /* RCR qword [RSI], CL */
		0x48, 0xd3, 0x1f   /* RCR qword [RDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCR qword [RCX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RSP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RSI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR qword [RDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHL_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x17] = {
		0x48, 0xd3, 0x21,  /* SHL qword [RCX], CL */
		0x48, 0xd3, 0x22,  /* SHL qword [RDX], CL */
		0x48, 0xd3, 0x23,  /* SHL qword [RBX], CL */
		0x48, 0xd3, 0x24, 0x24,  /* SHL qword [RSP], CL */
		0x48, 0xd3, 0x65, 0x0,  /* SHL qword [RBP], CL */
		0x48, 0xd3, 0x26,  /* SHL qword [RSI], CL */
		0x48, 0xd3, 0x27   /* SHL qword [RDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHL qword [RCX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RSP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RSI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL qword [RDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SHR_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x17] = {
		0x48, 0xd3, 0x29,  /* SHR qword [RCX], CL */
		0x48, 0xd3, 0x2a,  /* SHR qword [RDX], CL */
		0x48, 0xd3, 0x2b,  /* SHR qword [RBX], CL */
		0x48, 0xd3, 0x2c, 0x24,  /* SHR qword [RSP], CL */
		0x48, 0xd3, 0x6d, 0x0,  /* SHR qword [RBP], CL */
		0x48, 0xd3, 0x2e,  /* SHR qword [RSI], CL */
		0x48, 0xd3, 0x2f   /* SHR qword [RDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHR qword [RCX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RSP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RSI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR qword [RDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAL_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x17] = {
		0x48, 0xd3, 0x21,  /* SAL qword [RCX], CL */
		0x48, 0xd3, 0x22,  /* SAL qword [RDX], CL */
		0x48, 0xd3, 0x23,  /* SAL qword [RBX], CL */
		0x48, 0xd3, 0x24, 0x24,  /* SAL qword [RSP], CL */
		0x48, 0xd3, 0x65, 0x0,  /* SAL qword [RBP], CL */
		0x48, 0xd3, 0x26,  /* SAL qword [RSI], CL */
		0x48, 0xd3, 0x27   /* SAL qword [RDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAL qword [RCX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RSP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RSI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL qword [RDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SAR_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x17] = {
		0x48, 0xd3, 0x39,  /* SAR qword [RCX], CL */
		0x48, 0xd3, 0x3a,  /* SAR qword [RDX], CL */
		0x48, 0xd3, 0x3b,  /* SAR qword [RBX], CL */
		0x48, 0xd3, 0x3c, 0x24,  /* SAR qword [RSP], CL */
		0x48, 0xd3, 0x7d, 0x0,  /* SAR qword [RBP], CL */
		0x48, 0xd3, 0x3e,  /* SAR qword [RSI], CL */
		0x48, 0xd3, 0x3f   /* SAR qword [RDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAR qword [RCX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RSP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RSI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR qword [RDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, XLAT_O_REG_EBXAL_DS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd7 
	const uint8_t pOps[0x1] = {
		0xd7   /* XLATb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* XLATb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XLAT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::RBX,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LOOPNZ_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe0 
	const uint8_t pOps[0x2] = {
		0xe0, 0xfe   /* LOOPNZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LOOPNZ 0xfe+0x2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LOOPNZ,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x40,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xfeu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LOOPNZ_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe0 
	const uint8_t pOps[0x2] = {
		0xe0, 0xfe   /* LOOPNZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LOOPNZ 0xfe+0x2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LOOPNZ,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x40,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xfeu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LOOPZ_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe1 
	const uint8_t pOps[0x2] = {
		0xe1, 0xfe   /* LOOPZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LOOPZ 0xfe+0x2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LOOPZ,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x40,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xfeu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LOOPZ_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe1 
	const uint8_t pOps[0x2] = {
		0xe1, 0xfe   /* LOOPZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LOOPZ 0xfe+0x2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LOOPZ,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x40,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xfeu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LOOP_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe2 
	const uint8_t pOps[0x2] = {
		0xe2, 0xfe   /* LOOP 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LOOP 0xfe+0x2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LOOP,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xfeu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LOOP_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe2 
	const uint8_t pOps[0x2] = {
		0xe2, 0xfe   /* LOOP 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LOOP 0xfe+0x2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LOOP,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xfeu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, JCXZ_JECXZ_JRCXZ_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe3 
	const uint8_t pOps[0x8] = {
		0x67, 0xe3, 0xfe,  /* JCXZ 0xfe+0x3 */
		0x67, 0xe3, 0xfe,  /*  JECXZ 0xfe+0x3 */
		0xe3, 0xfe   /*  JRCXZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* JCXZ 0xfe+0x3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JECXZ,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xfeu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/*  JECXZ 0xfe+0x3 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::JECXZ,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xfeu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/*  JRCXZ 0xfe+0x2 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::JRCXZ,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xfeu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, JCXZ_JECXZ_JRCXZ_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe3 
	const uint8_t pOps[0x8] = {
		0x67, 0xe3, 0xfe,  /* JCXZ 0xfe+0x3 */
		0x67, 0xe3, 0xfe,  /*  JECXZ 0xfe+0x3 */
		0xe3, 0xfe   /*  JRCXZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* JCXZ 0xfe+0x3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JECXZ,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xfeu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, IN_O_ACC_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe4 
	const uint8_t pOps[0x2] = {
		0xe4, 0xaf   /* IN AL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* IN AL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IN,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, IN_O_ACC_FULL_NOT64_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe5 
	const uint8_t pOps[0x5] = {
		0x66, 0xe5, 0xaf,  /* IN AX, 0xaf */
		0xe5, 0xaf   /* IN EAX, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* IN AX, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IN,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IN EAX, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::IN,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, OUT_O_IMM_8_ACC_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe6 
	const uint8_t pOps[0x2] = {
		0xe6, 0xaf   /* OUT 0xaf, AL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* OUT 0xaf, AL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::OUT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, OUT_O_IMM_8_ACC_FULL_NOT64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe7 
	const uint8_t pOps[0x5] = {
		0x66, 0xe7, 0xaf,  /* OUT 0xaf, AX */
		0xe7, 0xaf   /* OUT 0xaf, EAX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* OUT 0xaf, AX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::OUT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* OUT 0xaf, EAX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::OUT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CALL_O_REL_CI_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe8 
	const uint8_t pOps[0x5] = {
		0xe8, 0x78, 0x56, 0x34, 0x12   /* CALL 0x12345678+0x5 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_CALL);

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CALL 0x12345678+0x5 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x12345678u, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CALL_O_REL_CI_FULL_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe8 
	const uint8_t pOps[0x5] = {
		0xe8, 0x78, 0x56, 0x34, 0x12   /* CALL 0x12345678+0x5 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CALL;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CALL 0x12345678+0x5 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x12345678u, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, JMP_O_REL_CI_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe9 
	const uint8_t pOps[0x5] = {
		0xe9, 0x78, 0x56, 0x34, 0x12   /* JMP 0x12345678+0x5 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_UNC_BRANCH);

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* JMP 0x12345678+0x5 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x12345678u, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PC, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

