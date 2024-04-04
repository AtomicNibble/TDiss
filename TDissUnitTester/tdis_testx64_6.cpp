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
			
TEST(x64_SSE2, PMULUDQ_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf4 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xf4, 0xc0,  /* PMULUDQ xmm0, xmm0 */
		0x66, 0xf, 0xf4, 0xc1,  /* PMULUDQ xmm0, xmm1 */
		0x66, 0xf, 0xf4, 0xc8,  /* PMULUDQ xmm1, xmm0 */
		0x66, 0xf, 0xf4, 0xc9   /* PMULUDQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULUDQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULUDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULUDQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULUDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULUDQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULUDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULUDQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULUDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSUBQ_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xfb 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xfb, 0xc0,  /* PSUBQ xmm0, xmm0 */
		0x66, 0xf, 0xfb, 0xc1,  /* PSUBQ xmm0, xmm1 */
		0x66, 0xf, 0xfb, 0xc8,  /* PSUBQ xmm1, xmm0 */
		0x66, 0xf, 0xfb, 0xc9   /* PSUBQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVUPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x10 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x10, 0xc0,  /* MOVUPD xmm0, xmm0 */
		0x66, 0xf, 0x10, 0xc1,  /* MOVUPD xmm0, xmm1 */
		0x66, 0xf, 0x10, 0xc8,  /* MOVUPD xmm1, xmm0 */
		0x66, 0xf, 0x10, 0xc9   /* MOVUPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVUPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVUPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVUPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVUPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVUPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVUPD_O_XMM_128_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x11 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x10, 0xc0,  /* MOVUPD xmm0, xmm0 */
		0x66, 0xf, 0x10, 0xc1,  /* MOVUPD xmm0, xmm1 */
		0x66, 0xf, 0x10, 0xc8,  /* MOVUPD xmm1, xmm0 */
		0x66, 0xf, 0x10, 0xc9   /* MOVUPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVUPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVUPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVUPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVUPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVUPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVLPD_O_XMM_MEM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x12 
	const uint8_t pOps[0x12] = {
		0x66, 0xf, 0x12, 0x4, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVLPD xmm0, [rdx*4+0x12345678] */
		0x66, 0xf, 0x12, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12   /* MOVLPD xmm1, [rdx*4+0x12345678] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOVLPD xmm0, [rdx*4+0x12345678] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVLPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x9,
			0x12345678,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVLPD xmm1, [rdx*4+0x12345678] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVLPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x9,
			0x12345678,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVLPD_O_MEM_64_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x13 
	const uint8_t pOps[0x12] = {
		0x66, 0xf, 0x13, 0x4, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVLPD [rdx*4+0x12345678], xmm0 */
		0x66, 0xf, 0x13, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12   /* MOVLPD [rdx*4+0x12345678], xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOVLPD [rdx*4+0x12345678], xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVLPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x9,
			0x12345678,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVLPD [rdx*4+0x12345678], xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVLPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x9,
			0x12345678,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, UNPCKLPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x14 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x14, 0xc0,  /* UNPCKLPD xmm0, xmm0 */
		0x66, 0xf, 0x14, 0xc1,  /* UNPCKLPD xmm0, xmm1 */
		0x66, 0xf, 0x14, 0xc8,  /* UNPCKLPD xmm1, xmm0 */
		0x66, 0xf, 0x14, 0xc9   /* UNPCKLPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* UNPCKLPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::UNPCKLPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKLPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::UNPCKLPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKLPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::UNPCKLPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKLPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::UNPCKLPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, UNPCKHPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x15 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x15, 0xc0,  /* UNPCKHPD xmm0, xmm0 */
		0x66, 0xf, 0x15, 0xc1,  /* UNPCKHPD xmm0, xmm1 */
		0x66, 0xf, 0x15, 0xc8,  /* UNPCKHPD xmm1, xmm0 */
		0x66, 0xf, 0x15, 0xc9   /* UNPCKHPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* UNPCKHPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::UNPCKHPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKHPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::UNPCKHPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKHPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::UNPCKHPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKHPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::UNPCKHPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVHPD_O_XMM_MEM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x16 
	const uint8_t pOps[0x12] = {
		0x66, 0xf, 0x16, 0x4, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVHPD xmm0, [rdx*4+0x12345678] */
		0x66, 0xf, 0x16, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12   /* MOVHPD xmm1, [rdx*4+0x12345678] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOVHPD xmm0, [rdx*4+0x12345678] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVHPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x9,
			0x12345678,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVHPD xmm1, [rdx*4+0x12345678] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVHPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x9,
			0x12345678,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVHPD_O_MEM_64_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x17 
	const uint8_t pOps[0x12] = {
		0x66, 0xf, 0x17, 0x4, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVHPD [rdx*4+0x12345678], xmm0 */
		0x66, 0xf, 0x17, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12   /* MOVHPD [rdx*4+0x12345678], xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOVHPD [rdx*4+0x12345678], xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVHPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x9,
			0x12345678,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVHPD [rdx*4+0x12345678], xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVHPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x9,
			0x12345678,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVAPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x28 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x28, 0xc0,  /* MOVAPD xmm0, xmm0 */
		0x66, 0xf, 0x28, 0xc1,  /* MOVAPD xmm0, xmm1 */
		0x66, 0xf, 0x28, 0xc8,  /* MOVAPD xmm1, xmm0 */
		0x66, 0xf, 0x28, 0xc9   /* MOVAPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVAPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVAPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVAPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVAPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVAPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVAPD_O_XMM_128_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x29 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x28, 0xc0,  /* MOVAPD xmm0, xmm0 */
		0x66, 0xf, 0x28, 0xc1,  /* MOVAPD xmm0, xmm1 */
		0x66, 0xf, 0x28, 0xc8,  /* MOVAPD xmm1, xmm0 */
		0x66, 0xf, 0x28, 0xc9   /* MOVAPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVAPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVAPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVAPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVAPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVAPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, CVTPI2PD_O_XMM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2a 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x2a, 0xc0,  /* CVTPI2PD xmm0, mm0 */
		0x66, 0xf, 0x2a, 0xc1,  /* CVTPI2PD xmm0, mm1 */
		0x66, 0xf, 0x2a, 0xc8,  /* CVTPI2PD xmm1, mm0 */
		0x66, 0xf, 0x2a, 0xc9   /* CVTPI2PD xmm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTPI2PD xmm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTPI2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPI2PD xmm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTPI2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPI2PD xmm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTPI2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPI2PD xmm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTPI2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVNTPD_O_MEM_128_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2b 
	const uint8_t pOps[0x12] = {
		0x66, 0xf, 0x2b, 0x4, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTPD [rdx*4+0x12345678], xmm0 */
		0x66, 0xf, 0x2b, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12   /* MOVNTPD [rdx*4+0x12345678], xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x12, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOVNTPD [rdx*4+0x12345678], xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVNTPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x9,
			0x12345678,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTPD [rdx*4+0x12345678], xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVNTPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x9,
			0x12345678,
			0x4,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, CVTTPD2PI_O_MM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2c 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x2c, 0xc0,  /* CVTTPD2PI mm0, xmm0 */
		0x66, 0xf, 0x2c, 0xc1,  /* CVTTPD2PI mm0, xmm1 */
		0x66, 0xf, 0x2c, 0xc8,  /* CVTTPD2PI mm1, xmm0 */
		0x66, 0xf, 0x2c, 0xc9   /* CVTTPD2PI mm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTTPD2PI mm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTTPD2PI,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTPD2PI mm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTTPD2PI,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTPD2PI mm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTTPD2PI,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTPD2PI mm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTTPD2PI,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, CVTPD2PI_O_MM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2d 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x2d, 0xc0,  /* CVTPD2PI mm0, xmm0 */
		0x66, 0xf, 0x2d, 0xc1,  /* CVTPD2PI mm0, xmm1 */
		0x66, 0xf, 0x2d, 0xc8,  /* CVTPD2PI mm1, xmm0 */
		0x66, 0xf, 0x2d, 0xc9   /* CVTPD2PI mm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTPD2PI mm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTPD2PI,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPD2PI mm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTPD2PI,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPD2PI mm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTPD2PI,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPD2PI mm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTPD2PI,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, UCOMISD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2e 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x2e, 0xc0,  /* UCOMISD xmm0, xmm0 */
		0x66, 0xf, 0x2e, 0xc1,  /* UCOMISD xmm0, xmm1 */
		0x66, 0xf, 0x2e, 0xc8,  /* UCOMISD xmm1, xmm0 */
		0x66, 0xf, 0x2e, 0xc9   /* UCOMISD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* UCOMISD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::UCOMISD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UCOMISD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::UCOMISD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UCOMISD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::UCOMISD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UCOMISD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::UCOMISD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, COMISD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2f 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x2f, 0xc0,  /* COMISD xmm0, xmm0 */
		0x66, 0xf, 0x2f, 0xc1,  /* COMISD xmm0, xmm1 */
		0x66, 0xf, 0x2f, 0xc8,  /* COMISD xmm1, xmm0 */
		0x66, 0xf, 0x2f, 0xc9   /* COMISD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* COMISD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::COMISD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* COMISD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::COMISD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* COMISD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::COMISD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* COMISD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::COMISD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVMSKPD_O_REG_32_XMM_RM)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0xf 0x50 
	const uint8_t pOps[0x38] = {
		0x66, 0xf, 0x50, 0xc8,  /* MOVMSKPD ECX, xmm0 */
		0x66, 0xf, 0x50, 0xc9,  /* MOVMSKPD ECX, xmm1 */
		0x66, 0xf, 0x50, 0xd0,  /* MOVMSKPD EDX, xmm0 */
		0x66, 0xf, 0x50, 0xd1,  /* MOVMSKPD EDX, xmm1 */
		0x66, 0xf, 0x50, 0xd8,  /* MOVMSKPD EBX, xmm0 */
		0x66, 0xf, 0x50, 0xd9,  /* MOVMSKPD EBX, xmm1 */
		0x66, 0xf, 0x50, 0xe0,  /* MOVMSKPD ESP, xmm0 */
		0x66, 0xf, 0x50, 0xe1,  /* MOVMSKPD ESP, xmm1 */
		0x66, 0xf, 0x50, 0xe8,  /* MOVMSKPD EBP, xmm0 */
		0x66, 0xf, 0x50, 0xe9,  /* MOVMSKPD EBP, xmm1 */
		0x66, 0xf, 0x50, 0xf0,  /* MOVMSKPD ESI, xmm0 */
		0x66, 0xf, 0x50, 0xf1,  /* MOVMSKPD ESI, xmm1 */
		0x66, 0xf, 0x50, 0xf8,  /* MOVMSKPD EDI, xmm0 */
		0x66, 0xf, 0x50, 0xf9   /* MOVMSKPD EDI, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x38, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0xe_sz, instructionCount);
	{
		/* MOVMSKPD ECX, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD ECX, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD EDX, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD EDX, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD EBX, xmm0 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD EBX, xmm1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD ESP, xmm0 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD ESP, xmm1 */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD EBP, xmm0 */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD EBP, xmm1 */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD ESI, xmm0 */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD ESI, xmm1 */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD EDI, xmm0 */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPD EDI, xmm1 */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, SQRTPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x51 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x51, 0xc0,  /* SQRTPD xmm0, xmm0 */
		0x66, 0xf, 0x51, 0xc1,  /* SQRTPD xmm0, xmm1 */
		0x66, 0xf, 0x51, 0xc8,  /* SQRTPD xmm1, xmm0 */
		0x66, 0xf, 0x51, 0xc9   /* SQRTPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* SQRTPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SQRTPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SQRTPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SQRTPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SQRTPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SQRTPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SQRTPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SQRTPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, ANDPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x54 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x54, 0xc0,  /* ANDPD xmm0, xmm0 */
		0x66, 0xf, 0x54, 0xc1,  /* ANDPD xmm0, xmm1 */
		0x66, 0xf, 0x54, 0xc8,  /* ANDPD xmm1, xmm0 */
		0x66, 0xf, 0x54, 0xc9   /* ANDPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ANDPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ANDPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ANDPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ANDPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ANDPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, ANDNPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x55 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x55, 0xc0,  /* ANDNPD xmm0, xmm0 */
		0x66, 0xf, 0x55, 0xc1,  /* ANDNPD xmm0, xmm1 */
		0x66, 0xf, 0x55, 0xc8,  /* ANDNPD xmm1, xmm0 */
		0x66, 0xf, 0x55, 0xc9   /* ANDNPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ANDNPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ANDNPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDNPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ANDNPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDNPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ANDNPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDNPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ANDNPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, ORPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x56 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x56, 0xc0,  /* ORPD xmm0, xmm0 */
		0x66, 0xf, 0x56, 0xc1,  /* ORPD xmm0, xmm1 */
		0x66, 0xf, 0x56, 0xc8,  /* ORPD xmm1, xmm0 */
		0x66, 0xf, 0x56, 0xc9   /* ORPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ORPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ORPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ORPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ORPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ORPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ORPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ORPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ORPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, XORPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x57 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x57, 0xc0,  /* XORPD xmm0, xmm0 */
		0x66, 0xf, 0x57, 0xc1,  /* XORPD xmm0, xmm1 */
		0x66, 0xf, 0x57, 0xc8,  /* XORPD xmm1, xmm0 */
		0x66, 0xf, 0x57, 0xc9   /* XORPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* XORPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XORPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XORPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XORPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XORPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XORPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XORPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XORPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, ADDPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x58 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x58, 0xc0,  /* ADDPD xmm0, xmm0 */
		0x66, 0xf, 0x58, 0xc1,  /* ADDPD xmm0, xmm1 */
		0x66, 0xf, 0x58, 0xc8,  /* ADDPD xmm1, xmm0 */
		0x66, 0xf, 0x58, 0xc9   /* ADDPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ADDPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADDPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADDPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADDPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADDPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADDPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADDPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADDPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MULPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x59 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x59, 0xc0,  /* MULPD xmm0, xmm0 */
		0x66, 0xf, 0x59, 0xc1,  /* MULPD xmm0, xmm1 */
		0x66, 0xf, 0x59, 0xc8,  /* MULPD xmm1, xmm0 */
		0x66, 0xf, 0x59, 0xc9   /* MULPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MULPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MULPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MULPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MULPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MULPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MULPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MULPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MULPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, CVTPD2PS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5a 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x5a, 0xc0,  /* CVTPD2PS xmm0, xmm0 */
		0x66, 0xf, 0x5a, 0xc1,  /* CVTPD2PS xmm0, xmm1 */
		0x66, 0xf, 0x5a, 0xc8,  /* CVTPD2PS xmm1, xmm0 */
		0x66, 0xf, 0x5a, 0xc9   /* CVTPD2PS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTPD2PS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTPD2PS,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPD2PS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTPD2PS,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPD2PS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTPD2PS,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPD2PS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTPD2PS,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, CVTPS2DQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5b 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x5b, 0xc0,  /* CVTPS2DQ xmm0, xmm0 */
		0x66, 0xf, 0x5b, 0xc1,  /* CVTPS2DQ xmm0, xmm1 */
		0x66, 0xf, 0x5b, 0xc8,  /* CVTPS2DQ xmm1, xmm0 */
		0x66, 0xf, 0x5b, 0xc9   /* CVTPS2DQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTPS2DQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTPS2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPS2DQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTPS2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPS2DQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTPS2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPS2DQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTPS2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, SUBPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5c 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x5c, 0xc0,  /* SUBPD xmm0, xmm0 */
		0x66, 0xf, 0x5c, 0xc1,  /* SUBPD xmm0, xmm1 */
		0x66, 0xf, 0x5c, 0xc8,  /* SUBPD xmm1, xmm0 */
		0x66, 0xf, 0x5c, 0xc9   /* SUBPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* SUBPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUBPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUBPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUBPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUBPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUBPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUBPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUBPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MINPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5d 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x5d, 0xc0,  /* MINPD xmm0, xmm0 */
		0x66, 0xf, 0x5d, 0xc1,  /* MINPD xmm0, xmm1 */
		0x66, 0xf, 0x5d, 0xc8,  /* MINPD xmm1, xmm0 */
		0x66, 0xf, 0x5d, 0xc9   /* MINPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MINPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MINPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MINPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MINPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MINPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MINPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MINPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MINPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, DIVPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5e 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x5e, 0xc0,  /* DIVPD xmm0, xmm0 */
		0x66, 0xf, 0x5e, 0xc1,  /* DIVPD xmm0, xmm1 */
		0x66, 0xf, 0x5e, 0xc8,  /* DIVPD xmm1, xmm0 */
		0x66, 0xf, 0x5e, 0xc9   /* DIVPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* DIVPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::DIVPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIVPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::DIVPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIVPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::DIVPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIVPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::DIVPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MAXPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5f 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x5f, 0xc0,  /* MAXPD xmm0, xmm0 */
		0x66, 0xf, 0x5f, 0xc1,  /* MAXPD xmm0, xmm1 */
		0x66, 0xf, 0x5f, 0xc8,  /* MAXPD xmm1, xmm0 */
		0x66, 0xf, 0x5f, 0xc9   /* MAXPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MAXPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MAXPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MAXPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MAXPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MAXPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MAXPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MAXPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MAXPD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PUNPCKLBW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x60 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x60, 0xc0,  /* PUNPCKLBW xmm0, xmm0 */
		0x66, 0xf, 0x60, 0xc1,  /* PUNPCKLBW xmm0, xmm1 */
		0x66, 0xf, 0x60, 0xc8,  /* PUNPCKLBW xmm1, xmm0 */
		0x66, 0xf, 0x60, 0xc9   /* PUNPCKLBW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKLBW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLBW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLBW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLBW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PUNPCKLWD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x61 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x61, 0xc0,  /* PUNPCKLWD xmm0, xmm0 */
		0x66, 0xf, 0x61, 0xc1,  /* PUNPCKLWD xmm0, xmm1 */
		0x66, 0xf, 0x61, 0xc8,  /* PUNPCKLWD xmm1, xmm0 */
		0x66, 0xf, 0x61, 0xc9   /* PUNPCKLWD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKLWD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLWD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLWD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLWD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PUNPCKLDQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x62 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x62, 0xc0,  /* PUNPCKLDQ xmm0, xmm0 */
		0x66, 0xf, 0x62, 0xc1,  /* PUNPCKLDQ xmm0, xmm1 */
		0x66, 0xf, 0x62, 0xc8,  /* PUNPCKLDQ xmm1, xmm0 */
		0x66, 0xf, 0x62, 0xc9   /* PUNPCKLDQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKLDQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLDQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLDQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLDQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PACKSSWB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x63 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x63, 0xc0,  /* PACKSSWB xmm0, xmm0 */
		0x66, 0xf, 0x63, 0xc1,  /* PACKSSWB xmm0, xmm1 */
		0x66, 0xf, 0x63, 0xc8,  /* PACKSSWB xmm1, xmm0 */
		0x66, 0xf, 0x63, 0xc9   /* PACKSSWB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PACKSSWB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PACKSSWB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKSSWB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PACKSSWB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKSSWB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PACKSSWB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKSSWB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PACKSSWB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PCMPGTB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x64 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x64, 0xc0,  /* PCMPGTB xmm0, xmm0 */
		0x66, 0xf, 0x64, 0xc1,  /* PCMPGTB xmm0, xmm1 */
		0x66, 0xf, 0x64, 0xc8,  /* PCMPGTB xmm1, xmm0 */
		0x66, 0xf, 0x64, 0xc9   /* PCMPGTB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPGTB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPGTB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPGTB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPGTB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPGTB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PCMPGTW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x65 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x65, 0xc0,  /* PCMPGTW xmm0, xmm0 */
		0x66, 0xf, 0x65, 0xc1,  /* PCMPGTW xmm0, xmm1 */
		0x66, 0xf, 0x65, 0xc8,  /* PCMPGTW xmm1, xmm0 */
		0x66, 0xf, 0x65, 0xc9   /* PCMPGTW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPGTW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPGTW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPGTW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPGTW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPGTW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PCMPGTD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x66 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x66, 0xc0,  /* PCMPGTD xmm0, xmm0 */
		0x66, 0xf, 0x66, 0xc1,  /* PCMPGTD xmm0, xmm1 */
		0x66, 0xf, 0x66, 0xc8,  /* PCMPGTD xmm1, xmm0 */
		0x66, 0xf, 0x66, 0xc9   /* PCMPGTD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPGTD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPGTD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPGTD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPGTD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPGTD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PACKUSWB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x67 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x67, 0xc0,  /* PACKUSWB xmm0, xmm0 */
		0x66, 0xf, 0x67, 0xc1,  /* PACKUSWB xmm0, xmm1 */
		0x66, 0xf, 0x67, 0xc8,  /* PACKUSWB xmm1, xmm0 */
		0x66, 0xf, 0x67, 0xc9   /* PACKUSWB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PACKUSWB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PACKUSWB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKUSWB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PACKUSWB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKUSWB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PACKUSWB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKUSWB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PACKUSWB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PUNPCKHBW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x68 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x68, 0xc0,  /* PUNPCKHBW xmm0, xmm0 */
		0x66, 0xf, 0x68, 0xc1,  /* PUNPCKHBW xmm0, xmm1 */
		0x66, 0xf, 0x68, 0xc8,  /* PUNPCKHBW xmm1, xmm0 */
		0x66, 0xf, 0x68, 0xc9   /* PUNPCKHBW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKHBW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHBW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHBW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHBW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PUNPCKHWD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x69 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x69, 0xc0,  /* PUNPCKHWD xmm0, xmm0 */
		0x66, 0xf, 0x69, 0xc1,  /* PUNPCKHWD xmm0, xmm1 */
		0x66, 0xf, 0x69, 0xc8,  /* PUNPCKHWD xmm1, xmm0 */
		0x66, 0xf, 0x69, 0xc9   /* PUNPCKHWD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKHWD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHWD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHWD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHWD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PUNPCKHDQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x6a 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x6a, 0xc0,  /* PUNPCKHDQ xmm0, xmm0 */
		0x66, 0xf, 0x6a, 0xc1,  /* PUNPCKHDQ xmm0, xmm1 */
		0x66, 0xf, 0x6a, 0xc8,  /* PUNPCKHDQ xmm1, xmm0 */
		0x66, 0xf, 0x6a, 0xc9   /* PUNPCKHDQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKHDQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHDQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHDQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHDQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PACKSSDW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x6b 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x6b, 0xc0,  /* PACKSSDW xmm0, xmm0 */
		0x66, 0xf, 0x6b, 0xc1,  /* PACKSSDW xmm0, xmm1 */
		0x66, 0xf, 0x6b, 0xc8,  /* PACKSSDW xmm1, xmm0 */
		0x66, 0xf, 0x6b, 0xc9   /* PACKSSDW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PACKSSDW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PACKSSDW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKSSDW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PACKSSDW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKSSDW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PACKSSDW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKSSDW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PACKSSDW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PUNPCKLQDQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x6c 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x6c, 0xc0,  /* PUNPCKLQDQ xmm0, xmm0 */
		0x66, 0xf, 0x6c, 0xc1,  /* PUNPCKLQDQ xmm0, xmm1 */
		0x66, 0xf, 0x6c, 0xc8,  /* PUNPCKLQDQ xmm1, xmm0 */
		0x66, 0xf, 0x6c, 0xc9   /* PUNPCKLQDQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKLQDQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLQDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLQDQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLQDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLQDQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLQDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLQDQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLQDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PUNPCKHQDQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x6d 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x6d, 0xc0,  /* PUNPCKHQDQ xmm0, xmm0 */
		0x66, 0xf, 0x6d, 0xc1,  /* PUNPCKHQDQ xmm0, xmm1 */
		0x66, 0xf, 0x6d, 0xc8,  /* PUNPCKHQDQ xmm1, xmm0 */
		0x66, 0xf, 0x6d, 0xc9   /* PUNPCKHQDQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKHQDQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHQDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHQDQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHQDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHQDQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHQDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHQDQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHQDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVDQA_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x6f 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x6f, 0xc0,  /* MOVDQA xmm0, xmm0 */
		0x66, 0xf, 0x6f, 0xc1,  /* MOVDQA xmm0, xmm1 */
		0x66, 0xf, 0x6f, 0xc8,  /* MOVDQA xmm1, xmm0 */
		0x66, 0xf, 0x6f, 0xc9   /* MOVDQA xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVDQA xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVDQA,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVDQA xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVDQA,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVDQA xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVDQA,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVDQA xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVDQA,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRLW_O_XMM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x71 
	const uint8_t pOps[0xa] = {
		0x66, 0xf, 0x71, 0xd0, 0xaf,  /* PSRLW xmm0, 0xaf */
		0x66, 0xf, 0x71, 0xd1, 0xaf   /* PSRLW xmm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xa, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRLW xmm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLW xmm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRAW_O_XMM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x71 
	const uint8_t pOps[0xa] = {
		0x66, 0xf, 0x71, 0xe0, 0xaf,  /* PSRAW xmm0, 0xaf */
		0x66, 0xf, 0x71, 0xe1, 0xaf   /* PSRAW xmm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xa, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRAW xmm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRAW xmm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSLLW_O_XMM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x71 
	const uint8_t pOps[0xa] = {
		0x66, 0xf, 0x71, 0xf0, 0xaf,  /* PSLLW xmm0, 0xaf */
		0x66, 0xf, 0x71, 0xf1, 0xaf   /* PSLLW xmm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xa, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSLLW xmm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLW xmm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRLD_O_XMM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x72 
	const uint8_t pOps[0xa] = {
		0x66, 0xf, 0x72, 0xd0, 0xaf,  /* PSRLD xmm0, 0xaf */
		0x66, 0xf, 0x72, 0xd1, 0xaf   /* PSRLD xmm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xa, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRLD xmm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLD xmm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRAD_O_XMM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x72 
	const uint8_t pOps[0xa] = {
		0x66, 0xf, 0x72, 0xe0, 0xaf,  /* PSRAD xmm0, 0xaf */
		0x66, 0xf, 0x72, 0xe1, 0xaf   /* PSRAD xmm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xa, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRAD xmm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRAD xmm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSLLD_O_XMM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x72 
	const uint8_t pOps[0xa] = {
		0x66, 0xf, 0x72, 0xf0, 0xaf,  /* PSLLD xmm0, 0xaf */
		0x66, 0xf, 0x72, 0xf1, 0xaf   /* PSLLD xmm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xa, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSLLD xmm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLD xmm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRLQ_O_XMM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x73 
	const uint8_t pOps[0xa] = {
		0x66, 0xf, 0x73, 0xd0, 0xaf,  /* PSRLQ xmm0, 0xaf */
		0x66, 0xf, 0x73, 0xd1, 0xaf   /* PSRLQ xmm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xa, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRLQ xmm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLQ xmm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRLDQ_O_XMM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x73 
	const uint8_t pOps[0xa] = {
		0x66, 0xf, 0x73, 0xd8, 0xaf,  /* PSRLDQ xmm0, 0xaf */
		0x66, 0xf, 0x73, 0xd9, 0xaf   /* PSRLDQ xmm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xa, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRLDQ xmm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLDQ xmm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSLLQ_O_XMM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x73 
	const uint8_t pOps[0xa] = {
		0x66, 0xf, 0x73, 0xf0, 0xaf,  /* PSLLQ xmm0, 0xaf */
		0x66, 0xf, 0x73, 0xf1, 0xaf   /* PSLLQ xmm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xa, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSLLQ xmm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLQ xmm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSLLDQ_O_XMM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x73 
	const uint8_t pOps[0xa] = {
		0x66, 0xf, 0x73, 0xf8, 0xaf,  /* PSLLDQ xmm0, 0xaf */
		0x66, 0xf, 0x73, 0xf9, 0xaf   /* PSLLDQ xmm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xa, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSLLDQ xmm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLDQ xmm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PCMPEQB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x74 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x74, 0xc0,  /* PCMPEQB xmm0, xmm0 */
		0x66, 0xf, 0x74, 0xc1,  /* PCMPEQB xmm0, xmm1 */
		0x66, 0xf, 0x74, 0xc8,  /* PCMPEQB xmm1, xmm0 */
		0x66, 0xf, 0x74, 0xc9   /* PCMPEQB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPEQB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPEQB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPEQB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPEQB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPEQB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPEQB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPEQB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPEQB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PCMPEQW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x75 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x75, 0xc0,  /* PCMPEQW xmm0, xmm0 */
		0x66, 0xf, 0x75, 0xc1,  /* PCMPEQW xmm0, xmm1 */
		0x66, 0xf, 0x75, 0xc8,  /* PCMPEQW xmm1, xmm0 */
		0x66, 0xf, 0x75, 0xc9   /* PCMPEQW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPEQW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPEQW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPEQW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPEQW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPEQW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPEQW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPEQW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPEQW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PCMPEQD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x76 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x76, 0xc0,  /* PCMPEQD xmm0, xmm0 */
		0x66, 0xf, 0x76, 0xc1,  /* PCMPEQD xmm0, xmm1 */
		0x66, 0xf, 0x76, 0xc8,  /* PCMPEQD xmm1, xmm0 */
		0x66, 0xf, 0x76, 0xc9   /* PCMPEQD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPEQD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPEQD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPEQD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPEQD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPEQD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPEQD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPEQD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPEQD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVDQA_O_XMM_128_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x7f 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x6f, 0xc0,  /* MOVDQA xmm0, xmm0 */
		0x66, 0xf, 0x6f, 0xc1,  /* MOVDQA xmm0, xmm1 */
		0x66, 0xf, 0x6f, 0xc8,  /* MOVDQA xmm1, xmm0 */
		0x66, 0xf, 0x6f, 0xc9   /* MOVDQA xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVDQA xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVDQA,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVDQA xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVDQA,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVDQA xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVDQA,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVDQA xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVDQA,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRLW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd1 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xd1, 0xc0,  /* PSRLW xmm0, xmm0 */
		0x66, 0xf, 0xd1, 0xc1,  /* PSRLW xmm0, xmm1 */
		0x66, 0xf, 0xd1, 0xc8,  /* PSRLW xmm1, xmm0 */
		0x66, 0xf, 0xd1, 0xc9   /* PSRLW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSRLW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRLD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd2 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xd2, 0xc0,  /* PSRLD xmm0, xmm0 */
		0x66, 0xf, 0xd2, 0xc1,  /* PSRLD xmm0, xmm1 */
		0x66, 0xf, 0xd2, 0xc8,  /* PSRLD xmm1, xmm0 */
		0x66, 0xf, 0xd2, 0xc9   /* PSRLD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSRLD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRLQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd3 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xd3, 0xc0,  /* PSRLQ xmm0, xmm0 */
		0x66, 0xf, 0xd3, 0xc1,  /* PSRLQ xmm0, xmm1 */
		0x66, 0xf, 0xd3, 0xc8,  /* PSRLQ xmm1, xmm0 */
		0x66, 0xf, 0xd3, 0xc9   /* PSRLQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSRLQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PADDQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd4 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xd4, 0xc0,  /* PADDQ xmm0, xmm0 */
		0x66, 0xf, 0xd4, 0xc1,  /* PADDQ xmm0, xmm1 */
		0x66, 0xf, 0xd4, 0xc8,  /* PADDQ xmm1, xmm0 */
		0x66, 0xf, 0xd4, 0xc9   /* PADDQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PMULLW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd5 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xd5, 0xc0,  /* PMULLW xmm0, xmm0 */
		0x66, 0xf, 0xd5, 0xc1,  /* PMULLW xmm0, xmm1 */
		0x66, 0xf, 0xd5, 0xc8,  /* PMULLW xmm1, xmm0 */
		0x66, 0xf, 0xd5, 0xc9   /* PMULLW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULLW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULLW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULLW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULLW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVQ_O_XMM_64_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd6 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x7e, 0xc0,  /* MOVQ xmm0, xmm0 */
		0xf3, 0xf, 0x7e, 0xc1,  /* MOVQ xmm0, xmm1 */
		0xf3, 0xf, 0x7e, 0xc8,  /* MOVQ xmm1, xmm0 */
		0xf3, 0xf, 0x7e, 0xc9   /* MOVQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PMOVMSKB_O_REG_32_XMM_RM)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0xf 0xd7 
	const uint8_t pOps[0x38] = {
		0x66, 0xf, 0xd7, 0xc8,  /* PMOVMSKB ECX, xmm0 */
		0x66, 0xf, 0xd7, 0xc9,  /* PMOVMSKB ECX, xmm1 */
		0x66, 0xf, 0xd7, 0xd0,  /* PMOVMSKB EDX, xmm0 */
		0x66, 0xf, 0xd7, 0xd1,  /* PMOVMSKB EDX, xmm1 */
		0x66, 0xf, 0xd7, 0xd8,  /* PMOVMSKB EBX, xmm0 */
		0x66, 0xf, 0xd7, 0xd9,  /* PMOVMSKB EBX, xmm1 */
		0x66, 0xf, 0xd7, 0xe0,  /* PMOVMSKB ESP, xmm0 */
		0x66, 0xf, 0xd7, 0xe1,  /* PMOVMSKB ESP, xmm1 */
		0x66, 0xf, 0xd7, 0xe8,  /* PMOVMSKB EBP, xmm0 */
		0x66, 0xf, 0xd7, 0xe9,  /* PMOVMSKB EBP, xmm1 */
		0x66, 0xf, 0xd7, 0xf0,  /* PMOVMSKB ESI, xmm0 */
		0x66, 0xf, 0xd7, 0xf1,  /* PMOVMSKB ESI, xmm1 */
		0x66, 0xf, 0xd7, 0xf8,  /* PMOVMSKB EDI, xmm0 */
		0x66, 0xf, 0xd7, 0xf9   /* PMOVMSKB EDI, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x38, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0xe_sz, instructionCount);
	{
		/* PMOVMSKB ECX, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB ECX, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EDX, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EDX, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EBX, xmm0 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EBX, xmm1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB ESP, xmm0 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB ESP, xmm1 */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EBP, xmm0 */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EBP, xmm1 */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB ESI, xmm0 */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB ESI, xmm1 */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EDI, xmm0 */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EDI, xmm1 */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSUBUSB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd8 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xd8, 0xc0,  /* PSUBUSB xmm0, xmm0 */
		0x66, 0xf, 0xd8, 0xc1,  /* PSUBUSB xmm0, xmm1 */
		0x66, 0xf, 0xd8, 0xc8,  /* PSUBUSB xmm1, xmm0 */
		0x66, 0xf, 0xd8, 0xc9   /* PSUBUSB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBUSB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBUSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBUSB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBUSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBUSB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBUSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBUSB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBUSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSUBUSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd9 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xd9, 0xc0,  /* PSUBUSW xmm0, xmm0 */
		0x66, 0xf, 0xd9, 0xc1,  /* PSUBUSW xmm0, xmm1 */
		0x66, 0xf, 0xd9, 0xc8,  /* PSUBUSW xmm1, xmm0 */
		0x66, 0xf, 0xd9, 0xc9   /* PSUBUSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBUSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBUSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBUSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBUSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBUSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBUSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBUSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBUSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PMINUB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xda 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xda, 0xc0,  /* PMINUB xmm0, xmm0 */
		0x66, 0xf, 0xda, 0xc1,  /* PMINUB xmm0, xmm1 */
		0x66, 0xf, 0xda, 0xc8,  /* PMINUB xmm1, xmm0 */
		0x66, 0xf, 0xda, 0xc9   /* PMINUB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMINUB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMINUB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMINUB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMINUB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMINUB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMINUB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMINUB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMINUB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PAND_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xdb 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xdb, 0xc0,  /* PAND xmm0, xmm0 */
		0x66, 0xf, 0xdb, 0xc1,  /* PAND xmm0, xmm1 */
		0x66, 0xf, 0xdb, 0xc8,  /* PAND xmm1, xmm0 */
		0x66, 0xf, 0xdb, 0xc9   /* PAND xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PAND xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PAND,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAND xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PAND,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAND xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PAND,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAND xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PAND,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PADDUSB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xdc 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xdc, 0xc0,  /* PADDUSB xmm0, xmm0 */
		0x66, 0xf, 0xdc, 0xc1,  /* PADDUSB xmm0, xmm1 */
		0x66, 0xf, 0xdc, 0xc8,  /* PADDUSB xmm1, xmm0 */
		0x66, 0xf, 0xdc, 0xc9   /* PADDUSB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDUSB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDUSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDUSB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDUSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDUSB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDUSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDUSB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDUSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PADDUSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xdd 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xdd, 0xc0,  /* PADDUSW xmm0, xmm0 */
		0x66, 0xf, 0xdd, 0xc1,  /* PADDUSW xmm0, xmm1 */
		0x66, 0xf, 0xdd, 0xc8,  /* PADDUSW xmm1, xmm0 */
		0x66, 0xf, 0xdd, 0xc9   /* PADDUSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDUSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDUSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDUSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDUSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDUSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDUSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDUSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDUSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PMAXUB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xde 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xde, 0xc0,  /* PMAXUB xmm0, xmm0 */
		0x66, 0xf, 0xde, 0xc1,  /* PMAXUB xmm0, xmm1 */
		0x66, 0xf, 0xde, 0xc8,  /* PMAXUB xmm1, xmm0 */
		0x66, 0xf, 0xde, 0xc9   /* PMAXUB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMAXUB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMAXUB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMAXUB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMAXUB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMAXUB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMAXUB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMAXUB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMAXUB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PANDN_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xdf 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xdf, 0xc0,  /* PANDN xmm0, xmm0 */
		0x66, 0xf, 0xdf, 0xc1,  /* PANDN xmm0, xmm1 */
		0x66, 0xf, 0xdf, 0xc8,  /* PANDN xmm1, xmm0 */
		0x66, 0xf, 0xdf, 0xc9   /* PANDN xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PANDN xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PANDN,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PANDN xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PANDN,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PANDN xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PANDN,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PANDN xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PANDN,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PAVGB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe0 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xe0, 0xc0,  /* PAVGB xmm0, xmm0 */
		0x66, 0xf, 0xe0, 0xc1,  /* PAVGB xmm0, xmm1 */
		0x66, 0xf, 0xe0, 0xc8,  /* PAVGB xmm1, xmm0 */
		0x66, 0xf, 0xe0, 0xc9   /* PAVGB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PAVGB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PAVGB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAVGB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PAVGB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAVGB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PAVGB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAVGB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PAVGB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRAW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe1 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xe1, 0xc0,  /* PSRAW xmm0, xmm0 */
		0x66, 0xf, 0xe1, 0xc1,  /* PSRAW xmm0, xmm1 */
		0x66, 0xf, 0xe1, 0xc8,  /* PSRAW xmm1, xmm0 */
		0x66, 0xf, 0xe1, 0xc9   /* PSRAW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSRAW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRAW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRAW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRAW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSRAD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe2 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xe2, 0xc0,  /* PSRAD xmm0, xmm0 */
		0x66, 0xf, 0xe2, 0xc1,  /* PSRAD xmm0, xmm1 */
		0x66, 0xf, 0xe2, 0xc8,  /* PSRAD xmm1, xmm0 */
		0x66, 0xf, 0xe2, 0xc9   /* PSRAD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSRAD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRAD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRAD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRAD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PAVGW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe3 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xe3, 0xc0,  /* PAVGW xmm0, xmm0 */
		0x66, 0xf, 0xe3, 0xc1,  /* PAVGW xmm0, xmm1 */
		0x66, 0xf, 0xe3, 0xc8,  /* PAVGW xmm1, xmm0 */
		0x66, 0xf, 0xe3, 0xc9   /* PAVGW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PAVGW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PAVGW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAVGW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PAVGW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAVGW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PAVGW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAVGW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PAVGW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PMULHUW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe4 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xe4, 0xc0,  /* PMULHUW xmm0, xmm0 */
		0x66, 0xf, 0xe4, 0xc1,  /* PMULHUW xmm0, xmm1 */
		0x66, 0xf, 0xe4, 0xc8,  /* PMULHUW xmm1, xmm0 */
		0x66, 0xf, 0xe4, 0xc9   /* PMULHUW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULHUW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULHUW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHUW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULHUW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHUW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULHUW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHUW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULHUW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PMULHW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe5 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xe5, 0xc0,  /* PMULHW xmm0, xmm0 */
		0x66, 0xf, 0xe5, 0xc1,  /* PMULHW xmm0, xmm1 */
		0x66, 0xf, 0xe5, 0xc8,  /* PMULHW xmm1, xmm0 */
		0x66, 0xf, 0xe5, 0xc9   /* PMULHW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULHW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULHW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULHW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULHW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULHW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, CVTTPD2DQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe6 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xe6, 0xc0,  /* CVTTPD2DQ xmm0, xmm0 */
		0x66, 0xf, 0xe6, 0xc1,  /* CVTTPD2DQ xmm0, xmm1 */
		0x66, 0xf, 0xe6, 0xc8,  /* CVTTPD2DQ xmm1, xmm0 */
		0x66, 0xf, 0xe6, 0xc9   /* CVTTPD2DQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTTPD2DQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTTPD2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTPD2DQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTTPD2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTPD2DQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTTPD2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTPD2DQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTTPD2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSUBSB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe8 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xe8, 0xc0,  /* PSUBSB xmm0, xmm0 */
		0x66, 0xf, 0xe8, 0xc1,  /* PSUBSB xmm0, xmm1 */
		0x66, 0xf, 0xe8, 0xc8,  /* PSUBSB xmm1, xmm0 */
		0x66, 0xf, 0xe8, 0xc9   /* PSUBSB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBSB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBSB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBSB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBSB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSUBSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe9 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xe9, 0xc0,  /* PSUBSW xmm0, xmm0 */
		0x66, 0xf, 0xe9, 0xc1,  /* PSUBSW xmm0, xmm1 */
		0x66, 0xf, 0xe9, 0xc8,  /* PSUBSW xmm1, xmm0 */
		0x66, 0xf, 0xe9, 0xc9   /* PSUBSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PMINSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xea 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xea, 0xc0,  /* PMINSW xmm0, xmm0 */
		0x66, 0xf, 0xea, 0xc1,  /* PMINSW xmm0, xmm1 */
		0x66, 0xf, 0xea, 0xc8,  /* PMINSW xmm1, xmm0 */
		0x66, 0xf, 0xea, 0xc9   /* PMINSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMINSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMINSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMINSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMINSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMINSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMINSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMINSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMINSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, POR_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xeb 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xeb, 0xc0,  /* POR xmm0, xmm0 */
		0x66, 0xf, 0xeb, 0xc1,  /* POR xmm0, xmm1 */
		0x66, 0xf, 0xeb, 0xc8,  /* POR xmm1, xmm0 */
		0x66, 0xf, 0xeb, 0xc9   /* POR xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* POR xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::POR,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POR xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::POR,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POR xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::POR,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* POR xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::POR,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PADDSB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xec 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xec, 0xc0,  /* PADDSB xmm0, xmm0 */
		0x66, 0xf, 0xec, 0xc1,  /* PADDSB xmm0, xmm1 */
		0x66, 0xf, 0xec, 0xc8,  /* PADDSB xmm1, xmm0 */
		0x66, 0xf, 0xec, 0xc9   /* PADDSB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDSB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDSB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDSB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDSB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDSB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PADDSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xed 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xed, 0xc0,  /* PADDSW xmm0, xmm0 */
		0x66, 0xf, 0xed, 0xc1,  /* PADDSW xmm0, xmm1 */
		0x66, 0xf, 0xed, 0xc8,  /* PADDSW xmm1, xmm0 */
		0x66, 0xf, 0xed, 0xc9   /* PADDSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PMAXSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xee 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xee, 0xc0,  /* PMAXSW xmm0, xmm0 */
		0x66, 0xf, 0xee, 0xc1,  /* PMAXSW xmm0, xmm1 */
		0x66, 0xf, 0xee, 0xc8,  /* PMAXSW xmm1, xmm0 */
		0x66, 0xf, 0xee, 0xc9   /* PMAXSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMAXSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMAXSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMAXSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMAXSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMAXSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMAXSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMAXSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMAXSW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PXOR_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xef 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xef, 0xc0,  /* PXOR xmm0, xmm0 */
		0x66, 0xf, 0xef, 0xc1,  /* PXOR xmm0, xmm1 */
		0x66, 0xf, 0xef, 0xc8,  /* PXOR xmm1, xmm0 */
		0x66, 0xf, 0xef, 0xc9   /* PXOR xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PXOR xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PXOR,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PXOR xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PXOR,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PXOR xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PXOR,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PXOR xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PXOR,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSLLW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf1 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xf1, 0xc0,  /* PSLLW xmm0, xmm0 */
		0x66, 0xf, 0xf1, 0xc1,  /* PSLLW xmm0, xmm1 */
		0x66, 0xf, 0xf1, 0xc8,  /* PSLLW xmm1, xmm0 */
		0x66, 0xf, 0xf1, 0xc9   /* PSLLW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSLLW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSLLD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf2 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xf2, 0xc0,  /* PSLLD xmm0, xmm0 */
		0x66, 0xf, 0xf2, 0xc1,  /* PSLLD xmm0, xmm1 */
		0x66, 0xf, 0xf2, 0xc8,  /* PSLLD xmm1, xmm0 */
		0x66, 0xf, 0xf2, 0xc9   /* PSLLD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSLLD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSLLQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf3 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xf3, 0xc0,  /* PSLLQ xmm0, xmm0 */
		0x66, 0xf, 0xf3, 0xc1,  /* PSLLQ xmm0, xmm1 */
		0x66, 0xf, 0xf3, 0xc8,  /* PSLLQ xmm1, xmm0 */
		0x66, 0xf, 0xf3, 0xc9   /* PSLLQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSLLQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PMULUDQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf4 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xf4, 0xc0,  /* PMULUDQ xmm0, xmm0 */
		0x66, 0xf, 0xf4, 0xc1,  /* PMULUDQ xmm0, xmm1 */
		0x66, 0xf, 0xf4, 0xc8,  /* PMULUDQ xmm1, xmm0 */
		0x66, 0xf, 0xf4, 0xc9   /* PMULUDQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULUDQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULUDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULUDQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULUDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULUDQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULUDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULUDQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULUDQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PMADDWD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf5 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xf5, 0xc0,  /* PMADDWD xmm0, xmm0 */
		0x66, 0xf, 0xf5, 0xc1,  /* PMADDWD xmm0, xmm1 */
		0x66, 0xf, 0xf5, 0xc8,  /* PMADDWD xmm1, xmm0 */
		0x66, 0xf, 0xf5, 0xc9   /* PMADDWD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMADDWD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMADDWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMADDWD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMADDWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMADDWD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMADDWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMADDWD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMADDWD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSADBW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf6 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xf6, 0xc0,  /* PSADBW xmm0, xmm0 */
		0x66, 0xf, 0xf6, 0xc1,  /* PSADBW xmm0, xmm1 */
		0x66, 0xf, 0xf6, 0xc8,  /* PSADBW xmm1, xmm0 */
		0x66, 0xf, 0xf6, 0xc9   /* PSADBW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSADBW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSADBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSADBW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSADBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSADBW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSADBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSADBW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSADBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MASKMOVDQU_O_XMM_XMM_RM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf7 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xf7, 0xc0,  /* MASKMOVDQU xmm0, xmm0 */
		0x66, 0xf, 0xf7, 0xc1,  /* MASKMOVDQU xmm0, xmm1 */
		0x66, 0xf, 0xf7, 0xc8,  /* MASKMOVDQU xmm1, xmm0 */
		0x66, 0xf, 0xf7, 0xc9   /* MASKMOVDQU xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MASKMOVDQU xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MASKMOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MASKMOVDQU xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MASKMOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MASKMOVDQU xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MASKMOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MASKMOVDQU xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MASKMOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSUBB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf8 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xf8, 0xc0,  /* PSUBB xmm0, xmm0 */
		0x66, 0xf, 0xf8, 0xc1,  /* PSUBB xmm0, xmm1 */
		0x66, 0xf, 0xf8, 0xc8,  /* PSUBB xmm1, xmm0 */
		0x66, 0xf, 0xf8, 0xc9   /* PSUBB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSUBW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf9 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xf9, 0xc0,  /* PSUBW xmm0, xmm0 */
		0x66, 0xf, 0xf9, 0xc1,  /* PSUBW xmm0, xmm1 */
		0x66, 0xf, 0xf9, 0xc8,  /* PSUBW xmm1, xmm0 */
		0x66, 0xf, 0xf9, 0xc9   /* PSUBW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSUBD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xfa 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xfa, 0xc0,  /* PSUBD xmm0, xmm0 */
		0x66, 0xf, 0xfa, 0xc1,  /* PSUBD xmm0, xmm1 */
		0x66, 0xf, 0xfa, 0xc8,  /* PSUBD xmm1, xmm0 */
		0x66, 0xf, 0xfa, 0xc9   /* PSUBD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PSUBQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xfb 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xfb, 0xc0,  /* PSUBQ xmm0, xmm0 */
		0x66, 0xf, 0xfb, 0xc1,  /* PSUBQ xmm0, xmm1 */
		0x66, 0xf, 0xfb, 0xc8,  /* PSUBQ xmm1, xmm0 */
		0x66, 0xf, 0xfb, 0xc9   /* PSUBQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSUBQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PADDB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xfc 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xfc, 0xc0,  /* PADDB xmm0, xmm0 */
		0x66, 0xf, 0xfc, 0xc1,  /* PADDB xmm0, xmm1 */
		0x66, 0xf, 0xfc, 0xc8,  /* PADDB xmm1, xmm0 */
		0x66, 0xf, 0xfc, 0xc9   /* PADDB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDB,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PADDW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xfd 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xfd, 0xc0,  /* PADDW xmm0, xmm0 */
		0x66, 0xf, 0xfd, 0xc1,  /* PADDW xmm0, xmm1 */
		0x66, 0xf, 0xfd, 0xc8,  /* PADDW xmm1, xmm0 */
		0x66, 0xf, 0xfd, 0xc9   /* PADDW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDW,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PADDD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xfe 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xfe, 0xc0,  /* PADDD xmm0, xmm0 */
		0x66, 0xf, 0xfe, 0xc1,  /* PADDD xmm0, xmm1 */
		0x66, 0xf, 0xfe, 0xc8,  /* PADDD xmm1, xmm0 */
		0x66, 0xf, 0xfe, 0xc9   /* PADDD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PADDD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVSD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x10 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x10, 0xc0,  /* MOVSD xmm0, xmm0 */
		0xf2, 0xf, 0x10, 0xc1,  /* MOVSD xmm0, xmm1 */
		0xf2, 0xf, 0x10, 0xc8,  /* MOVSD xmm1, xmm0 */
		0xf2, 0xf, 0x10, 0xc9   /* MOVSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVSD_O_XMM_64_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x11 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x10, 0xc0,  /* MOVSD xmm0, xmm0 */
		0xf2, 0xf, 0x10, 0xc1,  /* MOVSD xmm0, xmm1 */
		0xf2, 0xf, 0x10, 0xc8,  /* MOVSD xmm1, xmm0 */
		0xf2, 0xf, 0x10, 0xc9   /* MOVSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

