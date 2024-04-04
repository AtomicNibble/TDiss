#include "pch.h"

using namespace TDiss;


// This file is generated, below is a summary for all generated 32Bit tests
// Some of the instructions we fail to generate tests for are covered by manual tests
// Total instructions: 896
// Total instructionTests: 897
// Total instructions without tests: 53
// Total real instructions: 7018

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
// NONE-> MOV_O_RM_8_REG_8 ops(2)
// NONE-> MOV_O_REG_8_RM_8 ops(2)
// NONE-> MOV_O_RM_8_IMM_8 ops(2)
// NONE-> XSAVE_INVALID_XSAVE64_O_MEM ops(1)
// FPU-> FUCOM_O_FPU_SIS ops(1)
// FPU-> FUCOM ops(0)
// FPU-> FUCOMP ops(0)
// MMX-> MOVD_MOVQ_MOVQ_O_MM_MM_32_64 ops(2)
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
			
TEST(x86_FPU, FXTRACT)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf4   /* FXTRACT */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FXTRACT */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FXTRACT,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FPREM1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf5   /* FPREM1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FPREM1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FPREM1,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDECSTP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf6   /* FDECSTP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDECSTP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDECSTP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FINCSTP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf7   /* FINCSTP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FINCSTP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FINCSTP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FPREM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf8   /* FPREM */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FPREM */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FPREM,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FYL2XP1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf9   /* FYL2XP1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FYL2XP1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FYL2XP1,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSQRT)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xfa   /* FSQRT */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSQRT */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSQRT,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSINCOS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xfb   /* FSINCOS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSINCOS */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSINCOS,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FRNDINT)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xfc   /* FRNDINT */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FRNDINT */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FRNDINT,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSCALE)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xfd   /* FSCALE */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSCALE */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSCALE,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSIN)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xfe   /* FSIN */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSIN */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSIN,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FCOS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xff   /* FCOS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCOS */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOS,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FIADD_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0x6   /* FIADD dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FIADD dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FIADD,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FIMUL_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xe   /* FIMUL dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FIMUL dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FIMUL,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FICOM_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0x16   /* FICOM dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FICOM dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FICOM,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FICOMP_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0x1e   /* FICOMP dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FICOMP dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FICOMP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FISUB_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0x26   /* FISUB dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FISUB dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FISUB,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FISUBR_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0x2e   /* FISUBR dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FISUBR dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FISUBR,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FIDIV_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0x36   /* FIDIV dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FIDIV dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FIDIV,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FIDIVR_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0x3e   /* FIDIVR dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FIDIVR dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FIDIVR,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FUCOMPP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xe9   /* FUCOMPP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FUCOMPP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FUCOMPP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FILD_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0x6   /* FILD dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FILD dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FILD,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FIST_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0x16   /* FIST dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FIST dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FIST,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FISTP_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0x1e   /* FISTP dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FISTP dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FISTP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FLD_O_FPUM80)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0x28   /* FLD tword [eax] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLD tword [eax] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLD,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x50, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSTP_O_FPUM80)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0x38   /* FSTP tword [eax] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSTP tword [eax] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSTP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x50, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FENI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xe0   /* db 0xdb
 db 0xe0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* db 0xdb
 db 0xe0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FENI,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FNDISI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xe1   /* db 0xdb
 db 0xe1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* db 0xdb
 db 0xe1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNDISI,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FNCLEX)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xe2   /* FNCLEX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FNCLEX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNCLEX,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FNINIT)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xe3   /* FNINIT */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FNINIT */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNINIT,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSETPM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xe4   /* FSETPM */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSETPM */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSETPM,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FUCOMI_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xea   /* FUCOMI st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FUCOMI st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FUCOMI,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x45,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FADD_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x3] = {
		0xdc, 0x4, 0x24   /* FADD qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FADD qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FADD,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FMUL_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x3] = {
		0xdc, 0xc, 0x24   /* FMUL qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FMUL qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FMUL,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FCOM_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x3] = {
		0xdc, 0x14, 0x24   /* FCOM qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCOM qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOM,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FCOMP_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x3] = {
		0xdc, 0x1c, 0x24   /* FCOMP qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCOMP qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOMP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUB_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x3] = {
		0xdc, 0x24, 0x24   /* FSUB qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUB qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSUB,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUBR_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x3] = {
		0xdc, 0x2c, 0x24   /* FSUBR qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUBR qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSUBR,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIV_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x3] = {
		0xdc, 0x34, 0x24   /* FDIV qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIV qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDIV,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIVR_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x3] = {
		0xdc, 0x3c, 0x24   /* FDIVR qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIVR qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDIVR,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FADD_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xc2   /* FADD st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FADD st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FADD,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FMUL_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xca   /* FMUL st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FMUL st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FMUL,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUBR_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xe2   /* FSUBR st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUBR st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSUBR,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUB_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xea   /* FSUB st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUB st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSUB,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIVR_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xf2   /* FDIVR st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIVR st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDIVR,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIV_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xfa   /* FDIV st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIV st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDIV,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FLD_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x3] = {
		0xdd, 0x4, 0x24   /* FLD qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLD qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLD,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FST_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x3] = {
		0xdd, 0x14, 0x24   /* FST qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FST qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FST,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSTP_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x3] = {
		0xdd, 0x1c, 0x24   /* FSTP qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSTP qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSTP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FRSTOR_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x7] = {
		0xdd, 0x24, 0x95, 0x0, 0x0, 0x0, 0x0   /* FRSTOR [edx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FRSTOR [edx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FRSTOR,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x7,
			0x0,
			0x4,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FNSAVE_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x7] = {
		0xdd, 0x34, 0x95, 0x0, 0x0, 0x0, 0x0   /* FNSAVE [edx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FNSAVE [edx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNSAVE,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x7,
			0x0,
			0x4,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FNSTSW_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x2] = {
		0xdd, 0x3b   /* FNSTSW word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FNSTSW word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNSTSW,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FFREE_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x2] = {
		0xdd, 0xc3   /* FFREE st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FFREE st3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FFREE,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST3, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5f)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FST_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x2] = {
		0xdd, 0xd3   /* FST st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FST st3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FST,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST3, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5f)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSTP_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x2] = {
		0xdd, 0xdb   /* FSTP st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSTP st3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSTP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST3, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5f)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FUCOMP_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x2] = {
		0xdd, 0xeb   /* FUCOMP st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FUCOMP st3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FUCOMP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST3, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5f)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FIADD_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0x3   /* FIADD word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FIADD word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FIADD,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FIMUL_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xb   /* FIMUL word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FIMUL word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FIMUL,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FICOM_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0x13   /* FICOM word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FICOM word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FICOM,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FICOMP_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0x1b   /* FICOMP word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FICOMP word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FICOMP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FISUB_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0x23   /* FISUB word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FISUB word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FISUB,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FISUBR_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0x2b   /* FISUBR word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FISUBR word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FISUBR,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FIDIV_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0x33   /* FIDIV word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FIDIV word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FIDIV,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FIDIVR_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0x3b   /* FIDIVR word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FIDIVR word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FIDIVR,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FADDP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xc2   /* FADDP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FADDP st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FADDP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FADDP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xc1   /* FADDP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FADDP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FADDP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FMULP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xca   /* FMULP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FMULP st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FMULP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FMULP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xc9   /* FMULP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FMULP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FMULP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FCOMPP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xd9   /* FCOMPP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCOMPP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOMPP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUBRP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xe2   /* FSUBRP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUBRP st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSUBRP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUBRP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xe1   /* FSUBRP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUBRP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSUBRP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUBP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xea   /* FSUBP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUBP st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSUBP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUBP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xe9   /* FSUBP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUBP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSUBP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIVRP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xf2   /* FDIVRP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIVRP st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDIVRP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIVRP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xf1   /* FDIVRP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIVRP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDIVRP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIVP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xfa   /* FDIVP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIVP st2, st0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDIVP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIVP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xf9   /* FDIVP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIVP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDIVP,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FILD_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0x3   /* FILD word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FILD word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FILD,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FIST_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0x13   /* FIST word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FIST word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FIST,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FISTP_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0x1b   /* FISTP word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FISTP word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FISTP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FBLD_O_FPUM80)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0x20   /* FBLD tword [eax] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FBLD tword [eax] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FBLD,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x50, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FILD_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x3] = {
		0xdf, 0x2c, 0x24   /* FILD qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FILD qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FILD,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FBSTP_O_FPUM80)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0x30   /* FBSTP tword [eax] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FBSTP tword [eax] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FBSTP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x50, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FISTP_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x3] = {
		0xdf, 0x3c, 0x24   /* FISTP qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FISTP qword [esp] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FISTP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FNSTSW_O_ACC_16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0xe0   /* FNSTSW AX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FNSTSW AX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNSTSW,
			FlowControl::NONE,
			InstructionSet::FPU,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FUCOMIP_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0xea   /* FUCOMIP st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FUCOMIP st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FUCOMIP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x45,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FCOMIP_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0xf2   /* FCOMIP st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCOMIP st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOMIP,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x45,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVO_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x40 
	const uint8_t pOps[0xb8] = {
		0xf, 0x40, 0x1,  /* CMOVO EAX, dword [ECX] */
		0xf, 0x40, 0x2,  /* CMOVO EAX, dword [EDX] */
		0xf, 0x40, 0x3,  /* CMOVO EAX, dword [EBX] */
		0xf, 0x40, 0x4, 0x24,  /* CMOVO EAX, dword [ESP] */
		0xf, 0x40, 0x45, 0x0,  /* CMOVO EAX, dword [EBP] */
		0xf, 0x40, 0x6,  /* CMOVO EAX, dword [ESI] */
		0xf, 0x40, 0x7,  /* CMOVO EAX, dword [EDI] */
		0xf, 0x40, 0x9,  /* CMOVO ECX, dword [ECX] */
		0xf, 0x40, 0xa,  /* CMOVO ECX, dword [EDX] */
		0xf, 0x40, 0xb,  /* CMOVO ECX, dword [EBX] */
		0xf, 0x40, 0xc, 0x24,  /* CMOVO ECX, dword [ESP] */
		0xf, 0x40, 0x4d, 0x0,  /* CMOVO ECX, dword [EBP] */
		0xf, 0x40, 0xe,  /* CMOVO ECX, dword [ESI] */
		0xf, 0x40, 0xf,  /* CMOVO ECX, dword [EDI] */
		0xf, 0x40, 0x11,  /* CMOVO EDX, dword [ECX] */
		0xf, 0x40, 0x12,  /* CMOVO EDX, dword [EDX] */
		0xf, 0x40, 0x13,  /* CMOVO EDX, dword [EBX] */
		0xf, 0x40, 0x14, 0x24,  /* CMOVO EDX, dword [ESP] */
		0xf, 0x40, 0x55, 0x0,  /* CMOVO EDX, dword [EBP] */
		0xf, 0x40, 0x16,  /* CMOVO EDX, dword [ESI] */
		0xf, 0x40, 0x17,  /* CMOVO EDX, dword [EDI] */
		0xf, 0x40, 0x19,  /* CMOVO EBX, dword [ECX] */
		0xf, 0x40, 0x1a,  /* CMOVO EBX, dword [EDX] */
		0xf, 0x40, 0x1b,  /* CMOVO EBX, dword [EBX] */
		0xf, 0x40, 0x1c, 0x24,  /* CMOVO EBX, dword [ESP] */
		0xf, 0x40, 0x5d, 0x0,  /* CMOVO EBX, dword [EBP] */
		0xf, 0x40, 0x1e,  /* CMOVO EBX, dword [ESI] */
		0xf, 0x40, 0x1f,  /* CMOVO EBX, dword [EDI] */
		0xf, 0x40, 0x21,  /* CMOVO ESP, dword [ECX] */
		0xf, 0x40, 0x22,  /* CMOVO ESP, dword [EDX] */
		0xf, 0x40, 0x23,  /* CMOVO ESP, dword [EBX] */
		0xf, 0x40, 0x24, 0x24,  /* CMOVO ESP, dword [ESP] */
		0xf, 0x40, 0x65, 0x0,  /* CMOVO ESP, dword [EBP] */
		0xf, 0x40, 0x26,  /* CMOVO ESP, dword [ESI] */
		0xf, 0x40, 0x27,  /* CMOVO ESP, dword [EDI] */
		0xf, 0x40, 0x29,  /* CMOVO EBP, dword [ECX] */
		0xf, 0x40, 0x2a,  /* CMOVO EBP, dword [EDX] */
		0xf, 0x40, 0x2b,  /* CMOVO EBP, dword [EBX] */
		0xf, 0x40, 0x2c, 0x24,  /* CMOVO EBP, dword [ESP] */
		0xf, 0x40, 0x6d, 0x0,  /* CMOVO EBP, dword [EBP] */
		0xf, 0x40, 0x2e,  /* CMOVO EBP, dword [ESI] */
		0xf, 0x40, 0x2f,  /* CMOVO EBP, dword [EDI] */
		0xf, 0x40, 0x31,  /* CMOVO ESI, dword [ECX] */
		0xf, 0x40, 0x32,  /* CMOVO ESI, dword [EDX] */
		0xf, 0x40, 0x33,  /* CMOVO ESI, dword [EBX] */
		0xf, 0x40, 0x34, 0x24,  /* CMOVO ESI, dword [ESP] */
		0xf, 0x40, 0x75, 0x0,  /* CMOVO ESI, dword [EBP] */
		0xf, 0x40, 0x36,  /* CMOVO ESI, dword [ESI] */
		0xf, 0x40, 0x37,  /* CMOVO ESI, dword [EDI] */
		0xf, 0x40, 0x39,  /* CMOVO EDI, dword [ECX] */
		0xf, 0x40, 0x3a,  /* CMOVO EDI, dword [EDX] */
		0xf, 0x40, 0x3b,  /* CMOVO EDI, dword [EBX] */
		0xf, 0x40, 0x3c, 0x24,  /* CMOVO EDI, dword [ESP] */
		0xf, 0x40, 0x7d, 0x0,  /* CMOVO EDI, dword [EBP] */
		0xf, 0x40, 0x3e,  /* CMOVO EDI, dword [ESI] */
		0xf, 0x40, 0x3f   /* CMOVO EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVO EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVNO_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x41 
	const uint8_t pOps[0xb8] = {
		0xf, 0x41, 0x1,  /* CMOVNO EAX, dword [ECX] */
		0xf, 0x41, 0x2,  /* CMOVNO EAX, dword [EDX] */
		0xf, 0x41, 0x3,  /* CMOVNO EAX, dword [EBX] */
		0xf, 0x41, 0x4, 0x24,  /* CMOVNO EAX, dword [ESP] */
		0xf, 0x41, 0x45, 0x0,  /* CMOVNO EAX, dword [EBP] */
		0xf, 0x41, 0x6,  /* CMOVNO EAX, dword [ESI] */
		0xf, 0x41, 0x7,  /* CMOVNO EAX, dword [EDI] */
		0xf, 0x41, 0x9,  /* CMOVNO ECX, dword [ECX] */
		0xf, 0x41, 0xa,  /* CMOVNO ECX, dword [EDX] */
		0xf, 0x41, 0xb,  /* CMOVNO ECX, dword [EBX] */
		0xf, 0x41, 0xc, 0x24,  /* CMOVNO ECX, dword [ESP] */
		0xf, 0x41, 0x4d, 0x0,  /* CMOVNO ECX, dword [EBP] */
		0xf, 0x41, 0xe,  /* CMOVNO ECX, dword [ESI] */
		0xf, 0x41, 0xf,  /* CMOVNO ECX, dword [EDI] */
		0xf, 0x41, 0x11,  /* CMOVNO EDX, dword [ECX] */
		0xf, 0x41, 0x12,  /* CMOVNO EDX, dword [EDX] */
		0xf, 0x41, 0x13,  /* CMOVNO EDX, dword [EBX] */
		0xf, 0x41, 0x14, 0x24,  /* CMOVNO EDX, dword [ESP] */
		0xf, 0x41, 0x55, 0x0,  /* CMOVNO EDX, dword [EBP] */
		0xf, 0x41, 0x16,  /* CMOVNO EDX, dword [ESI] */
		0xf, 0x41, 0x17,  /* CMOVNO EDX, dword [EDI] */
		0xf, 0x41, 0x19,  /* CMOVNO EBX, dword [ECX] */
		0xf, 0x41, 0x1a,  /* CMOVNO EBX, dword [EDX] */
		0xf, 0x41, 0x1b,  /* CMOVNO EBX, dword [EBX] */
		0xf, 0x41, 0x1c, 0x24,  /* CMOVNO EBX, dword [ESP] */
		0xf, 0x41, 0x5d, 0x0,  /* CMOVNO EBX, dword [EBP] */
		0xf, 0x41, 0x1e,  /* CMOVNO EBX, dword [ESI] */
		0xf, 0x41, 0x1f,  /* CMOVNO EBX, dword [EDI] */
		0xf, 0x41, 0x21,  /* CMOVNO ESP, dword [ECX] */
		0xf, 0x41, 0x22,  /* CMOVNO ESP, dword [EDX] */
		0xf, 0x41, 0x23,  /* CMOVNO ESP, dword [EBX] */
		0xf, 0x41, 0x24, 0x24,  /* CMOVNO ESP, dword [ESP] */
		0xf, 0x41, 0x65, 0x0,  /* CMOVNO ESP, dword [EBP] */
		0xf, 0x41, 0x26,  /* CMOVNO ESP, dword [ESI] */
		0xf, 0x41, 0x27,  /* CMOVNO ESP, dword [EDI] */
		0xf, 0x41, 0x29,  /* CMOVNO EBP, dword [ECX] */
		0xf, 0x41, 0x2a,  /* CMOVNO EBP, dword [EDX] */
		0xf, 0x41, 0x2b,  /* CMOVNO EBP, dword [EBX] */
		0xf, 0x41, 0x2c, 0x24,  /* CMOVNO EBP, dword [ESP] */
		0xf, 0x41, 0x6d, 0x0,  /* CMOVNO EBP, dword [EBP] */
		0xf, 0x41, 0x2e,  /* CMOVNO EBP, dword [ESI] */
		0xf, 0x41, 0x2f,  /* CMOVNO EBP, dword [EDI] */
		0xf, 0x41, 0x31,  /* CMOVNO ESI, dword [ECX] */
		0xf, 0x41, 0x32,  /* CMOVNO ESI, dword [EDX] */
		0xf, 0x41, 0x33,  /* CMOVNO ESI, dword [EBX] */
		0xf, 0x41, 0x34, 0x24,  /* CMOVNO ESI, dword [ESP] */
		0xf, 0x41, 0x75, 0x0,  /* CMOVNO ESI, dword [EBP] */
		0xf, 0x41, 0x36,  /* CMOVNO ESI, dword [ESI] */
		0xf, 0x41, 0x37,  /* CMOVNO ESI, dword [EDI] */
		0xf, 0x41, 0x39,  /* CMOVNO EDI, dword [ECX] */
		0xf, 0x41, 0x3a,  /* CMOVNO EDI, dword [EDX] */
		0xf, 0x41, 0x3b,  /* CMOVNO EDI, dword [EBX] */
		0xf, 0x41, 0x3c, 0x24,  /* CMOVNO EDI, dword [ESP] */
		0xf, 0x41, 0x7d, 0x0,  /* CMOVNO EDI, dword [EBP] */
		0xf, 0x41, 0x3e,  /* CMOVNO EDI, dword [ESI] */
		0xf, 0x41, 0x3f   /* CMOVNO EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVNO EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVB_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x42 
	const uint8_t pOps[0xb8] = {
		0xf, 0x42, 0x1,  /* CMOVB EAX, dword [ECX] */
		0xf, 0x42, 0x2,  /* CMOVB EAX, dword [EDX] */
		0xf, 0x42, 0x3,  /* CMOVB EAX, dword [EBX] */
		0xf, 0x42, 0x4, 0x24,  /* CMOVB EAX, dword [ESP] */
		0xf, 0x42, 0x45, 0x0,  /* CMOVB EAX, dword [EBP] */
		0xf, 0x42, 0x6,  /* CMOVB EAX, dword [ESI] */
		0xf, 0x42, 0x7,  /* CMOVB EAX, dword [EDI] */
		0xf, 0x42, 0x9,  /* CMOVB ECX, dword [ECX] */
		0xf, 0x42, 0xa,  /* CMOVB ECX, dword [EDX] */
		0xf, 0x42, 0xb,  /* CMOVB ECX, dword [EBX] */
		0xf, 0x42, 0xc, 0x24,  /* CMOVB ECX, dword [ESP] */
		0xf, 0x42, 0x4d, 0x0,  /* CMOVB ECX, dword [EBP] */
		0xf, 0x42, 0xe,  /* CMOVB ECX, dword [ESI] */
		0xf, 0x42, 0xf,  /* CMOVB ECX, dword [EDI] */
		0xf, 0x42, 0x11,  /* CMOVB EDX, dword [ECX] */
		0xf, 0x42, 0x12,  /* CMOVB EDX, dword [EDX] */
		0xf, 0x42, 0x13,  /* CMOVB EDX, dword [EBX] */
		0xf, 0x42, 0x14, 0x24,  /* CMOVB EDX, dword [ESP] */
		0xf, 0x42, 0x55, 0x0,  /* CMOVB EDX, dword [EBP] */
		0xf, 0x42, 0x16,  /* CMOVB EDX, dword [ESI] */
		0xf, 0x42, 0x17,  /* CMOVB EDX, dword [EDI] */
		0xf, 0x42, 0x19,  /* CMOVB EBX, dword [ECX] */
		0xf, 0x42, 0x1a,  /* CMOVB EBX, dword [EDX] */
		0xf, 0x42, 0x1b,  /* CMOVB EBX, dword [EBX] */
		0xf, 0x42, 0x1c, 0x24,  /* CMOVB EBX, dword [ESP] */
		0xf, 0x42, 0x5d, 0x0,  /* CMOVB EBX, dword [EBP] */
		0xf, 0x42, 0x1e,  /* CMOVB EBX, dword [ESI] */
		0xf, 0x42, 0x1f,  /* CMOVB EBX, dword [EDI] */
		0xf, 0x42, 0x21,  /* CMOVB ESP, dword [ECX] */
		0xf, 0x42, 0x22,  /* CMOVB ESP, dword [EDX] */
		0xf, 0x42, 0x23,  /* CMOVB ESP, dword [EBX] */
		0xf, 0x42, 0x24, 0x24,  /* CMOVB ESP, dword [ESP] */
		0xf, 0x42, 0x65, 0x0,  /* CMOVB ESP, dword [EBP] */
		0xf, 0x42, 0x26,  /* CMOVB ESP, dword [ESI] */
		0xf, 0x42, 0x27,  /* CMOVB ESP, dword [EDI] */
		0xf, 0x42, 0x29,  /* CMOVB EBP, dword [ECX] */
		0xf, 0x42, 0x2a,  /* CMOVB EBP, dword [EDX] */
		0xf, 0x42, 0x2b,  /* CMOVB EBP, dword [EBX] */
		0xf, 0x42, 0x2c, 0x24,  /* CMOVB EBP, dword [ESP] */
		0xf, 0x42, 0x6d, 0x0,  /* CMOVB EBP, dword [EBP] */
		0xf, 0x42, 0x2e,  /* CMOVB EBP, dword [ESI] */
		0xf, 0x42, 0x2f,  /* CMOVB EBP, dword [EDI] */
		0xf, 0x42, 0x31,  /* CMOVB ESI, dword [ECX] */
		0xf, 0x42, 0x32,  /* CMOVB ESI, dword [EDX] */
		0xf, 0x42, 0x33,  /* CMOVB ESI, dword [EBX] */
		0xf, 0x42, 0x34, 0x24,  /* CMOVB ESI, dword [ESP] */
		0xf, 0x42, 0x75, 0x0,  /* CMOVB ESI, dword [EBP] */
		0xf, 0x42, 0x36,  /* CMOVB ESI, dword [ESI] */
		0xf, 0x42, 0x37,  /* CMOVB ESI, dword [EDI] */
		0xf, 0x42, 0x39,  /* CMOVB EDI, dword [ECX] */
		0xf, 0x42, 0x3a,  /* CMOVB EDI, dword [EDX] */
		0xf, 0x42, 0x3b,  /* CMOVB EDI, dword [EBX] */
		0xf, 0x42, 0x3c, 0x24,  /* CMOVB EDI, dword [ESP] */
		0xf, 0x42, 0x7d, 0x0,  /* CMOVB EDI, dword [EBP] */
		0xf, 0x42, 0x3e,  /* CMOVB EDI, dword [ESI] */
		0xf, 0x42, 0x3f   /* CMOVB EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVB EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVAE_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x43 
	const uint8_t pOps[0xb8] = {
		0xf, 0x43, 0x1,  /* CMOVAE EAX, dword [ECX] */
		0xf, 0x43, 0x2,  /* CMOVAE EAX, dword [EDX] */
		0xf, 0x43, 0x3,  /* CMOVAE EAX, dword [EBX] */
		0xf, 0x43, 0x4, 0x24,  /* CMOVAE EAX, dword [ESP] */
		0xf, 0x43, 0x45, 0x0,  /* CMOVAE EAX, dword [EBP] */
		0xf, 0x43, 0x6,  /* CMOVAE EAX, dword [ESI] */
		0xf, 0x43, 0x7,  /* CMOVAE EAX, dword [EDI] */
		0xf, 0x43, 0x9,  /* CMOVAE ECX, dword [ECX] */
		0xf, 0x43, 0xa,  /* CMOVAE ECX, dword [EDX] */
		0xf, 0x43, 0xb,  /* CMOVAE ECX, dword [EBX] */
		0xf, 0x43, 0xc, 0x24,  /* CMOVAE ECX, dword [ESP] */
		0xf, 0x43, 0x4d, 0x0,  /* CMOVAE ECX, dword [EBP] */
		0xf, 0x43, 0xe,  /* CMOVAE ECX, dword [ESI] */
		0xf, 0x43, 0xf,  /* CMOVAE ECX, dword [EDI] */
		0xf, 0x43, 0x11,  /* CMOVAE EDX, dword [ECX] */
		0xf, 0x43, 0x12,  /* CMOVAE EDX, dword [EDX] */
		0xf, 0x43, 0x13,  /* CMOVAE EDX, dword [EBX] */
		0xf, 0x43, 0x14, 0x24,  /* CMOVAE EDX, dword [ESP] */
		0xf, 0x43, 0x55, 0x0,  /* CMOVAE EDX, dword [EBP] */
		0xf, 0x43, 0x16,  /* CMOVAE EDX, dword [ESI] */
		0xf, 0x43, 0x17,  /* CMOVAE EDX, dword [EDI] */
		0xf, 0x43, 0x19,  /* CMOVAE EBX, dword [ECX] */
		0xf, 0x43, 0x1a,  /* CMOVAE EBX, dword [EDX] */
		0xf, 0x43, 0x1b,  /* CMOVAE EBX, dword [EBX] */
		0xf, 0x43, 0x1c, 0x24,  /* CMOVAE EBX, dword [ESP] */
		0xf, 0x43, 0x5d, 0x0,  /* CMOVAE EBX, dword [EBP] */
		0xf, 0x43, 0x1e,  /* CMOVAE EBX, dword [ESI] */
		0xf, 0x43, 0x1f,  /* CMOVAE EBX, dword [EDI] */
		0xf, 0x43, 0x21,  /* CMOVAE ESP, dword [ECX] */
		0xf, 0x43, 0x22,  /* CMOVAE ESP, dword [EDX] */
		0xf, 0x43, 0x23,  /* CMOVAE ESP, dword [EBX] */
		0xf, 0x43, 0x24, 0x24,  /* CMOVAE ESP, dword [ESP] */
		0xf, 0x43, 0x65, 0x0,  /* CMOVAE ESP, dword [EBP] */
		0xf, 0x43, 0x26,  /* CMOVAE ESP, dword [ESI] */
		0xf, 0x43, 0x27,  /* CMOVAE ESP, dword [EDI] */
		0xf, 0x43, 0x29,  /* CMOVAE EBP, dword [ECX] */
		0xf, 0x43, 0x2a,  /* CMOVAE EBP, dword [EDX] */
		0xf, 0x43, 0x2b,  /* CMOVAE EBP, dword [EBX] */
		0xf, 0x43, 0x2c, 0x24,  /* CMOVAE EBP, dword [ESP] */
		0xf, 0x43, 0x6d, 0x0,  /* CMOVAE EBP, dword [EBP] */
		0xf, 0x43, 0x2e,  /* CMOVAE EBP, dword [ESI] */
		0xf, 0x43, 0x2f,  /* CMOVAE EBP, dword [EDI] */
		0xf, 0x43, 0x31,  /* CMOVAE ESI, dword [ECX] */
		0xf, 0x43, 0x32,  /* CMOVAE ESI, dword [EDX] */
		0xf, 0x43, 0x33,  /* CMOVAE ESI, dword [EBX] */
		0xf, 0x43, 0x34, 0x24,  /* CMOVAE ESI, dword [ESP] */
		0xf, 0x43, 0x75, 0x0,  /* CMOVAE ESI, dword [EBP] */
		0xf, 0x43, 0x36,  /* CMOVAE ESI, dword [ESI] */
		0xf, 0x43, 0x37,  /* CMOVAE ESI, dword [EDI] */
		0xf, 0x43, 0x39,  /* CMOVAE EDI, dword [ECX] */
		0xf, 0x43, 0x3a,  /* CMOVAE EDI, dword [EDX] */
		0xf, 0x43, 0x3b,  /* CMOVAE EDI, dword [EBX] */
		0xf, 0x43, 0x3c, 0x24,  /* CMOVAE EDI, dword [ESP] */
		0xf, 0x43, 0x7d, 0x0,  /* CMOVAE EDI, dword [EBP] */
		0xf, 0x43, 0x3e,  /* CMOVAE EDI, dword [ESI] */
		0xf, 0x43, 0x3f   /* CMOVAE EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVAE EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVZ_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x44 
	const uint8_t pOps[0xb8] = {
		0xf, 0x44, 0x1,  /* CMOVZ EAX, dword [ECX] */
		0xf, 0x44, 0x2,  /* CMOVZ EAX, dword [EDX] */
		0xf, 0x44, 0x3,  /* CMOVZ EAX, dword [EBX] */
		0xf, 0x44, 0x4, 0x24,  /* CMOVZ EAX, dword [ESP] */
		0xf, 0x44, 0x45, 0x0,  /* CMOVZ EAX, dword [EBP] */
		0xf, 0x44, 0x6,  /* CMOVZ EAX, dword [ESI] */
		0xf, 0x44, 0x7,  /* CMOVZ EAX, dword [EDI] */
		0xf, 0x44, 0x9,  /* CMOVZ ECX, dword [ECX] */
		0xf, 0x44, 0xa,  /* CMOVZ ECX, dword [EDX] */
		0xf, 0x44, 0xb,  /* CMOVZ ECX, dword [EBX] */
		0xf, 0x44, 0xc, 0x24,  /* CMOVZ ECX, dword [ESP] */
		0xf, 0x44, 0x4d, 0x0,  /* CMOVZ ECX, dword [EBP] */
		0xf, 0x44, 0xe,  /* CMOVZ ECX, dword [ESI] */
		0xf, 0x44, 0xf,  /* CMOVZ ECX, dword [EDI] */
		0xf, 0x44, 0x11,  /* CMOVZ EDX, dword [ECX] */
		0xf, 0x44, 0x12,  /* CMOVZ EDX, dword [EDX] */
		0xf, 0x44, 0x13,  /* CMOVZ EDX, dword [EBX] */
		0xf, 0x44, 0x14, 0x24,  /* CMOVZ EDX, dword [ESP] */
		0xf, 0x44, 0x55, 0x0,  /* CMOVZ EDX, dword [EBP] */
		0xf, 0x44, 0x16,  /* CMOVZ EDX, dword [ESI] */
		0xf, 0x44, 0x17,  /* CMOVZ EDX, dword [EDI] */
		0xf, 0x44, 0x19,  /* CMOVZ EBX, dword [ECX] */
		0xf, 0x44, 0x1a,  /* CMOVZ EBX, dword [EDX] */
		0xf, 0x44, 0x1b,  /* CMOVZ EBX, dword [EBX] */
		0xf, 0x44, 0x1c, 0x24,  /* CMOVZ EBX, dword [ESP] */
		0xf, 0x44, 0x5d, 0x0,  /* CMOVZ EBX, dword [EBP] */
		0xf, 0x44, 0x1e,  /* CMOVZ EBX, dword [ESI] */
		0xf, 0x44, 0x1f,  /* CMOVZ EBX, dword [EDI] */
		0xf, 0x44, 0x21,  /* CMOVZ ESP, dword [ECX] */
		0xf, 0x44, 0x22,  /* CMOVZ ESP, dword [EDX] */
		0xf, 0x44, 0x23,  /* CMOVZ ESP, dword [EBX] */
		0xf, 0x44, 0x24, 0x24,  /* CMOVZ ESP, dword [ESP] */
		0xf, 0x44, 0x65, 0x0,  /* CMOVZ ESP, dword [EBP] */
		0xf, 0x44, 0x26,  /* CMOVZ ESP, dword [ESI] */
		0xf, 0x44, 0x27,  /* CMOVZ ESP, dword [EDI] */
		0xf, 0x44, 0x29,  /* CMOVZ EBP, dword [ECX] */
		0xf, 0x44, 0x2a,  /* CMOVZ EBP, dword [EDX] */
		0xf, 0x44, 0x2b,  /* CMOVZ EBP, dword [EBX] */
		0xf, 0x44, 0x2c, 0x24,  /* CMOVZ EBP, dword [ESP] */
		0xf, 0x44, 0x6d, 0x0,  /* CMOVZ EBP, dword [EBP] */
		0xf, 0x44, 0x2e,  /* CMOVZ EBP, dword [ESI] */
		0xf, 0x44, 0x2f,  /* CMOVZ EBP, dword [EDI] */
		0xf, 0x44, 0x31,  /* CMOVZ ESI, dword [ECX] */
		0xf, 0x44, 0x32,  /* CMOVZ ESI, dword [EDX] */
		0xf, 0x44, 0x33,  /* CMOVZ ESI, dword [EBX] */
		0xf, 0x44, 0x34, 0x24,  /* CMOVZ ESI, dword [ESP] */
		0xf, 0x44, 0x75, 0x0,  /* CMOVZ ESI, dword [EBP] */
		0xf, 0x44, 0x36,  /* CMOVZ ESI, dword [ESI] */
		0xf, 0x44, 0x37,  /* CMOVZ ESI, dword [EDI] */
		0xf, 0x44, 0x39,  /* CMOVZ EDI, dword [ECX] */
		0xf, 0x44, 0x3a,  /* CMOVZ EDI, dword [EDX] */
		0xf, 0x44, 0x3b,  /* CMOVZ EDI, dword [EBX] */
		0xf, 0x44, 0x3c, 0x24,  /* CMOVZ EDI, dword [ESP] */
		0xf, 0x44, 0x7d, 0x0,  /* CMOVZ EDI, dword [EBP] */
		0xf, 0x44, 0x3e,  /* CMOVZ EDI, dword [ESI] */
		0xf, 0x44, 0x3f   /* CMOVZ EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVZ EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVNZ_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x45 
	const uint8_t pOps[0xb8] = {
		0xf, 0x45, 0x1,  /* CMOVNZ EAX, dword [ECX] */
		0xf, 0x45, 0x2,  /* CMOVNZ EAX, dword [EDX] */
		0xf, 0x45, 0x3,  /* CMOVNZ EAX, dword [EBX] */
		0xf, 0x45, 0x4, 0x24,  /* CMOVNZ EAX, dword [ESP] */
		0xf, 0x45, 0x45, 0x0,  /* CMOVNZ EAX, dword [EBP] */
		0xf, 0x45, 0x6,  /* CMOVNZ EAX, dword [ESI] */
		0xf, 0x45, 0x7,  /* CMOVNZ EAX, dword [EDI] */
		0xf, 0x45, 0x9,  /* CMOVNZ ECX, dword [ECX] */
		0xf, 0x45, 0xa,  /* CMOVNZ ECX, dword [EDX] */
		0xf, 0x45, 0xb,  /* CMOVNZ ECX, dword [EBX] */
		0xf, 0x45, 0xc, 0x24,  /* CMOVNZ ECX, dword [ESP] */
		0xf, 0x45, 0x4d, 0x0,  /* CMOVNZ ECX, dword [EBP] */
		0xf, 0x45, 0xe,  /* CMOVNZ ECX, dword [ESI] */
		0xf, 0x45, 0xf,  /* CMOVNZ ECX, dword [EDI] */
		0xf, 0x45, 0x11,  /* CMOVNZ EDX, dword [ECX] */
		0xf, 0x45, 0x12,  /* CMOVNZ EDX, dword [EDX] */
		0xf, 0x45, 0x13,  /* CMOVNZ EDX, dword [EBX] */
		0xf, 0x45, 0x14, 0x24,  /* CMOVNZ EDX, dword [ESP] */
		0xf, 0x45, 0x55, 0x0,  /* CMOVNZ EDX, dword [EBP] */
		0xf, 0x45, 0x16,  /* CMOVNZ EDX, dword [ESI] */
		0xf, 0x45, 0x17,  /* CMOVNZ EDX, dword [EDI] */
		0xf, 0x45, 0x19,  /* CMOVNZ EBX, dword [ECX] */
		0xf, 0x45, 0x1a,  /* CMOVNZ EBX, dword [EDX] */
		0xf, 0x45, 0x1b,  /* CMOVNZ EBX, dword [EBX] */
		0xf, 0x45, 0x1c, 0x24,  /* CMOVNZ EBX, dword [ESP] */
		0xf, 0x45, 0x5d, 0x0,  /* CMOVNZ EBX, dword [EBP] */
		0xf, 0x45, 0x1e,  /* CMOVNZ EBX, dword [ESI] */
		0xf, 0x45, 0x1f,  /* CMOVNZ EBX, dword [EDI] */
		0xf, 0x45, 0x21,  /* CMOVNZ ESP, dword [ECX] */
		0xf, 0x45, 0x22,  /* CMOVNZ ESP, dword [EDX] */
		0xf, 0x45, 0x23,  /* CMOVNZ ESP, dword [EBX] */
		0xf, 0x45, 0x24, 0x24,  /* CMOVNZ ESP, dword [ESP] */
		0xf, 0x45, 0x65, 0x0,  /* CMOVNZ ESP, dword [EBP] */
		0xf, 0x45, 0x26,  /* CMOVNZ ESP, dword [ESI] */
		0xf, 0x45, 0x27,  /* CMOVNZ ESP, dword [EDI] */
		0xf, 0x45, 0x29,  /* CMOVNZ EBP, dword [ECX] */
		0xf, 0x45, 0x2a,  /* CMOVNZ EBP, dword [EDX] */
		0xf, 0x45, 0x2b,  /* CMOVNZ EBP, dword [EBX] */
		0xf, 0x45, 0x2c, 0x24,  /* CMOVNZ EBP, dword [ESP] */
		0xf, 0x45, 0x6d, 0x0,  /* CMOVNZ EBP, dword [EBP] */
		0xf, 0x45, 0x2e,  /* CMOVNZ EBP, dword [ESI] */
		0xf, 0x45, 0x2f,  /* CMOVNZ EBP, dword [EDI] */
		0xf, 0x45, 0x31,  /* CMOVNZ ESI, dword [ECX] */
		0xf, 0x45, 0x32,  /* CMOVNZ ESI, dword [EDX] */
		0xf, 0x45, 0x33,  /* CMOVNZ ESI, dword [EBX] */
		0xf, 0x45, 0x34, 0x24,  /* CMOVNZ ESI, dword [ESP] */
		0xf, 0x45, 0x75, 0x0,  /* CMOVNZ ESI, dword [EBP] */
		0xf, 0x45, 0x36,  /* CMOVNZ ESI, dword [ESI] */
		0xf, 0x45, 0x37,  /* CMOVNZ ESI, dword [EDI] */
		0xf, 0x45, 0x39,  /* CMOVNZ EDI, dword [ECX] */
		0xf, 0x45, 0x3a,  /* CMOVNZ EDI, dword [EDX] */
		0xf, 0x45, 0x3b,  /* CMOVNZ EDI, dword [EBX] */
		0xf, 0x45, 0x3c, 0x24,  /* CMOVNZ EDI, dword [ESP] */
		0xf, 0x45, 0x7d, 0x0,  /* CMOVNZ EDI, dword [EBP] */
		0xf, 0x45, 0x3e,  /* CMOVNZ EDI, dword [ESI] */
		0xf, 0x45, 0x3f   /* CMOVNZ EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVNZ EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVBE_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x46 
	const uint8_t pOps[0xb8] = {
		0xf, 0x46, 0x1,  /* CMOVBE EAX, dword [ECX] */
		0xf, 0x46, 0x2,  /* CMOVBE EAX, dword [EDX] */
		0xf, 0x46, 0x3,  /* CMOVBE EAX, dword [EBX] */
		0xf, 0x46, 0x4, 0x24,  /* CMOVBE EAX, dword [ESP] */
		0xf, 0x46, 0x45, 0x0,  /* CMOVBE EAX, dword [EBP] */
		0xf, 0x46, 0x6,  /* CMOVBE EAX, dword [ESI] */
		0xf, 0x46, 0x7,  /* CMOVBE EAX, dword [EDI] */
		0xf, 0x46, 0x9,  /* CMOVBE ECX, dword [ECX] */
		0xf, 0x46, 0xa,  /* CMOVBE ECX, dword [EDX] */
		0xf, 0x46, 0xb,  /* CMOVBE ECX, dword [EBX] */
		0xf, 0x46, 0xc, 0x24,  /* CMOVBE ECX, dword [ESP] */
		0xf, 0x46, 0x4d, 0x0,  /* CMOVBE ECX, dword [EBP] */
		0xf, 0x46, 0xe,  /* CMOVBE ECX, dword [ESI] */
		0xf, 0x46, 0xf,  /* CMOVBE ECX, dword [EDI] */
		0xf, 0x46, 0x11,  /* CMOVBE EDX, dword [ECX] */
		0xf, 0x46, 0x12,  /* CMOVBE EDX, dword [EDX] */
		0xf, 0x46, 0x13,  /* CMOVBE EDX, dword [EBX] */
		0xf, 0x46, 0x14, 0x24,  /* CMOVBE EDX, dword [ESP] */
		0xf, 0x46, 0x55, 0x0,  /* CMOVBE EDX, dword [EBP] */
		0xf, 0x46, 0x16,  /* CMOVBE EDX, dword [ESI] */
		0xf, 0x46, 0x17,  /* CMOVBE EDX, dword [EDI] */
		0xf, 0x46, 0x19,  /* CMOVBE EBX, dword [ECX] */
		0xf, 0x46, 0x1a,  /* CMOVBE EBX, dword [EDX] */
		0xf, 0x46, 0x1b,  /* CMOVBE EBX, dword [EBX] */
		0xf, 0x46, 0x1c, 0x24,  /* CMOVBE EBX, dword [ESP] */
		0xf, 0x46, 0x5d, 0x0,  /* CMOVBE EBX, dword [EBP] */
		0xf, 0x46, 0x1e,  /* CMOVBE EBX, dword [ESI] */
		0xf, 0x46, 0x1f,  /* CMOVBE EBX, dword [EDI] */
		0xf, 0x46, 0x21,  /* CMOVBE ESP, dword [ECX] */
		0xf, 0x46, 0x22,  /* CMOVBE ESP, dword [EDX] */
		0xf, 0x46, 0x23,  /* CMOVBE ESP, dword [EBX] */
		0xf, 0x46, 0x24, 0x24,  /* CMOVBE ESP, dword [ESP] */
		0xf, 0x46, 0x65, 0x0,  /* CMOVBE ESP, dword [EBP] */
		0xf, 0x46, 0x26,  /* CMOVBE ESP, dword [ESI] */
		0xf, 0x46, 0x27,  /* CMOVBE ESP, dword [EDI] */
		0xf, 0x46, 0x29,  /* CMOVBE EBP, dword [ECX] */
		0xf, 0x46, 0x2a,  /* CMOVBE EBP, dword [EDX] */
		0xf, 0x46, 0x2b,  /* CMOVBE EBP, dword [EBX] */
		0xf, 0x46, 0x2c, 0x24,  /* CMOVBE EBP, dword [ESP] */
		0xf, 0x46, 0x6d, 0x0,  /* CMOVBE EBP, dword [EBP] */
		0xf, 0x46, 0x2e,  /* CMOVBE EBP, dword [ESI] */
		0xf, 0x46, 0x2f,  /* CMOVBE EBP, dword [EDI] */
		0xf, 0x46, 0x31,  /* CMOVBE ESI, dword [ECX] */
		0xf, 0x46, 0x32,  /* CMOVBE ESI, dword [EDX] */
		0xf, 0x46, 0x33,  /* CMOVBE ESI, dword [EBX] */
		0xf, 0x46, 0x34, 0x24,  /* CMOVBE ESI, dword [ESP] */
		0xf, 0x46, 0x75, 0x0,  /* CMOVBE ESI, dword [EBP] */
		0xf, 0x46, 0x36,  /* CMOVBE ESI, dword [ESI] */
		0xf, 0x46, 0x37,  /* CMOVBE ESI, dword [EDI] */
		0xf, 0x46, 0x39,  /* CMOVBE EDI, dword [ECX] */
		0xf, 0x46, 0x3a,  /* CMOVBE EDI, dword [EDX] */
		0xf, 0x46, 0x3b,  /* CMOVBE EDI, dword [EBX] */
		0xf, 0x46, 0x3c, 0x24,  /* CMOVBE EDI, dword [ESP] */
		0xf, 0x46, 0x7d, 0x0,  /* CMOVBE EDI, dword [EBP] */
		0xf, 0x46, 0x3e,  /* CMOVBE EDI, dword [ESI] */
		0xf, 0x46, 0x3f   /* CMOVBE EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVBE EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVA_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x47 
	const uint8_t pOps[0xb8] = {
		0xf, 0x47, 0x1,  /* CMOVA EAX, dword [ECX] */
		0xf, 0x47, 0x2,  /* CMOVA EAX, dword [EDX] */
		0xf, 0x47, 0x3,  /* CMOVA EAX, dword [EBX] */
		0xf, 0x47, 0x4, 0x24,  /* CMOVA EAX, dword [ESP] */
		0xf, 0x47, 0x45, 0x0,  /* CMOVA EAX, dword [EBP] */
		0xf, 0x47, 0x6,  /* CMOVA EAX, dword [ESI] */
		0xf, 0x47, 0x7,  /* CMOVA EAX, dword [EDI] */
		0xf, 0x47, 0x9,  /* CMOVA ECX, dword [ECX] */
		0xf, 0x47, 0xa,  /* CMOVA ECX, dword [EDX] */
		0xf, 0x47, 0xb,  /* CMOVA ECX, dword [EBX] */
		0xf, 0x47, 0xc, 0x24,  /* CMOVA ECX, dword [ESP] */
		0xf, 0x47, 0x4d, 0x0,  /* CMOVA ECX, dword [EBP] */
		0xf, 0x47, 0xe,  /* CMOVA ECX, dword [ESI] */
		0xf, 0x47, 0xf,  /* CMOVA ECX, dword [EDI] */
		0xf, 0x47, 0x11,  /* CMOVA EDX, dword [ECX] */
		0xf, 0x47, 0x12,  /* CMOVA EDX, dword [EDX] */
		0xf, 0x47, 0x13,  /* CMOVA EDX, dword [EBX] */
		0xf, 0x47, 0x14, 0x24,  /* CMOVA EDX, dword [ESP] */
		0xf, 0x47, 0x55, 0x0,  /* CMOVA EDX, dword [EBP] */
		0xf, 0x47, 0x16,  /* CMOVA EDX, dword [ESI] */
		0xf, 0x47, 0x17,  /* CMOVA EDX, dword [EDI] */
		0xf, 0x47, 0x19,  /* CMOVA EBX, dword [ECX] */
		0xf, 0x47, 0x1a,  /* CMOVA EBX, dword [EDX] */
		0xf, 0x47, 0x1b,  /* CMOVA EBX, dword [EBX] */
		0xf, 0x47, 0x1c, 0x24,  /* CMOVA EBX, dword [ESP] */
		0xf, 0x47, 0x5d, 0x0,  /* CMOVA EBX, dword [EBP] */
		0xf, 0x47, 0x1e,  /* CMOVA EBX, dword [ESI] */
		0xf, 0x47, 0x1f,  /* CMOVA EBX, dword [EDI] */
		0xf, 0x47, 0x21,  /* CMOVA ESP, dword [ECX] */
		0xf, 0x47, 0x22,  /* CMOVA ESP, dword [EDX] */
		0xf, 0x47, 0x23,  /* CMOVA ESP, dword [EBX] */
		0xf, 0x47, 0x24, 0x24,  /* CMOVA ESP, dword [ESP] */
		0xf, 0x47, 0x65, 0x0,  /* CMOVA ESP, dword [EBP] */
		0xf, 0x47, 0x26,  /* CMOVA ESP, dword [ESI] */
		0xf, 0x47, 0x27,  /* CMOVA ESP, dword [EDI] */
		0xf, 0x47, 0x29,  /* CMOVA EBP, dword [ECX] */
		0xf, 0x47, 0x2a,  /* CMOVA EBP, dword [EDX] */
		0xf, 0x47, 0x2b,  /* CMOVA EBP, dword [EBX] */
		0xf, 0x47, 0x2c, 0x24,  /* CMOVA EBP, dword [ESP] */
		0xf, 0x47, 0x6d, 0x0,  /* CMOVA EBP, dword [EBP] */
		0xf, 0x47, 0x2e,  /* CMOVA EBP, dword [ESI] */
		0xf, 0x47, 0x2f,  /* CMOVA EBP, dword [EDI] */
		0xf, 0x47, 0x31,  /* CMOVA ESI, dword [ECX] */
		0xf, 0x47, 0x32,  /* CMOVA ESI, dword [EDX] */
		0xf, 0x47, 0x33,  /* CMOVA ESI, dword [EBX] */
		0xf, 0x47, 0x34, 0x24,  /* CMOVA ESI, dword [ESP] */
		0xf, 0x47, 0x75, 0x0,  /* CMOVA ESI, dword [EBP] */
		0xf, 0x47, 0x36,  /* CMOVA ESI, dword [ESI] */
		0xf, 0x47, 0x37,  /* CMOVA ESI, dword [EDI] */
		0xf, 0x47, 0x39,  /* CMOVA EDI, dword [ECX] */
		0xf, 0x47, 0x3a,  /* CMOVA EDI, dword [EDX] */
		0xf, 0x47, 0x3b,  /* CMOVA EDI, dword [EBX] */
		0xf, 0x47, 0x3c, 0x24,  /* CMOVA EDI, dword [ESP] */
		0xf, 0x47, 0x7d, 0x0,  /* CMOVA EDI, dword [EBP] */
		0xf, 0x47, 0x3e,  /* CMOVA EDI, dword [ESI] */
		0xf, 0x47, 0x3f   /* CMOVA EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVA EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVS_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x48 
	const uint8_t pOps[0xb8] = {
		0xf, 0x48, 0x1,  /* CMOVS EAX, dword [ECX] */
		0xf, 0x48, 0x2,  /* CMOVS EAX, dword [EDX] */
		0xf, 0x48, 0x3,  /* CMOVS EAX, dword [EBX] */
		0xf, 0x48, 0x4, 0x24,  /* CMOVS EAX, dword [ESP] */
		0xf, 0x48, 0x45, 0x0,  /* CMOVS EAX, dword [EBP] */
		0xf, 0x48, 0x6,  /* CMOVS EAX, dword [ESI] */
		0xf, 0x48, 0x7,  /* CMOVS EAX, dword [EDI] */
		0xf, 0x48, 0x9,  /* CMOVS ECX, dword [ECX] */
		0xf, 0x48, 0xa,  /* CMOVS ECX, dword [EDX] */
		0xf, 0x48, 0xb,  /* CMOVS ECX, dword [EBX] */
		0xf, 0x48, 0xc, 0x24,  /* CMOVS ECX, dword [ESP] */
		0xf, 0x48, 0x4d, 0x0,  /* CMOVS ECX, dword [EBP] */
		0xf, 0x48, 0xe,  /* CMOVS ECX, dword [ESI] */
		0xf, 0x48, 0xf,  /* CMOVS ECX, dword [EDI] */
		0xf, 0x48, 0x11,  /* CMOVS EDX, dword [ECX] */
		0xf, 0x48, 0x12,  /* CMOVS EDX, dword [EDX] */
		0xf, 0x48, 0x13,  /* CMOVS EDX, dword [EBX] */
		0xf, 0x48, 0x14, 0x24,  /* CMOVS EDX, dword [ESP] */
		0xf, 0x48, 0x55, 0x0,  /* CMOVS EDX, dword [EBP] */
		0xf, 0x48, 0x16,  /* CMOVS EDX, dword [ESI] */
		0xf, 0x48, 0x17,  /* CMOVS EDX, dword [EDI] */
		0xf, 0x48, 0x19,  /* CMOVS EBX, dword [ECX] */
		0xf, 0x48, 0x1a,  /* CMOVS EBX, dword [EDX] */
		0xf, 0x48, 0x1b,  /* CMOVS EBX, dword [EBX] */
		0xf, 0x48, 0x1c, 0x24,  /* CMOVS EBX, dword [ESP] */
		0xf, 0x48, 0x5d, 0x0,  /* CMOVS EBX, dword [EBP] */
		0xf, 0x48, 0x1e,  /* CMOVS EBX, dword [ESI] */
		0xf, 0x48, 0x1f,  /* CMOVS EBX, dword [EDI] */
		0xf, 0x48, 0x21,  /* CMOVS ESP, dword [ECX] */
		0xf, 0x48, 0x22,  /* CMOVS ESP, dword [EDX] */
		0xf, 0x48, 0x23,  /* CMOVS ESP, dword [EBX] */
		0xf, 0x48, 0x24, 0x24,  /* CMOVS ESP, dword [ESP] */
		0xf, 0x48, 0x65, 0x0,  /* CMOVS ESP, dword [EBP] */
		0xf, 0x48, 0x26,  /* CMOVS ESP, dword [ESI] */
		0xf, 0x48, 0x27,  /* CMOVS ESP, dword [EDI] */
		0xf, 0x48, 0x29,  /* CMOVS EBP, dword [ECX] */
		0xf, 0x48, 0x2a,  /* CMOVS EBP, dword [EDX] */
		0xf, 0x48, 0x2b,  /* CMOVS EBP, dword [EBX] */
		0xf, 0x48, 0x2c, 0x24,  /* CMOVS EBP, dword [ESP] */
		0xf, 0x48, 0x6d, 0x0,  /* CMOVS EBP, dword [EBP] */
		0xf, 0x48, 0x2e,  /* CMOVS EBP, dword [ESI] */
		0xf, 0x48, 0x2f,  /* CMOVS EBP, dword [EDI] */
		0xf, 0x48, 0x31,  /* CMOVS ESI, dword [ECX] */
		0xf, 0x48, 0x32,  /* CMOVS ESI, dword [EDX] */
		0xf, 0x48, 0x33,  /* CMOVS ESI, dword [EBX] */
		0xf, 0x48, 0x34, 0x24,  /* CMOVS ESI, dword [ESP] */
		0xf, 0x48, 0x75, 0x0,  /* CMOVS ESI, dword [EBP] */
		0xf, 0x48, 0x36,  /* CMOVS ESI, dword [ESI] */
		0xf, 0x48, 0x37,  /* CMOVS ESI, dword [EDI] */
		0xf, 0x48, 0x39,  /* CMOVS EDI, dword [ECX] */
		0xf, 0x48, 0x3a,  /* CMOVS EDI, dword [EDX] */
		0xf, 0x48, 0x3b,  /* CMOVS EDI, dword [EBX] */
		0xf, 0x48, 0x3c, 0x24,  /* CMOVS EDI, dword [ESP] */
		0xf, 0x48, 0x7d, 0x0,  /* CMOVS EDI, dword [EBP] */
		0xf, 0x48, 0x3e,  /* CMOVS EDI, dword [ESI] */
		0xf, 0x48, 0x3f   /* CMOVS EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVS EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVNS_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x49 
	const uint8_t pOps[0xb8] = {
		0xf, 0x49, 0x1,  /* CMOVNS EAX, dword [ECX] */
		0xf, 0x49, 0x2,  /* CMOVNS EAX, dword [EDX] */
		0xf, 0x49, 0x3,  /* CMOVNS EAX, dword [EBX] */
		0xf, 0x49, 0x4, 0x24,  /* CMOVNS EAX, dword [ESP] */
		0xf, 0x49, 0x45, 0x0,  /* CMOVNS EAX, dword [EBP] */
		0xf, 0x49, 0x6,  /* CMOVNS EAX, dword [ESI] */
		0xf, 0x49, 0x7,  /* CMOVNS EAX, dword [EDI] */
		0xf, 0x49, 0x9,  /* CMOVNS ECX, dword [ECX] */
		0xf, 0x49, 0xa,  /* CMOVNS ECX, dword [EDX] */
		0xf, 0x49, 0xb,  /* CMOVNS ECX, dword [EBX] */
		0xf, 0x49, 0xc, 0x24,  /* CMOVNS ECX, dword [ESP] */
		0xf, 0x49, 0x4d, 0x0,  /* CMOVNS ECX, dword [EBP] */
		0xf, 0x49, 0xe,  /* CMOVNS ECX, dword [ESI] */
		0xf, 0x49, 0xf,  /* CMOVNS ECX, dword [EDI] */
		0xf, 0x49, 0x11,  /* CMOVNS EDX, dword [ECX] */
		0xf, 0x49, 0x12,  /* CMOVNS EDX, dword [EDX] */
		0xf, 0x49, 0x13,  /* CMOVNS EDX, dword [EBX] */
		0xf, 0x49, 0x14, 0x24,  /* CMOVNS EDX, dword [ESP] */
		0xf, 0x49, 0x55, 0x0,  /* CMOVNS EDX, dword [EBP] */
		0xf, 0x49, 0x16,  /* CMOVNS EDX, dword [ESI] */
		0xf, 0x49, 0x17,  /* CMOVNS EDX, dword [EDI] */
		0xf, 0x49, 0x19,  /* CMOVNS EBX, dword [ECX] */
		0xf, 0x49, 0x1a,  /* CMOVNS EBX, dword [EDX] */
		0xf, 0x49, 0x1b,  /* CMOVNS EBX, dword [EBX] */
		0xf, 0x49, 0x1c, 0x24,  /* CMOVNS EBX, dword [ESP] */
		0xf, 0x49, 0x5d, 0x0,  /* CMOVNS EBX, dword [EBP] */
		0xf, 0x49, 0x1e,  /* CMOVNS EBX, dword [ESI] */
		0xf, 0x49, 0x1f,  /* CMOVNS EBX, dword [EDI] */
		0xf, 0x49, 0x21,  /* CMOVNS ESP, dword [ECX] */
		0xf, 0x49, 0x22,  /* CMOVNS ESP, dword [EDX] */
		0xf, 0x49, 0x23,  /* CMOVNS ESP, dword [EBX] */
		0xf, 0x49, 0x24, 0x24,  /* CMOVNS ESP, dword [ESP] */
		0xf, 0x49, 0x65, 0x0,  /* CMOVNS ESP, dword [EBP] */
		0xf, 0x49, 0x26,  /* CMOVNS ESP, dword [ESI] */
		0xf, 0x49, 0x27,  /* CMOVNS ESP, dword [EDI] */
		0xf, 0x49, 0x29,  /* CMOVNS EBP, dword [ECX] */
		0xf, 0x49, 0x2a,  /* CMOVNS EBP, dword [EDX] */
		0xf, 0x49, 0x2b,  /* CMOVNS EBP, dword [EBX] */
		0xf, 0x49, 0x2c, 0x24,  /* CMOVNS EBP, dword [ESP] */
		0xf, 0x49, 0x6d, 0x0,  /* CMOVNS EBP, dword [EBP] */
		0xf, 0x49, 0x2e,  /* CMOVNS EBP, dword [ESI] */
		0xf, 0x49, 0x2f,  /* CMOVNS EBP, dword [EDI] */
		0xf, 0x49, 0x31,  /* CMOVNS ESI, dword [ECX] */
		0xf, 0x49, 0x32,  /* CMOVNS ESI, dword [EDX] */
		0xf, 0x49, 0x33,  /* CMOVNS ESI, dword [EBX] */
		0xf, 0x49, 0x34, 0x24,  /* CMOVNS ESI, dword [ESP] */
		0xf, 0x49, 0x75, 0x0,  /* CMOVNS ESI, dword [EBP] */
		0xf, 0x49, 0x36,  /* CMOVNS ESI, dword [ESI] */
		0xf, 0x49, 0x37,  /* CMOVNS ESI, dword [EDI] */
		0xf, 0x49, 0x39,  /* CMOVNS EDI, dword [ECX] */
		0xf, 0x49, 0x3a,  /* CMOVNS EDI, dword [EDX] */
		0xf, 0x49, 0x3b,  /* CMOVNS EDI, dword [EBX] */
		0xf, 0x49, 0x3c, 0x24,  /* CMOVNS EDI, dword [ESP] */
		0xf, 0x49, 0x7d, 0x0,  /* CMOVNS EDI, dword [EBP] */
		0xf, 0x49, 0x3e,  /* CMOVNS EDI, dword [ESI] */
		0xf, 0x49, 0x3f   /* CMOVNS EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVNS EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVP_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4a 
	const uint8_t pOps[0xb8] = {
		0xf, 0x4a, 0x1,  /* CMOVP EAX, dword [ECX] */
		0xf, 0x4a, 0x2,  /* CMOVP EAX, dword [EDX] */
		0xf, 0x4a, 0x3,  /* CMOVP EAX, dword [EBX] */
		0xf, 0x4a, 0x4, 0x24,  /* CMOVP EAX, dword [ESP] */
		0xf, 0x4a, 0x45, 0x0,  /* CMOVP EAX, dword [EBP] */
		0xf, 0x4a, 0x6,  /* CMOVP EAX, dword [ESI] */
		0xf, 0x4a, 0x7,  /* CMOVP EAX, dword [EDI] */
		0xf, 0x4a, 0x9,  /* CMOVP ECX, dword [ECX] */
		0xf, 0x4a, 0xa,  /* CMOVP ECX, dword [EDX] */
		0xf, 0x4a, 0xb,  /* CMOVP ECX, dword [EBX] */
		0xf, 0x4a, 0xc, 0x24,  /* CMOVP ECX, dword [ESP] */
		0xf, 0x4a, 0x4d, 0x0,  /* CMOVP ECX, dword [EBP] */
		0xf, 0x4a, 0xe,  /* CMOVP ECX, dword [ESI] */
		0xf, 0x4a, 0xf,  /* CMOVP ECX, dword [EDI] */
		0xf, 0x4a, 0x11,  /* CMOVP EDX, dword [ECX] */
		0xf, 0x4a, 0x12,  /* CMOVP EDX, dword [EDX] */
		0xf, 0x4a, 0x13,  /* CMOVP EDX, dword [EBX] */
		0xf, 0x4a, 0x14, 0x24,  /* CMOVP EDX, dword [ESP] */
		0xf, 0x4a, 0x55, 0x0,  /* CMOVP EDX, dword [EBP] */
		0xf, 0x4a, 0x16,  /* CMOVP EDX, dword [ESI] */
		0xf, 0x4a, 0x17,  /* CMOVP EDX, dword [EDI] */
		0xf, 0x4a, 0x19,  /* CMOVP EBX, dword [ECX] */
		0xf, 0x4a, 0x1a,  /* CMOVP EBX, dword [EDX] */
		0xf, 0x4a, 0x1b,  /* CMOVP EBX, dword [EBX] */
		0xf, 0x4a, 0x1c, 0x24,  /* CMOVP EBX, dword [ESP] */
		0xf, 0x4a, 0x5d, 0x0,  /* CMOVP EBX, dword [EBP] */
		0xf, 0x4a, 0x1e,  /* CMOVP EBX, dword [ESI] */
		0xf, 0x4a, 0x1f,  /* CMOVP EBX, dword [EDI] */
		0xf, 0x4a, 0x21,  /* CMOVP ESP, dword [ECX] */
		0xf, 0x4a, 0x22,  /* CMOVP ESP, dword [EDX] */
		0xf, 0x4a, 0x23,  /* CMOVP ESP, dword [EBX] */
		0xf, 0x4a, 0x24, 0x24,  /* CMOVP ESP, dword [ESP] */
		0xf, 0x4a, 0x65, 0x0,  /* CMOVP ESP, dword [EBP] */
		0xf, 0x4a, 0x26,  /* CMOVP ESP, dword [ESI] */
		0xf, 0x4a, 0x27,  /* CMOVP ESP, dword [EDI] */
		0xf, 0x4a, 0x29,  /* CMOVP EBP, dword [ECX] */
		0xf, 0x4a, 0x2a,  /* CMOVP EBP, dword [EDX] */
		0xf, 0x4a, 0x2b,  /* CMOVP EBP, dword [EBX] */
		0xf, 0x4a, 0x2c, 0x24,  /* CMOVP EBP, dword [ESP] */
		0xf, 0x4a, 0x6d, 0x0,  /* CMOVP EBP, dword [EBP] */
		0xf, 0x4a, 0x2e,  /* CMOVP EBP, dword [ESI] */
		0xf, 0x4a, 0x2f,  /* CMOVP EBP, dword [EDI] */
		0xf, 0x4a, 0x31,  /* CMOVP ESI, dword [ECX] */
		0xf, 0x4a, 0x32,  /* CMOVP ESI, dword [EDX] */
		0xf, 0x4a, 0x33,  /* CMOVP ESI, dword [EBX] */
		0xf, 0x4a, 0x34, 0x24,  /* CMOVP ESI, dword [ESP] */
		0xf, 0x4a, 0x75, 0x0,  /* CMOVP ESI, dword [EBP] */
		0xf, 0x4a, 0x36,  /* CMOVP ESI, dword [ESI] */
		0xf, 0x4a, 0x37,  /* CMOVP ESI, dword [EDI] */
		0xf, 0x4a, 0x39,  /* CMOVP EDI, dword [ECX] */
		0xf, 0x4a, 0x3a,  /* CMOVP EDI, dword [EDX] */
		0xf, 0x4a, 0x3b,  /* CMOVP EDI, dword [EBX] */
		0xf, 0x4a, 0x3c, 0x24,  /* CMOVP EDI, dword [ESP] */
		0xf, 0x4a, 0x7d, 0x0,  /* CMOVP EDI, dword [EBP] */
		0xf, 0x4a, 0x3e,  /* CMOVP EDI, dword [ESI] */
		0xf, 0x4a, 0x3f   /* CMOVP EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVP EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVNP_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4b 
	const uint8_t pOps[0xb8] = {
		0xf, 0x4b, 0x1,  /* CMOVNP EAX, dword [ECX] */
		0xf, 0x4b, 0x2,  /* CMOVNP EAX, dword [EDX] */
		0xf, 0x4b, 0x3,  /* CMOVNP EAX, dword [EBX] */
		0xf, 0x4b, 0x4, 0x24,  /* CMOVNP EAX, dword [ESP] */
		0xf, 0x4b, 0x45, 0x0,  /* CMOVNP EAX, dword [EBP] */
		0xf, 0x4b, 0x6,  /* CMOVNP EAX, dword [ESI] */
		0xf, 0x4b, 0x7,  /* CMOVNP EAX, dword [EDI] */
		0xf, 0x4b, 0x9,  /* CMOVNP ECX, dword [ECX] */
		0xf, 0x4b, 0xa,  /* CMOVNP ECX, dword [EDX] */
		0xf, 0x4b, 0xb,  /* CMOVNP ECX, dword [EBX] */
		0xf, 0x4b, 0xc, 0x24,  /* CMOVNP ECX, dword [ESP] */
		0xf, 0x4b, 0x4d, 0x0,  /* CMOVNP ECX, dword [EBP] */
		0xf, 0x4b, 0xe,  /* CMOVNP ECX, dword [ESI] */
		0xf, 0x4b, 0xf,  /* CMOVNP ECX, dword [EDI] */
		0xf, 0x4b, 0x11,  /* CMOVNP EDX, dword [ECX] */
		0xf, 0x4b, 0x12,  /* CMOVNP EDX, dword [EDX] */
		0xf, 0x4b, 0x13,  /* CMOVNP EDX, dword [EBX] */
		0xf, 0x4b, 0x14, 0x24,  /* CMOVNP EDX, dword [ESP] */
		0xf, 0x4b, 0x55, 0x0,  /* CMOVNP EDX, dword [EBP] */
		0xf, 0x4b, 0x16,  /* CMOVNP EDX, dword [ESI] */
		0xf, 0x4b, 0x17,  /* CMOVNP EDX, dword [EDI] */
		0xf, 0x4b, 0x19,  /* CMOVNP EBX, dword [ECX] */
		0xf, 0x4b, 0x1a,  /* CMOVNP EBX, dword [EDX] */
		0xf, 0x4b, 0x1b,  /* CMOVNP EBX, dword [EBX] */
		0xf, 0x4b, 0x1c, 0x24,  /* CMOVNP EBX, dword [ESP] */
		0xf, 0x4b, 0x5d, 0x0,  /* CMOVNP EBX, dword [EBP] */
		0xf, 0x4b, 0x1e,  /* CMOVNP EBX, dword [ESI] */
		0xf, 0x4b, 0x1f,  /* CMOVNP EBX, dword [EDI] */
		0xf, 0x4b, 0x21,  /* CMOVNP ESP, dword [ECX] */
		0xf, 0x4b, 0x22,  /* CMOVNP ESP, dword [EDX] */
		0xf, 0x4b, 0x23,  /* CMOVNP ESP, dword [EBX] */
		0xf, 0x4b, 0x24, 0x24,  /* CMOVNP ESP, dword [ESP] */
		0xf, 0x4b, 0x65, 0x0,  /* CMOVNP ESP, dword [EBP] */
		0xf, 0x4b, 0x26,  /* CMOVNP ESP, dword [ESI] */
		0xf, 0x4b, 0x27,  /* CMOVNP ESP, dword [EDI] */
		0xf, 0x4b, 0x29,  /* CMOVNP EBP, dword [ECX] */
		0xf, 0x4b, 0x2a,  /* CMOVNP EBP, dword [EDX] */
		0xf, 0x4b, 0x2b,  /* CMOVNP EBP, dword [EBX] */
		0xf, 0x4b, 0x2c, 0x24,  /* CMOVNP EBP, dword [ESP] */
		0xf, 0x4b, 0x6d, 0x0,  /* CMOVNP EBP, dword [EBP] */
		0xf, 0x4b, 0x2e,  /* CMOVNP EBP, dword [ESI] */
		0xf, 0x4b, 0x2f,  /* CMOVNP EBP, dword [EDI] */
		0xf, 0x4b, 0x31,  /* CMOVNP ESI, dword [ECX] */
		0xf, 0x4b, 0x32,  /* CMOVNP ESI, dword [EDX] */
		0xf, 0x4b, 0x33,  /* CMOVNP ESI, dword [EBX] */
		0xf, 0x4b, 0x34, 0x24,  /* CMOVNP ESI, dword [ESP] */
		0xf, 0x4b, 0x75, 0x0,  /* CMOVNP ESI, dword [EBP] */
		0xf, 0x4b, 0x36,  /* CMOVNP ESI, dword [ESI] */
		0xf, 0x4b, 0x37,  /* CMOVNP ESI, dword [EDI] */
		0xf, 0x4b, 0x39,  /* CMOVNP EDI, dword [ECX] */
		0xf, 0x4b, 0x3a,  /* CMOVNP EDI, dword [EDX] */
		0xf, 0x4b, 0x3b,  /* CMOVNP EDI, dword [EBX] */
		0xf, 0x4b, 0x3c, 0x24,  /* CMOVNP EDI, dword [ESP] */
		0xf, 0x4b, 0x7d, 0x0,  /* CMOVNP EDI, dword [EBP] */
		0xf, 0x4b, 0x3e,  /* CMOVNP EDI, dword [ESI] */
		0xf, 0x4b, 0x3f   /* CMOVNP EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVNP EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVL_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4c 
	const uint8_t pOps[0xb8] = {
		0xf, 0x4c, 0x1,  /* CMOVL EAX, dword [ECX] */
		0xf, 0x4c, 0x2,  /* CMOVL EAX, dword [EDX] */
		0xf, 0x4c, 0x3,  /* CMOVL EAX, dword [EBX] */
		0xf, 0x4c, 0x4, 0x24,  /* CMOVL EAX, dword [ESP] */
		0xf, 0x4c, 0x45, 0x0,  /* CMOVL EAX, dword [EBP] */
		0xf, 0x4c, 0x6,  /* CMOVL EAX, dword [ESI] */
		0xf, 0x4c, 0x7,  /* CMOVL EAX, dword [EDI] */
		0xf, 0x4c, 0x9,  /* CMOVL ECX, dword [ECX] */
		0xf, 0x4c, 0xa,  /* CMOVL ECX, dword [EDX] */
		0xf, 0x4c, 0xb,  /* CMOVL ECX, dword [EBX] */
		0xf, 0x4c, 0xc, 0x24,  /* CMOVL ECX, dword [ESP] */
		0xf, 0x4c, 0x4d, 0x0,  /* CMOVL ECX, dword [EBP] */
		0xf, 0x4c, 0xe,  /* CMOVL ECX, dword [ESI] */
		0xf, 0x4c, 0xf,  /* CMOVL ECX, dword [EDI] */
		0xf, 0x4c, 0x11,  /* CMOVL EDX, dword [ECX] */
		0xf, 0x4c, 0x12,  /* CMOVL EDX, dword [EDX] */
		0xf, 0x4c, 0x13,  /* CMOVL EDX, dword [EBX] */
		0xf, 0x4c, 0x14, 0x24,  /* CMOVL EDX, dword [ESP] */
		0xf, 0x4c, 0x55, 0x0,  /* CMOVL EDX, dword [EBP] */
		0xf, 0x4c, 0x16,  /* CMOVL EDX, dword [ESI] */
		0xf, 0x4c, 0x17,  /* CMOVL EDX, dword [EDI] */
		0xf, 0x4c, 0x19,  /* CMOVL EBX, dword [ECX] */
		0xf, 0x4c, 0x1a,  /* CMOVL EBX, dword [EDX] */
		0xf, 0x4c, 0x1b,  /* CMOVL EBX, dword [EBX] */
		0xf, 0x4c, 0x1c, 0x24,  /* CMOVL EBX, dword [ESP] */
		0xf, 0x4c, 0x5d, 0x0,  /* CMOVL EBX, dword [EBP] */
		0xf, 0x4c, 0x1e,  /* CMOVL EBX, dword [ESI] */
		0xf, 0x4c, 0x1f,  /* CMOVL EBX, dword [EDI] */
		0xf, 0x4c, 0x21,  /* CMOVL ESP, dword [ECX] */
		0xf, 0x4c, 0x22,  /* CMOVL ESP, dword [EDX] */
		0xf, 0x4c, 0x23,  /* CMOVL ESP, dword [EBX] */
		0xf, 0x4c, 0x24, 0x24,  /* CMOVL ESP, dword [ESP] */
		0xf, 0x4c, 0x65, 0x0,  /* CMOVL ESP, dword [EBP] */
		0xf, 0x4c, 0x26,  /* CMOVL ESP, dword [ESI] */
		0xf, 0x4c, 0x27,  /* CMOVL ESP, dword [EDI] */
		0xf, 0x4c, 0x29,  /* CMOVL EBP, dword [ECX] */
		0xf, 0x4c, 0x2a,  /* CMOVL EBP, dword [EDX] */
		0xf, 0x4c, 0x2b,  /* CMOVL EBP, dword [EBX] */
		0xf, 0x4c, 0x2c, 0x24,  /* CMOVL EBP, dword [ESP] */
		0xf, 0x4c, 0x6d, 0x0,  /* CMOVL EBP, dword [EBP] */
		0xf, 0x4c, 0x2e,  /* CMOVL EBP, dword [ESI] */
		0xf, 0x4c, 0x2f,  /* CMOVL EBP, dword [EDI] */
		0xf, 0x4c, 0x31,  /* CMOVL ESI, dword [ECX] */
		0xf, 0x4c, 0x32,  /* CMOVL ESI, dword [EDX] */
		0xf, 0x4c, 0x33,  /* CMOVL ESI, dword [EBX] */
		0xf, 0x4c, 0x34, 0x24,  /* CMOVL ESI, dword [ESP] */
		0xf, 0x4c, 0x75, 0x0,  /* CMOVL ESI, dword [EBP] */
		0xf, 0x4c, 0x36,  /* CMOVL ESI, dword [ESI] */
		0xf, 0x4c, 0x37,  /* CMOVL ESI, dword [EDI] */
		0xf, 0x4c, 0x39,  /* CMOVL EDI, dword [ECX] */
		0xf, 0x4c, 0x3a,  /* CMOVL EDI, dword [EDX] */
		0xf, 0x4c, 0x3b,  /* CMOVL EDI, dword [EBX] */
		0xf, 0x4c, 0x3c, 0x24,  /* CMOVL EDI, dword [ESP] */
		0xf, 0x4c, 0x7d, 0x0,  /* CMOVL EDI, dword [EBP] */
		0xf, 0x4c, 0x3e,  /* CMOVL EDI, dword [ESI] */
		0xf, 0x4c, 0x3f   /* CMOVL EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVL EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVGE_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4d 
	const uint8_t pOps[0xb8] = {
		0xf, 0x4d, 0x1,  /* CMOVGE EAX, dword [ECX] */
		0xf, 0x4d, 0x2,  /* CMOVGE EAX, dword [EDX] */
		0xf, 0x4d, 0x3,  /* CMOVGE EAX, dword [EBX] */
		0xf, 0x4d, 0x4, 0x24,  /* CMOVGE EAX, dword [ESP] */
		0xf, 0x4d, 0x45, 0x0,  /* CMOVGE EAX, dword [EBP] */
		0xf, 0x4d, 0x6,  /* CMOVGE EAX, dword [ESI] */
		0xf, 0x4d, 0x7,  /* CMOVGE EAX, dword [EDI] */
		0xf, 0x4d, 0x9,  /* CMOVGE ECX, dword [ECX] */
		0xf, 0x4d, 0xa,  /* CMOVGE ECX, dword [EDX] */
		0xf, 0x4d, 0xb,  /* CMOVGE ECX, dword [EBX] */
		0xf, 0x4d, 0xc, 0x24,  /* CMOVGE ECX, dword [ESP] */
		0xf, 0x4d, 0x4d, 0x0,  /* CMOVGE ECX, dword [EBP] */
		0xf, 0x4d, 0xe,  /* CMOVGE ECX, dword [ESI] */
		0xf, 0x4d, 0xf,  /* CMOVGE ECX, dword [EDI] */
		0xf, 0x4d, 0x11,  /* CMOVGE EDX, dword [ECX] */
		0xf, 0x4d, 0x12,  /* CMOVGE EDX, dword [EDX] */
		0xf, 0x4d, 0x13,  /* CMOVGE EDX, dword [EBX] */
		0xf, 0x4d, 0x14, 0x24,  /* CMOVGE EDX, dword [ESP] */
		0xf, 0x4d, 0x55, 0x0,  /* CMOVGE EDX, dword [EBP] */
		0xf, 0x4d, 0x16,  /* CMOVGE EDX, dword [ESI] */
		0xf, 0x4d, 0x17,  /* CMOVGE EDX, dword [EDI] */
		0xf, 0x4d, 0x19,  /* CMOVGE EBX, dword [ECX] */
		0xf, 0x4d, 0x1a,  /* CMOVGE EBX, dword [EDX] */
		0xf, 0x4d, 0x1b,  /* CMOVGE EBX, dword [EBX] */
		0xf, 0x4d, 0x1c, 0x24,  /* CMOVGE EBX, dword [ESP] */
		0xf, 0x4d, 0x5d, 0x0,  /* CMOVGE EBX, dword [EBP] */
		0xf, 0x4d, 0x1e,  /* CMOVGE EBX, dword [ESI] */
		0xf, 0x4d, 0x1f,  /* CMOVGE EBX, dword [EDI] */
		0xf, 0x4d, 0x21,  /* CMOVGE ESP, dword [ECX] */
		0xf, 0x4d, 0x22,  /* CMOVGE ESP, dword [EDX] */
		0xf, 0x4d, 0x23,  /* CMOVGE ESP, dword [EBX] */
		0xf, 0x4d, 0x24, 0x24,  /* CMOVGE ESP, dword [ESP] */
		0xf, 0x4d, 0x65, 0x0,  /* CMOVGE ESP, dword [EBP] */
		0xf, 0x4d, 0x26,  /* CMOVGE ESP, dword [ESI] */
		0xf, 0x4d, 0x27,  /* CMOVGE ESP, dword [EDI] */
		0xf, 0x4d, 0x29,  /* CMOVGE EBP, dword [ECX] */
		0xf, 0x4d, 0x2a,  /* CMOVGE EBP, dword [EDX] */
		0xf, 0x4d, 0x2b,  /* CMOVGE EBP, dword [EBX] */
		0xf, 0x4d, 0x2c, 0x24,  /* CMOVGE EBP, dword [ESP] */
		0xf, 0x4d, 0x6d, 0x0,  /* CMOVGE EBP, dword [EBP] */
		0xf, 0x4d, 0x2e,  /* CMOVGE EBP, dword [ESI] */
		0xf, 0x4d, 0x2f,  /* CMOVGE EBP, dword [EDI] */
		0xf, 0x4d, 0x31,  /* CMOVGE ESI, dword [ECX] */
		0xf, 0x4d, 0x32,  /* CMOVGE ESI, dword [EDX] */
		0xf, 0x4d, 0x33,  /* CMOVGE ESI, dword [EBX] */
		0xf, 0x4d, 0x34, 0x24,  /* CMOVGE ESI, dword [ESP] */
		0xf, 0x4d, 0x75, 0x0,  /* CMOVGE ESI, dword [EBP] */
		0xf, 0x4d, 0x36,  /* CMOVGE ESI, dword [ESI] */
		0xf, 0x4d, 0x37,  /* CMOVGE ESI, dword [EDI] */
		0xf, 0x4d, 0x39,  /* CMOVGE EDI, dword [ECX] */
		0xf, 0x4d, 0x3a,  /* CMOVGE EDI, dword [EDX] */
		0xf, 0x4d, 0x3b,  /* CMOVGE EDI, dword [EBX] */
		0xf, 0x4d, 0x3c, 0x24,  /* CMOVGE EDI, dword [ESP] */
		0xf, 0x4d, 0x7d, 0x0,  /* CMOVGE EDI, dword [EBP] */
		0xf, 0x4d, 0x3e,  /* CMOVGE EDI, dword [ESI] */
		0xf, 0x4d, 0x3f   /* CMOVGE EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVGE EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVLE_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4e 
	const uint8_t pOps[0xb8] = {
		0xf, 0x4e, 0x1,  /* CMOVLE EAX, dword [ECX] */
		0xf, 0x4e, 0x2,  /* CMOVLE EAX, dword [EDX] */
		0xf, 0x4e, 0x3,  /* CMOVLE EAX, dword [EBX] */
		0xf, 0x4e, 0x4, 0x24,  /* CMOVLE EAX, dword [ESP] */
		0xf, 0x4e, 0x45, 0x0,  /* CMOVLE EAX, dword [EBP] */
		0xf, 0x4e, 0x6,  /* CMOVLE EAX, dword [ESI] */
		0xf, 0x4e, 0x7,  /* CMOVLE EAX, dword [EDI] */
		0xf, 0x4e, 0x9,  /* CMOVLE ECX, dword [ECX] */
		0xf, 0x4e, 0xa,  /* CMOVLE ECX, dword [EDX] */
		0xf, 0x4e, 0xb,  /* CMOVLE ECX, dword [EBX] */
		0xf, 0x4e, 0xc, 0x24,  /* CMOVLE ECX, dword [ESP] */
		0xf, 0x4e, 0x4d, 0x0,  /* CMOVLE ECX, dword [EBP] */
		0xf, 0x4e, 0xe,  /* CMOVLE ECX, dword [ESI] */
		0xf, 0x4e, 0xf,  /* CMOVLE ECX, dword [EDI] */
		0xf, 0x4e, 0x11,  /* CMOVLE EDX, dword [ECX] */
		0xf, 0x4e, 0x12,  /* CMOVLE EDX, dword [EDX] */
		0xf, 0x4e, 0x13,  /* CMOVLE EDX, dword [EBX] */
		0xf, 0x4e, 0x14, 0x24,  /* CMOVLE EDX, dword [ESP] */
		0xf, 0x4e, 0x55, 0x0,  /* CMOVLE EDX, dword [EBP] */
		0xf, 0x4e, 0x16,  /* CMOVLE EDX, dword [ESI] */
		0xf, 0x4e, 0x17,  /* CMOVLE EDX, dword [EDI] */
		0xf, 0x4e, 0x19,  /* CMOVLE EBX, dword [ECX] */
		0xf, 0x4e, 0x1a,  /* CMOVLE EBX, dword [EDX] */
		0xf, 0x4e, 0x1b,  /* CMOVLE EBX, dword [EBX] */
		0xf, 0x4e, 0x1c, 0x24,  /* CMOVLE EBX, dword [ESP] */
		0xf, 0x4e, 0x5d, 0x0,  /* CMOVLE EBX, dword [EBP] */
		0xf, 0x4e, 0x1e,  /* CMOVLE EBX, dword [ESI] */
		0xf, 0x4e, 0x1f,  /* CMOVLE EBX, dword [EDI] */
		0xf, 0x4e, 0x21,  /* CMOVLE ESP, dword [ECX] */
		0xf, 0x4e, 0x22,  /* CMOVLE ESP, dword [EDX] */
		0xf, 0x4e, 0x23,  /* CMOVLE ESP, dword [EBX] */
		0xf, 0x4e, 0x24, 0x24,  /* CMOVLE ESP, dword [ESP] */
		0xf, 0x4e, 0x65, 0x0,  /* CMOVLE ESP, dword [EBP] */
		0xf, 0x4e, 0x26,  /* CMOVLE ESP, dword [ESI] */
		0xf, 0x4e, 0x27,  /* CMOVLE ESP, dword [EDI] */
		0xf, 0x4e, 0x29,  /* CMOVLE EBP, dword [ECX] */
		0xf, 0x4e, 0x2a,  /* CMOVLE EBP, dword [EDX] */
		0xf, 0x4e, 0x2b,  /* CMOVLE EBP, dword [EBX] */
		0xf, 0x4e, 0x2c, 0x24,  /* CMOVLE EBP, dword [ESP] */
		0xf, 0x4e, 0x6d, 0x0,  /* CMOVLE EBP, dword [EBP] */
		0xf, 0x4e, 0x2e,  /* CMOVLE EBP, dword [ESI] */
		0xf, 0x4e, 0x2f,  /* CMOVLE EBP, dword [EDI] */
		0xf, 0x4e, 0x31,  /* CMOVLE ESI, dword [ECX] */
		0xf, 0x4e, 0x32,  /* CMOVLE ESI, dword [EDX] */
		0xf, 0x4e, 0x33,  /* CMOVLE ESI, dword [EBX] */
		0xf, 0x4e, 0x34, 0x24,  /* CMOVLE ESI, dword [ESP] */
		0xf, 0x4e, 0x75, 0x0,  /* CMOVLE ESI, dword [EBP] */
		0xf, 0x4e, 0x36,  /* CMOVLE ESI, dword [ESI] */
		0xf, 0x4e, 0x37,  /* CMOVLE ESI, dword [EDI] */
		0xf, 0x4e, 0x39,  /* CMOVLE EDI, dword [ECX] */
		0xf, 0x4e, 0x3a,  /* CMOVLE EDI, dword [EDX] */
		0xf, 0x4e, 0x3b,  /* CMOVLE EDI, dword [EBX] */
		0xf, 0x4e, 0x3c, 0x24,  /* CMOVLE EDI, dword [ESP] */
		0xf, 0x4e, 0x7d, 0x0,  /* CMOVLE EDI, dword [EBP] */
		0xf, 0x4e, 0x3e,  /* CMOVLE EDI, dword [ESI] */
		0xf, 0x4e, 0x3f   /* CMOVLE EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVLE EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, CMOVG_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4f 
	const uint8_t pOps[0xb8] = {
		0xf, 0x4f, 0x1,  /* CMOVG EAX, dword [ECX] */
		0xf, 0x4f, 0x2,  /* CMOVG EAX, dword [EDX] */
		0xf, 0x4f, 0x3,  /* CMOVG EAX, dword [EBX] */
		0xf, 0x4f, 0x4, 0x24,  /* CMOVG EAX, dword [ESP] */
		0xf, 0x4f, 0x45, 0x0,  /* CMOVG EAX, dword [EBP] */
		0xf, 0x4f, 0x6,  /* CMOVG EAX, dword [ESI] */
		0xf, 0x4f, 0x7,  /* CMOVG EAX, dword [EDI] */
		0xf, 0x4f, 0x9,  /* CMOVG ECX, dword [ECX] */
		0xf, 0x4f, 0xa,  /* CMOVG ECX, dword [EDX] */
		0xf, 0x4f, 0xb,  /* CMOVG ECX, dword [EBX] */
		0xf, 0x4f, 0xc, 0x24,  /* CMOVG ECX, dword [ESP] */
		0xf, 0x4f, 0x4d, 0x0,  /* CMOVG ECX, dword [EBP] */
		0xf, 0x4f, 0xe,  /* CMOVG ECX, dword [ESI] */
		0xf, 0x4f, 0xf,  /* CMOVG ECX, dword [EDI] */
		0xf, 0x4f, 0x11,  /* CMOVG EDX, dword [ECX] */
		0xf, 0x4f, 0x12,  /* CMOVG EDX, dword [EDX] */
		0xf, 0x4f, 0x13,  /* CMOVG EDX, dword [EBX] */
		0xf, 0x4f, 0x14, 0x24,  /* CMOVG EDX, dword [ESP] */
		0xf, 0x4f, 0x55, 0x0,  /* CMOVG EDX, dword [EBP] */
		0xf, 0x4f, 0x16,  /* CMOVG EDX, dword [ESI] */
		0xf, 0x4f, 0x17,  /* CMOVG EDX, dword [EDI] */
		0xf, 0x4f, 0x19,  /* CMOVG EBX, dword [ECX] */
		0xf, 0x4f, 0x1a,  /* CMOVG EBX, dword [EDX] */
		0xf, 0x4f, 0x1b,  /* CMOVG EBX, dword [EBX] */
		0xf, 0x4f, 0x1c, 0x24,  /* CMOVG EBX, dword [ESP] */
		0xf, 0x4f, 0x5d, 0x0,  /* CMOVG EBX, dword [EBP] */
		0xf, 0x4f, 0x1e,  /* CMOVG EBX, dword [ESI] */
		0xf, 0x4f, 0x1f,  /* CMOVG EBX, dword [EDI] */
		0xf, 0x4f, 0x21,  /* CMOVG ESP, dword [ECX] */
		0xf, 0x4f, 0x22,  /* CMOVG ESP, dword [EDX] */
		0xf, 0x4f, 0x23,  /* CMOVG ESP, dword [EBX] */
		0xf, 0x4f, 0x24, 0x24,  /* CMOVG ESP, dword [ESP] */
		0xf, 0x4f, 0x65, 0x0,  /* CMOVG ESP, dword [EBP] */
		0xf, 0x4f, 0x26,  /* CMOVG ESP, dword [ESI] */
		0xf, 0x4f, 0x27,  /* CMOVG ESP, dword [EDI] */
		0xf, 0x4f, 0x29,  /* CMOVG EBP, dword [ECX] */
		0xf, 0x4f, 0x2a,  /* CMOVG EBP, dword [EDX] */
		0xf, 0x4f, 0x2b,  /* CMOVG EBP, dword [EBX] */
		0xf, 0x4f, 0x2c, 0x24,  /* CMOVG EBP, dword [ESP] */
		0xf, 0x4f, 0x6d, 0x0,  /* CMOVG EBP, dword [EBP] */
		0xf, 0x4f, 0x2e,  /* CMOVG EBP, dword [ESI] */
		0xf, 0x4f, 0x2f,  /* CMOVG EBP, dword [EDI] */
		0xf, 0x4f, 0x31,  /* CMOVG ESI, dword [ECX] */
		0xf, 0x4f, 0x32,  /* CMOVG ESI, dword [EDX] */
		0xf, 0x4f, 0x33,  /* CMOVG ESI, dword [EBX] */
		0xf, 0x4f, 0x34, 0x24,  /* CMOVG ESI, dword [ESP] */
		0xf, 0x4f, 0x75, 0x0,  /* CMOVG ESI, dword [EBP] */
		0xf, 0x4f, 0x36,  /* CMOVG ESI, dword [ESI] */
		0xf, 0x4f, 0x37,  /* CMOVG ESI, dword [EDI] */
		0xf, 0x4f, 0x39,  /* CMOVG EDI, dword [ECX] */
		0xf, 0x4f, 0x3a,  /* CMOVG EDI, dword [EDX] */
		0xf, 0x4f, 0x3b,  /* CMOVG EDI, dword [EBX] */
		0xf, 0x4f, 0x3c, 0x24,  /* CMOVG EDI, dword [ESP] */
		0xf, 0x4f, 0x7d, 0x0,  /* CMOVG EDI, dword [EBP] */
		0xf, 0x4f, 0x3e,  /* CMOVG EDI, dword [ESI] */
		0xf, 0x4f, 0x3f   /* CMOVG EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xb8, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVG EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, FCMOVB_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xc2   /* FCMOVB st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCMOVB st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, FCMOVE_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xca   /* FCMOVE st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCMOVE st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCMOVE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, FCMOVBE_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xd2   /* FCMOVBE st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCMOVBE st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, FCMOVU_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xda   /* FCMOVU st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCMOVU st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCMOVU,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, FCMOVNB_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xc2   /* FCMOVNB st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCMOVNB st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCMOVNB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, FCMOVNE_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xca   /* FCMOVNE st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCMOVNE st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCMOVNE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, FCMOVNBE_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xd2   /* FCMOVNBE st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCMOVNBE st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCMOVNBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, FCMOVNU_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xda   /* FCMOVNU st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCMOVNU st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCMOVNU,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_P6, FCOMI_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xf2   /* FCOMI st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCOMI st0, st2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOMI,
			FlowControl::NONE,
			InstructionSet::P6,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x45,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

