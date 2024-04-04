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
			
TEST(x64, ADC_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x11 
	const uint8_t pOps[0xb8] = {
		0x48, 0x11, 0x1,  /* ADC qword [RCX], RAX */
		0x48, 0x11, 0x9,  /* ADC qword [RCX], RCX */
		0x48, 0x11, 0x11,  /* ADC qword [RCX], RDX */
		0x48, 0x11, 0x19,  /* ADC qword [RCX], RBX */
		0x48, 0x11, 0x21,  /* ADC qword [RCX], RSP */
		0x48, 0x11, 0x29,  /* ADC qword [RCX], RBP */
		0x48, 0x11, 0x31,  /* ADC qword [RCX], RSI */
		0x48, 0x11, 0x39,  /* ADC qword [RCX], RDI */
		0x48, 0x11, 0x2,  /* ADC qword [RDX], RAX */
		0x48, 0x11, 0xa,  /* ADC qword [RDX], RCX */
		0x48, 0x11, 0x12,  /* ADC qword [RDX], RDX */
		0x48, 0x11, 0x1a,  /* ADC qword [RDX], RBX */
		0x48, 0x11, 0x22,  /* ADC qword [RDX], RSP */
		0x48, 0x11, 0x2a,  /* ADC qword [RDX], RBP */
		0x48, 0x11, 0x32,  /* ADC qword [RDX], RSI */
		0x48, 0x11, 0x3a,  /* ADC qword [RDX], RDI */
		0x48, 0x11, 0x3,  /* ADC qword [RBX], RAX */
		0x48, 0x11, 0xb,  /* ADC qword [RBX], RCX */
		0x48, 0x11, 0x13,  /* ADC qword [RBX], RDX */
		0x48, 0x11, 0x1b,  /* ADC qword [RBX], RBX */
		0x48, 0x11, 0x23,  /* ADC qword [RBX], RSP */
		0x48, 0x11, 0x2b,  /* ADC qword [RBX], RBP */
		0x48, 0x11, 0x33,  /* ADC qword [RBX], RSI */
		0x48, 0x11, 0x3b,  /* ADC qword [RBX], RDI */
		0x48, 0x11, 0x4, 0x24,  /* ADC qword [RSP], RAX */
		0x48, 0x11, 0xc, 0x24,  /* ADC qword [RSP], RCX */
		0x48, 0x11, 0x14, 0x24,  /* ADC qword [RSP], RDX */
		0x48, 0x11, 0x1c, 0x24,  /* ADC qword [RSP], RBX */
		0x48, 0x11, 0x24, 0x24,  /* ADC qword [RSP], RSP */
		0x48, 0x11, 0x2c, 0x24,  /* ADC qword [RSP], RBP */
		0x48, 0x11, 0x34, 0x24,  /* ADC qword [RSP], RSI */
		0x48, 0x11, 0x3c, 0x24,  /* ADC qword [RSP], RDI */
		0x48, 0x11, 0x45, 0x0,  /* ADC qword [RBP], RAX */
		0x48, 0x11, 0x4d, 0x0,  /* ADC qword [RBP], RCX */
		0x48, 0x11, 0x55, 0x0,  /* ADC qword [RBP], RDX */
		0x48, 0x11, 0x5d, 0x0,  /* ADC qword [RBP], RBX */
		0x48, 0x11, 0x65, 0x0,  /* ADC qword [RBP], RSP */
		0x48, 0x11, 0x6d, 0x0,  /* ADC qword [RBP], RBP */
		0x48, 0x11, 0x75, 0x0,  /* ADC qword [RBP], RSI */
		0x48, 0x11, 0x7d, 0x0,  /* ADC qword [RBP], RDI */
		0x48, 0x11, 0x6,  /* ADC qword [RSI], RAX */
		0x48, 0x11, 0xe,  /* ADC qword [RSI], RCX */
		0x48, 0x11, 0x16,  /* ADC qword [RSI], RDX */
		0x48, 0x11, 0x1e,  /* ADC qword [RSI], RBX */
		0x48, 0x11, 0x26,  /* ADC qword [RSI], RSP */
		0x48, 0x11, 0x2e,  /* ADC qword [RSI], RBP */
		0x48, 0x11, 0x36,  /* ADC qword [RSI], RSI */
		0x48, 0x11, 0x3e,  /* ADC qword [RSI], RDI */
		0x48, 0x11, 0x7,  /* ADC qword [RDI], RAX */
		0x48, 0x11, 0xf,  /* ADC qword [RDI], RCX */
		0x48, 0x11, 0x17,  /* ADC qword [RDI], RDX */
		0x48, 0x11, 0x1f,  /* ADC qword [RDI], RBX */
		0x48, 0x11, 0x27,  /* ADC qword [RDI], RSP */
		0x48, 0x11, 0x2f,  /* ADC qword [RDI], RBP */
		0x48, 0x11, 0x37,  /* ADC qword [RDI], RSI */
		0x48, 0x11, 0x3f   /* ADC qword [RDI], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* ADC qword [RCX], RAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RCX], RCX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RCX], RDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RCX], RBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RCX], RSP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RCX], RBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RCX], RSI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RCX], RDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDX], RAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDX], RCX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDX], RDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDX], RBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDX], RSP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDX], RBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDX], RSI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDX], RDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBX], RAX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBX], RCX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBX], RDX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBX], RBX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBX], RSP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBX], RBP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBX], RSI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBX], RDI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSP], RAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSP], RCX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSP], RDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSP], RBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSP], RSP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSP], RBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSP], RSI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSP], RDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBP], RAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBP], RCX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBP], RDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBP], RBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBP], RSP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBP], RBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBP], RSI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBP], RDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSI], RAX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSI], RCX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSI], RDX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSI], RBX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSI], RSP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSI], RBP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSI], RSI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSI], RDI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDI], RAX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDI], RCX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDI], RDX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDI], RBX */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDI], RSP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDI], RBP */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDI], RSI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDI], RDI */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ADC_O_REG_8_RM_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x12 
	const uint8_t pOps[0x12] = {
		0x10, 0xc9,  /* ADC CL, CL */
		0x10, 0xd1,  /* ADC CL, DL */
		0x10, 0xd9,  /* ADC CL, BL */
		0x10, 0xca,  /* ADC DL, CL */
		0x10, 0xd2,  /* ADC DL, DL */
		0x10, 0xda,  /* ADC DL, BL */
		0x10, 0xcb,  /* ADC BL, CL */
		0x10, 0xd3,  /* ADC BL, DL */
		0x10, 0xdb   /* ADC BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* ADC CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ADC_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x13 
	const uint8_t pOps[0xb8] = {
		0x48, 0x13, 0x1,  /* ADC RAX, qword [RCX] */
		0x48, 0x13, 0x2,  /* ADC RAX, qword [RDX] */
		0x48, 0x13, 0x3,  /* ADC RAX, qword [RBX] */
		0x48, 0x13, 0x4, 0x24,  /* ADC RAX, qword [RSP] */
		0x48, 0x13, 0x45, 0x0,  /* ADC RAX, qword [RBP] */
		0x48, 0x13, 0x6,  /* ADC RAX, qword [RSI] */
		0x48, 0x13, 0x7,  /* ADC RAX, qword [RDI] */
		0x48, 0x13, 0x9,  /* ADC RCX, qword [RCX] */
		0x48, 0x13, 0xa,  /* ADC RCX, qword [RDX] */
		0x48, 0x13, 0xb,  /* ADC RCX, qword [RBX] */
		0x48, 0x13, 0xc, 0x24,  /* ADC RCX, qword [RSP] */
		0x48, 0x13, 0x4d, 0x0,  /* ADC RCX, qword [RBP] */
		0x48, 0x13, 0xe,  /* ADC RCX, qword [RSI] */
		0x48, 0x13, 0xf,  /* ADC RCX, qword [RDI] */
		0x48, 0x13, 0x11,  /* ADC RDX, qword [RCX] */
		0x48, 0x13, 0x12,  /* ADC RDX, qword [RDX] */
		0x48, 0x13, 0x13,  /* ADC RDX, qword [RBX] */
		0x48, 0x13, 0x14, 0x24,  /* ADC RDX, qword [RSP] */
		0x48, 0x13, 0x55, 0x0,  /* ADC RDX, qword [RBP] */
		0x48, 0x13, 0x16,  /* ADC RDX, qword [RSI] */
		0x48, 0x13, 0x17,  /* ADC RDX, qword [RDI] */
		0x48, 0x13, 0x19,  /* ADC RBX, qword [RCX] */
		0x48, 0x13, 0x1a,  /* ADC RBX, qword [RDX] */
		0x48, 0x13, 0x1b,  /* ADC RBX, qword [RBX] */
		0x48, 0x13, 0x1c, 0x24,  /* ADC RBX, qword [RSP] */
		0x48, 0x13, 0x5d, 0x0,  /* ADC RBX, qword [RBP] */
		0x48, 0x13, 0x1e,  /* ADC RBX, qword [RSI] */
		0x48, 0x13, 0x1f,  /* ADC RBX, qword [RDI] */
		0x48, 0x13, 0x21,  /* ADC RSP, qword [RCX] */
		0x48, 0x13, 0x22,  /* ADC RSP, qword [RDX] */
		0x48, 0x13, 0x23,  /* ADC RSP, qword [RBX] */
		0x48, 0x13, 0x24, 0x24,  /* ADC RSP, qword [RSP] */
		0x48, 0x13, 0x65, 0x0,  /* ADC RSP, qword [RBP] */
		0x48, 0x13, 0x26,  /* ADC RSP, qword [RSI] */
		0x48, 0x13, 0x27,  /* ADC RSP, qword [RDI] */
		0x48, 0x13, 0x29,  /* ADC RBP, qword [RCX] */
		0x48, 0x13, 0x2a,  /* ADC RBP, qword [RDX] */
		0x48, 0x13, 0x2b,  /* ADC RBP, qword [RBX] */
		0x48, 0x13, 0x2c, 0x24,  /* ADC RBP, qword [RSP] */
		0x48, 0x13, 0x6d, 0x0,  /* ADC RBP, qword [RBP] */
		0x48, 0x13, 0x2e,  /* ADC RBP, qword [RSI] */
		0x48, 0x13, 0x2f,  /* ADC RBP, qword [RDI] */
		0x48, 0x13, 0x31,  /* ADC RSI, qword [RCX] */
		0x48, 0x13, 0x32,  /* ADC RSI, qword [RDX] */
		0x48, 0x13, 0x33,  /* ADC RSI, qword [RBX] */
		0x48, 0x13, 0x34, 0x24,  /* ADC RSI, qword [RSP] */
		0x48, 0x13, 0x75, 0x0,  /* ADC RSI, qword [RBP] */
		0x48, 0x13, 0x36,  /* ADC RSI, qword [RSI] */
		0x48, 0x13, 0x37,  /* ADC RSI, qword [RDI] */
		0x48, 0x13, 0x39,  /* ADC RDI, qword [RCX] */
		0x48, 0x13, 0x3a,  /* ADC RDI, qword [RDX] */
		0x48, 0x13, 0x3b,  /* ADC RDI, qword [RBX] */
		0x48, 0x13, 0x3c, 0x24,  /* ADC RDI, qword [RSP] */
		0x48, 0x13, 0x7d, 0x0,  /* ADC RDI, qword [RBP] */
		0x48, 0x13, 0x3e,  /* ADC RDI, qword [RSI] */
		0x48, 0x13, 0x3f   /* ADC RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* ADC RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ADC_O_ACC_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x14 
	const uint8_t pOps[0x5] = {
		0x14, 0xaf,  /* ADC AL, 0xaf */
		0x80, 0xd4, 0xaf   /* ADC AH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* ADC AL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
	{
		/* ADC AH, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
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


TEST(x64, ADC_O_ACC_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x15 
	const uint8_t pOps[0x6] = {
		0x48, 0x15, 0xbb, 0xee, 0xaf, 0xab   /* ADC RAX, 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* ADC RAX, 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
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


TEST(x64, SBB_O_RM_8_REG_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x18 
	const uint8_t pOps[0x12] = {
		0x18, 0xc9,  /* SBB CL, CL */
		0x18, 0xd1,  /* SBB CL, DL */
		0x18, 0xd9,  /* SBB CL, BL */
		0x18, 0xca,  /* SBB DL, CL */
		0x18, 0xd2,  /* SBB DL, DL */
		0x18, 0xda,  /* SBB DL, BL */
		0x18, 0xcb,  /* SBB BL, CL */
		0x18, 0xd3,  /* SBB BL, DL */
		0x18, 0xdb   /* SBB BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* SBB CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SBB_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x19 
	const uint8_t pOps[0xb8] = {
		0x48, 0x19, 0x1,  /* SBB qword [RCX], RAX */
		0x48, 0x19, 0x9,  /* SBB qword [RCX], RCX */
		0x48, 0x19, 0x11,  /* SBB qword [RCX], RDX */
		0x48, 0x19, 0x19,  /* SBB qword [RCX], RBX */
		0x48, 0x19, 0x21,  /* SBB qword [RCX], RSP */
		0x48, 0x19, 0x29,  /* SBB qword [RCX], RBP */
		0x48, 0x19, 0x31,  /* SBB qword [RCX], RSI */
		0x48, 0x19, 0x39,  /* SBB qword [RCX], RDI */
		0x48, 0x19, 0x2,  /* SBB qword [RDX], RAX */
		0x48, 0x19, 0xa,  /* SBB qword [RDX], RCX */
		0x48, 0x19, 0x12,  /* SBB qword [RDX], RDX */
		0x48, 0x19, 0x1a,  /* SBB qword [RDX], RBX */
		0x48, 0x19, 0x22,  /* SBB qword [RDX], RSP */
		0x48, 0x19, 0x2a,  /* SBB qword [RDX], RBP */
		0x48, 0x19, 0x32,  /* SBB qword [RDX], RSI */
		0x48, 0x19, 0x3a,  /* SBB qword [RDX], RDI */
		0x48, 0x19, 0x3,  /* SBB qword [RBX], RAX */
		0x48, 0x19, 0xb,  /* SBB qword [RBX], RCX */
		0x48, 0x19, 0x13,  /* SBB qword [RBX], RDX */
		0x48, 0x19, 0x1b,  /* SBB qword [RBX], RBX */
		0x48, 0x19, 0x23,  /* SBB qword [RBX], RSP */
		0x48, 0x19, 0x2b,  /* SBB qword [RBX], RBP */
		0x48, 0x19, 0x33,  /* SBB qword [RBX], RSI */
		0x48, 0x19, 0x3b,  /* SBB qword [RBX], RDI */
		0x48, 0x19, 0x4, 0x24,  /* SBB qword [RSP], RAX */
		0x48, 0x19, 0xc, 0x24,  /* SBB qword [RSP], RCX */
		0x48, 0x19, 0x14, 0x24,  /* SBB qword [RSP], RDX */
		0x48, 0x19, 0x1c, 0x24,  /* SBB qword [RSP], RBX */
		0x48, 0x19, 0x24, 0x24,  /* SBB qword [RSP], RSP */
		0x48, 0x19, 0x2c, 0x24,  /* SBB qword [RSP], RBP */
		0x48, 0x19, 0x34, 0x24,  /* SBB qword [RSP], RSI */
		0x48, 0x19, 0x3c, 0x24,  /* SBB qword [RSP], RDI */
		0x48, 0x19, 0x45, 0x0,  /* SBB qword [RBP], RAX */
		0x48, 0x19, 0x4d, 0x0,  /* SBB qword [RBP], RCX */
		0x48, 0x19, 0x55, 0x0,  /* SBB qword [RBP], RDX */
		0x48, 0x19, 0x5d, 0x0,  /* SBB qword [RBP], RBX */
		0x48, 0x19, 0x65, 0x0,  /* SBB qword [RBP], RSP */
		0x48, 0x19, 0x6d, 0x0,  /* SBB qword [RBP], RBP */
		0x48, 0x19, 0x75, 0x0,  /* SBB qword [RBP], RSI */
		0x48, 0x19, 0x7d, 0x0,  /* SBB qword [RBP], RDI */
		0x48, 0x19, 0x6,  /* SBB qword [RSI], RAX */
		0x48, 0x19, 0xe,  /* SBB qword [RSI], RCX */
		0x48, 0x19, 0x16,  /* SBB qword [RSI], RDX */
		0x48, 0x19, 0x1e,  /* SBB qword [RSI], RBX */
		0x48, 0x19, 0x26,  /* SBB qword [RSI], RSP */
		0x48, 0x19, 0x2e,  /* SBB qword [RSI], RBP */
		0x48, 0x19, 0x36,  /* SBB qword [RSI], RSI */
		0x48, 0x19, 0x3e,  /* SBB qword [RSI], RDI */
		0x48, 0x19, 0x7,  /* SBB qword [RDI], RAX */
		0x48, 0x19, 0xf,  /* SBB qword [RDI], RCX */
		0x48, 0x19, 0x17,  /* SBB qword [RDI], RDX */
		0x48, 0x19, 0x1f,  /* SBB qword [RDI], RBX */
		0x48, 0x19, 0x27,  /* SBB qword [RDI], RSP */
		0x48, 0x19, 0x2f,  /* SBB qword [RDI], RBP */
		0x48, 0x19, 0x37,  /* SBB qword [RDI], RSI */
		0x48, 0x19, 0x3f   /* SBB qword [RDI], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* SBB qword [RCX], RAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RCX], RCX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RCX], RDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RCX], RBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RCX], RSP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RCX], RBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RCX], RSI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RCX], RDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDX], RAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDX], RCX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDX], RDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDX], RBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDX], RSP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDX], RBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDX], RSI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDX], RDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBX], RAX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBX], RCX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBX], RDX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBX], RBX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBX], RSP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBX], RBP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBX], RSI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBX], RDI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSP], RAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSP], RCX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSP], RDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSP], RBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSP], RSP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSP], RBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSP], RSI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSP], RDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBP], RAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBP], RCX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBP], RDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBP], RBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBP], RSP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBP], RBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBP], RSI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBP], RDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSI], RAX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSI], RCX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSI], RDX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSI], RBX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSI], RSP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSI], RBP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSI], RSI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSI], RDI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDI], RAX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDI], RCX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDI], RDX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDI], RBX */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDI], RSP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDI], RBP */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDI], RSI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDI], RDI */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SBB_O_REG_8_RM_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x1a 
	const uint8_t pOps[0x12] = {
		0x18, 0xc9,  /* SBB CL, CL */
		0x18, 0xd1,  /* SBB CL, DL */
		0x18, 0xd9,  /* SBB CL, BL */
		0x18, 0xca,  /* SBB DL, CL */
		0x18, 0xd2,  /* SBB DL, DL */
		0x18, 0xda,  /* SBB DL, BL */
		0x18, 0xcb,  /* SBB BL, CL */
		0x18, 0xd3,  /* SBB BL, DL */
		0x18, 0xdb   /* SBB BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* SBB CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SBB_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x1b 
	const uint8_t pOps[0xb8] = {
		0x48, 0x1b, 0x1,  /* SBB RAX, qword [RCX] */
		0x48, 0x1b, 0x2,  /* SBB RAX, qword [RDX] */
		0x48, 0x1b, 0x3,  /* SBB RAX, qword [RBX] */
		0x48, 0x1b, 0x4, 0x24,  /* SBB RAX, qword [RSP] */
		0x48, 0x1b, 0x45, 0x0,  /* SBB RAX, qword [RBP] */
		0x48, 0x1b, 0x6,  /* SBB RAX, qword [RSI] */
		0x48, 0x1b, 0x7,  /* SBB RAX, qword [RDI] */
		0x48, 0x1b, 0x9,  /* SBB RCX, qword [RCX] */
		0x48, 0x1b, 0xa,  /* SBB RCX, qword [RDX] */
		0x48, 0x1b, 0xb,  /* SBB RCX, qword [RBX] */
		0x48, 0x1b, 0xc, 0x24,  /* SBB RCX, qword [RSP] */
		0x48, 0x1b, 0x4d, 0x0,  /* SBB RCX, qword [RBP] */
		0x48, 0x1b, 0xe,  /* SBB RCX, qword [RSI] */
		0x48, 0x1b, 0xf,  /* SBB RCX, qword [RDI] */
		0x48, 0x1b, 0x11,  /* SBB RDX, qword [RCX] */
		0x48, 0x1b, 0x12,  /* SBB RDX, qword [RDX] */
		0x48, 0x1b, 0x13,  /* SBB RDX, qword [RBX] */
		0x48, 0x1b, 0x14, 0x24,  /* SBB RDX, qword [RSP] */
		0x48, 0x1b, 0x55, 0x0,  /* SBB RDX, qword [RBP] */
		0x48, 0x1b, 0x16,  /* SBB RDX, qword [RSI] */
		0x48, 0x1b, 0x17,  /* SBB RDX, qword [RDI] */
		0x48, 0x1b, 0x19,  /* SBB RBX, qword [RCX] */
		0x48, 0x1b, 0x1a,  /* SBB RBX, qword [RDX] */
		0x48, 0x1b, 0x1b,  /* SBB RBX, qword [RBX] */
		0x48, 0x1b, 0x1c, 0x24,  /* SBB RBX, qword [RSP] */
		0x48, 0x1b, 0x5d, 0x0,  /* SBB RBX, qword [RBP] */
		0x48, 0x1b, 0x1e,  /* SBB RBX, qword [RSI] */
		0x48, 0x1b, 0x1f,  /* SBB RBX, qword [RDI] */
		0x48, 0x1b, 0x21,  /* SBB RSP, qword [RCX] */
		0x48, 0x1b, 0x22,  /* SBB RSP, qword [RDX] */
		0x48, 0x1b, 0x23,  /* SBB RSP, qword [RBX] */
		0x48, 0x1b, 0x24, 0x24,  /* SBB RSP, qword [RSP] */
		0x48, 0x1b, 0x65, 0x0,  /* SBB RSP, qword [RBP] */
		0x48, 0x1b, 0x26,  /* SBB RSP, qword [RSI] */
		0x48, 0x1b, 0x27,  /* SBB RSP, qword [RDI] */
		0x48, 0x1b, 0x29,  /* SBB RBP, qword [RCX] */
		0x48, 0x1b, 0x2a,  /* SBB RBP, qword [RDX] */
		0x48, 0x1b, 0x2b,  /* SBB RBP, qword [RBX] */
		0x48, 0x1b, 0x2c, 0x24,  /* SBB RBP, qword [RSP] */
		0x48, 0x1b, 0x6d, 0x0,  /* SBB RBP, qword [RBP] */
		0x48, 0x1b, 0x2e,  /* SBB RBP, qword [RSI] */
		0x48, 0x1b, 0x2f,  /* SBB RBP, qword [RDI] */
		0x48, 0x1b, 0x31,  /* SBB RSI, qword [RCX] */
		0x48, 0x1b, 0x32,  /* SBB RSI, qword [RDX] */
		0x48, 0x1b, 0x33,  /* SBB RSI, qword [RBX] */
		0x48, 0x1b, 0x34, 0x24,  /* SBB RSI, qword [RSP] */
		0x48, 0x1b, 0x75, 0x0,  /* SBB RSI, qword [RBP] */
		0x48, 0x1b, 0x36,  /* SBB RSI, qword [RSI] */
		0x48, 0x1b, 0x37,  /* SBB RSI, qword [RDI] */
		0x48, 0x1b, 0x39,  /* SBB RDI, qword [RCX] */
		0x48, 0x1b, 0x3a,  /* SBB RDI, qword [RDX] */
		0x48, 0x1b, 0x3b,  /* SBB RDI, qword [RBX] */
		0x48, 0x1b, 0x3c, 0x24,  /* SBB RDI, qword [RSP] */
		0x48, 0x1b, 0x7d, 0x0,  /* SBB RDI, qword [RBP] */
		0x48, 0x1b, 0x3e,  /* SBB RDI, qword [RSI] */
		0x48, 0x1b, 0x3f   /* SBB RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* SBB RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SBB_O_ACC_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x1c 
	const uint8_t pOps[0x5] = {
		0x1c, 0xaf,  /* SBB AL, 0xaf */
		0x80, 0xdc, 0xaf   /* SBB AH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* SBB AL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
	{
		/* SBB AH, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
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


TEST(x64, SBB_O_ACC_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x1d 
	const uint8_t pOps[0x6] = {
		0x48, 0x1d, 0xbb, 0xee, 0xaf, 0xab   /* SBB RAX, 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* SBB RAX, 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
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


TEST(x64, AND_O_RM_8_REG_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x20 
	const uint8_t pOps[0x12] = {
		0x20, 0xc9,  /* AND CL, CL */
		0x20, 0xd1,  /* AND CL, DL */
		0x20, 0xd9,  /* AND CL, BL */
		0x20, 0xca,  /* AND DL, CL */
		0x20, 0xd2,  /* AND DL, DL */
		0x20, 0xda,  /* AND DL, BL */
		0x20, 0xcb,  /* AND BL, CL */
		0x20, 0xd3,  /* AND BL, DL */
		0x20, 0xdb   /* AND BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* AND CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, AND_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x21 
	const uint8_t pOps[0xb8] = {
		0x48, 0x21, 0x1,  /* AND qword [RCX], RAX */
		0x48, 0x21, 0x9,  /* AND qword [RCX], RCX */
		0x48, 0x21, 0x11,  /* AND qword [RCX], RDX */
		0x48, 0x21, 0x19,  /* AND qword [RCX], RBX */
		0x48, 0x21, 0x21,  /* AND qword [RCX], RSP */
		0x48, 0x21, 0x29,  /* AND qword [RCX], RBP */
		0x48, 0x21, 0x31,  /* AND qword [RCX], RSI */
		0x48, 0x21, 0x39,  /* AND qword [RCX], RDI */
		0x48, 0x21, 0x2,  /* AND qword [RDX], RAX */
		0x48, 0x21, 0xa,  /* AND qword [RDX], RCX */
		0x48, 0x21, 0x12,  /* AND qword [RDX], RDX */
		0x48, 0x21, 0x1a,  /* AND qword [RDX], RBX */
		0x48, 0x21, 0x22,  /* AND qword [RDX], RSP */
		0x48, 0x21, 0x2a,  /* AND qword [RDX], RBP */
		0x48, 0x21, 0x32,  /* AND qword [RDX], RSI */
		0x48, 0x21, 0x3a,  /* AND qword [RDX], RDI */
		0x48, 0x21, 0x3,  /* AND qword [RBX], RAX */
		0x48, 0x21, 0xb,  /* AND qword [RBX], RCX */
		0x48, 0x21, 0x13,  /* AND qword [RBX], RDX */
		0x48, 0x21, 0x1b,  /* AND qword [RBX], RBX */
		0x48, 0x21, 0x23,  /* AND qword [RBX], RSP */
		0x48, 0x21, 0x2b,  /* AND qword [RBX], RBP */
		0x48, 0x21, 0x33,  /* AND qword [RBX], RSI */
		0x48, 0x21, 0x3b,  /* AND qword [RBX], RDI */
		0x48, 0x21, 0x4, 0x24,  /* AND qword [RSP], RAX */
		0x48, 0x21, 0xc, 0x24,  /* AND qword [RSP], RCX */
		0x48, 0x21, 0x14, 0x24,  /* AND qword [RSP], RDX */
		0x48, 0x21, 0x1c, 0x24,  /* AND qword [RSP], RBX */
		0x48, 0x21, 0x24, 0x24,  /* AND qword [RSP], RSP */
		0x48, 0x21, 0x2c, 0x24,  /* AND qword [RSP], RBP */
		0x48, 0x21, 0x34, 0x24,  /* AND qword [RSP], RSI */
		0x48, 0x21, 0x3c, 0x24,  /* AND qword [RSP], RDI */
		0x48, 0x21, 0x45, 0x0,  /* AND qword [RBP], RAX */
		0x48, 0x21, 0x4d, 0x0,  /* AND qword [RBP], RCX */
		0x48, 0x21, 0x55, 0x0,  /* AND qword [RBP], RDX */
		0x48, 0x21, 0x5d, 0x0,  /* AND qword [RBP], RBX */
		0x48, 0x21, 0x65, 0x0,  /* AND qword [RBP], RSP */
		0x48, 0x21, 0x6d, 0x0,  /* AND qword [RBP], RBP */
		0x48, 0x21, 0x75, 0x0,  /* AND qword [RBP], RSI */
		0x48, 0x21, 0x7d, 0x0,  /* AND qword [RBP], RDI */
		0x48, 0x21, 0x6,  /* AND qword [RSI], RAX */
		0x48, 0x21, 0xe,  /* AND qword [RSI], RCX */
		0x48, 0x21, 0x16,  /* AND qword [RSI], RDX */
		0x48, 0x21, 0x1e,  /* AND qword [RSI], RBX */
		0x48, 0x21, 0x26,  /* AND qword [RSI], RSP */
		0x48, 0x21, 0x2e,  /* AND qword [RSI], RBP */
		0x48, 0x21, 0x36,  /* AND qword [RSI], RSI */
		0x48, 0x21, 0x3e,  /* AND qword [RSI], RDI */
		0x48, 0x21, 0x7,  /* AND qword [RDI], RAX */
		0x48, 0x21, 0xf,  /* AND qword [RDI], RCX */
		0x48, 0x21, 0x17,  /* AND qword [RDI], RDX */
		0x48, 0x21, 0x1f,  /* AND qword [RDI], RBX */
		0x48, 0x21, 0x27,  /* AND qword [RDI], RSP */
		0x48, 0x21, 0x2f,  /* AND qword [RDI], RBP */
		0x48, 0x21, 0x37,  /* AND qword [RDI], RSI */
		0x48, 0x21, 0x3f   /* AND qword [RDI], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* AND qword [RCX], RAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RCX], RCX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RCX], RDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RCX], RBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RCX], RSP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RCX], RBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RCX], RSI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RCX], RDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDX], RAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDX], RCX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDX], RDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDX], RBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDX], RSP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDX], RBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDX], RSI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDX], RDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBX], RAX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBX], RCX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBX], RDX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBX], RBX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBX], RSP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBX], RBP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBX], RSI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBX], RDI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSP], RAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSP], RCX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSP], RDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSP], RBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSP], RSP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSP], RBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSP], RSI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSP], RDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBP], RAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBP], RCX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBP], RDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBP], RBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBP], RSP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBP], RBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBP], RSI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBP], RDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSI], RAX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSI], RCX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSI], RDX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSI], RBX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSI], RSP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSI], RBP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSI], RSI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSI], RDI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDI], RAX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDI], RCX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDI], RDX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDI], RBX */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDI], RSP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDI], RBP */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDI], RSI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDI], RDI */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, AND_O_REG_8_RM_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x22 
	const uint8_t pOps[0x12] = {
		0x20, 0xc9,  /* AND CL, CL */
		0x20, 0xd1,  /* AND CL, DL */
		0x20, 0xd9,  /* AND CL, BL */
		0x20, 0xca,  /* AND DL, CL */
		0x20, 0xd2,  /* AND DL, DL */
		0x20, 0xda,  /* AND DL, BL */
		0x20, 0xcb,  /* AND BL, CL */
		0x20, 0xd3,  /* AND BL, DL */
		0x20, 0xdb   /* AND BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* AND CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, AND_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x23 
	const uint8_t pOps[0xb8] = {
		0x48, 0x23, 0x1,  /* AND RAX, qword [RCX] */
		0x48, 0x23, 0x2,  /* AND RAX, qword [RDX] */
		0x48, 0x23, 0x3,  /* AND RAX, qword [RBX] */
		0x48, 0x23, 0x4, 0x24,  /* AND RAX, qword [RSP] */
		0x48, 0x23, 0x45, 0x0,  /* AND RAX, qword [RBP] */
		0x48, 0x23, 0x6,  /* AND RAX, qword [RSI] */
		0x48, 0x23, 0x7,  /* AND RAX, qword [RDI] */
		0x48, 0x23, 0x9,  /* AND RCX, qword [RCX] */
		0x48, 0x23, 0xa,  /* AND RCX, qword [RDX] */
		0x48, 0x23, 0xb,  /* AND RCX, qword [RBX] */
		0x48, 0x23, 0xc, 0x24,  /* AND RCX, qword [RSP] */
		0x48, 0x23, 0x4d, 0x0,  /* AND RCX, qword [RBP] */
		0x48, 0x23, 0xe,  /* AND RCX, qword [RSI] */
		0x48, 0x23, 0xf,  /* AND RCX, qword [RDI] */
		0x48, 0x23, 0x11,  /* AND RDX, qword [RCX] */
		0x48, 0x23, 0x12,  /* AND RDX, qword [RDX] */
		0x48, 0x23, 0x13,  /* AND RDX, qword [RBX] */
		0x48, 0x23, 0x14, 0x24,  /* AND RDX, qword [RSP] */
		0x48, 0x23, 0x55, 0x0,  /* AND RDX, qword [RBP] */
		0x48, 0x23, 0x16,  /* AND RDX, qword [RSI] */
		0x48, 0x23, 0x17,  /* AND RDX, qword [RDI] */
		0x48, 0x23, 0x19,  /* AND RBX, qword [RCX] */
		0x48, 0x23, 0x1a,  /* AND RBX, qword [RDX] */
		0x48, 0x23, 0x1b,  /* AND RBX, qword [RBX] */
		0x48, 0x23, 0x1c, 0x24,  /* AND RBX, qword [RSP] */
		0x48, 0x23, 0x5d, 0x0,  /* AND RBX, qword [RBP] */
		0x48, 0x23, 0x1e,  /* AND RBX, qword [RSI] */
		0x48, 0x23, 0x1f,  /* AND RBX, qword [RDI] */
		0x48, 0x23, 0x21,  /* AND RSP, qword [RCX] */
		0x48, 0x23, 0x22,  /* AND RSP, qword [RDX] */
		0x48, 0x23, 0x23,  /* AND RSP, qword [RBX] */
		0x48, 0x23, 0x24, 0x24,  /* AND RSP, qword [RSP] */
		0x48, 0x23, 0x65, 0x0,  /* AND RSP, qword [RBP] */
		0x48, 0x23, 0x26,  /* AND RSP, qword [RSI] */
		0x48, 0x23, 0x27,  /* AND RSP, qword [RDI] */
		0x48, 0x23, 0x29,  /* AND RBP, qword [RCX] */
		0x48, 0x23, 0x2a,  /* AND RBP, qword [RDX] */
		0x48, 0x23, 0x2b,  /* AND RBP, qword [RBX] */
		0x48, 0x23, 0x2c, 0x24,  /* AND RBP, qword [RSP] */
		0x48, 0x23, 0x6d, 0x0,  /* AND RBP, qword [RBP] */
		0x48, 0x23, 0x2e,  /* AND RBP, qword [RSI] */
		0x48, 0x23, 0x2f,  /* AND RBP, qword [RDI] */
		0x48, 0x23, 0x31,  /* AND RSI, qword [RCX] */
		0x48, 0x23, 0x32,  /* AND RSI, qword [RDX] */
		0x48, 0x23, 0x33,  /* AND RSI, qword [RBX] */
		0x48, 0x23, 0x34, 0x24,  /* AND RSI, qword [RSP] */
		0x48, 0x23, 0x75, 0x0,  /* AND RSI, qword [RBP] */
		0x48, 0x23, 0x36,  /* AND RSI, qword [RSI] */
		0x48, 0x23, 0x37,  /* AND RSI, qword [RDI] */
		0x48, 0x23, 0x39,  /* AND RDI, qword [RCX] */
		0x48, 0x23, 0x3a,  /* AND RDI, qword [RDX] */
		0x48, 0x23, 0x3b,  /* AND RDI, qword [RBX] */
		0x48, 0x23, 0x3c, 0x24,  /* AND RDI, qword [RSP] */
		0x48, 0x23, 0x7d, 0x0,  /* AND RDI, qword [RBP] */
		0x48, 0x23, 0x3e,  /* AND RDI, qword [RSI] */
		0x48, 0x23, 0x3f   /* AND RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* AND RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, AND_O_ACC_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x24 
	const uint8_t pOps[0x5] = {
		0x24, 0xaf,  /* AND AL, 0xaf */
		0x80, 0xe4, 0xaf   /* AND AH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* AND AL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
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
		/* AND AH, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
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


TEST(x64, AND_O_ACC_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x25 
	const uint8_t pOps[0x6] = {
		0x48, 0x25, 0xbb, 0xee, 0xaf, 0xab   /* AND RAX, 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* AND RAX, 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
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


TEST(x64, SUB_O_RM_8_REG_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x28 
	const uint8_t pOps[0x12] = {
		0x28, 0xc9,  /* SUB CL, CL */
		0x28, 0xd1,  /* SUB CL, DL */
		0x28, 0xd9,  /* SUB CL, BL */
		0x28, 0xca,  /* SUB DL, CL */
		0x28, 0xd2,  /* SUB DL, DL */
		0x28, 0xda,  /* SUB DL, BL */
		0x28, 0xcb,  /* SUB BL, CL */
		0x28, 0xd3,  /* SUB BL, DL */
		0x28, 0xdb   /* SUB BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* SUB CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SUB_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x29 
	const uint8_t pOps[0xb8] = {
		0x48, 0x29, 0x1,  /* SUB qword [RCX], RAX */
		0x48, 0x29, 0x9,  /* SUB qword [RCX], RCX */
		0x48, 0x29, 0x11,  /* SUB qword [RCX], RDX */
		0x48, 0x29, 0x19,  /* SUB qword [RCX], RBX */
		0x48, 0x29, 0x21,  /* SUB qword [RCX], RSP */
		0x48, 0x29, 0x29,  /* SUB qword [RCX], RBP */
		0x48, 0x29, 0x31,  /* SUB qword [RCX], RSI */
		0x48, 0x29, 0x39,  /* SUB qword [RCX], RDI */
		0x48, 0x29, 0x2,  /* SUB qword [RDX], RAX */
		0x48, 0x29, 0xa,  /* SUB qword [RDX], RCX */
		0x48, 0x29, 0x12,  /* SUB qword [RDX], RDX */
		0x48, 0x29, 0x1a,  /* SUB qword [RDX], RBX */
		0x48, 0x29, 0x22,  /* SUB qword [RDX], RSP */
		0x48, 0x29, 0x2a,  /* SUB qword [RDX], RBP */
		0x48, 0x29, 0x32,  /* SUB qword [RDX], RSI */
		0x48, 0x29, 0x3a,  /* SUB qword [RDX], RDI */
		0x48, 0x29, 0x3,  /* SUB qword [RBX], RAX */
		0x48, 0x29, 0xb,  /* SUB qword [RBX], RCX */
		0x48, 0x29, 0x13,  /* SUB qword [RBX], RDX */
		0x48, 0x29, 0x1b,  /* SUB qword [RBX], RBX */
		0x48, 0x29, 0x23,  /* SUB qword [RBX], RSP */
		0x48, 0x29, 0x2b,  /* SUB qword [RBX], RBP */
		0x48, 0x29, 0x33,  /* SUB qword [RBX], RSI */
		0x48, 0x29, 0x3b,  /* SUB qword [RBX], RDI */
		0x48, 0x29, 0x4, 0x24,  /* SUB qword [RSP], RAX */
		0x48, 0x29, 0xc, 0x24,  /* SUB qword [RSP], RCX */
		0x48, 0x29, 0x14, 0x24,  /* SUB qword [RSP], RDX */
		0x48, 0x29, 0x1c, 0x24,  /* SUB qword [RSP], RBX */
		0x48, 0x29, 0x24, 0x24,  /* SUB qword [RSP], RSP */
		0x48, 0x29, 0x2c, 0x24,  /* SUB qword [RSP], RBP */
		0x48, 0x29, 0x34, 0x24,  /* SUB qword [RSP], RSI */
		0x48, 0x29, 0x3c, 0x24,  /* SUB qword [RSP], RDI */
		0x48, 0x29, 0x45, 0x0,  /* SUB qword [RBP], RAX */
		0x48, 0x29, 0x4d, 0x0,  /* SUB qword [RBP], RCX */
		0x48, 0x29, 0x55, 0x0,  /* SUB qword [RBP], RDX */
		0x48, 0x29, 0x5d, 0x0,  /* SUB qword [RBP], RBX */
		0x48, 0x29, 0x65, 0x0,  /* SUB qword [RBP], RSP */
		0x48, 0x29, 0x6d, 0x0,  /* SUB qword [RBP], RBP */
		0x48, 0x29, 0x75, 0x0,  /* SUB qword [RBP], RSI */
		0x48, 0x29, 0x7d, 0x0,  /* SUB qword [RBP], RDI */
		0x48, 0x29, 0x6,  /* SUB qword [RSI], RAX */
		0x48, 0x29, 0xe,  /* SUB qword [RSI], RCX */
		0x48, 0x29, 0x16,  /* SUB qword [RSI], RDX */
		0x48, 0x29, 0x1e,  /* SUB qword [RSI], RBX */
		0x48, 0x29, 0x26,  /* SUB qword [RSI], RSP */
		0x48, 0x29, 0x2e,  /* SUB qword [RSI], RBP */
		0x48, 0x29, 0x36,  /* SUB qword [RSI], RSI */
		0x48, 0x29, 0x3e,  /* SUB qword [RSI], RDI */
		0x48, 0x29, 0x7,  /* SUB qword [RDI], RAX */
		0x48, 0x29, 0xf,  /* SUB qword [RDI], RCX */
		0x48, 0x29, 0x17,  /* SUB qword [RDI], RDX */
		0x48, 0x29, 0x1f,  /* SUB qword [RDI], RBX */
		0x48, 0x29, 0x27,  /* SUB qword [RDI], RSP */
		0x48, 0x29, 0x2f,  /* SUB qword [RDI], RBP */
		0x48, 0x29, 0x37,  /* SUB qword [RDI], RSI */
		0x48, 0x29, 0x3f   /* SUB qword [RDI], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* SUB qword [RCX], RAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RCX], RCX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RCX], RDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RCX], RBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RCX], RSP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RCX], RBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RCX], RSI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RCX], RDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDX], RAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDX], RCX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDX], RDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDX], RBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDX], RSP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDX], RBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDX], RSI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDX], RDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBX], RAX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBX], RCX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBX], RDX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBX], RBX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBX], RSP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBX], RBP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBX], RSI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBX], RDI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSP], RAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSP], RCX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSP], RDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSP], RBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSP], RSP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSP], RBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSP], RSI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSP], RDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBP], RAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBP], RCX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBP], RDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBP], RBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBP], RSP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBP], RBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBP], RSI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBP], RDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSI], RAX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSI], RCX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSI], RDX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSI], RBX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSI], RSP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSI], RBP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSI], RSI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSI], RDI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDI], RAX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDI], RCX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDI], RDX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDI], RBX */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDI], RSP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDI], RBP */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDI], RSI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDI], RDI */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SUB_O_REG_8_RM_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x2a 
	const uint8_t pOps[0x12] = {
		0x28, 0xc9,  /* SUB CL, CL */
		0x28, 0xd1,  /* SUB CL, DL */
		0x28, 0xd9,  /* SUB CL, BL */
		0x28, 0xca,  /* SUB DL, CL */
		0x28, 0xd2,  /* SUB DL, DL */
		0x28, 0xda,  /* SUB DL, BL */
		0x28, 0xcb,  /* SUB BL, CL */
		0x28, 0xd3,  /* SUB BL, DL */
		0x28, 0xdb   /* SUB BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* SUB CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SUB_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x2b 
	const uint8_t pOps[0xb8] = {
		0x48, 0x2b, 0x1,  /* SUB RAX, qword [RCX] */
		0x48, 0x2b, 0x2,  /* SUB RAX, qword [RDX] */
		0x48, 0x2b, 0x3,  /* SUB RAX, qword [RBX] */
		0x48, 0x2b, 0x4, 0x24,  /* SUB RAX, qword [RSP] */
		0x48, 0x2b, 0x45, 0x0,  /* SUB RAX, qword [RBP] */
		0x48, 0x2b, 0x6,  /* SUB RAX, qword [RSI] */
		0x48, 0x2b, 0x7,  /* SUB RAX, qword [RDI] */
		0x48, 0x2b, 0x9,  /* SUB RCX, qword [RCX] */
		0x48, 0x2b, 0xa,  /* SUB RCX, qword [RDX] */
		0x48, 0x2b, 0xb,  /* SUB RCX, qword [RBX] */
		0x48, 0x2b, 0xc, 0x24,  /* SUB RCX, qword [RSP] */
		0x48, 0x2b, 0x4d, 0x0,  /* SUB RCX, qword [RBP] */
		0x48, 0x2b, 0xe,  /* SUB RCX, qword [RSI] */
		0x48, 0x2b, 0xf,  /* SUB RCX, qword [RDI] */
		0x48, 0x2b, 0x11,  /* SUB RDX, qword [RCX] */
		0x48, 0x2b, 0x12,  /* SUB RDX, qword [RDX] */
		0x48, 0x2b, 0x13,  /* SUB RDX, qword [RBX] */
		0x48, 0x2b, 0x14, 0x24,  /* SUB RDX, qword [RSP] */
		0x48, 0x2b, 0x55, 0x0,  /* SUB RDX, qword [RBP] */
		0x48, 0x2b, 0x16,  /* SUB RDX, qword [RSI] */
		0x48, 0x2b, 0x17,  /* SUB RDX, qword [RDI] */
		0x48, 0x2b, 0x19,  /* SUB RBX, qword [RCX] */
		0x48, 0x2b, 0x1a,  /* SUB RBX, qword [RDX] */
		0x48, 0x2b, 0x1b,  /* SUB RBX, qword [RBX] */
		0x48, 0x2b, 0x1c, 0x24,  /* SUB RBX, qword [RSP] */
		0x48, 0x2b, 0x5d, 0x0,  /* SUB RBX, qword [RBP] */
		0x48, 0x2b, 0x1e,  /* SUB RBX, qword [RSI] */
		0x48, 0x2b, 0x1f,  /* SUB RBX, qword [RDI] */
		0x48, 0x2b, 0x21,  /* SUB RSP, qword [RCX] */
		0x48, 0x2b, 0x22,  /* SUB RSP, qword [RDX] */
		0x48, 0x2b, 0x23,  /* SUB RSP, qword [RBX] */
		0x48, 0x2b, 0x24, 0x24,  /* SUB RSP, qword [RSP] */
		0x48, 0x2b, 0x65, 0x0,  /* SUB RSP, qword [RBP] */
		0x48, 0x2b, 0x26,  /* SUB RSP, qword [RSI] */
		0x48, 0x2b, 0x27,  /* SUB RSP, qword [RDI] */
		0x48, 0x2b, 0x29,  /* SUB RBP, qword [RCX] */
		0x48, 0x2b, 0x2a,  /* SUB RBP, qword [RDX] */
		0x48, 0x2b, 0x2b,  /* SUB RBP, qword [RBX] */
		0x48, 0x2b, 0x2c, 0x24,  /* SUB RBP, qword [RSP] */
		0x48, 0x2b, 0x6d, 0x0,  /* SUB RBP, qword [RBP] */
		0x48, 0x2b, 0x2e,  /* SUB RBP, qword [RSI] */
		0x48, 0x2b, 0x2f,  /* SUB RBP, qword [RDI] */
		0x48, 0x2b, 0x31,  /* SUB RSI, qword [RCX] */
		0x48, 0x2b, 0x32,  /* SUB RSI, qword [RDX] */
		0x48, 0x2b, 0x33,  /* SUB RSI, qword [RBX] */
		0x48, 0x2b, 0x34, 0x24,  /* SUB RSI, qword [RSP] */
		0x48, 0x2b, 0x75, 0x0,  /* SUB RSI, qword [RBP] */
		0x48, 0x2b, 0x36,  /* SUB RSI, qword [RSI] */
		0x48, 0x2b, 0x37,  /* SUB RSI, qword [RDI] */
		0x48, 0x2b, 0x39,  /* SUB RDI, qword [RCX] */
		0x48, 0x2b, 0x3a,  /* SUB RDI, qword [RDX] */
		0x48, 0x2b, 0x3b,  /* SUB RDI, qword [RBX] */
		0x48, 0x2b, 0x3c, 0x24,  /* SUB RDI, qword [RSP] */
		0x48, 0x2b, 0x7d, 0x0,  /* SUB RDI, qword [RBP] */
		0x48, 0x2b, 0x3e,  /* SUB RDI, qword [RSI] */
		0x48, 0x2b, 0x3f   /* SUB RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* SUB RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SUB_O_ACC_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x2c 
	const uint8_t pOps[0x5] = {
		0x2c, 0xaf,  /* SUB AL, 0xaf */
		0x80, 0xec, 0xaf   /* SUB AH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* SUB AL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
	{
		/* SUB AH, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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


TEST(x64, SUB_O_ACC_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x2d 
	const uint8_t pOps[0x6] = {
		0x48, 0x2d, 0xbb, 0xee, 0xaf, 0xab   /* SUB RAX, 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* SUB RAX, 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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


TEST(x64, XOR_O_RM_8_REG_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x30 
	const uint8_t pOps[0x12] = {
		0x30, 0xc9,  /* XOR CL, CL */
		0x30, 0xd1,  /* XOR CL, DL */
		0x30, 0xd9,  /* XOR CL, BL */
		0x30, 0xca,  /* XOR DL, CL */
		0x30, 0xd2,  /* XOR DL, DL */
		0x30, 0xda,  /* XOR DL, BL */
		0x30, 0xcb,  /* XOR BL, CL */
		0x30, 0xd3,  /* XOR BL, DL */
		0x30, 0xdb   /* XOR BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* XOR CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, XOR_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x31 
	const uint8_t pOps[0xb8] = {
		0x48, 0x31, 0x1,  /* XOR qword [RCX], RAX */
		0x48, 0x31, 0x9,  /* XOR qword [RCX], RCX */
		0x48, 0x31, 0x11,  /* XOR qword [RCX], RDX */
		0x48, 0x31, 0x19,  /* XOR qword [RCX], RBX */
		0x48, 0x31, 0x21,  /* XOR qword [RCX], RSP */
		0x48, 0x31, 0x29,  /* XOR qword [RCX], RBP */
		0x48, 0x31, 0x31,  /* XOR qword [RCX], RSI */
		0x48, 0x31, 0x39,  /* XOR qword [RCX], RDI */
		0x48, 0x31, 0x2,  /* XOR qword [RDX], RAX */
		0x48, 0x31, 0xa,  /* XOR qword [RDX], RCX */
		0x48, 0x31, 0x12,  /* XOR qword [RDX], RDX */
		0x48, 0x31, 0x1a,  /* XOR qword [RDX], RBX */
		0x48, 0x31, 0x22,  /* XOR qword [RDX], RSP */
		0x48, 0x31, 0x2a,  /* XOR qword [RDX], RBP */
		0x48, 0x31, 0x32,  /* XOR qword [RDX], RSI */
		0x48, 0x31, 0x3a,  /* XOR qword [RDX], RDI */
		0x48, 0x31, 0x3,  /* XOR qword [RBX], RAX */
		0x48, 0x31, 0xb,  /* XOR qword [RBX], RCX */
		0x48, 0x31, 0x13,  /* XOR qword [RBX], RDX */
		0x48, 0x31, 0x1b,  /* XOR qword [RBX], RBX */
		0x48, 0x31, 0x23,  /* XOR qword [RBX], RSP */
		0x48, 0x31, 0x2b,  /* XOR qword [RBX], RBP */
		0x48, 0x31, 0x33,  /* XOR qword [RBX], RSI */
		0x48, 0x31, 0x3b,  /* XOR qword [RBX], RDI */
		0x48, 0x31, 0x4, 0x24,  /* XOR qword [RSP], RAX */
		0x48, 0x31, 0xc, 0x24,  /* XOR qword [RSP], RCX */
		0x48, 0x31, 0x14, 0x24,  /* XOR qword [RSP], RDX */
		0x48, 0x31, 0x1c, 0x24,  /* XOR qword [RSP], RBX */
		0x48, 0x31, 0x24, 0x24,  /* XOR qword [RSP], RSP */
		0x48, 0x31, 0x2c, 0x24,  /* XOR qword [RSP], RBP */
		0x48, 0x31, 0x34, 0x24,  /* XOR qword [RSP], RSI */
		0x48, 0x31, 0x3c, 0x24,  /* XOR qword [RSP], RDI */
		0x48, 0x31, 0x45, 0x0,  /* XOR qword [RBP], RAX */
		0x48, 0x31, 0x4d, 0x0,  /* XOR qword [RBP], RCX */
		0x48, 0x31, 0x55, 0x0,  /* XOR qword [RBP], RDX */
		0x48, 0x31, 0x5d, 0x0,  /* XOR qword [RBP], RBX */
		0x48, 0x31, 0x65, 0x0,  /* XOR qword [RBP], RSP */
		0x48, 0x31, 0x6d, 0x0,  /* XOR qword [RBP], RBP */
		0x48, 0x31, 0x75, 0x0,  /* XOR qword [RBP], RSI */
		0x48, 0x31, 0x7d, 0x0,  /* XOR qword [RBP], RDI */
		0x48, 0x31, 0x6,  /* XOR qword [RSI], RAX */
		0x48, 0x31, 0xe,  /* XOR qword [RSI], RCX */
		0x48, 0x31, 0x16,  /* XOR qword [RSI], RDX */
		0x48, 0x31, 0x1e,  /* XOR qword [RSI], RBX */
		0x48, 0x31, 0x26,  /* XOR qword [RSI], RSP */
		0x48, 0x31, 0x2e,  /* XOR qword [RSI], RBP */
		0x48, 0x31, 0x36,  /* XOR qword [RSI], RSI */
		0x48, 0x31, 0x3e,  /* XOR qword [RSI], RDI */
		0x48, 0x31, 0x7,  /* XOR qword [RDI], RAX */
		0x48, 0x31, 0xf,  /* XOR qword [RDI], RCX */
		0x48, 0x31, 0x17,  /* XOR qword [RDI], RDX */
		0x48, 0x31, 0x1f,  /* XOR qword [RDI], RBX */
		0x48, 0x31, 0x27,  /* XOR qword [RDI], RSP */
		0x48, 0x31, 0x2f,  /* XOR qword [RDI], RBP */
		0x48, 0x31, 0x37,  /* XOR qword [RDI], RSI */
		0x48, 0x31, 0x3f   /* XOR qword [RDI], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* XOR qword [RCX], RAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RCX], RCX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RCX], RDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RCX], RBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RCX], RSP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RCX], RBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RCX], RSI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RCX], RDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDX], RAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDX], RCX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDX], RDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDX], RBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDX], RSP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDX], RBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDX], RSI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDX], RDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBX], RAX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBX], RCX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBX], RDX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBX], RBX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBX], RSP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBX], RBP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBX], RSI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBX], RDI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSP], RAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSP], RCX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSP], RDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSP], RBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSP], RSP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSP], RBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSP], RSI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSP], RDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBP], RAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBP], RCX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBP], RDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBP], RBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBP], RSP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBP], RBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBP], RSI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBP], RDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSI], RAX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSI], RCX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSI], RDX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSI], RBX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSI], RSP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSI], RBP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSI], RSI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSI], RDI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDI], RAX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDI], RCX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDI], RDX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDI], RBX */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDI], RSP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDI], RBP */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDI], RSI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDI], RDI */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, XOR_O_REG_8_RM_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x32 
	const uint8_t pOps[0x12] = {
		0x30, 0xc9,  /* XOR CL, CL */
		0x30, 0xd1,  /* XOR CL, DL */
		0x30, 0xd9,  /* XOR CL, BL */
		0x30, 0xca,  /* XOR DL, CL */
		0x30, 0xd2,  /* XOR DL, DL */
		0x30, 0xda,  /* XOR DL, BL */
		0x30, 0xcb,  /* XOR BL, CL */
		0x30, 0xd3,  /* XOR BL, DL */
		0x30, 0xdb   /* XOR BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* XOR CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, XOR_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x33 
	const uint8_t pOps[0xb8] = {
		0x48, 0x33, 0x1,  /* XOR RAX, qword [RCX] */
		0x48, 0x33, 0x2,  /* XOR RAX, qword [RDX] */
		0x48, 0x33, 0x3,  /* XOR RAX, qword [RBX] */
		0x48, 0x33, 0x4, 0x24,  /* XOR RAX, qword [RSP] */
		0x48, 0x33, 0x45, 0x0,  /* XOR RAX, qword [RBP] */
		0x48, 0x33, 0x6,  /* XOR RAX, qword [RSI] */
		0x48, 0x33, 0x7,  /* XOR RAX, qword [RDI] */
		0x48, 0x33, 0x9,  /* XOR RCX, qword [RCX] */
		0x48, 0x33, 0xa,  /* XOR RCX, qword [RDX] */
		0x48, 0x33, 0xb,  /* XOR RCX, qword [RBX] */
		0x48, 0x33, 0xc, 0x24,  /* XOR RCX, qword [RSP] */
		0x48, 0x33, 0x4d, 0x0,  /* XOR RCX, qword [RBP] */
		0x48, 0x33, 0xe,  /* XOR RCX, qword [RSI] */
		0x48, 0x33, 0xf,  /* XOR RCX, qword [RDI] */
		0x48, 0x33, 0x11,  /* XOR RDX, qword [RCX] */
		0x48, 0x33, 0x12,  /* XOR RDX, qword [RDX] */
		0x48, 0x33, 0x13,  /* XOR RDX, qword [RBX] */
		0x48, 0x33, 0x14, 0x24,  /* XOR RDX, qword [RSP] */
		0x48, 0x33, 0x55, 0x0,  /* XOR RDX, qword [RBP] */
		0x48, 0x33, 0x16,  /* XOR RDX, qword [RSI] */
		0x48, 0x33, 0x17,  /* XOR RDX, qword [RDI] */
		0x48, 0x33, 0x19,  /* XOR RBX, qword [RCX] */
		0x48, 0x33, 0x1a,  /* XOR RBX, qword [RDX] */
		0x48, 0x33, 0x1b,  /* XOR RBX, qword [RBX] */
		0x48, 0x33, 0x1c, 0x24,  /* XOR RBX, qword [RSP] */
		0x48, 0x33, 0x5d, 0x0,  /* XOR RBX, qword [RBP] */
		0x48, 0x33, 0x1e,  /* XOR RBX, qword [RSI] */
		0x48, 0x33, 0x1f,  /* XOR RBX, qword [RDI] */
		0x48, 0x33, 0x21,  /* XOR RSP, qword [RCX] */
		0x48, 0x33, 0x22,  /* XOR RSP, qword [RDX] */
		0x48, 0x33, 0x23,  /* XOR RSP, qword [RBX] */
		0x48, 0x33, 0x24, 0x24,  /* XOR RSP, qword [RSP] */
		0x48, 0x33, 0x65, 0x0,  /* XOR RSP, qword [RBP] */
		0x48, 0x33, 0x26,  /* XOR RSP, qword [RSI] */
		0x48, 0x33, 0x27,  /* XOR RSP, qword [RDI] */
		0x48, 0x33, 0x29,  /* XOR RBP, qword [RCX] */
		0x48, 0x33, 0x2a,  /* XOR RBP, qword [RDX] */
		0x48, 0x33, 0x2b,  /* XOR RBP, qword [RBX] */
		0x48, 0x33, 0x2c, 0x24,  /* XOR RBP, qword [RSP] */
		0x48, 0x33, 0x6d, 0x0,  /* XOR RBP, qword [RBP] */
		0x48, 0x33, 0x2e,  /* XOR RBP, qword [RSI] */
		0x48, 0x33, 0x2f,  /* XOR RBP, qword [RDI] */
		0x48, 0x33, 0x31,  /* XOR RSI, qword [RCX] */
		0x48, 0x33, 0x32,  /* XOR RSI, qword [RDX] */
		0x48, 0x33, 0x33,  /* XOR RSI, qword [RBX] */
		0x48, 0x33, 0x34, 0x24,  /* XOR RSI, qword [RSP] */
		0x48, 0x33, 0x75, 0x0,  /* XOR RSI, qword [RBP] */
		0x48, 0x33, 0x36,  /* XOR RSI, qword [RSI] */
		0x48, 0x33, 0x37,  /* XOR RSI, qword [RDI] */
		0x48, 0x33, 0x39,  /* XOR RDI, qword [RCX] */
		0x48, 0x33, 0x3a,  /* XOR RDI, qword [RDX] */
		0x48, 0x33, 0x3b,  /* XOR RDI, qword [RBX] */
		0x48, 0x33, 0x3c, 0x24,  /* XOR RDI, qword [RSP] */
		0x48, 0x33, 0x7d, 0x0,  /* XOR RDI, qword [RBP] */
		0x48, 0x33, 0x3e,  /* XOR RDI, qword [RSI] */
		0x48, 0x33, 0x3f   /* XOR RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* XOR RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, XOR_O_ACC_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x34 
	const uint8_t pOps[0x5] = {
		0x34, 0xaf,  /* XOR AL, 0xaf */
		0x80, 0xf4, 0xaf   /* XOR AH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* XOR AL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XOR,
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
		/* XOR AH, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XOR,
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


TEST(x64, XOR_O_ACC_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x35 
	const uint8_t pOps[0x6] = {
		0x48, 0x35, 0xbb, 0xee, 0xaf, 0xab   /* XOR RAX, 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* XOR RAX, 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XOR,
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


TEST(x64, CMP_O_RM_8_REG_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x38 
	const uint8_t pOps[0x12] = {
		0x38, 0xc9,  /* CMP CL, CL */
		0x38, 0xd1,  /* CMP CL, DL */
		0x38, 0xd9,  /* CMP CL, BL */
		0x38, 0xca,  /* CMP DL, CL */
		0x38, 0xd2,  /* CMP DL, DL */
		0x38, 0xda,  /* CMP DL, BL */
		0x38, 0xcb,  /* CMP BL, CL */
		0x38, 0xd3,  /* CMP BL, DL */
		0x38, 0xdb   /* CMP BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* CMP CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CMP_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x39 
	const uint8_t pOps[0xb8] = {
		0x48, 0x39, 0x1,  /* CMP qword [RCX], RAX */
		0x48, 0x39, 0x9,  /* CMP qword [RCX], RCX */
		0x48, 0x39, 0x11,  /* CMP qword [RCX], RDX */
		0x48, 0x39, 0x19,  /* CMP qword [RCX], RBX */
		0x48, 0x39, 0x21,  /* CMP qword [RCX], RSP */
		0x48, 0x39, 0x29,  /* CMP qword [RCX], RBP */
		0x48, 0x39, 0x31,  /* CMP qword [RCX], RSI */
		0x48, 0x39, 0x39,  /* CMP qword [RCX], RDI */
		0x48, 0x39, 0x2,  /* CMP qword [RDX], RAX */
		0x48, 0x39, 0xa,  /* CMP qword [RDX], RCX */
		0x48, 0x39, 0x12,  /* CMP qword [RDX], RDX */
		0x48, 0x39, 0x1a,  /* CMP qword [RDX], RBX */
		0x48, 0x39, 0x22,  /* CMP qword [RDX], RSP */
		0x48, 0x39, 0x2a,  /* CMP qword [RDX], RBP */
		0x48, 0x39, 0x32,  /* CMP qword [RDX], RSI */
		0x48, 0x39, 0x3a,  /* CMP qword [RDX], RDI */
		0x48, 0x39, 0x3,  /* CMP qword [RBX], RAX */
		0x48, 0x39, 0xb,  /* CMP qword [RBX], RCX */
		0x48, 0x39, 0x13,  /* CMP qword [RBX], RDX */
		0x48, 0x39, 0x1b,  /* CMP qword [RBX], RBX */
		0x48, 0x39, 0x23,  /* CMP qword [RBX], RSP */
		0x48, 0x39, 0x2b,  /* CMP qword [RBX], RBP */
		0x48, 0x39, 0x33,  /* CMP qword [RBX], RSI */
		0x48, 0x39, 0x3b,  /* CMP qword [RBX], RDI */
		0x48, 0x39, 0x4, 0x24,  /* CMP qword [RSP], RAX */
		0x48, 0x39, 0xc, 0x24,  /* CMP qword [RSP], RCX */
		0x48, 0x39, 0x14, 0x24,  /* CMP qword [RSP], RDX */
		0x48, 0x39, 0x1c, 0x24,  /* CMP qword [RSP], RBX */
		0x48, 0x39, 0x24, 0x24,  /* CMP qword [RSP], RSP */
		0x48, 0x39, 0x2c, 0x24,  /* CMP qword [RSP], RBP */
		0x48, 0x39, 0x34, 0x24,  /* CMP qword [RSP], RSI */
		0x48, 0x39, 0x3c, 0x24,  /* CMP qword [RSP], RDI */
		0x48, 0x39, 0x45, 0x0,  /* CMP qword [RBP], RAX */
		0x48, 0x39, 0x4d, 0x0,  /* CMP qword [RBP], RCX */
		0x48, 0x39, 0x55, 0x0,  /* CMP qword [RBP], RDX */
		0x48, 0x39, 0x5d, 0x0,  /* CMP qword [RBP], RBX */
		0x48, 0x39, 0x65, 0x0,  /* CMP qword [RBP], RSP */
		0x48, 0x39, 0x6d, 0x0,  /* CMP qword [RBP], RBP */
		0x48, 0x39, 0x75, 0x0,  /* CMP qword [RBP], RSI */
		0x48, 0x39, 0x7d, 0x0,  /* CMP qword [RBP], RDI */
		0x48, 0x39, 0x6,  /* CMP qword [RSI], RAX */
		0x48, 0x39, 0xe,  /* CMP qword [RSI], RCX */
		0x48, 0x39, 0x16,  /* CMP qword [RSI], RDX */
		0x48, 0x39, 0x1e,  /* CMP qword [RSI], RBX */
		0x48, 0x39, 0x26,  /* CMP qword [RSI], RSP */
		0x48, 0x39, 0x2e,  /* CMP qword [RSI], RBP */
		0x48, 0x39, 0x36,  /* CMP qword [RSI], RSI */
		0x48, 0x39, 0x3e,  /* CMP qword [RSI], RDI */
		0x48, 0x39, 0x7,  /* CMP qword [RDI], RAX */
		0x48, 0x39, 0xf,  /* CMP qword [RDI], RCX */
		0x48, 0x39, 0x17,  /* CMP qword [RDI], RDX */
		0x48, 0x39, 0x1f,  /* CMP qword [RDI], RBX */
		0x48, 0x39, 0x27,  /* CMP qword [RDI], RSP */
		0x48, 0x39, 0x2f,  /* CMP qword [RDI], RBP */
		0x48, 0x39, 0x37,  /* CMP qword [RDI], RSI */
		0x48, 0x39, 0x3f   /* CMP qword [RDI], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMP qword [RCX], RAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RCX], RCX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RCX], RDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RCX], RBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RCX], RSP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RCX], RBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RCX], RSI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RCX], RDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDX], RAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDX], RCX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDX], RDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDX], RBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDX], RSP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDX], RBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDX], RSI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDX], RDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBX], RAX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBX], RCX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBX], RDX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBX], RBX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBX], RSP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBX], RBP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBX], RSI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBX], RDI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSP], RAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSP], RCX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSP], RDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSP], RBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSP], RSP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSP], RBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSP], RSI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSP], RDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBP], RAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBP], RCX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBP], RDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBP], RBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBP], RSP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBP], RBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBP], RSI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBP], RDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSI], RAX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSI], RCX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSI], RDX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSI], RBX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSI], RSP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSI], RBP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSI], RSI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSI], RDI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDI], RAX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDI], RCX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDI], RDX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDI], RBX */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDI], RSP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDI], RBP */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDI], RSI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDI], RDI */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CMP_O_REG_8_RM_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x3a 
	const uint8_t pOps[0x12] = {
		0x38, 0xc9,  /* CMP CL, CL */
		0x38, 0xd1,  /* CMP CL, DL */
		0x38, 0xd9,  /* CMP CL, BL */
		0x38, 0xca,  /* CMP DL, CL */
		0x38, 0xd2,  /* CMP DL, DL */
		0x38, 0xda,  /* CMP DL, BL */
		0x38, 0xcb,  /* CMP BL, CL */
		0x38, 0xd3,  /* CMP BL, DL */
		0x38, 0xdb   /* CMP BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* CMP CL, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP CL, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP CL, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP DL, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP DL, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP DL, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP BL, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP BL, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP BL, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CMP_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x3b 
	const uint8_t pOps[0xb8] = {
		0x48, 0x3b, 0x1,  /* CMP RAX, qword [RCX] */
		0x48, 0x3b, 0x2,  /* CMP RAX, qword [RDX] */
		0x48, 0x3b, 0x3,  /* CMP RAX, qword [RBX] */
		0x48, 0x3b, 0x4, 0x24,  /* CMP RAX, qword [RSP] */
		0x48, 0x3b, 0x45, 0x0,  /* CMP RAX, qword [RBP] */
		0x48, 0x3b, 0x6,  /* CMP RAX, qword [RSI] */
		0x48, 0x3b, 0x7,  /* CMP RAX, qword [RDI] */
		0x48, 0x3b, 0x9,  /* CMP RCX, qword [RCX] */
		0x48, 0x3b, 0xa,  /* CMP RCX, qword [RDX] */
		0x48, 0x3b, 0xb,  /* CMP RCX, qword [RBX] */
		0x48, 0x3b, 0xc, 0x24,  /* CMP RCX, qword [RSP] */
		0x48, 0x3b, 0x4d, 0x0,  /* CMP RCX, qword [RBP] */
		0x48, 0x3b, 0xe,  /* CMP RCX, qword [RSI] */
		0x48, 0x3b, 0xf,  /* CMP RCX, qword [RDI] */
		0x48, 0x3b, 0x11,  /* CMP RDX, qword [RCX] */
		0x48, 0x3b, 0x12,  /* CMP RDX, qword [RDX] */
		0x48, 0x3b, 0x13,  /* CMP RDX, qword [RBX] */
		0x48, 0x3b, 0x14, 0x24,  /* CMP RDX, qword [RSP] */
		0x48, 0x3b, 0x55, 0x0,  /* CMP RDX, qword [RBP] */
		0x48, 0x3b, 0x16,  /* CMP RDX, qword [RSI] */
		0x48, 0x3b, 0x17,  /* CMP RDX, qword [RDI] */
		0x48, 0x3b, 0x19,  /* CMP RBX, qword [RCX] */
		0x48, 0x3b, 0x1a,  /* CMP RBX, qword [RDX] */
		0x48, 0x3b, 0x1b,  /* CMP RBX, qword [RBX] */
		0x48, 0x3b, 0x1c, 0x24,  /* CMP RBX, qword [RSP] */
		0x48, 0x3b, 0x5d, 0x0,  /* CMP RBX, qword [RBP] */
		0x48, 0x3b, 0x1e,  /* CMP RBX, qword [RSI] */
		0x48, 0x3b, 0x1f,  /* CMP RBX, qword [RDI] */
		0x48, 0x3b, 0x21,  /* CMP RSP, qword [RCX] */
		0x48, 0x3b, 0x22,  /* CMP RSP, qword [RDX] */
		0x48, 0x3b, 0x23,  /* CMP RSP, qword [RBX] */
		0x48, 0x3b, 0x24, 0x24,  /* CMP RSP, qword [RSP] */
		0x48, 0x3b, 0x65, 0x0,  /* CMP RSP, qword [RBP] */
		0x48, 0x3b, 0x26,  /* CMP RSP, qword [RSI] */
		0x48, 0x3b, 0x27,  /* CMP RSP, qword [RDI] */
		0x48, 0x3b, 0x29,  /* CMP RBP, qword [RCX] */
		0x48, 0x3b, 0x2a,  /* CMP RBP, qword [RDX] */
		0x48, 0x3b, 0x2b,  /* CMP RBP, qword [RBX] */
		0x48, 0x3b, 0x2c, 0x24,  /* CMP RBP, qword [RSP] */
		0x48, 0x3b, 0x6d, 0x0,  /* CMP RBP, qword [RBP] */
		0x48, 0x3b, 0x2e,  /* CMP RBP, qword [RSI] */
		0x48, 0x3b, 0x2f,  /* CMP RBP, qword [RDI] */
		0x48, 0x3b, 0x31,  /* CMP RSI, qword [RCX] */
		0x48, 0x3b, 0x32,  /* CMP RSI, qword [RDX] */
		0x48, 0x3b, 0x33,  /* CMP RSI, qword [RBX] */
		0x48, 0x3b, 0x34, 0x24,  /* CMP RSI, qword [RSP] */
		0x48, 0x3b, 0x75, 0x0,  /* CMP RSI, qword [RBP] */
		0x48, 0x3b, 0x36,  /* CMP RSI, qword [RSI] */
		0x48, 0x3b, 0x37,  /* CMP RSI, qword [RDI] */
		0x48, 0x3b, 0x39,  /* CMP RDI, qword [RCX] */
		0x48, 0x3b, 0x3a,  /* CMP RDI, qword [RDX] */
		0x48, 0x3b, 0x3b,  /* CMP RDI, qword [RBX] */
		0x48, 0x3b, 0x3c, 0x24,  /* CMP RDI, qword [RSP] */
		0x48, 0x3b, 0x7d, 0x0,  /* CMP RDI, qword [RBP] */
		0x48, 0x3b, 0x3e,  /* CMP RDI, qword [RSI] */
		0x48, 0x3b, 0x3f   /* CMP RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMP RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CMP_O_ACC_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x3c 
	const uint8_t pOps[0x5] = {
		0x3c, 0xaf,  /* CMP AL, 0xaf */
		0x80, 0xfc, 0xaf   /* CMP AH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* CMP AL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
	{
		/* CMP AH, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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


TEST(x64, CMP_O_ACC_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x3d 
	const uint8_t pOps[0x6] = {
		0x48, 0x3d, 0xbb, 0xee, 0xaf, 0xab   /* CMP RAX, 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CMP RAX, 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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


TEST(x64, PUSH_O_BLOCK_R_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x50 
	const uint8_t pOps[0x8] = {
		0x50,  /* PUSH RAX */
		0x51,  /* PUSH RCX */
		0x52,  /* PUSH RDX */
		0x53,  /* PUSH RBX */
		0x54,  /* PUSH RSP */
		0x55,  /* PUSH RBP */
		0x56,  /* PUSH RSI */
		0x57   /* PUSH RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x8_sz, instructionCount);
	{
		/* PUSH RAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH RCX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH RDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH RBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH RSP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH RBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH RSI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH RDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, POP_O_BLOCK_R_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x58 
	const uint8_t pOps[0x8] = {
		0x58,  /* POP RAX */
		0x59,  /* POP RCX */
		0x5a,  /* POP RDX */
		0x5b,  /* POP RBX */
		0x5c,  /* POP RSP */
		0x5d,  /* POP RBP */
		0x5e,  /* POP RSI */
		0x5f   /* POP RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x8_sz, instructionCount);
	{
		/* POP RAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::POP,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP RCX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::POP,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP RDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::POP,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP RBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::POP,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP RSP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::POP,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP RBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::POP,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP RSI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::POP,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POP RDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::POP,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, PUSH_O_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x68 
	const uint8_t pOps[0x5] = {
		0x68, 0xbb, 0xee, 0xaf, 0xab   /* PUSH 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* PUSH 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUSH,
			FlowControl::NONE,
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

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, PUSH_O_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x6a 
	const uint8_t pOps[0x2] = {
		0x6a, 0x63   /* PUSH 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* PUSH 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, INSB_O_REG_EDI_REG_DX)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x6c 
	const uint8_t pOps[0x1] = {
		0x6c   /* INSB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* INSB */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INSB,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, INSD_O_REG_EDI_REG_DX)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x6d 
	const uint8_t pOps[0x1] = {
		0x6d   /* INSD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* INSD */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INSD,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, OUTSB_O_REG_DX_REG_ESI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x6e 
	const uint8_t pOps[0x1] = {
		0x6e   /* OUTSB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* OUTSB */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::OUTSB,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, OUTSD_O_REG_DX_REG_ESI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x6f 
	const uint8_t pOps[0x1] = {
		0x6f   /* OUTSD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* OUTSD */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::OUTSD,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, JO_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x70 
	const uint8_t pOps[0x2] = {
		0x70, 0xfe   /* @label: jo @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jo @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JO,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x800,
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


TEST(x64, JO_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x70 
	const uint8_t pOps[0x2] = {
		0x70, 0xfe   /* @label: jo @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jo @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JO,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x800,
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


TEST(x64, JNO_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x71 
	const uint8_t pOps[0x2] = {
		0x71, 0xfe   /* @label: jno @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jno @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JNO,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x800,
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


TEST(x64, JNO_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x71 
	const uint8_t pOps[0x2] = {
		0x71, 0xfe   /* @label: jno @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jno @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JNO,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x800,
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


TEST(x64, JB_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x72 
	const uint8_t pOps[0x2] = {
		0x72, 0xfe   /* @label: jb @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jb @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JB,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x1,
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


TEST(x64, JB_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x72 
	const uint8_t pOps[0x2] = {
		0x72, 0xfe   /* @label: jb @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jb @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JB,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x1,
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


TEST(x64, JNB_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x73 
	const uint8_t pOps[0x2] = {
		0x73, 0xfe   /* @label: jnb @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jnb @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JNB,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x1,
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


TEST(x64, JNB_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x73 
	const uint8_t pOps[0x2] = {
		0x73, 0xfe   /* @label: jnb @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jnb @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JNB,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x1,
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


TEST(x64, JZ_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x74 
	const uint8_t pOps[0x2] = {
		0x74, 0xfe   /* @label: jz @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jz @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JZ,
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


TEST(x64, JZ_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x74 
	const uint8_t pOps[0x2] = {
		0x74, 0xfe   /* @label: jz @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jz @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JZ,
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


TEST(x64, JNZ_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x75 
	const uint8_t pOps[0x2] = {
		0x75, 0xfe   /* @label: jnz @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jnz @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JNZ,
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


TEST(x64, JNZ_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x75 
	const uint8_t pOps[0x2] = {
		0x75, 0xfe   /* @label: jnz @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jnz @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JNZ,
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


TEST(x64, JBE_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x76 
	const uint8_t pOps[0x2] = {
		0x76, 0xfe   /* @label: jbe @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jbe @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JBE,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x41,
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


TEST(x64, JBE_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x76 
	const uint8_t pOps[0x2] = {
		0x76, 0xfe   /* @label: jbe @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jbe @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JBE,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x41,
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


TEST(x64, JA_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x77 
	const uint8_t pOps[0x2] = {
		0x77, 0xfe   /* @label: ja @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: ja @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JA,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x41,
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


TEST(x64, JA_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x77 
	const uint8_t pOps[0x2] = {
		0x77, 0xfe   /* @label: ja @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: ja @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JA,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x41,
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


TEST(x64, JS_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x78 
	const uint8_t pOps[0x2] = {
		0x78, 0xfe   /* @label: js @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: js @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JS,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x80,
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


TEST(x64, JS_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x78 
	const uint8_t pOps[0x2] = {
		0x78, 0xfe   /* @label: js @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: js @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JS,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x80,
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


TEST(x64, JNS_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x79 
	const uint8_t pOps[0x2] = {
		0x79, 0xfe   /* @label: jns @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jns @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JNS,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x80,
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


TEST(x64, JNS_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x79 
	const uint8_t pOps[0x2] = {
		0x79, 0xfe   /* @label: jns @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jns @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JNS,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x80,
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


TEST(x64, JP_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7a 
	const uint8_t pOps[0x2] = {
		0x7a, 0xfe   /* @label: jp @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jp @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JP,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x4,
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


TEST(x64, JP_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7a 
	const uint8_t pOps[0x2] = {
		0x7a, 0xfe   /* @label: jp @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jp @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JP,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x4,
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


TEST(x64, JNP_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7b 
	const uint8_t pOps[0x2] = {
		0x7b, 0xfe   /* @label: jnp @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jnp @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JNP,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x4,
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


TEST(x64, JNP_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7b 
	const uint8_t pOps[0x2] = {
		0x7b, 0xfe   /* @label: jnp @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jnp @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JNP,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x4,
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


TEST(x64, JL_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7c 
	const uint8_t pOps[0x2] = {
		0x7c, 0xfe   /* @label: jl @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jl @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JL,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x880,
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


TEST(x64, JL_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7c 
	const uint8_t pOps[0x2] = {
		0x7c, 0xfe   /* @label: jl @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jl @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JL,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x880,
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


TEST(x64, JGE_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7d 
	const uint8_t pOps[0x2] = {
		0x7d, 0xfe   /* @label: jge @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jge @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JGE,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x880,
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


TEST(x64, JGE_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7d 
	const uint8_t pOps[0x2] = {
		0x7d, 0xfe   /* @label: jge @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jge @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JGE,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x880,
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


TEST(x64, JLE_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7e 
	const uint8_t pOps[0x2] = {
		0x7e, 0xfe   /* @label: jle @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jle @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JLE,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x8c0,
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


TEST(x64, JLE_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7e 
	const uint8_t pOps[0x2] = {
		0x7e, 0xfe   /* @label: jle @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jle @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JLE,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x8c0,
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


TEST(x64, JG_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7f 
	const uint8_t pOps[0x2] = {
		0x7f, 0xfe   /* @label: jg @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jg @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JG,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x8c0,
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


TEST(x64, JG_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x7f 
	const uint8_t pOps[0x2] = {
		0x7f, 0xfe   /* @label: jg @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jg @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JG,
			FlowControl::CND_BRANCH,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x8c0,
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


TEST(x64, ADD_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x80 
	const uint8_t pOps[0x9] = {
		0x80, 0xc1, 0xaf,  /* ADD CL, 0xaf */
		0x80, 0xc2, 0xaf,  /* ADD DL, 0xaf */
		0x80, 0xc3, 0xaf   /* ADD BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* ADD CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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
		/* ADD DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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
		/* ADD BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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


TEST(x64, OR_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x80 
	const uint8_t pOps[0x9] = {
		0x80, 0xc9, 0xaf,  /* OR CL, 0xaf */
		0x80, 0xca, 0xaf,  /* OR DL, 0xaf */
		0x80, 0xcb, 0xaf   /* OR BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* OR CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
			0x0,
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
		/* OR DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
			0x0,
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
		/* OR BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
			0x0,
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


TEST(x64, ADC_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x80 
	const uint8_t pOps[0x9] = {
		0x80, 0xd1, 0xaf,  /* ADC CL, 0xaf */
		0x80, 0xd2, 0xaf,  /* ADC DL, 0xaf */
		0x80, 0xd3, 0xaf   /* ADC BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* ADC CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
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
		/* ADC DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
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
		/* ADC BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
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


TEST(x64, SBB_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x80 
	const uint8_t pOps[0x9] = {
		0x80, 0xd9, 0xaf,  /* SBB CL, 0xaf */
		0x80, 0xda, 0xaf,  /* SBB DL, 0xaf */
		0x80, 0xdb, 0xaf   /* SBB BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SBB CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
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
		/* SBB DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
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
		/* SBB BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
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


TEST(x64, AND_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x80 
	const uint8_t pOps[0x9] = {
		0x80, 0xe1, 0xaf,  /* AND CL, 0xaf */
		0x80, 0xe2, 0xaf,  /* AND DL, 0xaf */
		0x80, 0xe3, 0xaf   /* AND BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* AND CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
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
		/* AND DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
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
		/* AND BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
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


TEST(x64, SUB_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x80 
	const uint8_t pOps[0x9] = {
		0x80, 0xe9, 0xaf,  /* SUB CL, 0xaf */
		0x80, 0xea, 0xaf,  /* SUB DL, 0xaf */
		0x80, 0xeb, 0xaf   /* SUB BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* SUB CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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
		/* SUB DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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
		/* SUB BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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


TEST(x64, XOR_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x80 
	const uint8_t pOps[0x9] = {
		0x80, 0xf1, 0xaf,  /* XOR CL, 0xaf */
		0x80, 0xf2, 0xaf,  /* XOR DL, 0xaf */
		0x80, 0xf3, 0xaf   /* XOR BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* XOR CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XOR,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CMP_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x80 
	const uint8_t pOps[0x9] = {
		0x80, 0xf9, 0xaf,  /* CMP CL, 0xaf */
		0x80, 0xfa, 0xaf,  /* CMP DL, 0xaf */
		0x80, 0xfb, 0xaf   /* CMP BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* CMP CL, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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
		/* CMP DL, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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
		/* CMP BL, 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
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


TEST(x64, ADD_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x81 
	const uint8_t pOps[0x33] = {
		0x48, 0x81, 0x1, 0xbb, 0xee, 0xaf, 0xab,  /* ADD qword [RCX], 0xabafeebb */
		0x48, 0x81, 0x2, 0xbb, 0xee, 0xaf, 0xab,  /* ADD qword [RDX], 0xabafeebb */
		0x48, 0x81, 0x3, 0xbb, 0xee, 0xaf, 0xab,  /* ADD qword [RBX], 0xabafeebb */
		0x48, 0x81, 0x4, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* ADD qword [RSP], 0xabafeebb */
		0x48, 0x81, 0x45, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* ADD qword [RBP], 0xabafeebb */
		0x48, 0x81, 0x6, 0xbb, 0xee, 0xaf, 0xab,  /* ADD qword [RSI], 0xabafeebb */
		0x48, 0x81, 0x7, 0xbb, 0xee, 0xaf, 0xab   /* ADD qword [RDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x33, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ADD qword [RCX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* ADD qword [RDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* ADD qword [RBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* ADD qword [RSP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* ADD qword [RBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* ADD qword [RSI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* ADD qword [RDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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


TEST(x64, OR_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x81 
	const uint8_t pOps[0x33] = {
		0x48, 0x81, 0x9, 0xbb, 0xee, 0xaf, 0xab,  /* OR qword [RCX], 0xabafeebb */
		0x48, 0x81, 0xa, 0xbb, 0xee, 0xaf, 0xab,  /* OR qword [RDX], 0xabafeebb */
		0x48, 0x81, 0xb, 0xbb, 0xee, 0xaf, 0xab,  /* OR qword [RBX], 0xabafeebb */
		0x48, 0x81, 0xc, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* OR qword [RSP], 0xabafeebb */
		0x48, 0x81, 0x4d, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* OR qword [RBP], 0xabafeebb */
		0x48, 0x81, 0xe, 0xbb, 0xee, 0xaf, 0xab,  /* OR qword [RSI], 0xabafeebb */
		0x48, 0x81, 0xf, 0xbb, 0xee, 0xaf, 0xab   /* OR qword [RDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x33, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* OR qword [RCX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
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
		/* OR qword [RDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
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
		/* OR qword [RBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
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
		/* OR qword [RSP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
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
		/* OR qword [RBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
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
		/* OR qword [RSI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
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
		/* OR qword [RDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
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


TEST(x64, ADC_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x81 
	const uint8_t pOps[0x33] = {
		0x48, 0x81, 0x11, 0xbb, 0xee, 0xaf, 0xab,  /* ADC qword [RCX], 0xabafeebb */
		0x48, 0x81, 0x12, 0xbb, 0xee, 0xaf, 0xab,  /* ADC qword [RDX], 0xabafeebb */
		0x48, 0x81, 0x13, 0xbb, 0xee, 0xaf, 0xab,  /* ADC qword [RBX], 0xabafeebb */
		0x48, 0x81, 0x14, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* ADC qword [RSP], 0xabafeebb */
		0x48, 0x81, 0x55, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* ADC qword [RBP], 0xabafeebb */
		0x48, 0x81, 0x16, 0xbb, 0xee, 0xaf, 0xab,  /* ADC qword [RSI], 0xabafeebb */
		0x48, 0x81, 0x17, 0xbb, 0xee, 0xaf, 0xab   /* ADC qword [RDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x33, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ADC qword [RCX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* ADC qword [RDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* ADC qword [RBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* ADC qword [RSP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* ADC qword [RBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* ADC qword [RSI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* ADC qword [RDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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


TEST(x64, SBB_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x81 
	const uint8_t pOps[0x33] = {
		0x48, 0x81, 0x19, 0xbb, 0xee, 0xaf, 0xab,  /* SBB qword [RCX], 0xabafeebb */
		0x48, 0x81, 0x1a, 0xbb, 0xee, 0xaf, 0xab,  /* SBB qword [RDX], 0xabafeebb */
		0x48, 0x81, 0x1b, 0xbb, 0xee, 0xaf, 0xab,  /* SBB qword [RBX], 0xabafeebb */
		0x48, 0x81, 0x1c, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* SBB qword [RSP], 0xabafeebb */
		0x48, 0x81, 0x5d, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* SBB qword [RBP], 0xabafeebb */
		0x48, 0x81, 0x1e, 0xbb, 0xee, 0xaf, 0xab,  /* SBB qword [RSI], 0xabafeebb */
		0x48, 0x81, 0x1f, 0xbb, 0xee, 0xaf, 0xab   /* SBB qword [RDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x33, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SBB qword [RCX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* SBB qword [RDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* SBB qword [RBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* SBB qword [RSP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* SBB qword [RBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* SBB qword [RSI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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
		/* SBB qword [RDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
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


TEST(x64, AND_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x81 
	const uint8_t pOps[0x33] = {
		0x48, 0x81, 0x21, 0xbb, 0xee, 0xaf, 0xab,  /* AND qword [RCX], 0xabafeebb */
		0x48, 0x81, 0x22, 0xbb, 0xee, 0xaf, 0xab,  /* AND qword [RDX], 0xabafeebb */
		0x48, 0x81, 0x23, 0xbb, 0xee, 0xaf, 0xab,  /* AND qword [RBX], 0xabafeebb */
		0x48, 0x81, 0x24, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* AND qword [RSP], 0xabafeebb */
		0x48, 0x81, 0x65, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* AND qword [RBP], 0xabafeebb */
		0x48, 0x81, 0x26, 0xbb, 0xee, 0xaf, 0xab,  /* AND qword [RSI], 0xabafeebb */
		0x48, 0x81, 0x27, 0xbb, 0xee, 0xaf, 0xab   /* AND qword [RDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x33, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* AND qword [RCX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
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
		/* AND qword [RDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
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
		/* AND qword [RBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
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
		/* AND qword [RSP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
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
		/* AND qword [RBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
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
		/* AND qword [RSI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
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
		/* AND qword [RDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
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


TEST(x64, SUB_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x81 
	const uint8_t pOps[0x33] = {
		0x48, 0x81, 0x29, 0xbb, 0xee, 0xaf, 0xab,  /* SUB qword [RCX], 0xabafeebb */
		0x48, 0x81, 0x2a, 0xbb, 0xee, 0xaf, 0xab,  /* SUB qword [RDX], 0xabafeebb */
		0x48, 0x81, 0x2b, 0xbb, 0xee, 0xaf, 0xab,  /* SUB qword [RBX], 0xabafeebb */
		0x48, 0x81, 0x2c, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* SUB qword [RSP], 0xabafeebb */
		0x48, 0x81, 0x6d, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* SUB qword [RBP], 0xabafeebb */
		0x48, 0x81, 0x2e, 0xbb, 0xee, 0xaf, 0xab,  /* SUB qword [RSI], 0xabafeebb */
		0x48, 0x81, 0x2f, 0xbb, 0xee, 0xaf, 0xab   /* SUB qword [RDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x33, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SUB qword [RCX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* SUB qword [RDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* SUB qword [RBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* SUB qword [RSP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* SUB qword [RBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* SUB qword [RSI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* SUB qword [RDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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


TEST(x64, XOR_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x81 
	const uint8_t pOps[0x33] = {
		0x48, 0x81, 0x31, 0xbb, 0xee, 0xaf, 0xab,  /* XOR qword [RCX], 0xabafeebb */
		0x48, 0x81, 0x32, 0xbb, 0xee, 0xaf, 0xab,  /* XOR qword [RDX], 0xabafeebb */
		0x48, 0x81, 0x33, 0xbb, 0xee, 0xaf, 0xab,  /* XOR qword [RBX], 0xabafeebb */
		0x48, 0x81, 0x34, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* XOR qword [RSP], 0xabafeebb */
		0x48, 0x81, 0x75, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* XOR qword [RBP], 0xabafeebb */
		0x48, 0x81, 0x36, 0xbb, 0xee, 0xaf, 0xab,  /* XOR qword [RSI], 0xabafeebb */
		0x48, 0x81, 0x37, 0xbb, 0xee, 0xaf, 0xab   /* XOR qword [RDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x33, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* XOR qword [RCX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CMP_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x81 
	const uint8_t pOps[0x33] = {
		0x48, 0x81, 0x39, 0xbb, 0xee, 0xaf, 0xab,  /* CMP qword [RCX], 0xabafeebb */
		0x48, 0x81, 0x3a, 0xbb, 0xee, 0xaf, 0xab,  /* CMP qword [RDX], 0xabafeebb */
		0x48, 0x81, 0x3b, 0xbb, 0xee, 0xaf, 0xab,  /* CMP qword [RBX], 0xabafeebb */
		0x48, 0x81, 0x3c, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* CMP qword [RSP], 0xabafeebb */
		0x48, 0x81, 0x7d, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* CMP qword [RBP], 0xabafeebb */
		0x48, 0x81, 0x3e, 0xbb, 0xee, 0xaf, 0xab,  /* CMP qword [RSI], 0xabafeebb */
		0x48, 0x81, 0x3f, 0xbb, 0xee, 0xaf, 0xab   /* CMP qword [RDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x33, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* CMP qword [RCX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* CMP qword [RDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* CMP qword [RBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* CMP qword [RSP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* CMP qword [RBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* CMP qword [RSI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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
		/* CMP qword [RDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
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


TEST(x64, ADD_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x1e] = {
		0x48, 0x83, 0x1, 0x63,  /* ADD qword [RCX], 99 */
		0x48, 0x83, 0x2, 0x63,  /* ADD qword [RDX], 99 */
		0x48, 0x83, 0x3, 0x63,  /* ADD qword [RBX], 99 */
		0x48, 0x83, 0x4, 0x24, 0x63,  /* ADD qword [RSP], 99 */
		0x48, 0x83, 0x45, 0x0, 0x63,  /* ADD qword [RBP], 99 */
		0x48, 0x83, 0x6, 0x63,  /* ADD qword [RSI], 99 */
		0x48, 0x83, 0x7, 0x63   /* ADD qword [RDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ADD qword [RCX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADD qword [RDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADD qword [RBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADD qword [RSP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADD qword [RBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADD qword [RSI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADD qword [RDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ADD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, OR_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x1e] = {
		0x48, 0x83, 0x9, 0x63,  /* OR qword [RCX], 99 */
		0x48, 0x83, 0xa, 0x63,  /* OR qword [RDX], 99 */
		0x48, 0x83, 0xb, 0x63,  /* OR qword [RBX], 99 */
		0x48, 0x83, 0xc, 0x24, 0x63,  /* OR qword [RSP], 99 */
		0x48, 0x83, 0x4d, 0x0, 0x63,  /* OR qword [RBP], 99 */
		0x48, 0x83, 0xe, 0x63,  /* OR qword [RSI], 99 */
		0x48, 0x83, 0xf, 0x63   /* OR qword [RDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* OR qword [RCX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* OR qword [RDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* OR qword [RBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* OR qword [RSP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* OR qword [RBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* OR qword [RSI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* OR qword [RDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::OR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x10,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, ADC_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x1e] = {
		0x48, 0x83, 0x11, 0x63,  /* ADC qword [RCX], 99 */
		0x48, 0x83, 0x12, 0x63,  /* ADC qword [RDX], 99 */
		0x48, 0x83, 0x13, 0x63,  /* ADC qword [RBX], 99 */
		0x48, 0x83, 0x14, 0x24, 0x63,  /* ADC qword [RSP], 99 */
		0x48, 0x83, 0x55, 0x0, 0x63,  /* ADC qword [RBP], 99 */
		0x48, 0x83, 0x16, 0x63,  /* ADC qword [RSI], 99 */
		0x48, 0x83, 0x17, 0x63   /* ADC qword [RDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ADC qword [RCX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RSI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADC qword [RDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ADC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SBB_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x1e] = {
		0x48, 0x83, 0x19, 0x63,  /* SBB qword [RCX], 99 */
		0x48, 0x83, 0x1a, 0x63,  /* SBB qword [RDX], 99 */
		0x48, 0x83, 0x1b, 0x63,  /* SBB qword [RBX], 99 */
		0x48, 0x83, 0x1c, 0x24, 0x63,  /* SBB qword [RSP], 99 */
		0x48, 0x83, 0x5d, 0x0, 0x63,  /* SBB qword [RBP], 99 */
		0x48, 0x83, 0x1e, 0x63,  /* SBB qword [RSI], 99 */
		0x48, 0x83, 0x1f, 0x63   /* SBB qword [RDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SBB qword [RCX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RSI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SBB qword [RDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SBB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x1,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, AND_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x1e] = {
		0x48, 0x83, 0x21, 0x63,  /* AND qword [RCX], 99 */
		0x48, 0x83, 0x22, 0x63,  /* AND qword [RDX], 99 */
		0x48, 0x83, 0x23, 0x63,  /* AND qword [RBX], 99 */
		0x48, 0x83, 0x24, 0x24, 0x63,  /* AND qword [RSP], 99 */
		0x48, 0x83, 0x65, 0x0, 0x63,  /* AND qword [RBP], 99 */
		0x48, 0x83, 0x26, 0x63,  /* AND qword [RSI], 99 */
		0x48, 0x83, 0x27, 0x63   /* AND qword [RDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* AND qword [RCX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RSI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND qword [RDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, SUB_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x1e] = {
		0x48, 0x83, 0x29, 0x63,  /* SUB qword [RCX], 99 */
		0x48, 0x83, 0x2a, 0x63,  /* SUB qword [RDX], 99 */
		0x48, 0x83, 0x2b, 0x63,  /* SUB qword [RBX], 99 */
		0x48, 0x83, 0x2c, 0x24, 0x63,  /* SUB qword [RSP], 99 */
		0x48, 0x83, 0x6d, 0x0, 0x63,  /* SUB qword [RBP], 99 */
		0x48, 0x83, 0x2e, 0x63,  /* SUB qword [RSI], 99 */
		0x48, 0x83, 0x2f, 0x63   /* SUB qword [RDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SUB qword [RCX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RSI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB qword [RDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, XOR_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x1e] = {
		0x48, 0x83, 0x31, 0x63,  /* XOR qword [RCX], 99 */
		0x48, 0x83, 0x32, 0x63,  /* XOR qword [RDX], 99 */
		0x48, 0x83, 0x33, 0x63,  /* XOR qword [RBX], 99 */
		0x48, 0x83, 0x34, 0x24, 0x63,  /* XOR qword [RSP], 99 */
		0x48, 0x83, 0x75, 0x0, 0x63,  /* XOR qword [RBP], 99 */
		0x48, 0x83, 0x36, 0x63,  /* XOR qword [RSI], 99 */
		0x48, 0x83, 0x37, 0x63   /* XOR qword [RDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* XOR qword [RCX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RSI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR qword [RDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CMP_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x1e] = {
		0x48, 0x83, 0x39, 0x63,  /* CMP qword [RCX], 99 */
		0x48, 0x83, 0x3a, 0x63,  /* CMP qword [RDX], 99 */
		0x48, 0x83, 0x3b, 0x63,  /* CMP qword [RBX], 99 */
		0x48, 0x83, 0x3c, 0x24, 0x63,  /* CMP qword [RSP], 99 */
		0x48, 0x83, 0x7d, 0x0, 0x63,  /* CMP qword [RBP], 99 */
		0x48, 0x83, 0x3e, 0x63,  /* CMP qword [RSI], 99 */
		0x48, 0x83, 0x3f, 0x63   /* CMP qword [RDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* CMP qword [RCX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RSI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP qword [RDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, TEST_O_RM_8_REG_8)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0x84 
	const uint8_t pOps[0x12] = {
		0x84, 0xc9,  /* TEST CL, CL */
		0x84, 0xd1,  /* TEST CL, DL */
		0x84, 0xd9,  /* TEST CL, BL */
		0x84, 0xca,  /* TEST DL, CL */
		0x84, 0xd2,  /* TEST DL, DL */
		0x84, 0xda,  /* TEST DL, BL */
		0x84, 0xcb,  /* TEST BL, CL */
		0x84, 0xd3,  /* TEST BL, DL */
		0x84, 0xdb   /* TEST BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x9_sz, instructionCount);
	{
		/* TEST CL, CL */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CL, DL */
		const Instruction& inst = instructions[0x1];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CL, BL */
		const Instruction& inst = instructions[0x2];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, CL */
		const Instruction& inst = instructions[0x3];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, DL */
		const Instruction& inst = instructions[0x4];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, BL */
		const Instruction& inst = instructions[0x5];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, CL */
		const Instruction& inst = instructions[0x6];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, DL */
		const Instruction& inst = instructions[0x7];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, BL */
		const Instruction& inst = instructions[0x8];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, TEST_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x85 
	const uint8_t pOps[0xb8] = {
		0x48, 0x85, 0x1,  /* TEST qword [RCX], RAX */
		0x48, 0x85, 0x9,  /* TEST qword [RCX], RCX */
		0x48, 0x85, 0x11,  /* TEST qword [RCX], RDX */
		0x48, 0x85, 0x19,  /* TEST qword [RCX], RBX */
		0x48, 0x85, 0x21,  /* TEST qword [RCX], RSP */
		0x48, 0x85, 0x29,  /* TEST qword [RCX], RBP */
		0x48, 0x85, 0x31,  /* TEST qword [RCX], RSI */
		0x48, 0x85, 0x39,  /* TEST qword [RCX], RDI */
		0x48, 0x85, 0x2,  /* TEST qword [RDX], RAX */
		0x48, 0x85, 0xa,  /* TEST qword [RDX], RCX */
		0x48, 0x85, 0x12,  /* TEST qword [RDX], RDX */
		0x48, 0x85, 0x1a,  /* TEST qword [RDX], RBX */
		0x48, 0x85, 0x22,  /* TEST qword [RDX], RSP */
		0x48, 0x85, 0x2a,  /* TEST qword [RDX], RBP */
		0x48, 0x85, 0x32,  /* TEST qword [RDX], RSI */
		0x48, 0x85, 0x3a,  /* TEST qword [RDX], RDI */
		0x48, 0x85, 0x3,  /* TEST qword [RBX], RAX */
		0x48, 0x85, 0xb,  /* TEST qword [RBX], RCX */
		0x48, 0x85, 0x13,  /* TEST qword [RBX], RDX */
		0x48, 0x85, 0x1b,  /* TEST qword [RBX], RBX */
		0x48, 0x85, 0x23,  /* TEST qword [RBX], RSP */
		0x48, 0x85, 0x2b,  /* TEST qword [RBX], RBP */
		0x48, 0x85, 0x33,  /* TEST qword [RBX], RSI */
		0x48, 0x85, 0x3b,  /* TEST qword [RBX], RDI */
		0x48, 0x85, 0x4, 0x24,  /* TEST qword [RSP], RAX */
		0x48, 0x85, 0xc, 0x24,  /* TEST qword [RSP], RCX */
		0x48, 0x85, 0x14, 0x24,  /* TEST qword [RSP], RDX */
		0x48, 0x85, 0x1c, 0x24,  /* TEST qword [RSP], RBX */
		0x48, 0x85, 0x24, 0x24,  /* TEST qword [RSP], RSP */
		0x48, 0x85, 0x2c, 0x24,  /* TEST qword [RSP], RBP */
		0x48, 0x85, 0x34, 0x24,  /* TEST qword [RSP], RSI */
		0x48, 0x85, 0x3c, 0x24,  /* TEST qword [RSP], RDI */
		0x48, 0x85, 0x45, 0x0,  /* TEST qword [RBP], RAX */
		0x48, 0x85, 0x4d, 0x0,  /* TEST qword [RBP], RCX */
		0x48, 0x85, 0x55, 0x0,  /* TEST qword [RBP], RDX */
		0x48, 0x85, 0x5d, 0x0,  /* TEST qword [RBP], RBX */
		0x48, 0x85, 0x65, 0x0,  /* TEST qword [RBP], RSP */
		0x48, 0x85, 0x6d, 0x0,  /* TEST qword [RBP], RBP */
		0x48, 0x85, 0x75, 0x0,  /* TEST qword [RBP], RSI */
		0x48, 0x85, 0x7d, 0x0,  /* TEST qword [RBP], RDI */
		0x48, 0x85, 0x6,  /* TEST qword [RSI], RAX */
		0x48, 0x85, 0xe,  /* TEST qword [RSI], RCX */
		0x48, 0x85, 0x16,  /* TEST qword [RSI], RDX */
		0x48, 0x85, 0x1e,  /* TEST qword [RSI], RBX */
		0x48, 0x85, 0x26,  /* TEST qword [RSI], RSP */
		0x48, 0x85, 0x2e,  /* TEST qword [RSI], RBP */
		0x48, 0x85, 0x36,  /* TEST qword [RSI], RSI */
		0x48, 0x85, 0x3e,  /* TEST qword [RSI], RDI */
		0x48, 0x85, 0x7,  /* TEST qword [RDI], RAX */
		0x48, 0x85, 0xf,  /* TEST qword [RDI], RCX */
		0x48, 0x85, 0x17,  /* TEST qword [RDI], RDX */
		0x48, 0x85, 0x1f,  /* TEST qword [RDI], RBX */
		0x48, 0x85, 0x27,  /* TEST qword [RDI], RSP */
		0x48, 0x85, 0x2f,  /* TEST qword [RDI], RBP */
		0x48, 0x85, 0x37,  /* TEST qword [RDI], RSI */
		0x48, 0x85, 0x3f   /* TEST qword [RDI], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* TEST qword [RCX], RAX */
		const Instruction& inst = instructions[0x0];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RCX], RCX */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RCX], RDX */
		const Instruction& inst = instructions[0x2];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RCX], RBX */
		const Instruction& inst = instructions[0x3];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RCX], RSP */
		const Instruction& inst = instructions[0x4];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RCX], RBP */
		const Instruction& inst = instructions[0x5];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RCX], RSI */
		const Instruction& inst = instructions[0x6];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RCX], RDI */
		const Instruction& inst = instructions[0x7];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDX], RAX */
		const Instruction& inst = instructions[0x8];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDX], RCX */
		const Instruction& inst = instructions[0x9];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDX], RDX */
		const Instruction& inst = instructions[0xa];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDX], RBX */
		const Instruction& inst = instructions[0xb];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDX], RSP */
		const Instruction& inst = instructions[0xc];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDX], RBP */
		const Instruction& inst = instructions[0xd];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDX], RSI */
		const Instruction& inst = instructions[0xe];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDX], RDI */
		const Instruction& inst = instructions[0xf];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBX], RAX */
		const Instruction& inst = instructions[0x10];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBX], RCX */
		const Instruction& inst = instructions[0x11];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBX], RDX */
		const Instruction& inst = instructions[0x12];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBX], RBX */
		const Instruction& inst = instructions[0x13];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBX], RSP */
		const Instruction& inst = instructions[0x14];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBX], RBP */
		const Instruction& inst = instructions[0x15];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBX], RSI */
		const Instruction& inst = instructions[0x16];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBX], RDI */
		const Instruction& inst = instructions[0x17];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSP], RAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSP], RCX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSP], RDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSP], RBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSP], RSP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSP], RBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSP], RSI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSP], RDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBP], RAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBP], RCX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBP], RDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBP], RBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBP], RSP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBP], RBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBP], RSI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RBP], RDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSI], RAX */
		const Instruction& inst = instructions[0x28];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSI], RCX */
		const Instruction& inst = instructions[0x29];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSI], RDX */
		const Instruction& inst = instructions[0x2a];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSI], RBX */
		const Instruction& inst = instructions[0x2b];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSI], RSP */
		const Instruction& inst = instructions[0x2c];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSI], RBP */
		const Instruction& inst = instructions[0x2d];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSI], RSI */
		const Instruction& inst = instructions[0x2e];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RSI], RDI */
		const Instruction& inst = instructions[0x2f];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDI], RAX */
		const Instruction& inst = instructions[0x30];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDI], RCX */
		const Instruction& inst = instructions[0x31];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDI], RDX */
		const Instruction& inst = instructions[0x32];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDI], RBX */
		const Instruction& inst = instructions[0x33];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDI], RSP */
		const Instruction& inst = instructions[0x34];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDI], RBP */
		const Instruction& inst = instructions[0x35];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDI], RSI */
		const Instruction& inst = instructions[0x36];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST qword [RDI], RDI */
		const Instruction& inst = instructions[0x37];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, XCHG_O_RM_8_REG_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x86 
	const uint8_t pOps[0x10] = {
		0x86, 0xd1,  /* XCHG CL, DL */
		0x86, 0xd9,  /* XCHG CL, BL */
		0x86, 0xca,  /* XCHG DL, CL */
		0x86, 0xd2,  /* XCHG DL, DL */
		0x86, 0xda,  /* XCHG DL, BL */
		0x86, 0xcb,  /* XCHG BL, CL */
		0x86, 0xd3,  /* XCHG BL, DL */
		0x86, 0xdb   /* XCHG BL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x8_sz, instructionCount);
	{
		/* XCHG CL, DL */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CL, BL */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DL, CL */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DL, DL */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DL, BL */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BL, CL */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BL, DL */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BL, BL */
		const Instruction& inst = instructions[0x7];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, XCHG_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x87 
	const uint8_t pOps[0xb5] = {
		0x48, 0x87, 0x9,  /* XCHG qword [RCX], RCX */
		0x48, 0x87, 0x11,  /* XCHG qword [RCX], RDX */
		0x48, 0x87, 0x19,  /* XCHG qword [RCX], RBX */
		0x48, 0x87, 0x21,  /* XCHG qword [RCX], RSP */
		0x48, 0x87, 0x29,  /* XCHG qword [RCX], RBP */
		0x48, 0x87, 0x31,  /* XCHG qword [RCX], RSI */
		0x48, 0x87, 0x39,  /* XCHG qword [RCX], RDI */
		0x48, 0x87, 0x2,  /* XCHG qword [RDX], RAX */
		0x48, 0x87, 0xa,  /* XCHG qword [RDX], RCX */
		0x48, 0x87, 0x12,  /* XCHG qword [RDX], RDX */
		0x48, 0x87, 0x1a,  /* XCHG qword [RDX], RBX */
		0x48, 0x87, 0x22,  /* XCHG qword [RDX], RSP */
		0x48, 0x87, 0x2a,  /* XCHG qword [RDX], RBP */
		0x48, 0x87, 0x32,  /* XCHG qword [RDX], RSI */
		0x48, 0x87, 0x3a,  /* XCHG qword [RDX], RDI */
		0x48, 0x87, 0x3,  /* XCHG qword [RBX], RAX */
		0x48, 0x87, 0xb,  /* XCHG qword [RBX], RCX */
		0x48, 0x87, 0x13,  /* XCHG qword [RBX], RDX */
		0x48, 0x87, 0x1b,  /* XCHG qword [RBX], RBX */
		0x48, 0x87, 0x23,  /* XCHG qword [RBX], RSP */
		0x48, 0x87, 0x2b,  /* XCHG qword [RBX], RBP */
		0x48, 0x87, 0x33,  /* XCHG qword [RBX], RSI */
		0x48, 0x87, 0x3b,  /* XCHG qword [RBX], RDI */
		0x48, 0x87, 0x4, 0x24,  /* XCHG qword [RSP], RAX */
		0x48, 0x87, 0xc, 0x24,  /* XCHG qword [RSP], RCX */
		0x48, 0x87, 0x14, 0x24,  /* XCHG qword [RSP], RDX */
		0x48, 0x87, 0x1c, 0x24,  /* XCHG qword [RSP], RBX */
		0x48, 0x87, 0x24, 0x24,  /* XCHG qword [RSP], RSP */
		0x48, 0x87, 0x2c, 0x24,  /* XCHG qword [RSP], RBP */
		0x48, 0x87, 0x34, 0x24,  /* XCHG qword [RSP], RSI */
		0x48, 0x87, 0x3c, 0x24,  /* XCHG qword [RSP], RDI */
		0x48, 0x87, 0x45, 0x0,  /* XCHG qword [RBP], RAX */
		0x48, 0x87, 0x4d, 0x0,  /* XCHG qword [RBP], RCX */
		0x48, 0x87, 0x55, 0x0,  /* XCHG qword [RBP], RDX */
		0x48, 0x87, 0x5d, 0x0,  /* XCHG qword [RBP], RBX */
		0x48, 0x87, 0x65, 0x0,  /* XCHG qword [RBP], RSP */
		0x48, 0x87, 0x6d, 0x0,  /* XCHG qword [RBP], RBP */
		0x48, 0x87, 0x75, 0x0,  /* XCHG qword [RBP], RSI */
		0x48, 0x87, 0x7d, 0x0,  /* XCHG qword [RBP], RDI */
		0x48, 0x87, 0x6,  /* XCHG qword [RSI], RAX */
		0x48, 0x87, 0xe,  /* XCHG qword [RSI], RCX */
		0x48, 0x87, 0x16,  /* XCHG qword [RSI], RDX */
		0x48, 0x87, 0x1e,  /* XCHG qword [RSI], RBX */
		0x48, 0x87, 0x26,  /* XCHG qword [RSI], RSP */
		0x48, 0x87, 0x2e,  /* XCHG qword [RSI], RBP */
		0x48, 0x87, 0x36,  /* XCHG qword [RSI], RSI */
		0x48, 0x87, 0x3e,  /* XCHG qword [RSI], RDI */
		0x48, 0x87, 0x7,  /* XCHG qword [RDI], RAX */
		0x48, 0x87, 0xf,  /* XCHG qword [RDI], RCX */
		0x48, 0x87, 0x17,  /* XCHG qword [RDI], RDX */
		0x48, 0x87, 0x1f,  /* XCHG qword [RDI], RBX */
		0x48, 0x87, 0x27,  /* XCHG qword [RDI], RSP */
		0x48, 0x87, 0x2f,  /* XCHG qword [RDI], RBP */
		0x48, 0x87, 0x37,  /* XCHG qword [RDI], RSI */
		0x48, 0x87, 0x3f   /* XCHG qword [RDI], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb5, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x37_sz, instructionCount);
	{
		/* XCHG qword [RCX], RCX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RCX], RDX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RCX], RBX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RCX], RSP */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RCX], RBP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RCX], RSI */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RCX], RDI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDX], RAX */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDX], RCX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDX], RDX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDX], RBX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDX], RSP */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDX], RBP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDX], RSI */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDX], RDI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBX], RAX */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBX], RCX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBX], RDX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBX], RBX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBX], RSP */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBX], RBP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBX], RSI */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBX], RDI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSP], RAX */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSP], RCX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSP], RDX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSP], RBX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSP], RSP */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSP], RBP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSP], RSI */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSP], RDI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBP], RAX */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBP], RCX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBP], RDX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBP], RBX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBP], RSP */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBP], RBP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBP], RSI */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RBP], RDI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSI], RAX */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSI], RCX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSI], RDX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSI], RBX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSI], RSP */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSI], RBP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSI], RSI */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RSI], RDI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDI], RAX */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDI], RCX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDI], RDX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDI], RBX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDI], RSP */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDI], RBP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDI], RSI */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG qword [RDI], RDI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOV_O_RM_8_REG_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x88 
	const uint8_t pOps[0x9] = {
		0x40, 0x88, 0xce,  /* MOV SIL, CL */
		0x40, 0x88, 0xd6,  /* MOV SIL, DL */
		0x40, 0x88, 0xde   /* MOV SIL, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* MOV SIL, CL */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SIL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x42)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SIL, DL */
		const Instruction& inst = instructions[0x1];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SIL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x42)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SIL, BL */
		const Instruction& inst = instructions[0x2];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SIL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x42)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOV_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x89 
	const uint8_t pOps[0xb8] = {
		0x48, 0x89, 0x1,  /* MOV qword [RCX], RAX */
		0x48, 0x89, 0x9,  /* MOV qword [RCX], RCX */
		0x48, 0x89, 0x11,  /* MOV qword [RCX], RDX */
		0x48, 0x89, 0x19,  /* MOV qword [RCX], RBX */
		0x48, 0x89, 0x21,  /* MOV qword [RCX], RSP */
		0x48, 0x89, 0x29,  /* MOV qword [RCX], RBP */
		0x48, 0x89, 0x31,  /* MOV qword [RCX], RSI */
		0x48, 0x89, 0x39,  /* MOV qword [RCX], RDI */
		0x48, 0x89, 0x2,  /* MOV qword [RDX], RAX */
		0x48, 0x89, 0xa,  /* MOV qword [RDX], RCX */
		0x48, 0x89, 0x12,  /* MOV qword [RDX], RDX */
		0x48, 0x89, 0x1a,  /* MOV qword [RDX], RBX */
		0x48, 0x89, 0x22,  /* MOV qword [RDX], RSP */
		0x48, 0x89, 0x2a,  /* MOV qword [RDX], RBP */
		0x48, 0x89, 0x32,  /* MOV qword [RDX], RSI */
		0x48, 0x89, 0x3a,  /* MOV qword [RDX], RDI */
		0x48, 0x89, 0x3,  /* MOV qword [RBX], RAX */
		0x48, 0x89, 0xb,  /* MOV qword [RBX], RCX */
		0x48, 0x89, 0x13,  /* MOV qword [RBX], RDX */
		0x48, 0x89, 0x1b,  /* MOV qword [RBX], RBX */
		0x48, 0x89, 0x23,  /* MOV qword [RBX], RSP */
		0x48, 0x89, 0x2b,  /* MOV qword [RBX], RBP */
		0x48, 0x89, 0x33,  /* MOV qword [RBX], RSI */
		0x48, 0x89, 0x3b,  /* MOV qword [RBX], RDI */
		0x48, 0x89, 0x4, 0x24,  /* MOV qword [RSP], RAX */
		0x48, 0x89, 0xc, 0x24,  /* MOV qword [RSP], RCX */
		0x48, 0x89, 0x14, 0x24,  /* MOV qword [RSP], RDX */
		0x48, 0x89, 0x1c, 0x24,  /* MOV qword [RSP], RBX */
		0x48, 0x89, 0x24, 0x24,  /* MOV qword [RSP], RSP */
		0x48, 0x89, 0x2c, 0x24,  /* MOV qword [RSP], RBP */
		0x48, 0x89, 0x34, 0x24,  /* MOV qword [RSP], RSI */
		0x48, 0x89, 0x3c, 0x24,  /* MOV qword [RSP], RDI */
		0x48, 0x89, 0x45, 0x0,  /* MOV qword [RBP], RAX */
		0x48, 0x89, 0x4d, 0x0,  /* MOV qword [RBP], RCX */
		0x48, 0x89, 0x55, 0x0,  /* MOV qword [RBP], RDX */
		0x48, 0x89, 0x5d, 0x0,  /* MOV qword [RBP], RBX */
		0x48, 0x89, 0x65, 0x0,  /* MOV qword [RBP], RSP */
		0x48, 0x89, 0x6d, 0x0,  /* MOV qword [RBP], RBP */
		0x48, 0x89, 0x75, 0x0,  /* MOV qword [RBP], RSI */
		0x48, 0x89, 0x7d, 0x0,  /* MOV qword [RBP], RDI */
		0x48, 0x89, 0x6,  /* MOV qword [RSI], RAX */
		0x48, 0x89, 0xe,  /* MOV qword [RSI], RCX */
		0x48, 0x89, 0x16,  /* MOV qword [RSI], RDX */
		0x48, 0x89, 0x1e,  /* MOV qword [RSI], RBX */
		0x48, 0x89, 0x26,  /* MOV qword [RSI], RSP */
		0x48, 0x89, 0x2e,  /* MOV qword [RSI], RBP */
		0x48, 0x89, 0x36,  /* MOV qword [RSI], RSI */
		0x48, 0x89, 0x3e,  /* MOV qword [RSI], RDI */
		0x48, 0x89, 0x7,  /* MOV qword [RDI], RAX */
		0x48, 0x89, 0xf,  /* MOV qword [RDI], RCX */
		0x48, 0x89, 0x17,  /* MOV qword [RDI], RDX */
		0x48, 0x89, 0x1f,  /* MOV qword [RDI], RBX */
		0x48, 0x89, 0x27,  /* MOV qword [RDI], RSP */
		0x48, 0x89, 0x2f,  /* MOV qword [RDI], RBP */
		0x48, 0x89, 0x37,  /* MOV qword [RDI], RSI */
		0x48, 0x89, 0x3f   /* MOV qword [RDI], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* MOV qword [RCX], RAX */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RCX], RCX */
		const Instruction& inst = instructions[0x1];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RCX], RDX */
		const Instruction& inst = instructions[0x2];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RCX], RBX */
		const Instruction& inst = instructions[0x3];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RCX], RSP */
		const Instruction& inst = instructions[0x4];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RCX], RBP */
		const Instruction& inst = instructions[0x5];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RCX], RSI */
		const Instruction& inst = instructions[0x6];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RCX], RDI */
		const Instruction& inst = instructions[0x7];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDX], RAX */
		const Instruction& inst = instructions[0x8];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDX], RCX */
		const Instruction& inst = instructions[0x9];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDX], RDX */
		const Instruction& inst = instructions[0xa];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDX], RBX */
		const Instruction& inst = instructions[0xb];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDX], RSP */
		const Instruction& inst = instructions[0xc];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDX], RBP */
		const Instruction& inst = instructions[0xd];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDX], RSI */
		const Instruction& inst = instructions[0xe];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDX], RDI */
		const Instruction& inst = instructions[0xf];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBX], RAX */
		const Instruction& inst = instructions[0x10];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBX], RCX */
		const Instruction& inst = instructions[0x11];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBX], RDX */
		const Instruction& inst = instructions[0x12];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBX], RBX */
		const Instruction& inst = instructions[0x13];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBX], RSP */
		const Instruction& inst = instructions[0x14];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBX], RBP */
		const Instruction& inst = instructions[0x15];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBX], RSI */
		const Instruction& inst = instructions[0x16];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBX], RDI */
		const Instruction& inst = instructions[0x17];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSP], RAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSP], RCX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSP], RDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSP], RBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSP], RSP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSP], RBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSP], RSI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSP], RDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBP], RAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBP], RCX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBP], RDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBP], RBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBP], RSP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBP], RBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBP], RSI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RBP], RDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSI], RAX */
		const Instruction& inst = instructions[0x28];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSI], RCX */
		const Instruction& inst = instructions[0x29];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSI], RDX */
		const Instruction& inst = instructions[0x2a];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSI], RBX */
		const Instruction& inst = instructions[0x2b];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSI], RSP */
		const Instruction& inst = instructions[0x2c];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSI], RBP */
		const Instruction& inst = instructions[0x2d];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSI], RSI */
		const Instruction& inst = instructions[0x2e];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RSI], RDI */
		const Instruction& inst = instructions[0x2f];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDI], RAX */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDI], RCX */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDI], RDX */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDI], RBX */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDI], RSP */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDI], RBP */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDI], RSI */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV qword [RDI], RDI */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOV_O_REG_8_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x8a 
	const uint8_t pOps[0x9] = {
		0x40, 0x88, 0xf1,  /* MOV CL, SIL */
		0x40, 0x88, 0xf2,  /* MOV DL, SIL */
		0x40, 0x88, 0xf3   /* MOV BL, SIL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
	{
		/* MOV CL, SIL */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SIL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x42)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DL, SIL */
		const Instruction& inst = instructions[0x1];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SIL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x42)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BL, SIL */
		const Instruction& inst = instructions[0x2];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SIL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x42)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOV_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x8b 
	const uint8_t pOps[0xb8] = {
		0x48, 0x8b, 0x1,  /* MOV RAX, qword [RCX] */
		0x48, 0x8b, 0x2,  /* MOV RAX, qword [RDX] */
		0x48, 0x8b, 0x3,  /* MOV RAX, qword [RBX] */
		0x48, 0x8b, 0x4, 0x24,  /* MOV RAX, qword [RSP] */
		0x48, 0x8b, 0x45, 0x0,  /* MOV RAX, qword [RBP] */
		0x48, 0x8b, 0x6,  /* MOV RAX, qword [RSI] */
		0x48, 0x8b, 0x7,  /* MOV RAX, qword [RDI] */
		0x48, 0x8b, 0x9,  /* MOV RCX, qword [RCX] */
		0x48, 0x8b, 0xa,  /* MOV RCX, qword [RDX] */
		0x48, 0x8b, 0xb,  /* MOV RCX, qword [RBX] */
		0x48, 0x8b, 0xc, 0x24,  /* MOV RCX, qword [RSP] */
		0x48, 0x8b, 0x4d, 0x0,  /* MOV RCX, qword [RBP] */
		0x48, 0x8b, 0xe,  /* MOV RCX, qword [RSI] */
		0x48, 0x8b, 0xf,  /* MOV RCX, qword [RDI] */
		0x48, 0x8b, 0x11,  /* MOV RDX, qword [RCX] */
		0x48, 0x8b, 0x12,  /* MOV RDX, qword [RDX] */
		0x48, 0x8b, 0x13,  /* MOV RDX, qword [RBX] */
		0x48, 0x8b, 0x14, 0x24,  /* MOV RDX, qword [RSP] */
		0x48, 0x8b, 0x55, 0x0,  /* MOV RDX, qword [RBP] */
		0x48, 0x8b, 0x16,  /* MOV RDX, qword [RSI] */
		0x48, 0x8b, 0x17,  /* MOV RDX, qword [RDI] */
		0x48, 0x8b, 0x19,  /* MOV RBX, qword [RCX] */
		0x48, 0x8b, 0x1a,  /* MOV RBX, qword [RDX] */
		0x48, 0x8b, 0x1b,  /* MOV RBX, qword [RBX] */
		0x48, 0x8b, 0x1c, 0x24,  /* MOV RBX, qword [RSP] */
		0x48, 0x8b, 0x5d, 0x0,  /* MOV RBX, qword [RBP] */
		0x48, 0x8b, 0x1e,  /* MOV RBX, qword [RSI] */
		0x48, 0x8b, 0x1f,  /* MOV RBX, qword [RDI] */
		0x48, 0x8b, 0x21,  /* MOV RSP, qword [RCX] */
		0x48, 0x8b, 0x22,  /* MOV RSP, qword [RDX] */
		0x48, 0x8b, 0x23,  /* MOV RSP, qword [RBX] */
		0x48, 0x8b, 0x24, 0x24,  /* MOV RSP, qword [RSP] */
		0x48, 0x8b, 0x65, 0x0,  /* MOV RSP, qword [RBP] */
		0x48, 0x8b, 0x26,  /* MOV RSP, qword [RSI] */
		0x48, 0x8b, 0x27,  /* MOV RSP, qword [RDI] */
		0x48, 0x8b, 0x29,  /* MOV RBP, qword [RCX] */
		0x48, 0x8b, 0x2a,  /* MOV RBP, qword [RDX] */
		0x48, 0x8b, 0x2b,  /* MOV RBP, qword [RBX] */
		0x48, 0x8b, 0x2c, 0x24,  /* MOV RBP, qword [RSP] */
		0x48, 0x8b, 0x6d, 0x0,  /* MOV RBP, qword [RBP] */
		0x48, 0x8b, 0x2e,  /* MOV RBP, qword [RSI] */
		0x48, 0x8b, 0x2f,  /* MOV RBP, qword [RDI] */
		0x48, 0x8b, 0x31,  /* MOV RSI, qword [RCX] */
		0x48, 0x8b, 0x32,  /* MOV RSI, qword [RDX] */
		0x48, 0x8b, 0x33,  /* MOV RSI, qword [RBX] */
		0x48, 0x8b, 0x34, 0x24,  /* MOV RSI, qword [RSP] */
		0x48, 0x8b, 0x75, 0x0,  /* MOV RSI, qword [RBP] */
		0x48, 0x8b, 0x36,  /* MOV RSI, qword [RSI] */
		0x48, 0x8b, 0x37,  /* MOV RSI, qword [RDI] */
		0x48, 0x8b, 0x39,  /* MOV RDI, qword [RCX] */
		0x48, 0x8b, 0x3a,  /* MOV RDI, qword [RDX] */
		0x48, 0x8b, 0x3b,  /* MOV RDI, qword [RBX] */
		0x48, 0x8b, 0x3c, 0x24,  /* MOV RDI, qword [RSP] */
		0x48, 0x8b, 0x7d, 0x0,  /* MOV RDI, qword [RBP] */
		0x48, 0x8b, 0x3e,  /* MOV RDI, qword [RSI] */
		0x48, 0x8b, 0x3f   /* MOV RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* MOV RAX, qword [RCX] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, qword [RSI] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBX, qword [RDI] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, qword [RCX] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, qword [RDX] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, qword [RBX] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, qword [RSI] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSP, qword [RDI] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, qword [RCX] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RSI, qword [RDI] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, qword [RCX] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, qword [RDX] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, qword [RBX] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, qword [RSI] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV RDI, qword [RDI] */
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

