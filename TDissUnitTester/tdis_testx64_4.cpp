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
			
TEST(x64_FPU, FICOM_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x3] = {
		0x67, 0xda, 0x16   /* FICOM dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FICOMP_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x3] = {
		0x67, 0xda, 0x1e   /* FICOMP dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FISUB_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x3] = {
		0x67, 0xda, 0x26   /* FISUB dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FISUBR_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x3] = {
		0x67, 0xda, 0x2e   /* FISUBR dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FIDIV_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x3] = {
		0x67, 0xda, 0x36   /* FIDIV dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FIDIVR_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x3] = {
		0x67, 0xda, 0x3e   /* FIDIVR dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FUCOMPP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xe9   /* FUCOMPP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FILD_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x3] = {
		0x67, 0xdb, 0x6   /* FILD dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FIST_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x3] = {
		0x67, 0xdb, 0x16   /* FIST dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FISTP_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x3] = {
		0x67, 0xdb, 0x1e   /* FISTP dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FLD_O_FPUM80)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x3] = {
		0x67, 0xdb, 0x28   /* FLD tword [eax] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x50, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSTP_O_FPUM80)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x3] = {
		0x67, 0xdb, 0x38   /* FSTP tword [eax] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x50, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FENI)
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

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FNDISI)
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

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FNCLEX)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xe2   /* FNCLEX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FNINIT)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xe3   /* FNINIT */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSETPM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xe4   /* FSETPM */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FUCOMI_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xea   /* FUCOMI st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FADD_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x4] = {
		0x67, 0xdc, 0x4, 0x24   /* FADD qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FMUL_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x4] = {
		0x67, 0xdc, 0xc, 0x24   /* FMUL qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FCOM_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x4] = {
		0x67, 0xdc, 0x14, 0x24   /* FCOM qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FCOMP_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x4] = {
		0x67, 0xdc, 0x1c, 0x24   /* FCOMP qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSUB_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x4] = {
		0x67, 0xdc, 0x24, 0x24   /* FSUB qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSUBR_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x4] = {
		0x67, 0xdc, 0x2c, 0x24   /* FSUBR qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FDIV_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x4] = {
		0x67, 0xdc, 0x34, 0x24   /* FDIV qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FDIVR_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x4] = {
		0x67, 0xdc, 0x3c, 0x24   /* FDIVR qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FADD_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xc2   /* FADD st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FMUL_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xca   /* FMUL st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSUBR_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xe2   /* FSUBR st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSUB_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xea   /* FSUB st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FDIVR_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xf2   /* FDIVR st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FDIV_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdc 
	const uint8_t pOps[0x2] = {
		0xdc, 0xfa   /* FDIV st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FLD_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x4] = {
		0x67, 0xdd, 0x4, 0x24   /* FLD qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FST_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x4] = {
		0x67, 0xdd, 0x14, 0x24   /* FST qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSTP_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x4] = {
		0x67, 0xdd, 0x1c, 0x24   /* FSTP qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FRSTOR_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x7] = {
		0xdd, 0x24, 0x95, 0x0, 0x0, 0x0, 0x0   /* FRSTOR [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FRSTOR [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FRSTOR,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x7,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FNSAVE_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x7] = {
		0xdd, 0x34, 0x95, 0x0, 0x0, 0x0, 0x0   /* FNSAVE [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FNSAVE [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNSAVE,
			FlowControl::NONE,
			InstructionSet::FPU,
			0x7,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FNSTSW_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x3] = {
		0x67, 0xdd, 0x3b   /* FNSTSW word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FFREE_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x2] = {
		0xdd, 0xc3   /* FFREE st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST3, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5f)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FST_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x2] = {
		0xdd, 0xd3   /* FST st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST3, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5f)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSTP_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x2] = {
		0xdd, 0xdb   /* FSTP st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST3, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5f)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FUCOMP_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdd 
	const uint8_t pOps[0x2] = {
		0xdd, 0xeb   /* FUCOMP st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST3, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5f)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FIADD_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x3] = {
		0x67, 0xde, 0x3   /* FIADD word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FIMUL_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x3] = {
		0x67, 0xde, 0xb   /* FIMUL word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FICOM_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x3] = {
		0x67, 0xde, 0x13   /* FICOM word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FICOMP_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x3] = {
		0x67, 0xde, 0x1b   /* FICOMP word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FISUB_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x3] = {
		0x67, 0xde, 0x23   /* FISUB word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FISUBR_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x3] = {
		0x67, 0xde, 0x2b   /* FISUBR word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FIDIV_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x3] = {
		0x67, 0xde, 0x33   /* FIDIV word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FIDIVR_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x3] = {
		0x67, 0xde, 0x3b   /* FIDIVR word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FADDP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xc2   /* FADDP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FADDP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xc1   /* FADDP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FMULP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xca   /* FMULP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FMULP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xc9   /* FMULP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FCOMPP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xd9   /* FCOMPP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSUBRP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xe2   /* FSUBRP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSUBRP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xe1   /* FSUBRP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSUBP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xea   /* FSUBP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSUBP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xe9   /* FSUBP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FDIVRP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xf2   /* FDIVRP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FDIVRP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xf1   /* FDIVRP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FDIVP_O_FPU_SIS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xfa   /* FDIVP st2, st0 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FDIVP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xde 
	const uint8_t pOps[0x2] = {
		0xde, 0xf9   /* FDIVP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FILD_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x3] = {
		0x67, 0xdf, 0x3   /* FILD word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FIST_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x3] = {
		0x67, 0xdf, 0x13   /* FIST word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FISTP_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x3] = {
		0x67, 0xdf, 0x1b   /* FISTP word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FBLD_O_FPUM80)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x3] = {
		0x67, 0xdf, 0x20   /* FBLD tword [eax] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x50, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FILD_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x4] = {
		0x67, 0xdf, 0x2c, 0x24   /* FILD qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FBSTP_O_FPUM80)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x3] = {
		0x67, 0xdf, 0x30   /* FBSTP tword [eax] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x50, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FISTP_O_FPUM64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x4] = {
		0x67, 0xdf, 0x3c, 0x24   /* FISTP qword [esp] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_64BIT);

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
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FNSTSW_O_ACC_16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0xe0   /* FNSTSW AX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FUCOMIP_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0xea   /* FUCOMIP st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FCOMIP_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdf 
	const uint8_t pOps[0x2] = {
		0xdf, 0xf2   /* FCOMIP st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVO_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x40 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x40, 0x1,  /* CMOVO RAX, qword [RCX] */
		0x48, 0xf, 0x40, 0x2,  /* CMOVO RAX, qword [RDX] */
		0x48, 0xf, 0x40, 0x3,  /* CMOVO RAX, qword [RBX] */
		0x48, 0xf, 0x40, 0x4, 0x24,  /* CMOVO RAX, qword [RSP] */
		0x48, 0xf, 0x40, 0x45, 0x0,  /* CMOVO RAX, qword [RBP] */
		0x48, 0xf, 0x40, 0x6,  /* CMOVO RAX, qword [RSI] */
		0x48, 0xf, 0x40, 0x7,  /* CMOVO RAX, qword [RDI] */
		0x48, 0xf, 0x40, 0x9,  /* CMOVO RCX, qword [RCX] */
		0x48, 0xf, 0x40, 0xa,  /* CMOVO RCX, qword [RDX] */
		0x48, 0xf, 0x40, 0xb,  /* CMOVO RCX, qword [RBX] */
		0x48, 0xf, 0x40, 0xc, 0x24,  /* CMOVO RCX, qword [RSP] */
		0x48, 0xf, 0x40, 0x4d, 0x0,  /* CMOVO RCX, qword [RBP] */
		0x48, 0xf, 0x40, 0xe,  /* CMOVO RCX, qword [RSI] */
		0x48, 0xf, 0x40, 0xf,  /* CMOVO RCX, qword [RDI] */
		0x48, 0xf, 0x40, 0x11,  /* CMOVO RDX, qword [RCX] */
		0x48, 0xf, 0x40, 0x12,  /* CMOVO RDX, qword [RDX] */
		0x48, 0xf, 0x40, 0x13,  /* CMOVO RDX, qword [RBX] */
		0x48, 0xf, 0x40, 0x14, 0x24,  /* CMOVO RDX, qword [RSP] */
		0x48, 0xf, 0x40, 0x55, 0x0,  /* CMOVO RDX, qword [RBP] */
		0x48, 0xf, 0x40, 0x16,  /* CMOVO RDX, qword [RSI] */
		0x48, 0xf, 0x40, 0x17,  /* CMOVO RDX, qword [RDI] */
		0x48, 0xf, 0x40, 0x19,  /* CMOVO RBX, qword [RCX] */
		0x48, 0xf, 0x40, 0x1a,  /* CMOVO RBX, qword [RDX] */
		0x48, 0xf, 0x40, 0x1b,  /* CMOVO RBX, qword [RBX] */
		0x48, 0xf, 0x40, 0x1c, 0x24,  /* CMOVO RBX, qword [RSP] */
		0x48, 0xf, 0x40, 0x5d, 0x0,  /* CMOVO RBX, qword [RBP] */
		0x48, 0xf, 0x40, 0x1e,  /* CMOVO RBX, qword [RSI] */
		0x48, 0xf, 0x40, 0x1f,  /* CMOVO RBX, qword [RDI] */
		0x48, 0xf, 0x40, 0x21,  /* CMOVO RSP, qword [RCX] */
		0x48, 0xf, 0x40, 0x22,  /* CMOVO RSP, qword [RDX] */
		0x48, 0xf, 0x40, 0x23,  /* CMOVO RSP, qword [RBX] */
		0x48, 0xf, 0x40, 0x24, 0x24,  /* CMOVO RSP, qword [RSP] */
		0x48, 0xf, 0x40, 0x65, 0x0,  /* CMOVO RSP, qword [RBP] */
		0x48, 0xf, 0x40, 0x26,  /* CMOVO RSP, qword [RSI] */
		0x48, 0xf, 0x40, 0x27,  /* CMOVO RSP, qword [RDI] */
		0x48, 0xf, 0x40, 0x29,  /* CMOVO RBP, qword [RCX] */
		0x48, 0xf, 0x40, 0x2a,  /* CMOVO RBP, qword [RDX] */
		0x48, 0xf, 0x40, 0x2b,  /* CMOVO RBP, qword [RBX] */
		0x48, 0xf, 0x40, 0x2c, 0x24,  /* CMOVO RBP, qword [RSP] */
		0x48, 0xf, 0x40, 0x6d, 0x0,  /* CMOVO RBP, qword [RBP] */
		0x48, 0xf, 0x40, 0x2e,  /* CMOVO RBP, qword [RSI] */
		0x48, 0xf, 0x40, 0x2f,  /* CMOVO RBP, qword [RDI] */
		0x48, 0xf, 0x40, 0x31,  /* CMOVO RSI, qword [RCX] */
		0x48, 0xf, 0x40, 0x32,  /* CMOVO RSI, qword [RDX] */
		0x48, 0xf, 0x40, 0x33,  /* CMOVO RSI, qword [RBX] */
		0x48, 0xf, 0x40, 0x34, 0x24,  /* CMOVO RSI, qword [RSP] */
		0x48, 0xf, 0x40, 0x75, 0x0,  /* CMOVO RSI, qword [RBP] */
		0x48, 0xf, 0x40, 0x36,  /* CMOVO RSI, qword [RSI] */
		0x48, 0xf, 0x40, 0x37,  /* CMOVO RSI, qword [RDI] */
		0x48, 0xf, 0x40, 0x39,  /* CMOVO RDI, qword [RCX] */
		0x48, 0xf, 0x40, 0x3a,  /* CMOVO RDI, qword [RDX] */
		0x48, 0xf, 0x40, 0x3b,  /* CMOVO RDI, qword [RBX] */
		0x48, 0xf, 0x40, 0x3c, 0x24,  /* CMOVO RDI, qword [RSP] */
		0x48, 0xf, 0x40, 0x7d, 0x0,  /* CMOVO RDI, qword [RBP] */
		0x48, 0xf, 0x40, 0x3e,  /* CMOVO RDI, qword [RSI] */
		0x48, 0xf, 0x40, 0x3f   /* CMOVO RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVO RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVO RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVNO_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x41 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x41, 0x1,  /* CMOVNO RAX, qword [RCX] */
		0x48, 0xf, 0x41, 0x2,  /* CMOVNO RAX, qword [RDX] */
		0x48, 0xf, 0x41, 0x3,  /* CMOVNO RAX, qword [RBX] */
		0x48, 0xf, 0x41, 0x4, 0x24,  /* CMOVNO RAX, qword [RSP] */
		0x48, 0xf, 0x41, 0x45, 0x0,  /* CMOVNO RAX, qword [RBP] */
		0x48, 0xf, 0x41, 0x6,  /* CMOVNO RAX, qword [RSI] */
		0x48, 0xf, 0x41, 0x7,  /* CMOVNO RAX, qword [RDI] */
		0x48, 0xf, 0x41, 0x9,  /* CMOVNO RCX, qword [RCX] */
		0x48, 0xf, 0x41, 0xa,  /* CMOVNO RCX, qword [RDX] */
		0x48, 0xf, 0x41, 0xb,  /* CMOVNO RCX, qword [RBX] */
		0x48, 0xf, 0x41, 0xc, 0x24,  /* CMOVNO RCX, qword [RSP] */
		0x48, 0xf, 0x41, 0x4d, 0x0,  /* CMOVNO RCX, qword [RBP] */
		0x48, 0xf, 0x41, 0xe,  /* CMOVNO RCX, qword [RSI] */
		0x48, 0xf, 0x41, 0xf,  /* CMOVNO RCX, qword [RDI] */
		0x48, 0xf, 0x41, 0x11,  /* CMOVNO RDX, qword [RCX] */
		0x48, 0xf, 0x41, 0x12,  /* CMOVNO RDX, qword [RDX] */
		0x48, 0xf, 0x41, 0x13,  /* CMOVNO RDX, qword [RBX] */
		0x48, 0xf, 0x41, 0x14, 0x24,  /* CMOVNO RDX, qword [RSP] */
		0x48, 0xf, 0x41, 0x55, 0x0,  /* CMOVNO RDX, qword [RBP] */
		0x48, 0xf, 0x41, 0x16,  /* CMOVNO RDX, qword [RSI] */
		0x48, 0xf, 0x41, 0x17,  /* CMOVNO RDX, qword [RDI] */
		0x48, 0xf, 0x41, 0x19,  /* CMOVNO RBX, qword [RCX] */
		0x48, 0xf, 0x41, 0x1a,  /* CMOVNO RBX, qword [RDX] */
		0x48, 0xf, 0x41, 0x1b,  /* CMOVNO RBX, qword [RBX] */
		0x48, 0xf, 0x41, 0x1c, 0x24,  /* CMOVNO RBX, qword [RSP] */
		0x48, 0xf, 0x41, 0x5d, 0x0,  /* CMOVNO RBX, qword [RBP] */
		0x48, 0xf, 0x41, 0x1e,  /* CMOVNO RBX, qword [RSI] */
		0x48, 0xf, 0x41, 0x1f,  /* CMOVNO RBX, qword [RDI] */
		0x48, 0xf, 0x41, 0x21,  /* CMOVNO RSP, qword [RCX] */
		0x48, 0xf, 0x41, 0x22,  /* CMOVNO RSP, qword [RDX] */
		0x48, 0xf, 0x41, 0x23,  /* CMOVNO RSP, qword [RBX] */
		0x48, 0xf, 0x41, 0x24, 0x24,  /* CMOVNO RSP, qword [RSP] */
		0x48, 0xf, 0x41, 0x65, 0x0,  /* CMOVNO RSP, qword [RBP] */
		0x48, 0xf, 0x41, 0x26,  /* CMOVNO RSP, qword [RSI] */
		0x48, 0xf, 0x41, 0x27,  /* CMOVNO RSP, qword [RDI] */
		0x48, 0xf, 0x41, 0x29,  /* CMOVNO RBP, qword [RCX] */
		0x48, 0xf, 0x41, 0x2a,  /* CMOVNO RBP, qword [RDX] */
		0x48, 0xf, 0x41, 0x2b,  /* CMOVNO RBP, qword [RBX] */
		0x48, 0xf, 0x41, 0x2c, 0x24,  /* CMOVNO RBP, qword [RSP] */
		0x48, 0xf, 0x41, 0x6d, 0x0,  /* CMOVNO RBP, qword [RBP] */
		0x48, 0xf, 0x41, 0x2e,  /* CMOVNO RBP, qword [RSI] */
		0x48, 0xf, 0x41, 0x2f,  /* CMOVNO RBP, qword [RDI] */
		0x48, 0xf, 0x41, 0x31,  /* CMOVNO RSI, qword [RCX] */
		0x48, 0xf, 0x41, 0x32,  /* CMOVNO RSI, qword [RDX] */
		0x48, 0xf, 0x41, 0x33,  /* CMOVNO RSI, qword [RBX] */
		0x48, 0xf, 0x41, 0x34, 0x24,  /* CMOVNO RSI, qword [RSP] */
		0x48, 0xf, 0x41, 0x75, 0x0,  /* CMOVNO RSI, qword [RBP] */
		0x48, 0xf, 0x41, 0x36,  /* CMOVNO RSI, qword [RSI] */
		0x48, 0xf, 0x41, 0x37,  /* CMOVNO RSI, qword [RDI] */
		0x48, 0xf, 0x41, 0x39,  /* CMOVNO RDI, qword [RCX] */
		0x48, 0xf, 0x41, 0x3a,  /* CMOVNO RDI, qword [RDX] */
		0x48, 0xf, 0x41, 0x3b,  /* CMOVNO RDI, qword [RBX] */
		0x48, 0xf, 0x41, 0x3c, 0x24,  /* CMOVNO RDI, qword [RSP] */
		0x48, 0xf, 0x41, 0x7d, 0x0,  /* CMOVNO RDI, qword [RBP] */
		0x48, 0xf, 0x41, 0x3e,  /* CMOVNO RDI, qword [RSI] */
		0x48, 0xf, 0x41, 0x3f   /* CMOVNO RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVNO RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNO RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVNO,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVB_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x42 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x42, 0x1,  /* CMOVB RAX, qword [RCX] */
		0x48, 0xf, 0x42, 0x2,  /* CMOVB RAX, qword [RDX] */
		0x48, 0xf, 0x42, 0x3,  /* CMOVB RAX, qword [RBX] */
		0x48, 0xf, 0x42, 0x4, 0x24,  /* CMOVB RAX, qword [RSP] */
		0x48, 0xf, 0x42, 0x45, 0x0,  /* CMOVB RAX, qword [RBP] */
		0x48, 0xf, 0x42, 0x6,  /* CMOVB RAX, qword [RSI] */
		0x48, 0xf, 0x42, 0x7,  /* CMOVB RAX, qword [RDI] */
		0x48, 0xf, 0x42, 0x9,  /* CMOVB RCX, qword [RCX] */
		0x48, 0xf, 0x42, 0xa,  /* CMOVB RCX, qword [RDX] */
		0x48, 0xf, 0x42, 0xb,  /* CMOVB RCX, qword [RBX] */
		0x48, 0xf, 0x42, 0xc, 0x24,  /* CMOVB RCX, qword [RSP] */
		0x48, 0xf, 0x42, 0x4d, 0x0,  /* CMOVB RCX, qword [RBP] */
		0x48, 0xf, 0x42, 0xe,  /* CMOVB RCX, qword [RSI] */
		0x48, 0xf, 0x42, 0xf,  /* CMOVB RCX, qword [RDI] */
		0x48, 0xf, 0x42, 0x11,  /* CMOVB RDX, qword [RCX] */
		0x48, 0xf, 0x42, 0x12,  /* CMOVB RDX, qword [RDX] */
		0x48, 0xf, 0x42, 0x13,  /* CMOVB RDX, qword [RBX] */
		0x48, 0xf, 0x42, 0x14, 0x24,  /* CMOVB RDX, qword [RSP] */
		0x48, 0xf, 0x42, 0x55, 0x0,  /* CMOVB RDX, qword [RBP] */
		0x48, 0xf, 0x42, 0x16,  /* CMOVB RDX, qword [RSI] */
		0x48, 0xf, 0x42, 0x17,  /* CMOVB RDX, qword [RDI] */
		0x48, 0xf, 0x42, 0x19,  /* CMOVB RBX, qword [RCX] */
		0x48, 0xf, 0x42, 0x1a,  /* CMOVB RBX, qword [RDX] */
		0x48, 0xf, 0x42, 0x1b,  /* CMOVB RBX, qword [RBX] */
		0x48, 0xf, 0x42, 0x1c, 0x24,  /* CMOVB RBX, qword [RSP] */
		0x48, 0xf, 0x42, 0x5d, 0x0,  /* CMOVB RBX, qword [RBP] */
		0x48, 0xf, 0x42, 0x1e,  /* CMOVB RBX, qword [RSI] */
		0x48, 0xf, 0x42, 0x1f,  /* CMOVB RBX, qword [RDI] */
		0x48, 0xf, 0x42, 0x21,  /* CMOVB RSP, qword [RCX] */
		0x48, 0xf, 0x42, 0x22,  /* CMOVB RSP, qword [RDX] */
		0x48, 0xf, 0x42, 0x23,  /* CMOVB RSP, qword [RBX] */
		0x48, 0xf, 0x42, 0x24, 0x24,  /* CMOVB RSP, qword [RSP] */
		0x48, 0xf, 0x42, 0x65, 0x0,  /* CMOVB RSP, qword [RBP] */
		0x48, 0xf, 0x42, 0x26,  /* CMOVB RSP, qword [RSI] */
		0x48, 0xf, 0x42, 0x27,  /* CMOVB RSP, qword [RDI] */
		0x48, 0xf, 0x42, 0x29,  /* CMOVB RBP, qword [RCX] */
		0x48, 0xf, 0x42, 0x2a,  /* CMOVB RBP, qword [RDX] */
		0x48, 0xf, 0x42, 0x2b,  /* CMOVB RBP, qword [RBX] */
		0x48, 0xf, 0x42, 0x2c, 0x24,  /* CMOVB RBP, qword [RSP] */
		0x48, 0xf, 0x42, 0x6d, 0x0,  /* CMOVB RBP, qword [RBP] */
		0x48, 0xf, 0x42, 0x2e,  /* CMOVB RBP, qword [RSI] */
		0x48, 0xf, 0x42, 0x2f,  /* CMOVB RBP, qword [RDI] */
		0x48, 0xf, 0x42, 0x31,  /* CMOVB RSI, qword [RCX] */
		0x48, 0xf, 0x42, 0x32,  /* CMOVB RSI, qword [RDX] */
		0x48, 0xf, 0x42, 0x33,  /* CMOVB RSI, qword [RBX] */
		0x48, 0xf, 0x42, 0x34, 0x24,  /* CMOVB RSI, qword [RSP] */
		0x48, 0xf, 0x42, 0x75, 0x0,  /* CMOVB RSI, qword [RBP] */
		0x48, 0xf, 0x42, 0x36,  /* CMOVB RSI, qword [RSI] */
		0x48, 0xf, 0x42, 0x37,  /* CMOVB RSI, qword [RDI] */
		0x48, 0xf, 0x42, 0x39,  /* CMOVB RDI, qword [RCX] */
		0x48, 0xf, 0x42, 0x3a,  /* CMOVB RDI, qword [RDX] */
		0x48, 0xf, 0x42, 0x3b,  /* CMOVB RDI, qword [RBX] */
		0x48, 0xf, 0x42, 0x3c, 0x24,  /* CMOVB RDI, qword [RSP] */
		0x48, 0xf, 0x42, 0x7d, 0x0,  /* CMOVB RDI, qword [RBP] */
		0x48, 0xf, 0x42, 0x3e,  /* CMOVB RDI, qword [RSI] */
		0x48, 0xf, 0x42, 0x3f   /* CMOVB RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVB RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVB RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVB,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVAE_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x43 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x43, 0x1,  /* CMOVAE RAX, qword [RCX] */
		0x48, 0xf, 0x43, 0x2,  /* CMOVAE RAX, qword [RDX] */
		0x48, 0xf, 0x43, 0x3,  /* CMOVAE RAX, qword [RBX] */
		0x48, 0xf, 0x43, 0x4, 0x24,  /* CMOVAE RAX, qword [RSP] */
		0x48, 0xf, 0x43, 0x45, 0x0,  /* CMOVAE RAX, qword [RBP] */
		0x48, 0xf, 0x43, 0x6,  /* CMOVAE RAX, qword [RSI] */
		0x48, 0xf, 0x43, 0x7,  /* CMOVAE RAX, qword [RDI] */
		0x48, 0xf, 0x43, 0x9,  /* CMOVAE RCX, qword [RCX] */
		0x48, 0xf, 0x43, 0xa,  /* CMOVAE RCX, qword [RDX] */
		0x48, 0xf, 0x43, 0xb,  /* CMOVAE RCX, qword [RBX] */
		0x48, 0xf, 0x43, 0xc, 0x24,  /* CMOVAE RCX, qword [RSP] */
		0x48, 0xf, 0x43, 0x4d, 0x0,  /* CMOVAE RCX, qword [RBP] */
		0x48, 0xf, 0x43, 0xe,  /* CMOVAE RCX, qword [RSI] */
		0x48, 0xf, 0x43, 0xf,  /* CMOVAE RCX, qword [RDI] */
		0x48, 0xf, 0x43, 0x11,  /* CMOVAE RDX, qword [RCX] */
		0x48, 0xf, 0x43, 0x12,  /* CMOVAE RDX, qword [RDX] */
		0x48, 0xf, 0x43, 0x13,  /* CMOVAE RDX, qword [RBX] */
		0x48, 0xf, 0x43, 0x14, 0x24,  /* CMOVAE RDX, qword [RSP] */
		0x48, 0xf, 0x43, 0x55, 0x0,  /* CMOVAE RDX, qword [RBP] */
		0x48, 0xf, 0x43, 0x16,  /* CMOVAE RDX, qword [RSI] */
		0x48, 0xf, 0x43, 0x17,  /* CMOVAE RDX, qword [RDI] */
		0x48, 0xf, 0x43, 0x19,  /* CMOVAE RBX, qword [RCX] */
		0x48, 0xf, 0x43, 0x1a,  /* CMOVAE RBX, qword [RDX] */
		0x48, 0xf, 0x43, 0x1b,  /* CMOVAE RBX, qword [RBX] */
		0x48, 0xf, 0x43, 0x1c, 0x24,  /* CMOVAE RBX, qword [RSP] */
		0x48, 0xf, 0x43, 0x5d, 0x0,  /* CMOVAE RBX, qword [RBP] */
		0x48, 0xf, 0x43, 0x1e,  /* CMOVAE RBX, qword [RSI] */
		0x48, 0xf, 0x43, 0x1f,  /* CMOVAE RBX, qword [RDI] */
		0x48, 0xf, 0x43, 0x21,  /* CMOVAE RSP, qword [RCX] */
		0x48, 0xf, 0x43, 0x22,  /* CMOVAE RSP, qword [RDX] */
		0x48, 0xf, 0x43, 0x23,  /* CMOVAE RSP, qword [RBX] */
		0x48, 0xf, 0x43, 0x24, 0x24,  /* CMOVAE RSP, qword [RSP] */
		0x48, 0xf, 0x43, 0x65, 0x0,  /* CMOVAE RSP, qword [RBP] */
		0x48, 0xf, 0x43, 0x26,  /* CMOVAE RSP, qword [RSI] */
		0x48, 0xf, 0x43, 0x27,  /* CMOVAE RSP, qword [RDI] */
		0x48, 0xf, 0x43, 0x29,  /* CMOVAE RBP, qword [RCX] */
		0x48, 0xf, 0x43, 0x2a,  /* CMOVAE RBP, qword [RDX] */
		0x48, 0xf, 0x43, 0x2b,  /* CMOVAE RBP, qword [RBX] */
		0x48, 0xf, 0x43, 0x2c, 0x24,  /* CMOVAE RBP, qword [RSP] */
		0x48, 0xf, 0x43, 0x6d, 0x0,  /* CMOVAE RBP, qword [RBP] */
		0x48, 0xf, 0x43, 0x2e,  /* CMOVAE RBP, qword [RSI] */
		0x48, 0xf, 0x43, 0x2f,  /* CMOVAE RBP, qword [RDI] */
		0x48, 0xf, 0x43, 0x31,  /* CMOVAE RSI, qword [RCX] */
		0x48, 0xf, 0x43, 0x32,  /* CMOVAE RSI, qword [RDX] */
		0x48, 0xf, 0x43, 0x33,  /* CMOVAE RSI, qword [RBX] */
		0x48, 0xf, 0x43, 0x34, 0x24,  /* CMOVAE RSI, qword [RSP] */
		0x48, 0xf, 0x43, 0x75, 0x0,  /* CMOVAE RSI, qword [RBP] */
		0x48, 0xf, 0x43, 0x36,  /* CMOVAE RSI, qword [RSI] */
		0x48, 0xf, 0x43, 0x37,  /* CMOVAE RSI, qword [RDI] */
		0x48, 0xf, 0x43, 0x39,  /* CMOVAE RDI, qword [RCX] */
		0x48, 0xf, 0x43, 0x3a,  /* CMOVAE RDI, qword [RDX] */
		0x48, 0xf, 0x43, 0x3b,  /* CMOVAE RDI, qword [RBX] */
		0x48, 0xf, 0x43, 0x3c, 0x24,  /* CMOVAE RDI, qword [RSP] */
		0x48, 0xf, 0x43, 0x7d, 0x0,  /* CMOVAE RDI, qword [RBP] */
		0x48, 0xf, 0x43, 0x3e,  /* CMOVAE RDI, qword [RSI] */
		0x48, 0xf, 0x43, 0x3f   /* CMOVAE RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVAE RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVAE RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVAE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVZ_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x44 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x44, 0x1,  /* CMOVZ RAX, qword [RCX] */
		0x48, 0xf, 0x44, 0x2,  /* CMOVZ RAX, qword [RDX] */
		0x48, 0xf, 0x44, 0x3,  /* CMOVZ RAX, qword [RBX] */
		0x48, 0xf, 0x44, 0x4, 0x24,  /* CMOVZ RAX, qword [RSP] */
		0x48, 0xf, 0x44, 0x45, 0x0,  /* CMOVZ RAX, qword [RBP] */
		0x48, 0xf, 0x44, 0x6,  /* CMOVZ RAX, qword [RSI] */
		0x48, 0xf, 0x44, 0x7,  /* CMOVZ RAX, qword [RDI] */
		0x48, 0xf, 0x44, 0x9,  /* CMOVZ RCX, qword [RCX] */
		0x48, 0xf, 0x44, 0xa,  /* CMOVZ RCX, qword [RDX] */
		0x48, 0xf, 0x44, 0xb,  /* CMOVZ RCX, qword [RBX] */
		0x48, 0xf, 0x44, 0xc, 0x24,  /* CMOVZ RCX, qword [RSP] */
		0x48, 0xf, 0x44, 0x4d, 0x0,  /* CMOVZ RCX, qword [RBP] */
		0x48, 0xf, 0x44, 0xe,  /* CMOVZ RCX, qword [RSI] */
		0x48, 0xf, 0x44, 0xf,  /* CMOVZ RCX, qword [RDI] */
		0x48, 0xf, 0x44, 0x11,  /* CMOVZ RDX, qword [RCX] */
		0x48, 0xf, 0x44, 0x12,  /* CMOVZ RDX, qword [RDX] */
		0x48, 0xf, 0x44, 0x13,  /* CMOVZ RDX, qword [RBX] */
		0x48, 0xf, 0x44, 0x14, 0x24,  /* CMOVZ RDX, qword [RSP] */
		0x48, 0xf, 0x44, 0x55, 0x0,  /* CMOVZ RDX, qword [RBP] */
		0x48, 0xf, 0x44, 0x16,  /* CMOVZ RDX, qword [RSI] */
		0x48, 0xf, 0x44, 0x17,  /* CMOVZ RDX, qword [RDI] */
		0x48, 0xf, 0x44, 0x19,  /* CMOVZ RBX, qword [RCX] */
		0x48, 0xf, 0x44, 0x1a,  /* CMOVZ RBX, qword [RDX] */
		0x48, 0xf, 0x44, 0x1b,  /* CMOVZ RBX, qword [RBX] */
		0x48, 0xf, 0x44, 0x1c, 0x24,  /* CMOVZ RBX, qword [RSP] */
		0x48, 0xf, 0x44, 0x5d, 0x0,  /* CMOVZ RBX, qword [RBP] */
		0x48, 0xf, 0x44, 0x1e,  /* CMOVZ RBX, qword [RSI] */
		0x48, 0xf, 0x44, 0x1f,  /* CMOVZ RBX, qword [RDI] */
		0x48, 0xf, 0x44, 0x21,  /* CMOVZ RSP, qword [RCX] */
		0x48, 0xf, 0x44, 0x22,  /* CMOVZ RSP, qword [RDX] */
		0x48, 0xf, 0x44, 0x23,  /* CMOVZ RSP, qword [RBX] */
		0x48, 0xf, 0x44, 0x24, 0x24,  /* CMOVZ RSP, qword [RSP] */
		0x48, 0xf, 0x44, 0x65, 0x0,  /* CMOVZ RSP, qword [RBP] */
		0x48, 0xf, 0x44, 0x26,  /* CMOVZ RSP, qword [RSI] */
		0x48, 0xf, 0x44, 0x27,  /* CMOVZ RSP, qword [RDI] */
		0x48, 0xf, 0x44, 0x29,  /* CMOVZ RBP, qword [RCX] */
		0x48, 0xf, 0x44, 0x2a,  /* CMOVZ RBP, qword [RDX] */
		0x48, 0xf, 0x44, 0x2b,  /* CMOVZ RBP, qword [RBX] */
		0x48, 0xf, 0x44, 0x2c, 0x24,  /* CMOVZ RBP, qword [RSP] */
		0x48, 0xf, 0x44, 0x6d, 0x0,  /* CMOVZ RBP, qword [RBP] */
		0x48, 0xf, 0x44, 0x2e,  /* CMOVZ RBP, qword [RSI] */
		0x48, 0xf, 0x44, 0x2f,  /* CMOVZ RBP, qword [RDI] */
		0x48, 0xf, 0x44, 0x31,  /* CMOVZ RSI, qword [RCX] */
		0x48, 0xf, 0x44, 0x32,  /* CMOVZ RSI, qword [RDX] */
		0x48, 0xf, 0x44, 0x33,  /* CMOVZ RSI, qword [RBX] */
		0x48, 0xf, 0x44, 0x34, 0x24,  /* CMOVZ RSI, qword [RSP] */
		0x48, 0xf, 0x44, 0x75, 0x0,  /* CMOVZ RSI, qword [RBP] */
		0x48, 0xf, 0x44, 0x36,  /* CMOVZ RSI, qword [RSI] */
		0x48, 0xf, 0x44, 0x37,  /* CMOVZ RSI, qword [RDI] */
		0x48, 0xf, 0x44, 0x39,  /* CMOVZ RDI, qword [RCX] */
		0x48, 0xf, 0x44, 0x3a,  /* CMOVZ RDI, qword [RDX] */
		0x48, 0xf, 0x44, 0x3b,  /* CMOVZ RDI, qword [RBX] */
		0x48, 0xf, 0x44, 0x3c, 0x24,  /* CMOVZ RDI, qword [RSP] */
		0x48, 0xf, 0x44, 0x7d, 0x0,  /* CMOVZ RDI, qword [RBP] */
		0x48, 0xf, 0x44, 0x3e,  /* CMOVZ RDI, qword [RSI] */
		0x48, 0xf, 0x44, 0x3f   /* CMOVZ RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVZ RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVZ RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVNZ_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x45 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x45, 0x1,  /* CMOVNZ RAX, qword [RCX] */
		0x48, 0xf, 0x45, 0x2,  /* CMOVNZ RAX, qword [RDX] */
		0x48, 0xf, 0x45, 0x3,  /* CMOVNZ RAX, qword [RBX] */
		0x48, 0xf, 0x45, 0x4, 0x24,  /* CMOVNZ RAX, qword [RSP] */
		0x48, 0xf, 0x45, 0x45, 0x0,  /* CMOVNZ RAX, qword [RBP] */
		0x48, 0xf, 0x45, 0x6,  /* CMOVNZ RAX, qword [RSI] */
		0x48, 0xf, 0x45, 0x7,  /* CMOVNZ RAX, qword [RDI] */
		0x48, 0xf, 0x45, 0x9,  /* CMOVNZ RCX, qword [RCX] */
		0x48, 0xf, 0x45, 0xa,  /* CMOVNZ RCX, qword [RDX] */
		0x48, 0xf, 0x45, 0xb,  /* CMOVNZ RCX, qword [RBX] */
		0x48, 0xf, 0x45, 0xc, 0x24,  /* CMOVNZ RCX, qword [RSP] */
		0x48, 0xf, 0x45, 0x4d, 0x0,  /* CMOVNZ RCX, qword [RBP] */
		0x48, 0xf, 0x45, 0xe,  /* CMOVNZ RCX, qword [RSI] */
		0x48, 0xf, 0x45, 0xf,  /* CMOVNZ RCX, qword [RDI] */
		0x48, 0xf, 0x45, 0x11,  /* CMOVNZ RDX, qword [RCX] */
		0x48, 0xf, 0x45, 0x12,  /* CMOVNZ RDX, qword [RDX] */
		0x48, 0xf, 0x45, 0x13,  /* CMOVNZ RDX, qword [RBX] */
		0x48, 0xf, 0x45, 0x14, 0x24,  /* CMOVNZ RDX, qword [RSP] */
		0x48, 0xf, 0x45, 0x55, 0x0,  /* CMOVNZ RDX, qword [RBP] */
		0x48, 0xf, 0x45, 0x16,  /* CMOVNZ RDX, qword [RSI] */
		0x48, 0xf, 0x45, 0x17,  /* CMOVNZ RDX, qword [RDI] */
		0x48, 0xf, 0x45, 0x19,  /* CMOVNZ RBX, qword [RCX] */
		0x48, 0xf, 0x45, 0x1a,  /* CMOVNZ RBX, qword [RDX] */
		0x48, 0xf, 0x45, 0x1b,  /* CMOVNZ RBX, qword [RBX] */
		0x48, 0xf, 0x45, 0x1c, 0x24,  /* CMOVNZ RBX, qword [RSP] */
		0x48, 0xf, 0x45, 0x5d, 0x0,  /* CMOVNZ RBX, qword [RBP] */
		0x48, 0xf, 0x45, 0x1e,  /* CMOVNZ RBX, qword [RSI] */
		0x48, 0xf, 0x45, 0x1f,  /* CMOVNZ RBX, qword [RDI] */
		0x48, 0xf, 0x45, 0x21,  /* CMOVNZ RSP, qword [RCX] */
		0x48, 0xf, 0x45, 0x22,  /* CMOVNZ RSP, qword [RDX] */
		0x48, 0xf, 0x45, 0x23,  /* CMOVNZ RSP, qword [RBX] */
		0x48, 0xf, 0x45, 0x24, 0x24,  /* CMOVNZ RSP, qword [RSP] */
		0x48, 0xf, 0x45, 0x65, 0x0,  /* CMOVNZ RSP, qword [RBP] */
		0x48, 0xf, 0x45, 0x26,  /* CMOVNZ RSP, qword [RSI] */
		0x48, 0xf, 0x45, 0x27,  /* CMOVNZ RSP, qword [RDI] */
		0x48, 0xf, 0x45, 0x29,  /* CMOVNZ RBP, qword [RCX] */
		0x48, 0xf, 0x45, 0x2a,  /* CMOVNZ RBP, qword [RDX] */
		0x48, 0xf, 0x45, 0x2b,  /* CMOVNZ RBP, qword [RBX] */
		0x48, 0xf, 0x45, 0x2c, 0x24,  /* CMOVNZ RBP, qword [RSP] */
		0x48, 0xf, 0x45, 0x6d, 0x0,  /* CMOVNZ RBP, qword [RBP] */
		0x48, 0xf, 0x45, 0x2e,  /* CMOVNZ RBP, qword [RSI] */
		0x48, 0xf, 0x45, 0x2f,  /* CMOVNZ RBP, qword [RDI] */
		0x48, 0xf, 0x45, 0x31,  /* CMOVNZ RSI, qword [RCX] */
		0x48, 0xf, 0x45, 0x32,  /* CMOVNZ RSI, qword [RDX] */
		0x48, 0xf, 0x45, 0x33,  /* CMOVNZ RSI, qword [RBX] */
		0x48, 0xf, 0x45, 0x34, 0x24,  /* CMOVNZ RSI, qword [RSP] */
		0x48, 0xf, 0x45, 0x75, 0x0,  /* CMOVNZ RSI, qword [RBP] */
		0x48, 0xf, 0x45, 0x36,  /* CMOVNZ RSI, qword [RSI] */
		0x48, 0xf, 0x45, 0x37,  /* CMOVNZ RSI, qword [RDI] */
		0x48, 0xf, 0x45, 0x39,  /* CMOVNZ RDI, qword [RCX] */
		0x48, 0xf, 0x45, 0x3a,  /* CMOVNZ RDI, qword [RDX] */
		0x48, 0xf, 0x45, 0x3b,  /* CMOVNZ RDI, qword [RBX] */
		0x48, 0xf, 0x45, 0x3c, 0x24,  /* CMOVNZ RDI, qword [RSP] */
		0x48, 0xf, 0x45, 0x7d, 0x0,  /* CMOVNZ RDI, qword [RBP] */
		0x48, 0xf, 0x45, 0x3e,  /* CMOVNZ RDI, qword [RSI] */
		0x48, 0xf, 0x45, 0x3f   /* CMOVNZ RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVNZ RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNZ RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVNZ,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVBE_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x46 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x46, 0x1,  /* CMOVBE RAX, qword [RCX] */
		0x48, 0xf, 0x46, 0x2,  /* CMOVBE RAX, qword [RDX] */
		0x48, 0xf, 0x46, 0x3,  /* CMOVBE RAX, qword [RBX] */
		0x48, 0xf, 0x46, 0x4, 0x24,  /* CMOVBE RAX, qword [RSP] */
		0x48, 0xf, 0x46, 0x45, 0x0,  /* CMOVBE RAX, qword [RBP] */
		0x48, 0xf, 0x46, 0x6,  /* CMOVBE RAX, qword [RSI] */
		0x48, 0xf, 0x46, 0x7,  /* CMOVBE RAX, qword [RDI] */
		0x48, 0xf, 0x46, 0x9,  /* CMOVBE RCX, qword [RCX] */
		0x48, 0xf, 0x46, 0xa,  /* CMOVBE RCX, qword [RDX] */
		0x48, 0xf, 0x46, 0xb,  /* CMOVBE RCX, qword [RBX] */
		0x48, 0xf, 0x46, 0xc, 0x24,  /* CMOVBE RCX, qword [RSP] */
		0x48, 0xf, 0x46, 0x4d, 0x0,  /* CMOVBE RCX, qword [RBP] */
		0x48, 0xf, 0x46, 0xe,  /* CMOVBE RCX, qword [RSI] */
		0x48, 0xf, 0x46, 0xf,  /* CMOVBE RCX, qword [RDI] */
		0x48, 0xf, 0x46, 0x11,  /* CMOVBE RDX, qword [RCX] */
		0x48, 0xf, 0x46, 0x12,  /* CMOVBE RDX, qword [RDX] */
		0x48, 0xf, 0x46, 0x13,  /* CMOVBE RDX, qword [RBX] */
		0x48, 0xf, 0x46, 0x14, 0x24,  /* CMOVBE RDX, qword [RSP] */
		0x48, 0xf, 0x46, 0x55, 0x0,  /* CMOVBE RDX, qword [RBP] */
		0x48, 0xf, 0x46, 0x16,  /* CMOVBE RDX, qword [RSI] */
		0x48, 0xf, 0x46, 0x17,  /* CMOVBE RDX, qword [RDI] */
		0x48, 0xf, 0x46, 0x19,  /* CMOVBE RBX, qword [RCX] */
		0x48, 0xf, 0x46, 0x1a,  /* CMOVBE RBX, qword [RDX] */
		0x48, 0xf, 0x46, 0x1b,  /* CMOVBE RBX, qword [RBX] */
		0x48, 0xf, 0x46, 0x1c, 0x24,  /* CMOVBE RBX, qword [RSP] */
		0x48, 0xf, 0x46, 0x5d, 0x0,  /* CMOVBE RBX, qword [RBP] */
		0x48, 0xf, 0x46, 0x1e,  /* CMOVBE RBX, qword [RSI] */
		0x48, 0xf, 0x46, 0x1f,  /* CMOVBE RBX, qword [RDI] */
		0x48, 0xf, 0x46, 0x21,  /* CMOVBE RSP, qword [RCX] */
		0x48, 0xf, 0x46, 0x22,  /* CMOVBE RSP, qword [RDX] */
		0x48, 0xf, 0x46, 0x23,  /* CMOVBE RSP, qword [RBX] */
		0x48, 0xf, 0x46, 0x24, 0x24,  /* CMOVBE RSP, qword [RSP] */
		0x48, 0xf, 0x46, 0x65, 0x0,  /* CMOVBE RSP, qword [RBP] */
		0x48, 0xf, 0x46, 0x26,  /* CMOVBE RSP, qword [RSI] */
		0x48, 0xf, 0x46, 0x27,  /* CMOVBE RSP, qword [RDI] */
		0x48, 0xf, 0x46, 0x29,  /* CMOVBE RBP, qword [RCX] */
		0x48, 0xf, 0x46, 0x2a,  /* CMOVBE RBP, qword [RDX] */
		0x48, 0xf, 0x46, 0x2b,  /* CMOVBE RBP, qword [RBX] */
		0x48, 0xf, 0x46, 0x2c, 0x24,  /* CMOVBE RBP, qword [RSP] */
		0x48, 0xf, 0x46, 0x6d, 0x0,  /* CMOVBE RBP, qword [RBP] */
		0x48, 0xf, 0x46, 0x2e,  /* CMOVBE RBP, qword [RSI] */
		0x48, 0xf, 0x46, 0x2f,  /* CMOVBE RBP, qword [RDI] */
		0x48, 0xf, 0x46, 0x31,  /* CMOVBE RSI, qword [RCX] */
		0x48, 0xf, 0x46, 0x32,  /* CMOVBE RSI, qword [RDX] */
		0x48, 0xf, 0x46, 0x33,  /* CMOVBE RSI, qword [RBX] */
		0x48, 0xf, 0x46, 0x34, 0x24,  /* CMOVBE RSI, qword [RSP] */
		0x48, 0xf, 0x46, 0x75, 0x0,  /* CMOVBE RSI, qword [RBP] */
		0x48, 0xf, 0x46, 0x36,  /* CMOVBE RSI, qword [RSI] */
		0x48, 0xf, 0x46, 0x37,  /* CMOVBE RSI, qword [RDI] */
		0x48, 0xf, 0x46, 0x39,  /* CMOVBE RDI, qword [RCX] */
		0x48, 0xf, 0x46, 0x3a,  /* CMOVBE RDI, qword [RDX] */
		0x48, 0xf, 0x46, 0x3b,  /* CMOVBE RDI, qword [RBX] */
		0x48, 0xf, 0x46, 0x3c, 0x24,  /* CMOVBE RDI, qword [RSP] */
		0x48, 0xf, 0x46, 0x7d, 0x0,  /* CMOVBE RDI, qword [RBP] */
		0x48, 0xf, 0x46, 0x3e,  /* CMOVBE RDI, qword [RSI] */
		0x48, 0xf, 0x46, 0x3f   /* CMOVBE RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVBE RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVBE RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVBE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVA_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x47 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x47, 0x1,  /* CMOVA RAX, qword [RCX] */
		0x48, 0xf, 0x47, 0x2,  /* CMOVA RAX, qword [RDX] */
		0x48, 0xf, 0x47, 0x3,  /* CMOVA RAX, qword [RBX] */
		0x48, 0xf, 0x47, 0x4, 0x24,  /* CMOVA RAX, qword [RSP] */
		0x48, 0xf, 0x47, 0x45, 0x0,  /* CMOVA RAX, qword [RBP] */
		0x48, 0xf, 0x47, 0x6,  /* CMOVA RAX, qword [RSI] */
		0x48, 0xf, 0x47, 0x7,  /* CMOVA RAX, qword [RDI] */
		0x48, 0xf, 0x47, 0x9,  /* CMOVA RCX, qword [RCX] */
		0x48, 0xf, 0x47, 0xa,  /* CMOVA RCX, qword [RDX] */
		0x48, 0xf, 0x47, 0xb,  /* CMOVA RCX, qword [RBX] */
		0x48, 0xf, 0x47, 0xc, 0x24,  /* CMOVA RCX, qword [RSP] */
		0x48, 0xf, 0x47, 0x4d, 0x0,  /* CMOVA RCX, qword [RBP] */
		0x48, 0xf, 0x47, 0xe,  /* CMOVA RCX, qword [RSI] */
		0x48, 0xf, 0x47, 0xf,  /* CMOVA RCX, qword [RDI] */
		0x48, 0xf, 0x47, 0x11,  /* CMOVA RDX, qword [RCX] */
		0x48, 0xf, 0x47, 0x12,  /* CMOVA RDX, qword [RDX] */
		0x48, 0xf, 0x47, 0x13,  /* CMOVA RDX, qword [RBX] */
		0x48, 0xf, 0x47, 0x14, 0x24,  /* CMOVA RDX, qword [RSP] */
		0x48, 0xf, 0x47, 0x55, 0x0,  /* CMOVA RDX, qword [RBP] */
		0x48, 0xf, 0x47, 0x16,  /* CMOVA RDX, qword [RSI] */
		0x48, 0xf, 0x47, 0x17,  /* CMOVA RDX, qword [RDI] */
		0x48, 0xf, 0x47, 0x19,  /* CMOVA RBX, qword [RCX] */
		0x48, 0xf, 0x47, 0x1a,  /* CMOVA RBX, qword [RDX] */
		0x48, 0xf, 0x47, 0x1b,  /* CMOVA RBX, qword [RBX] */
		0x48, 0xf, 0x47, 0x1c, 0x24,  /* CMOVA RBX, qword [RSP] */
		0x48, 0xf, 0x47, 0x5d, 0x0,  /* CMOVA RBX, qword [RBP] */
		0x48, 0xf, 0x47, 0x1e,  /* CMOVA RBX, qword [RSI] */
		0x48, 0xf, 0x47, 0x1f,  /* CMOVA RBX, qword [RDI] */
		0x48, 0xf, 0x47, 0x21,  /* CMOVA RSP, qword [RCX] */
		0x48, 0xf, 0x47, 0x22,  /* CMOVA RSP, qword [RDX] */
		0x48, 0xf, 0x47, 0x23,  /* CMOVA RSP, qword [RBX] */
		0x48, 0xf, 0x47, 0x24, 0x24,  /* CMOVA RSP, qword [RSP] */
		0x48, 0xf, 0x47, 0x65, 0x0,  /* CMOVA RSP, qword [RBP] */
		0x48, 0xf, 0x47, 0x26,  /* CMOVA RSP, qword [RSI] */
		0x48, 0xf, 0x47, 0x27,  /* CMOVA RSP, qword [RDI] */
		0x48, 0xf, 0x47, 0x29,  /* CMOVA RBP, qword [RCX] */
		0x48, 0xf, 0x47, 0x2a,  /* CMOVA RBP, qword [RDX] */
		0x48, 0xf, 0x47, 0x2b,  /* CMOVA RBP, qword [RBX] */
		0x48, 0xf, 0x47, 0x2c, 0x24,  /* CMOVA RBP, qword [RSP] */
		0x48, 0xf, 0x47, 0x6d, 0x0,  /* CMOVA RBP, qword [RBP] */
		0x48, 0xf, 0x47, 0x2e,  /* CMOVA RBP, qword [RSI] */
		0x48, 0xf, 0x47, 0x2f,  /* CMOVA RBP, qword [RDI] */
		0x48, 0xf, 0x47, 0x31,  /* CMOVA RSI, qword [RCX] */
		0x48, 0xf, 0x47, 0x32,  /* CMOVA RSI, qword [RDX] */
		0x48, 0xf, 0x47, 0x33,  /* CMOVA RSI, qword [RBX] */
		0x48, 0xf, 0x47, 0x34, 0x24,  /* CMOVA RSI, qword [RSP] */
		0x48, 0xf, 0x47, 0x75, 0x0,  /* CMOVA RSI, qword [RBP] */
		0x48, 0xf, 0x47, 0x36,  /* CMOVA RSI, qword [RSI] */
		0x48, 0xf, 0x47, 0x37,  /* CMOVA RSI, qword [RDI] */
		0x48, 0xf, 0x47, 0x39,  /* CMOVA RDI, qword [RCX] */
		0x48, 0xf, 0x47, 0x3a,  /* CMOVA RDI, qword [RDX] */
		0x48, 0xf, 0x47, 0x3b,  /* CMOVA RDI, qword [RBX] */
		0x48, 0xf, 0x47, 0x3c, 0x24,  /* CMOVA RDI, qword [RSP] */
		0x48, 0xf, 0x47, 0x7d, 0x0,  /* CMOVA RDI, qword [RBP] */
		0x48, 0xf, 0x47, 0x3e,  /* CMOVA RDI, qword [RSI] */
		0x48, 0xf, 0x47, 0x3f   /* CMOVA RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVA RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVA RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVA,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVS_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x48 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x48, 0x1,  /* CMOVS RAX, qword [RCX] */
		0x48, 0xf, 0x48, 0x2,  /* CMOVS RAX, qword [RDX] */
		0x48, 0xf, 0x48, 0x3,  /* CMOVS RAX, qword [RBX] */
		0x48, 0xf, 0x48, 0x4, 0x24,  /* CMOVS RAX, qword [RSP] */
		0x48, 0xf, 0x48, 0x45, 0x0,  /* CMOVS RAX, qword [RBP] */
		0x48, 0xf, 0x48, 0x6,  /* CMOVS RAX, qword [RSI] */
		0x48, 0xf, 0x48, 0x7,  /* CMOVS RAX, qword [RDI] */
		0x48, 0xf, 0x48, 0x9,  /* CMOVS RCX, qword [RCX] */
		0x48, 0xf, 0x48, 0xa,  /* CMOVS RCX, qword [RDX] */
		0x48, 0xf, 0x48, 0xb,  /* CMOVS RCX, qword [RBX] */
		0x48, 0xf, 0x48, 0xc, 0x24,  /* CMOVS RCX, qword [RSP] */
		0x48, 0xf, 0x48, 0x4d, 0x0,  /* CMOVS RCX, qword [RBP] */
		0x48, 0xf, 0x48, 0xe,  /* CMOVS RCX, qword [RSI] */
		0x48, 0xf, 0x48, 0xf,  /* CMOVS RCX, qword [RDI] */
		0x48, 0xf, 0x48, 0x11,  /* CMOVS RDX, qword [RCX] */
		0x48, 0xf, 0x48, 0x12,  /* CMOVS RDX, qword [RDX] */
		0x48, 0xf, 0x48, 0x13,  /* CMOVS RDX, qword [RBX] */
		0x48, 0xf, 0x48, 0x14, 0x24,  /* CMOVS RDX, qword [RSP] */
		0x48, 0xf, 0x48, 0x55, 0x0,  /* CMOVS RDX, qword [RBP] */
		0x48, 0xf, 0x48, 0x16,  /* CMOVS RDX, qword [RSI] */
		0x48, 0xf, 0x48, 0x17,  /* CMOVS RDX, qword [RDI] */
		0x48, 0xf, 0x48, 0x19,  /* CMOVS RBX, qword [RCX] */
		0x48, 0xf, 0x48, 0x1a,  /* CMOVS RBX, qword [RDX] */
		0x48, 0xf, 0x48, 0x1b,  /* CMOVS RBX, qword [RBX] */
		0x48, 0xf, 0x48, 0x1c, 0x24,  /* CMOVS RBX, qword [RSP] */
		0x48, 0xf, 0x48, 0x5d, 0x0,  /* CMOVS RBX, qword [RBP] */
		0x48, 0xf, 0x48, 0x1e,  /* CMOVS RBX, qword [RSI] */
		0x48, 0xf, 0x48, 0x1f,  /* CMOVS RBX, qword [RDI] */
		0x48, 0xf, 0x48, 0x21,  /* CMOVS RSP, qword [RCX] */
		0x48, 0xf, 0x48, 0x22,  /* CMOVS RSP, qword [RDX] */
		0x48, 0xf, 0x48, 0x23,  /* CMOVS RSP, qword [RBX] */
		0x48, 0xf, 0x48, 0x24, 0x24,  /* CMOVS RSP, qword [RSP] */
		0x48, 0xf, 0x48, 0x65, 0x0,  /* CMOVS RSP, qword [RBP] */
		0x48, 0xf, 0x48, 0x26,  /* CMOVS RSP, qword [RSI] */
		0x48, 0xf, 0x48, 0x27,  /* CMOVS RSP, qword [RDI] */
		0x48, 0xf, 0x48, 0x29,  /* CMOVS RBP, qword [RCX] */
		0x48, 0xf, 0x48, 0x2a,  /* CMOVS RBP, qword [RDX] */
		0x48, 0xf, 0x48, 0x2b,  /* CMOVS RBP, qword [RBX] */
		0x48, 0xf, 0x48, 0x2c, 0x24,  /* CMOVS RBP, qword [RSP] */
		0x48, 0xf, 0x48, 0x6d, 0x0,  /* CMOVS RBP, qword [RBP] */
		0x48, 0xf, 0x48, 0x2e,  /* CMOVS RBP, qword [RSI] */
		0x48, 0xf, 0x48, 0x2f,  /* CMOVS RBP, qword [RDI] */
		0x48, 0xf, 0x48, 0x31,  /* CMOVS RSI, qword [RCX] */
		0x48, 0xf, 0x48, 0x32,  /* CMOVS RSI, qword [RDX] */
		0x48, 0xf, 0x48, 0x33,  /* CMOVS RSI, qword [RBX] */
		0x48, 0xf, 0x48, 0x34, 0x24,  /* CMOVS RSI, qword [RSP] */
		0x48, 0xf, 0x48, 0x75, 0x0,  /* CMOVS RSI, qword [RBP] */
		0x48, 0xf, 0x48, 0x36,  /* CMOVS RSI, qword [RSI] */
		0x48, 0xf, 0x48, 0x37,  /* CMOVS RSI, qword [RDI] */
		0x48, 0xf, 0x48, 0x39,  /* CMOVS RDI, qword [RCX] */
		0x48, 0xf, 0x48, 0x3a,  /* CMOVS RDI, qword [RDX] */
		0x48, 0xf, 0x48, 0x3b,  /* CMOVS RDI, qword [RBX] */
		0x48, 0xf, 0x48, 0x3c, 0x24,  /* CMOVS RDI, qword [RSP] */
		0x48, 0xf, 0x48, 0x7d, 0x0,  /* CMOVS RDI, qword [RBP] */
		0x48, 0xf, 0x48, 0x3e,  /* CMOVS RDI, qword [RSI] */
		0x48, 0xf, 0x48, 0x3f   /* CMOVS RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVS RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVS RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVNS_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x49 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x49, 0x1,  /* CMOVNS RAX, qword [RCX] */
		0x48, 0xf, 0x49, 0x2,  /* CMOVNS RAX, qword [RDX] */
		0x48, 0xf, 0x49, 0x3,  /* CMOVNS RAX, qword [RBX] */
		0x48, 0xf, 0x49, 0x4, 0x24,  /* CMOVNS RAX, qword [RSP] */
		0x48, 0xf, 0x49, 0x45, 0x0,  /* CMOVNS RAX, qword [RBP] */
		0x48, 0xf, 0x49, 0x6,  /* CMOVNS RAX, qword [RSI] */
		0x48, 0xf, 0x49, 0x7,  /* CMOVNS RAX, qword [RDI] */
		0x48, 0xf, 0x49, 0x9,  /* CMOVNS RCX, qword [RCX] */
		0x48, 0xf, 0x49, 0xa,  /* CMOVNS RCX, qword [RDX] */
		0x48, 0xf, 0x49, 0xb,  /* CMOVNS RCX, qword [RBX] */
		0x48, 0xf, 0x49, 0xc, 0x24,  /* CMOVNS RCX, qword [RSP] */
		0x48, 0xf, 0x49, 0x4d, 0x0,  /* CMOVNS RCX, qword [RBP] */
		0x48, 0xf, 0x49, 0xe,  /* CMOVNS RCX, qword [RSI] */
		0x48, 0xf, 0x49, 0xf,  /* CMOVNS RCX, qword [RDI] */
		0x48, 0xf, 0x49, 0x11,  /* CMOVNS RDX, qword [RCX] */
		0x48, 0xf, 0x49, 0x12,  /* CMOVNS RDX, qword [RDX] */
		0x48, 0xf, 0x49, 0x13,  /* CMOVNS RDX, qword [RBX] */
		0x48, 0xf, 0x49, 0x14, 0x24,  /* CMOVNS RDX, qword [RSP] */
		0x48, 0xf, 0x49, 0x55, 0x0,  /* CMOVNS RDX, qword [RBP] */
		0x48, 0xf, 0x49, 0x16,  /* CMOVNS RDX, qword [RSI] */
		0x48, 0xf, 0x49, 0x17,  /* CMOVNS RDX, qword [RDI] */
		0x48, 0xf, 0x49, 0x19,  /* CMOVNS RBX, qword [RCX] */
		0x48, 0xf, 0x49, 0x1a,  /* CMOVNS RBX, qword [RDX] */
		0x48, 0xf, 0x49, 0x1b,  /* CMOVNS RBX, qword [RBX] */
		0x48, 0xf, 0x49, 0x1c, 0x24,  /* CMOVNS RBX, qword [RSP] */
		0x48, 0xf, 0x49, 0x5d, 0x0,  /* CMOVNS RBX, qword [RBP] */
		0x48, 0xf, 0x49, 0x1e,  /* CMOVNS RBX, qword [RSI] */
		0x48, 0xf, 0x49, 0x1f,  /* CMOVNS RBX, qword [RDI] */
		0x48, 0xf, 0x49, 0x21,  /* CMOVNS RSP, qword [RCX] */
		0x48, 0xf, 0x49, 0x22,  /* CMOVNS RSP, qword [RDX] */
		0x48, 0xf, 0x49, 0x23,  /* CMOVNS RSP, qword [RBX] */
		0x48, 0xf, 0x49, 0x24, 0x24,  /* CMOVNS RSP, qword [RSP] */
		0x48, 0xf, 0x49, 0x65, 0x0,  /* CMOVNS RSP, qword [RBP] */
		0x48, 0xf, 0x49, 0x26,  /* CMOVNS RSP, qword [RSI] */
		0x48, 0xf, 0x49, 0x27,  /* CMOVNS RSP, qword [RDI] */
		0x48, 0xf, 0x49, 0x29,  /* CMOVNS RBP, qword [RCX] */
		0x48, 0xf, 0x49, 0x2a,  /* CMOVNS RBP, qword [RDX] */
		0x48, 0xf, 0x49, 0x2b,  /* CMOVNS RBP, qword [RBX] */
		0x48, 0xf, 0x49, 0x2c, 0x24,  /* CMOVNS RBP, qword [RSP] */
		0x48, 0xf, 0x49, 0x6d, 0x0,  /* CMOVNS RBP, qword [RBP] */
		0x48, 0xf, 0x49, 0x2e,  /* CMOVNS RBP, qword [RSI] */
		0x48, 0xf, 0x49, 0x2f,  /* CMOVNS RBP, qword [RDI] */
		0x48, 0xf, 0x49, 0x31,  /* CMOVNS RSI, qword [RCX] */
		0x48, 0xf, 0x49, 0x32,  /* CMOVNS RSI, qword [RDX] */
		0x48, 0xf, 0x49, 0x33,  /* CMOVNS RSI, qword [RBX] */
		0x48, 0xf, 0x49, 0x34, 0x24,  /* CMOVNS RSI, qword [RSP] */
		0x48, 0xf, 0x49, 0x75, 0x0,  /* CMOVNS RSI, qword [RBP] */
		0x48, 0xf, 0x49, 0x36,  /* CMOVNS RSI, qword [RSI] */
		0x48, 0xf, 0x49, 0x37,  /* CMOVNS RSI, qword [RDI] */
		0x48, 0xf, 0x49, 0x39,  /* CMOVNS RDI, qword [RCX] */
		0x48, 0xf, 0x49, 0x3a,  /* CMOVNS RDI, qword [RDX] */
		0x48, 0xf, 0x49, 0x3b,  /* CMOVNS RDI, qword [RBX] */
		0x48, 0xf, 0x49, 0x3c, 0x24,  /* CMOVNS RDI, qword [RSP] */
		0x48, 0xf, 0x49, 0x7d, 0x0,  /* CMOVNS RDI, qword [RBP] */
		0x48, 0xf, 0x49, 0x3e,  /* CMOVNS RDI, qword [RSI] */
		0x48, 0xf, 0x49, 0x3f   /* CMOVNS RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVNS RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNS RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVNS,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVP_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4a 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x4a, 0x1,  /* CMOVP RAX, qword [RCX] */
		0x48, 0xf, 0x4a, 0x2,  /* CMOVP RAX, qword [RDX] */
		0x48, 0xf, 0x4a, 0x3,  /* CMOVP RAX, qword [RBX] */
		0x48, 0xf, 0x4a, 0x4, 0x24,  /* CMOVP RAX, qword [RSP] */
		0x48, 0xf, 0x4a, 0x45, 0x0,  /* CMOVP RAX, qword [RBP] */
		0x48, 0xf, 0x4a, 0x6,  /* CMOVP RAX, qword [RSI] */
		0x48, 0xf, 0x4a, 0x7,  /* CMOVP RAX, qword [RDI] */
		0x48, 0xf, 0x4a, 0x9,  /* CMOVP RCX, qword [RCX] */
		0x48, 0xf, 0x4a, 0xa,  /* CMOVP RCX, qword [RDX] */
		0x48, 0xf, 0x4a, 0xb,  /* CMOVP RCX, qword [RBX] */
		0x48, 0xf, 0x4a, 0xc, 0x24,  /* CMOVP RCX, qword [RSP] */
		0x48, 0xf, 0x4a, 0x4d, 0x0,  /* CMOVP RCX, qword [RBP] */
		0x48, 0xf, 0x4a, 0xe,  /* CMOVP RCX, qword [RSI] */
		0x48, 0xf, 0x4a, 0xf,  /* CMOVP RCX, qword [RDI] */
		0x48, 0xf, 0x4a, 0x11,  /* CMOVP RDX, qword [RCX] */
		0x48, 0xf, 0x4a, 0x12,  /* CMOVP RDX, qword [RDX] */
		0x48, 0xf, 0x4a, 0x13,  /* CMOVP RDX, qword [RBX] */
		0x48, 0xf, 0x4a, 0x14, 0x24,  /* CMOVP RDX, qword [RSP] */
		0x48, 0xf, 0x4a, 0x55, 0x0,  /* CMOVP RDX, qword [RBP] */
		0x48, 0xf, 0x4a, 0x16,  /* CMOVP RDX, qword [RSI] */
		0x48, 0xf, 0x4a, 0x17,  /* CMOVP RDX, qword [RDI] */
		0x48, 0xf, 0x4a, 0x19,  /* CMOVP RBX, qword [RCX] */
		0x48, 0xf, 0x4a, 0x1a,  /* CMOVP RBX, qword [RDX] */
		0x48, 0xf, 0x4a, 0x1b,  /* CMOVP RBX, qword [RBX] */
		0x48, 0xf, 0x4a, 0x1c, 0x24,  /* CMOVP RBX, qword [RSP] */
		0x48, 0xf, 0x4a, 0x5d, 0x0,  /* CMOVP RBX, qword [RBP] */
		0x48, 0xf, 0x4a, 0x1e,  /* CMOVP RBX, qword [RSI] */
		0x48, 0xf, 0x4a, 0x1f,  /* CMOVP RBX, qword [RDI] */
		0x48, 0xf, 0x4a, 0x21,  /* CMOVP RSP, qword [RCX] */
		0x48, 0xf, 0x4a, 0x22,  /* CMOVP RSP, qword [RDX] */
		0x48, 0xf, 0x4a, 0x23,  /* CMOVP RSP, qword [RBX] */
		0x48, 0xf, 0x4a, 0x24, 0x24,  /* CMOVP RSP, qword [RSP] */
		0x48, 0xf, 0x4a, 0x65, 0x0,  /* CMOVP RSP, qword [RBP] */
		0x48, 0xf, 0x4a, 0x26,  /* CMOVP RSP, qword [RSI] */
		0x48, 0xf, 0x4a, 0x27,  /* CMOVP RSP, qword [RDI] */
		0x48, 0xf, 0x4a, 0x29,  /* CMOVP RBP, qword [RCX] */
		0x48, 0xf, 0x4a, 0x2a,  /* CMOVP RBP, qword [RDX] */
		0x48, 0xf, 0x4a, 0x2b,  /* CMOVP RBP, qword [RBX] */
		0x48, 0xf, 0x4a, 0x2c, 0x24,  /* CMOVP RBP, qword [RSP] */
		0x48, 0xf, 0x4a, 0x6d, 0x0,  /* CMOVP RBP, qword [RBP] */
		0x48, 0xf, 0x4a, 0x2e,  /* CMOVP RBP, qword [RSI] */
		0x48, 0xf, 0x4a, 0x2f,  /* CMOVP RBP, qword [RDI] */
		0x48, 0xf, 0x4a, 0x31,  /* CMOVP RSI, qword [RCX] */
		0x48, 0xf, 0x4a, 0x32,  /* CMOVP RSI, qword [RDX] */
		0x48, 0xf, 0x4a, 0x33,  /* CMOVP RSI, qword [RBX] */
		0x48, 0xf, 0x4a, 0x34, 0x24,  /* CMOVP RSI, qword [RSP] */
		0x48, 0xf, 0x4a, 0x75, 0x0,  /* CMOVP RSI, qword [RBP] */
		0x48, 0xf, 0x4a, 0x36,  /* CMOVP RSI, qword [RSI] */
		0x48, 0xf, 0x4a, 0x37,  /* CMOVP RSI, qword [RDI] */
		0x48, 0xf, 0x4a, 0x39,  /* CMOVP RDI, qword [RCX] */
		0x48, 0xf, 0x4a, 0x3a,  /* CMOVP RDI, qword [RDX] */
		0x48, 0xf, 0x4a, 0x3b,  /* CMOVP RDI, qword [RBX] */
		0x48, 0xf, 0x4a, 0x3c, 0x24,  /* CMOVP RDI, qword [RSP] */
		0x48, 0xf, 0x4a, 0x7d, 0x0,  /* CMOVP RDI, qword [RBP] */
		0x48, 0xf, 0x4a, 0x3e,  /* CMOVP RDI, qword [RSI] */
		0x48, 0xf, 0x4a, 0x3f   /* CMOVP RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVP RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVP RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVNP_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4b 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x4b, 0x1,  /* CMOVNP RAX, qword [RCX] */
		0x48, 0xf, 0x4b, 0x2,  /* CMOVNP RAX, qword [RDX] */
		0x48, 0xf, 0x4b, 0x3,  /* CMOVNP RAX, qword [RBX] */
		0x48, 0xf, 0x4b, 0x4, 0x24,  /* CMOVNP RAX, qword [RSP] */
		0x48, 0xf, 0x4b, 0x45, 0x0,  /* CMOVNP RAX, qword [RBP] */
		0x48, 0xf, 0x4b, 0x6,  /* CMOVNP RAX, qword [RSI] */
		0x48, 0xf, 0x4b, 0x7,  /* CMOVNP RAX, qword [RDI] */
		0x48, 0xf, 0x4b, 0x9,  /* CMOVNP RCX, qword [RCX] */
		0x48, 0xf, 0x4b, 0xa,  /* CMOVNP RCX, qword [RDX] */
		0x48, 0xf, 0x4b, 0xb,  /* CMOVNP RCX, qword [RBX] */
		0x48, 0xf, 0x4b, 0xc, 0x24,  /* CMOVNP RCX, qword [RSP] */
		0x48, 0xf, 0x4b, 0x4d, 0x0,  /* CMOVNP RCX, qword [RBP] */
		0x48, 0xf, 0x4b, 0xe,  /* CMOVNP RCX, qword [RSI] */
		0x48, 0xf, 0x4b, 0xf,  /* CMOVNP RCX, qword [RDI] */
		0x48, 0xf, 0x4b, 0x11,  /* CMOVNP RDX, qword [RCX] */
		0x48, 0xf, 0x4b, 0x12,  /* CMOVNP RDX, qword [RDX] */
		0x48, 0xf, 0x4b, 0x13,  /* CMOVNP RDX, qword [RBX] */
		0x48, 0xf, 0x4b, 0x14, 0x24,  /* CMOVNP RDX, qword [RSP] */
		0x48, 0xf, 0x4b, 0x55, 0x0,  /* CMOVNP RDX, qword [RBP] */
		0x48, 0xf, 0x4b, 0x16,  /* CMOVNP RDX, qword [RSI] */
		0x48, 0xf, 0x4b, 0x17,  /* CMOVNP RDX, qword [RDI] */
		0x48, 0xf, 0x4b, 0x19,  /* CMOVNP RBX, qword [RCX] */
		0x48, 0xf, 0x4b, 0x1a,  /* CMOVNP RBX, qword [RDX] */
		0x48, 0xf, 0x4b, 0x1b,  /* CMOVNP RBX, qword [RBX] */
		0x48, 0xf, 0x4b, 0x1c, 0x24,  /* CMOVNP RBX, qword [RSP] */
		0x48, 0xf, 0x4b, 0x5d, 0x0,  /* CMOVNP RBX, qword [RBP] */
		0x48, 0xf, 0x4b, 0x1e,  /* CMOVNP RBX, qword [RSI] */
		0x48, 0xf, 0x4b, 0x1f,  /* CMOVNP RBX, qword [RDI] */
		0x48, 0xf, 0x4b, 0x21,  /* CMOVNP RSP, qword [RCX] */
		0x48, 0xf, 0x4b, 0x22,  /* CMOVNP RSP, qword [RDX] */
		0x48, 0xf, 0x4b, 0x23,  /* CMOVNP RSP, qword [RBX] */
		0x48, 0xf, 0x4b, 0x24, 0x24,  /* CMOVNP RSP, qword [RSP] */
		0x48, 0xf, 0x4b, 0x65, 0x0,  /* CMOVNP RSP, qword [RBP] */
		0x48, 0xf, 0x4b, 0x26,  /* CMOVNP RSP, qword [RSI] */
		0x48, 0xf, 0x4b, 0x27,  /* CMOVNP RSP, qword [RDI] */
		0x48, 0xf, 0x4b, 0x29,  /* CMOVNP RBP, qword [RCX] */
		0x48, 0xf, 0x4b, 0x2a,  /* CMOVNP RBP, qword [RDX] */
		0x48, 0xf, 0x4b, 0x2b,  /* CMOVNP RBP, qword [RBX] */
		0x48, 0xf, 0x4b, 0x2c, 0x24,  /* CMOVNP RBP, qword [RSP] */
		0x48, 0xf, 0x4b, 0x6d, 0x0,  /* CMOVNP RBP, qword [RBP] */
		0x48, 0xf, 0x4b, 0x2e,  /* CMOVNP RBP, qword [RSI] */
		0x48, 0xf, 0x4b, 0x2f,  /* CMOVNP RBP, qword [RDI] */
		0x48, 0xf, 0x4b, 0x31,  /* CMOVNP RSI, qword [RCX] */
		0x48, 0xf, 0x4b, 0x32,  /* CMOVNP RSI, qword [RDX] */
		0x48, 0xf, 0x4b, 0x33,  /* CMOVNP RSI, qword [RBX] */
		0x48, 0xf, 0x4b, 0x34, 0x24,  /* CMOVNP RSI, qword [RSP] */
		0x48, 0xf, 0x4b, 0x75, 0x0,  /* CMOVNP RSI, qword [RBP] */
		0x48, 0xf, 0x4b, 0x36,  /* CMOVNP RSI, qword [RSI] */
		0x48, 0xf, 0x4b, 0x37,  /* CMOVNP RSI, qword [RDI] */
		0x48, 0xf, 0x4b, 0x39,  /* CMOVNP RDI, qword [RCX] */
		0x48, 0xf, 0x4b, 0x3a,  /* CMOVNP RDI, qword [RDX] */
		0x48, 0xf, 0x4b, 0x3b,  /* CMOVNP RDI, qword [RBX] */
		0x48, 0xf, 0x4b, 0x3c, 0x24,  /* CMOVNP RDI, qword [RSP] */
		0x48, 0xf, 0x4b, 0x7d, 0x0,  /* CMOVNP RDI, qword [RBP] */
		0x48, 0xf, 0x4b, 0x3e,  /* CMOVNP RDI, qword [RSI] */
		0x48, 0xf, 0x4b, 0x3f   /* CMOVNP RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVNP RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVNP RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVNP,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVL_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4c 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x4c, 0x1,  /* CMOVL RAX, qword [RCX] */
		0x48, 0xf, 0x4c, 0x2,  /* CMOVL RAX, qword [RDX] */
		0x48, 0xf, 0x4c, 0x3,  /* CMOVL RAX, qword [RBX] */
		0x48, 0xf, 0x4c, 0x4, 0x24,  /* CMOVL RAX, qword [RSP] */
		0x48, 0xf, 0x4c, 0x45, 0x0,  /* CMOVL RAX, qword [RBP] */
		0x48, 0xf, 0x4c, 0x6,  /* CMOVL RAX, qword [RSI] */
		0x48, 0xf, 0x4c, 0x7,  /* CMOVL RAX, qword [RDI] */
		0x48, 0xf, 0x4c, 0x9,  /* CMOVL RCX, qword [RCX] */
		0x48, 0xf, 0x4c, 0xa,  /* CMOVL RCX, qword [RDX] */
		0x48, 0xf, 0x4c, 0xb,  /* CMOVL RCX, qword [RBX] */
		0x48, 0xf, 0x4c, 0xc, 0x24,  /* CMOVL RCX, qword [RSP] */
		0x48, 0xf, 0x4c, 0x4d, 0x0,  /* CMOVL RCX, qword [RBP] */
		0x48, 0xf, 0x4c, 0xe,  /* CMOVL RCX, qword [RSI] */
		0x48, 0xf, 0x4c, 0xf,  /* CMOVL RCX, qword [RDI] */
		0x48, 0xf, 0x4c, 0x11,  /* CMOVL RDX, qword [RCX] */
		0x48, 0xf, 0x4c, 0x12,  /* CMOVL RDX, qword [RDX] */
		0x48, 0xf, 0x4c, 0x13,  /* CMOVL RDX, qword [RBX] */
		0x48, 0xf, 0x4c, 0x14, 0x24,  /* CMOVL RDX, qword [RSP] */
		0x48, 0xf, 0x4c, 0x55, 0x0,  /* CMOVL RDX, qword [RBP] */
		0x48, 0xf, 0x4c, 0x16,  /* CMOVL RDX, qword [RSI] */
		0x48, 0xf, 0x4c, 0x17,  /* CMOVL RDX, qword [RDI] */
		0x48, 0xf, 0x4c, 0x19,  /* CMOVL RBX, qword [RCX] */
		0x48, 0xf, 0x4c, 0x1a,  /* CMOVL RBX, qword [RDX] */
		0x48, 0xf, 0x4c, 0x1b,  /* CMOVL RBX, qword [RBX] */
		0x48, 0xf, 0x4c, 0x1c, 0x24,  /* CMOVL RBX, qword [RSP] */
		0x48, 0xf, 0x4c, 0x5d, 0x0,  /* CMOVL RBX, qword [RBP] */
		0x48, 0xf, 0x4c, 0x1e,  /* CMOVL RBX, qword [RSI] */
		0x48, 0xf, 0x4c, 0x1f,  /* CMOVL RBX, qword [RDI] */
		0x48, 0xf, 0x4c, 0x21,  /* CMOVL RSP, qword [RCX] */
		0x48, 0xf, 0x4c, 0x22,  /* CMOVL RSP, qword [RDX] */
		0x48, 0xf, 0x4c, 0x23,  /* CMOVL RSP, qword [RBX] */
		0x48, 0xf, 0x4c, 0x24, 0x24,  /* CMOVL RSP, qword [RSP] */
		0x48, 0xf, 0x4c, 0x65, 0x0,  /* CMOVL RSP, qword [RBP] */
		0x48, 0xf, 0x4c, 0x26,  /* CMOVL RSP, qword [RSI] */
		0x48, 0xf, 0x4c, 0x27,  /* CMOVL RSP, qword [RDI] */
		0x48, 0xf, 0x4c, 0x29,  /* CMOVL RBP, qword [RCX] */
		0x48, 0xf, 0x4c, 0x2a,  /* CMOVL RBP, qword [RDX] */
		0x48, 0xf, 0x4c, 0x2b,  /* CMOVL RBP, qword [RBX] */
		0x48, 0xf, 0x4c, 0x2c, 0x24,  /* CMOVL RBP, qword [RSP] */
		0x48, 0xf, 0x4c, 0x6d, 0x0,  /* CMOVL RBP, qword [RBP] */
		0x48, 0xf, 0x4c, 0x2e,  /* CMOVL RBP, qword [RSI] */
		0x48, 0xf, 0x4c, 0x2f,  /* CMOVL RBP, qword [RDI] */
		0x48, 0xf, 0x4c, 0x31,  /* CMOVL RSI, qword [RCX] */
		0x48, 0xf, 0x4c, 0x32,  /* CMOVL RSI, qword [RDX] */
		0x48, 0xf, 0x4c, 0x33,  /* CMOVL RSI, qword [RBX] */
		0x48, 0xf, 0x4c, 0x34, 0x24,  /* CMOVL RSI, qword [RSP] */
		0x48, 0xf, 0x4c, 0x75, 0x0,  /* CMOVL RSI, qword [RBP] */
		0x48, 0xf, 0x4c, 0x36,  /* CMOVL RSI, qword [RSI] */
		0x48, 0xf, 0x4c, 0x37,  /* CMOVL RSI, qword [RDI] */
		0x48, 0xf, 0x4c, 0x39,  /* CMOVL RDI, qword [RCX] */
		0x48, 0xf, 0x4c, 0x3a,  /* CMOVL RDI, qword [RDX] */
		0x48, 0xf, 0x4c, 0x3b,  /* CMOVL RDI, qword [RBX] */
		0x48, 0xf, 0x4c, 0x3c, 0x24,  /* CMOVL RDI, qword [RSP] */
		0x48, 0xf, 0x4c, 0x7d, 0x0,  /* CMOVL RDI, qword [RBP] */
		0x48, 0xf, 0x4c, 0x3e,  /* CMOVL RDI, qword [RSI] */
		0x48, 0xf, 0x4c, 0x3f   /* CMOVL RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVL RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVL RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVL,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVGE_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4d 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x4d, 0x1,  /* CMOVGE RAX, qword [RCX] */
		0x48, 0xf, 0x4d, 0x2,  /* CMOVGE RAX, qword [RDX] */
		0x48, 0xf, 0x4d, 0x3,  /* CMOVGE RAX, qword [RBX] */
		0x48, 0xf, 0x4d, 0x4, 0x24,  /* CMOVGE RAX, qword [RSP] */
		0x48, 0xf, 0x4d, 0x45, 0x0,  /* CMOVGE RAX, qword [RBP] */
		0x48, 0xf, 0x4d, 0x6,  /* CMOVGE RAX, qword [RSI] */
		0x48, 0xf, 0x4d, 0x7,  /* CMOVGE RAX, qword [RDI] */
		0x48, 0xf, 0x4d, 0x9,  /* CMOVGE RCX, qword [RCX] */
		0x48, 0xf, 0x4d, 0xa,  /* CMOVGE RCX, qword [RDX] */
		0x48, 0xf, 0x4d, 0xb,  /* CMOVGE RCX, qword [RBX] */
		0x48, 0xf, 0x4d, 0xc, 0x24,  /* CMOVGE RCX, qword [RSP] */
		0x48, 0xf, 0x4d, 0x4d, 0x0,  /* CMOVGE RCX, qword [RBP] */
		0x48, 0xf, 0x4d, 0xe,  /* CMOVGE RCX, qword [RSI] */
		0x48, 0xf, 0x4d, 0xf,  /* CMOVGE RCX, qword [RDI] */
		0x48, 0xf, 0x4d, 0x11,  /* CMOVGE RDX, qword [RCX] */
		0x48, 0xf, 0x4d, 0x12,  /* CMOVGE RDX, qword [RDX] */
		0x48, 0xf, 0x4d, 0x13,  /* CMOVGE RDX, qword [RBX] */
		0x48, 0xf, 0x4d, 0x14, 0x24,  /* CMOVGE RDX, qword [RSP] */
		0x48, 0xf, 0x4d, 0x55, 0x0,  /* CMOVGE RDX, qword [RBP] */
		0x48, 0xf, 0x4d, 0x16,  /* CMOVGE RDX, qword [RSI] */
		0x48, 0xf, 0x4d, 0x17,  /* CMOVGE RDX, qword [RDI] */
		0x48, 0xf, 0x4d, 0x19,  /* CMOVGE RBX, qword [RCX] */
		0x48, 0xf, 0x4d, 0x1a,  /* CMOVGE RBX, qword [RDX] */
		0x48, 0xf, 0x4d, 0x1b,  /* CMOVGE RBX, qword [RBX] */
		0x48, 0xf, 0x4d, 0x1c, 0x24,  /* CMOVGE RBX, qword [RSP] */
		0x48, 0xf, 0x4d, 0x5d, 0x0,  /* CMOVGE RBX, qword [RBP] */
		0x48, 0xf, 0x4d, 0x1e,  /* CMOVGE RBX, qword [RSI] */
		0x48, 0xf, 0x4d, 0x1f,  /* CMOVGE RBX, qword [RDI] */
		0x48, 0xf, 0x4d, 0x21,  /* CMOVGE RSP, qword [RCX] */
		0x48, 0xf, 0x4d, 0x22,  /* CMOVGE RSP, qword [RDX] */
		0x48, 0xf, 0x4d, 0x23,  /* CMOVGE RSP, qword [RBX] */
		0x48, 0xf, 0x4d, 0x24, 0x24,  /* CMOVGE RSP, qword [RSP] */
		0x48, 0xf, 0x4d, 0x65, 0x0,  /* CMOVGE RSP, qword [RBP] */
		0x48, 0xf, 0x4d, 0x26,  /* CMOVGE RSP, qword [RSI] */
		0x48, 0xf, 0x4d, 0x27,  /* CMOVGE RSP, qword [RDI] */
		0x48, 0xf, 0x4d, 0x29,  /* CMOVGE RBP, qword [RCX] */
		0x48, 0xf, 0x4d, 0x2a,  /* CMOVGE RBP, qword [RDX] */
		0x48, 0xf, 0x4d, 0x2b,  /* CMOVGE RBP, qword [RBX] */
		0x48, 0xf, 0x4d, 0x2c, 0x24,  /* CMOVGE RBP, qword [RSP] */
		0x48, 0xf, 0x4d, 0x6d, 0x0,  /* CMOVGE RBP, qword [RBP] */
		0x48, 0xf, 0x4d, 0x2e,  /* CMOVGE RBP, qword [RSI] */
		0x48, 0xf, 0x4d, 0x2f,  /* CMOVGE RBP, qword [RDI] */
		0x48, 0xf, 0x4d, 0x31,  /* CMOVGE RSI, qword [RCX] */
		0x48, 0xf, 0x4d, 0x32,  /* CMOVGE RSI, qword [RDX] */
		0x48, 0xf, 0x4d, 0x33,  /* CMOVGE RSI, qword [RBX] */
		0x48, 0xf, 0x4d, 0x34, 0x24,  /* CMOVGE RSI, qword [RSP] */
		0x48, 0xf, 0x4d, 0x75, 0x0,  /* CMOVGE RSI, qword [RBP] */
		0x48, 0xf, 0x4d, 0x36,  /* CMOVGE RSI, qword [RSI] */
		0x48, 0xf, 0x4d, 0x37,  /* CMOVGE RSI, qword [RDI] */
		0x48, 0xf, 0x4d, 0x39,  /* CMOVGE RDI, qword [RCX] */
		0x48, 0xf, 0x4d, 0x3a,  /* CMOVGE RDI, qword [RDX] */
		0x48, 0xf, 0x4d, 0x3b,  /* CMOVGE RDI, qword [RBX] */
		0x48, 0xf, 0x4d, 0x3c, 0x24,  /* CMOVGE RDI, qword [RSP] */
		0x48, 0xf, 0x4d, 0x7d, 0x0,  /* CMOVGE RDI, qword [RBP] */
		0x48, 0xf, 0x4d, 0x3e,  /* CMOVGE RDI, qword [RSI] */
		0x48, 0xf, 0x4d, 0x3f   /* CMOVGE RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVGE RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVGE RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVGE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVLE_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4e 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x4e, 0x1,  /* CMOVLE RAX, qword [RCX] */
		0x48, 0xf, 0x4e, 0x2,  /* CMOVLE RAX, qword [RDX] */
		0x48, 0xf, 0x4e, 0x3,  /* CMOVLE RAX, qword [RBX] */
		0x48, 0xf, 0x4e, 0x4, 0x24,  /* CMOVLE RAX, qword [RSP] */
		0x48, 0xf, 0x4e, 0x45, 0x0,  /* CMOVLE RAX, qword [RBP] */
		0x48, 0xf, 0x4e, 0x6,  /* CMOVLE RAX, qword [RSI] */
		0x48, 0xf, 0x4e, 0x7,  /* CMOVLE RAX, qword [RDI] */
		0x48, 0xf, 0x4e, 0x9,  /* CMOVLE RCX, qword [RCX] */
		0x48, 0xf, 0x4e, 0xa,  /* CMOVLE RCX, qword [RDX] */
		0x48, 0xf, 0x4e, 0xb,  /* CMOVLE RCX, qword [RBX] */
		0x48, 0xf, 0x4e, 0xc, 0x24,  /* CMOVLE RCX, qword [RSP] */
		0x48, 0xf, 0x4e, 0x4d, 0x0,  /* CMOVLE RCX, qword [RBP] */
		0x48, 0xf, 0x4e, 0xe,  /* CMOVLE RCX, qword [RSI] */
		0x48, 0xf, 0x4e, 0xf,  /* CMOVLE RCX, qword [RDI] */
		0x48, 0xf, 0x4e, 0x11,  /* CMOVLE RDX, qword [RCX] */
		0x48, 0xf, 0x4e, 0x12,  /* CMOVLE RDX, qword [RDX] */
		0x48, 0xf, 0x4e, 0x13,  /* CMOVLE RDX, qword [RBX] */
		0x48, 0xf, 0x4e, 0x14, 0x24,  /* CMOVLE RDX, qword [RSP] */
		0x48, 0xf, 0x4e, 0x55, 0x0,  /* CMOVLE RDX, qword [RBP] */
		0x48, 0xf, 0x4e, 0x16,  /* CMOVLE RDX, qword [RSI] */
		0x48, 0xf, 0x4e, 0x17,  /* CMOVLE RDX, qword [RDI] */
		0x48, 0xf, 0x4e, 0x19,  /* CMOVLE RBX, qword [RCX] */
		0x48, 0xf, 0x4e, 0x1a,  /* CMOVLE RBX, qword [RDX] */
		0x48, 0xf, 0x4e, 0x1b,  /* CMOVLE RBX, qword [RBX] */
		0x48, 0xf, 0x4e, 0x1c, 0x24,  /* CMOVLE RBX, qword [RSP] */
		0x48, 0xf, 0x4e, 0x5d, 0x0,  /* CMOVLE RBX, qword [RBP] */
		0x48, 0xf, 0x4e, 0x1e,  /* CMOVLE RBX, qword [RSI] */
		0x48, 0xf, 0x4e, 0x1f,  /* CMOVLE RBX, qword [RDI] */
		0x48, 0xf, 0x4e, 0x21,  /* CMOVLE RSP, qword [RCX] */
		0x48, 0xf, 0x4e, 0x22,  /* CMOVLE RSP, qword [RDX] */
		0x48, 0xf, 0x4e, 0x23,  /* CMOVLE RSP, qword [RBX] */
		0x48, 0xf, 0x4e, 0x24, 0x24,  /* CMOVLE RSP, qword [RSP] */
		0x48, 0xf, 0x4e, 0x65, 0x0,  /* CMOVLE RSP, qword [RBP] */
		0x48, 0xf, 0x4e, 0x26,  /* CMOVLE RSP, qword [RSI] */
		0x48, 0xf, 0x4e, 0x27,  /* CMOVLE RSP, qword [RDI] */
		0x48, 0xf, 0x4e, 0x29,  /* CMOVLE RBP, qword [RCX] */
		0x48, 0xf, 0x4e, 0x2a,  /* CMOVLE RBP, qword [RDX] */
		0x48, 0xf, 0x4e, 0x2b,  /* CMOVLE RBP, qword [RBX] */
		0x48, 0xf, 0x4e, 0x2c, 0x24,  /* CMOVLE RBP, qword [RSP] */
		0x48, 0xf, 0x4e, 0x6d, 0x0,  /* CMOVLE RBP, qword [RBP] */
		0x48, 0xf, 0x4e, 0x2e,  /* CMOVLE RBP, qword [RSI] */
		0x48, 0xf, 0x4e, 0x2f,  /* CMOVLE RBP, qword [RDI] */
		0x48, 0xf, 0x4e, 0x31,  /* CMOVLE RSI, qword [RCX] */
		0x48, 0xf, 0x4e, 0x32,  /* CMOVLE RSI, qword [RDX] */
		0x48, 0xf, 0x4e, 0x33,  /* CMOVLE RSI, qword [RBX] */
		0x48, 0xf, 0x4e, 0x34, 0x24,  /* CMOVLE RSI, qword [RSP] */
		0x48, 0xf, 0x4e, 0x75, 0x0,  /* CMOVLE RSI, qword [RBP] */
		0x48, 0xf, 0x4e, 0x36,  /* CMOVLE RSI, qword [RSI] */
		0x48, 0xf, 0x4e, 0x37,  /* CMOVLE RSI, qword [RDI] */
		0x48, 0xf, 0x4e, 0x39,  /* CMOVLE RDI, qword [RCX] */
		0x48, 0xf, 0x4e, 0x3a,  /* CMOVLE RDI, qword [RDX] */
		0x48, 0xf, 0x4e, 0x3b,  /* CMOVLE RDI, qword [RBX] */
		0x48, 0xf, 0x4e, 0x3c, 0x24,  /* CMOVLE RDI, qword [RSP] */
		0x48, 0xf, 0x4e, 0x7d, 0x0,  /* CMOVLE RDI, qword [RBP] */
		0x48, 0xf, 0x4e, 0x3e,  /* CMOVLE RDI, qword [RSI] */
		0x48, 0xf, 0x4e, 0x3f   /* CMOVLE RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVLE RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVLE RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVLE,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, CMOVG_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x4f 
	const uint8_t pOps[0xf0] = {
		0x48, 0xf, 0x4f, 0x1,  /* CMOVG RAX, qword [RCX] */
		0x48, 0xf, 0x4f, 0x2,  /* CMOVG RAX, qword [RDX] */
		0x48, 0xf, 0x4f, 0x3,  /* CMOVG RAX, qword [RBX] */
		0x48, 0xf, 0x4f, 0x4, 0x24,  /* CMOVG RAX, qword [RSP] */
		0x48, 0xf, 0x4f, 0x45, 0x0,  /* CMOVG RAX, qword [RBP] */
		0x48, 0xf, 0x4f, 0x6,  /* CMOVG RAX, qword [RSI] */
		0x48, 0xf, 0x4f, 0x7,  /* CMOVG RAX, qword [RDI] */
		0x48, 0xf, 0x4f, 0x9,  /* CMOVG RCX, qword [RCX] */
		0x48, 0xf, 0x4f, 0xa,  /* CMOVG RCX, qword [RDX] */
		0x48, 0xf, 0x4f, 0xb,  /* CMOVG RCX, qword [RBX] */
		0x48, 0xf, 0x4f, 0xc, 0x24,  /* CMOVG RCX, qword [RSP] */
		0x48, 0xf, 0x4f, 0x4d, 0x0,  /* CMOVG RCX, qword [RBP] */
		0x48, 0xf, 0x4f, 0xe,  /* CMOVG RCX, qword [RSI] */
		0x48, 0xf, 0x4f, 0xf,  /* CMOVG RCX, qword [RDI] */
		0x48, 0xf, 0x4f, 0x11,  /* CMOVG RDX, qword [RCX] */
		0x48, 0xf, 0x4f, 0x12,  /* CMOVG RDX, qword [RDX] */
		0x48, 0xf, 0x4f, 0x13,  /* CMOVG RDX, qword [RBX] */
		0x48, 0xf, 0x4f, 0x14, 0x24,  /* CMOVG RDX, qword [RSP] */
		0x48, 0xf, 0x4f, 0x55, 0x0,  /* CMOVG RDX, qword [RBP] */
		0x48, 0xf, 0x4f, 0x16,  /* CMOVG RDX, qword [RSI] */
		0x48, 0xf, 0x4f, 0x17,  /* CMOVG RDX, qword [RDI] */
		0x48, 0xf, 0x4f, 0x19,  /* CMOVG RBX, qword [RCX] */
		0x48, 0xf, 0x4f, 0x1a,  /* CMOVG RBX, qword [RDX] */
		0x48, 0xf, 0x4f, 0x1b,  /* CMOVG RBX, qword [RBX] */
		0x48, 0xf, 0x4f, 0x1c, 0x24,  /* CMOVG RBX, qword [RSP] */
		0x48, 0xf, 0x4f, 0x5d, 0x0,  /* CMOVG RBX, qword [RBP] */
		0x48, 0xf, 0x4f, 0x1e,  /* CMOVG RBX, qword [RSI] */
		0x48, 0xf, 0x4f, 0x1f,  /* CMOVG RBX, qword [RDI] */
		0x48, 0xf, 0x4f, 0x21,  /* CMOVG RSP, qword [RCX] */
		0x48, 0xf, 0x4f, 0x22,  /* CMOVG RSP, qword [RDX] */
		0x48, 0xf, 0x4f, 0x23,  /* CMOVG RSP, qword [RBX] */
		0x48, 0xf, 0x4f, 0x24, 0x24,  /* CMOVG RSP, qword [RSP] */
		0x48, 0xf, 0x4f, 0x65, 0x0,  /* CMOVG RSP, qword [RBP] */
		0x48, 0xf, 0x4f, 0x26,  /* CMOVG RSP, qword [RSI] */
		0x48, 0xf, 0x4f, 0x27,  /* CMOVG RSP, qword [RDI] */
		0x48, 0xf, 0x4f, 0x29,  /* CMOVG RBP, qword [RCX] */
		0x48, 0xf, 0x4f, 0x2a,  /* CMOVG RBP, qword [RDX] */
		0x48, 0xf, 0x4f, 0x2b,  /* CMOVG RBP, qword [RBX] */
		0x48, 0xf, 0x4f, 0x2c, 0x24,  /* CMOVG RBP, qword [RSP] */
		0x48, 0xf, 0x4f, 0x6d, 0x0,  /* CMOVG RBP, qword [RBP] */
		0x48, 0xf, 0x4f, 0x2e,  /* CMOVG RBP, qword [RSI] */
		0x48, 0xf, 0x4f, 0x2f,  /* CMOVG RBP, qword [RDI] */
		0x48, 0xf, 0x4f, 0x31,  /* CMOVG RSI, qword [RCX] */
		0x48, 0xf, 0x4f, 0x32,  /* CMOVG RSI, qword [RDX] */
		0x48, 0xf, 0x4f, 0x33,  /* CMOVG RSI, qword [RBX] */
		0x48, 0xf, 0x4f, 0x34, 0x24,  /* CMOVG RSI, qword [RSP] */
		0x48, 0xf, 0x4f, 0x75, 0x0,  /* CMOVG RSI, qword [RBP] */
		0x48, 0xf, 0x4f, 0x36,  /* CMOVG RSI, qword [RSI] */
		0x48, 0xf, 0x4f, 0x37,  /* CMOVG RSI, qword [RDI] */
		0x48, 0xf, 0x4f, 0x39,  /* CMOVG RDI, qword [RCX] */
		0x48, 0xf, 0x4f, 0x3a,  /* CMOVG RDI, qword [RDX] */
		0x48, 0xf, 0x4f, 0x3b,  /* CMOVG RDI, qword [RBX] */
		0x48, 0xf, 0x4f, 0x3c, 0x24,  /* CMOVG RDI, qword [RSP] */
		0x48, 0xf, 0x4f, 0x7d, 0x0,  /* CMOVG RDI, qword [RBP] */
		0x48, 0xf, 0x4f, 0x3e,  /* CMOVG RDI, qword [RSI] */
		0x48, 0xf, 0x4f, 0x3f   /* CMOVG RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* CMOVG RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMOVG RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::CMOVG,
			FlowControl::NONE,
			InstructionSet::P6,
			0x4,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, FCMOVB_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xc2   /* FCMOVB st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, FCMOVE_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xca   /* FCMOVE st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, FCMOVBE_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xd2   /* FCMOVBE st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, FCMOVU_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x2] = {
		0xda, 0xda   /* FCMOVU st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, FCMOVNB_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xc2   /* FCMOVNB st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, FCMOVNE_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xca   /* FCMOVNE st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, FCMOVNBE_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xd2   /* FCMOVNBE st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, FCMOVNU_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xda   /* FCMOVNU st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_P6, FCOMI_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xdb 
	const uint8_t pOps[0x2] = {
		0xdb, 0xf2   /* FCOMI st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PUNPCKLBW_O_MM_MM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x60 
	const uint8_t pOps[0xc] = {
		0xf, 0x60, 0xc0,  /* PUNPCKLBW mm0, mm0 */
		0xf, 0x60, 0xc1,  /* PUNPCKLBW mm0, mm1 */
		0xf, 0x60, 0xc8,  /* PUNPCKLBW mm1, mm0 */
		0xf, 0x60, 0xc9   /* PUNPCKLBW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKLBW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLBW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLBW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLBW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLBW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLBW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLBW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLBW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PUNPCKLWD_O_MM_MM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x61 
	const uint8_t pOps[0xc] = {
		0xf, 0x61, 0xc0,  /* PUNPCKLWD mm0, mm0 */
		0xf, 0x61, 0xc1,  /* PUNPCKLWD mm0, mm1 */
		0xf, 0x61, 0xc8,  /* PUNPCKLWD mm1, mm0 */
		0xf, 0x61, 0xc9   /* PUNPCKLWD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKLWD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLWD,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLWD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLWD,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLWD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLWD,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLWD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLWD,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PUNPCKLDQ_O_MM_MM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x62 
	const uint8_t pOps[0xc] = {
		0xf, 0x62, 0xc0,  /* PUNPCKLDQ mm0, mm0 */
		0xf, 0x62, 0xc1,  /* PUNPCKLDQ mm0, mm1 */
		0xf, 0x62, 0xc8,  /* PUNPCKLDQ mm1, mm0 */
		0xf, 0x62, 0xc9   /* PUNPCKLDQ mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKLDQ mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLDQ,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLDQ mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLDQ,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLDQ mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLDQ,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKLDQ mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKLDQ,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PACKSSWB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x63 
	const uint8_t pOps[0xc] = {
		0xf, 0x63, 0xc0,  /* PACKSSWB mm0, mm0 */
		0xf, 0x63, 0xc1,  /* PACKSSWB mm0, mm1 */
		0xf, 0x63, 0xc8,  /* PACKSSWB mm1, mm0 */
		0xf, 0x63, 0xc9   /* PACKSSWB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PACKSSWB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PACKSSWB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKSSWB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PACKSSWB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKSSWB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PACKSSWB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKSSWB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PACKSSWB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PCMPGTB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x64 
	const uint8_t pOps[0xc] = {
		0xf, 0x64, 0xc0,  /* PCMPGTB mm0, mm0 */
		0xf, 0x64, 0xc1,  /* PCMPGTB mm0, mm1 */
		0xf, 0x64, 0xc8,  /* PCMPGTB mm1, mm0 */
		0xf, 0x64, 0xc9   /* PCMPGTB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPGTB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPGTB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPGTB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPGTB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPGTB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PCMPGTW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x65 
	const uint8_t pOps[0xc] = {
		0xf, 0x65, 0xc0,  /* PCMPGTW mm0, mm0 */
		0xf, 0x65, 0xc1,  /* PCMPGTW mm0, mm1 */
		0xf, 0x65, 0xc8,  /* PCMPGTW mm1, mm0 */
		0xf, 0x65, 0xc9   /* PCMPGTW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPGTW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPGTW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPGTW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPGTW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPGTW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PCMPGTD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x66 
	const uint8_t pOps[0xc] = {
		0xf, 0x66, 0xc0,  /* PCMPGTD mm0, mm0 */
		0xf, 0x66, 0xc1,  /* PCMPGTD mm0, mm1 */
		0xf, 0x66, 0xc8,  /* PCMPGTD mm1, mm0 */
		0xf, 0x66, 0xc9   /* PCMPGTD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPGTD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPGTD,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPGTD,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPGTD,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PCMPGTD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPGTD,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PACKUSWB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x67 
	const uint8_t pOps[0xc] = {
		0xf, 0x67, 0xc0,  /* PACKUSWB mm0, mm0 */
		0xf, 0x67, 0xc1,  /* PACKUSWB mm0, mm1 */
		0xf, 0x67, 0xc8,  /* PACKUSWB mm1, mm0 */
		0xf, 0x67, 0xc9   /* PACKUSWB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PACKUSWB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PACKUSWB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKUSWB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PACKUSWB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKUSWB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PACKUSWB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PACKUSWB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PACKUSWB,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PUNPCKHBW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x68 
	const uint8_t pOps[0xc] = {
		0xf, 0x68, 0xc0,  /* PUNPCKHBW mm0, mm0 */
		0xf, 0x68, 0xc1,  /* PUNPCKHBW mm0, mm1 */
		0xf, 0x68, 0xc8,  /* PUNPCKHBW mm1, mm0 */
		0xf, 0x68, 0xc9   /* PUNPCKHBW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKHBW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHBW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHBW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHBW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHBW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHBW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUNPCKHBW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHBW,
			FlowControl::NONE,
			InstructionSet::MMX,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

