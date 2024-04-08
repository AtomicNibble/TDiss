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
			
TEST(x86, SALC)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd6 
	const uint8_t pOps[0x1] = {
		0xd6   /* SALC */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* SALC */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SALC,
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


TEST(x86, XLAT_O_REG_EBXAL_DS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd7 
	const uint8_t pOps[0x1] = {
		0xd7   /* XLATb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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
			RegIndex::DS,
			RegIndex::EBX,
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


TEST(x86, LOOPNZ_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe0 
	const uint8_t pOps[0x2] = {
		0xe0, 0xfe   /* LOOPNZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

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


TEST(x86, LOOPNZ_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe0 
	const uint8_t pOps[0x2] = {
		0xe0, 0xfe   /* LOOPNZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

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


TEST(x86, LOOPZ_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe1 
	const uint8_t pOps[0x2] = {
		0xe1, 0xfe   /* LOOPZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

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


TEST(x86, LOOPZ_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe1 
	const uint8_t pOps[0x2] = {
		0xe1, 0xfe   /* LOOPZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

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


TEST(x86, LOOP_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe2 
	const uint8_t pOps[0x2] = {
		0xe2, 0xfe   /* LOOP 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

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


TEST(x86, LOOP_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe2 
	const uint8_t pOps[0x2] = {
		0xe2, 0xfe   /* LOOP 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

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


TEST(x86, JCXZ_JECXZ_JRCXZ_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe3 
	const uint8_t pOps[0x5] = {
		0x67, 0xe3, 0xfe,  /* JCXZ 0xfe+0x3 */
		0xe3, 0xfe   /*  JECXZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* JCXZ 0xfe+0x3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JCXZ,
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
		/*  JECXZ 0xfe+0x2 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::JECXZ,
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


TEST(x86, JCXZ_JECXZ_JRCXZ_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe3 
	const uint8_t pOps[0x5] = {
		0x67, 0xe3, 0xfe,  /* JCXZ 0xfe+0x3 */
		0xe3, 0xfe   /*  JECXZ 0xfe+0x2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CND_BRANCH;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* JCXZ 0xfe+0x3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JCXZ,
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


TEST(x86, IN_O_ACC_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe4 
	const uint8_t pOps[0x2] = {
		0xe4, 0xaf   /* IN AL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

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


TEST(x86, IN_O_ACC_FULL_NOT64_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe5 
	const uint8_t pOps[0x5] = {
		0x66, 0xe5, 0xaf,  /* IN AX, 0xaf */
		0xe5, 0xaf   /* IN EAX, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_32BIT);

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


TEST(x86, OUT_O_IMM_8_ACC_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe6 
	const uint8_t pOps[0x2] = {
		0xe6, 0xaf   /* OUT 0xaf, AL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

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


TEST(x86, OUT_O_IMM_8_ACC_FULL_NOT64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe7 
	const uint8_t pOps[0x5] = {
		0x66, 0xe7, 0xaf,  /* OUT 0xaf, AX */
		0xe7, 0xaf   /* OUT 0xaf, EAX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_32BIT);

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


TEST(x86, CALL_O_REL_CI_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe8 
	const uint8_t pOps[0x5] = {
		0xe8, 0x78, 0x56, 0x34, 0x12   /* CALL 0x12345678+0x5 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CALL);

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_32BIT);

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


TEST(x86, CALL_O_REL_CI_FULL_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe8 
	const uint8_t pOps[0x5] = {
		0xe8, 0x78, 0x56, 0x34, 0x12   /* CALL 0x12345678+0x5 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CALL;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_32BIT);

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


TEST(x86, JMP_O_REL_CI_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe9 
	const uint8_t pOps[0x5] = {
		0xe9, 0x78, 0x56, 0x34, 0x12   /* JMP 0x12345678+0x5 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_UNC_BRANCH);

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_32BIT);

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


TEST(x86, JMP_O_REL_CI_FULL_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe9 
	const uint8_t pOps[0x5] = {
		0xe9, 0x78, 0x56, 0x34, 0x12   /* JMP 0x12345678+0x5 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_UNC_BRANCH;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_32BIT);

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


TEST(x86, JMP_FAR_O_PTR16_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xea 
	const uint8_t pOps[0x7] = {
		0xea, 0x78, 0x56, 0x34, 0x12, 0xff, 0xff   /* JMP FAR 0xffff:0x12345678 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_UNC_BRANCH);

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* JMP FAR 0xffff:0x12345678 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JMP_FAR,
			FlowControl::UNC_BRANCH,
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

		EXPECT_EQ(0xffffu, inst.imm.ptr.seg);
		EXPECT_EQ(0x12345678u, inst.imm.ptr.off);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PTR, RegIndex::NONE, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x8c)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, JMP_FAR_O_PTR16_FULL_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xea 
	const uint8_t pOps[0x7] = {
		0xea, 0x78, 0x56, 0x34, 0x12, 0xff, 0xff   /* JMP FAR 0xffff:0x12345678 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_UNC_BRANCH;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* JMP FAR 0xffff:0x12345678 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JMP_FAR,
			FlowControl::UNC_BRANCH,
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

		EXPECT_EQ(0xffffu, inst.imm.ptr.seg);
		EXPECT_EQ(0x12345678u, inst.imm.ptr.off);

		ValidateOperand(inst.ops[0], OperandTypeAbs::PTR, RegIndex::NONE, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x8c)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, JMP_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xeb 
	const uint8_t pOps[0x2] = {
		0xeb, 0xfe   /* @label: jmp @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_UNC_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jmp @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
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


TEST(x86, JMP_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xeb 
	const uint8_t pOps[0x2] = {
		0xeb, 0xfe   /* @label: jmp @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_UNC_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* @label: jmp @label */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
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


TEST(x86, IN_O_ACC_8_REG_DX)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xec 
	const uint8_t pOps[0x1] = {
		0xec   /* IN AL, DX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* IN AL, DX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IN,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, IN_O_ACC_FULL_NOT64_REG_DX)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xed 
	const uint8_t pOps[0x3] = {
		0x66, 0xed,  /* IN AX, DX */
		0xed   /* IN EAX, DX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* IN AX, DX */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IN EAX, DX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::IN,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, OUT_O_REG_DX_ACC_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xee 
	const uint8_t pOps[0x1] = {
		0xee   /* OUT DX, AL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* OUT DX, AL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::OUT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, OUT_O_REG_DX_ACC_FULL_NOT64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xef 
	const uint8_t pOps[0x3] = {
		0x66, 0xef,  /* OUT DX, AX */
		0xef   /* OUT DX, EAX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* OUT DX, AX */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* OUT DX, EAX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::OUT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, INT1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf1 
	const uint8_t pOps[0x1] = {
		0xf1   /* db 0xf1 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_INT);

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* db 0xf1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INT1,
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


TEST(x86, INT1_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf1 
	const uint8_t pOps[0x1] = {
		0xf1   /* db 0xf1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_INT;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* db 0xf1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INT1,
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


TEST(x86, HLT)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf4 
	const uint8_t pOps[0x1] = {
		0xf4   /* HLT */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* HLT */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::HLT,
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


TEST(x86, CMC)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf5 
	const uint8_t pOps[0x1] = {
		0xf5   /* CMC */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CMC */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
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


TEST(x86, TEST_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0x15] = {
		0xf6, 0xc1, 0xaf,  /* TEST CL, 0xaf */
		0xf6, 0xc2, 0xaf,  /* TEST DL, 0xaf */
		0xf6, 0xc3, 0xaf,  /* TEST BL, 0xaf */
		0xf6, 0xc4, 0xaf,  /* TEST AH, 0xaf */
		0xf6, 0xc5, 0xaf,  /* TEST CH, 0xaf */
		0xf6, 0xc6, 0xaf,  /* TEST DH, 0xaf */
		0xf6, 0xc7, 0xaf   /* TEST BH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x15, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* TEST CL, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, 0xaf */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST AH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, NOT_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0xe] = {
		0xf6, 0xd1,  /* NOT CL */
		0xf6, 0xd2,  /* NOT DL */
		0xf6, 0xd3,  /* NOT BL */
		0xf6, 0xd4,  /* NOT AH */
		0xf6, 0xd5,  /* NOT CH */
		0xf6, 0xd6,  /* NOT DH */
		0xf6, 0xd7   /* NOT BH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* NOT CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::NOT,
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
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::NOT,
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
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::NOT,
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
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT AH */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT CH */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT DH */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT BH */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, NEG_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0xe] = {
		0xf6, 0xd9,  /* NEG CL */
		0xf6, 0xda,  /* NEG DL */
		0xf6, 0xdb,  /* NEG BL */
		0xf6, 0xdc,  /* NEG AH */
		0xf6, 0xdd,  /* NEG CH */
		0xf6, 0xde,  /* NEG DH */
		0xf6, 0xdf   /* NEG BH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* NEG CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG AH */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG CH */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG DH */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG BH */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MUL_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0xe] = {
		0xf6, 0xe1,  /* MUL CL */
		0xf6, 0xe2,  /* MUL DL */
		0xf6, 0xe3,  /* MUL BL */
		0xf6, 0xe4,  /* MUL AH */
		0xf6, 0xe5,  /* MUL CH */
		0xf6, 0xe6,  /* MUL DH */
		0xf6, 0xe7   /* MUL BH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* MUL CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL AH */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL CH */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL DH */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL BH */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, IMUL_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0xe] = {
		0xf6, 0xe9,  /* IMUL CL */
		0xf6, 0xea,  /* IMUL DL */
		0xf6, 0xeb,  /* IMUL BL */
		0xf6, 0xec,  /* IMUL AH */
		0xf6, 0xed,  /* IMUL CH */
		0xf6, 0xee,  /* IMUL DH */
		0xf6, 0xef   /* IMUL BH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* IMUL CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL AH */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL CH */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL DH */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL BH */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, DIV_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0xe] = {
		0xf6, 0xf1,  /* DIV CL */
		0xf6, 0xf2,  /* DIV DL */
		0xf6, 0xf3,  /* DIV BL */
		0xf6, 0xf4,  /* DIV AH */
		0xf6, 0xf5,  /* DIV CH */
		0xf6, 0xf6,  /* DIV DH */
		0xf6, 0xf7   /* DIV BH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* DIV CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV AH */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV CH */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV DH */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV BH */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, IDIV_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0xe] = {
		0xf6, 0xf9,  /* IDIV CL */
		0xf6, 0xfa,  /* IDIV DL */
		0xf6, 0xfb,  /* IDIV BL */
		0xf6, 0xfc,  /* IDIV AH */
		0xf6, 0xfd,  /* IDIV CH */
		0xf6, 0xfe,  /* IDIV DH */
		0xf6, 0xff   /* IDIV BH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* IDIV CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV AH */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV CH */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV DH */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV BH */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, TEST_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x2c] = {
		0xf7, 0x1, 0xbb, 0xee, 0xaf, 0xab,  /* TEST dword [ECX], 0xabafeebb */
		0xf7, 0x2, 0xbb, 0xee, 0xaf, 0xab,  /* TEST dword [EDX], 0xabafeebb */
		0xf7, 0x3, 0xbb, 0xee, 0xaf, 0xab,  /* TEST dword [EBX], 0xabafeebb */
		0xf7, 0x4, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* TEST dword [ESP], 0xabafeebb */
		0xf7, 0x45, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* TEST dword [EBP], 0xabafeebb */
		0xf7, 0x6, 0xbb, 0xee, 0xaf, 0xab,  /* TEST dword [ESI], 0xabafeebb */
		0xf7, 0x7, 0xbb, 0xee, 0xaf, 0xab   /* TEST dword [EDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2c, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* TEST dword [ECX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, NOT_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x10] = {
		0xf7, 0x11,  /* NOT dword [ECX] */
		0xf7, 0x12,  /* NOT dword [EDX] */
		0xf7, 0x13,  /* NOT dword [EBX] */
		0xf7, 0x14, 0x24,  /* NOT dword [ESP] */
		0xf7, 0x55, 0x0,  /* NOT dword [EBP] */
		0xf7, 0x16,  /* NOT dword [ESI] */
		0xf7, 0x17   /* NOT dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* NOT dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::NOT,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::NOT,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::NOT,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::NOT,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::NOT,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::NOT,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::NOT,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, NEG_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x10] = {
		0xf7, 0x19,  /* NEG dword [ECX] */
		0xf7, 0x1a,  /* NEG dword [EDX] */
		0xf7, 0x1b,  /* NEG dword [EBX] */
		0xf7, 0x1c, 0x24,  /* NEG dword [ESP] */
		0xf7, 0x5d, 0x0,  /* NEG dword [EBP] */
		0xf7, 0x1e,  /* NEG dword [ESI] */
		0xf7, 0x1f   /* NEG dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* NEG dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::NEG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::NEG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::NEG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::NEG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::NEG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::NEG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d5,
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
	{
		/* NEG dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::NEG,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d5,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MUL_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x10] = {
		0xf7, 0x21,  /* MUL dword [ECX] */
		0xf7, 0x22,  /* MUL dword [EDX] */
		0xf7, 0x23,  /* MUL dword [EBX] */
		0xf7, 0x24, 0x24,  /* MUL dword [ESP] */
		0xf7, 0x65, 0x0,  /* MUL dword [EBP] */
		0xf7, 0x26,  /* MUL dword [ESI] */
		0xf7, 0x27   /* MUL dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* MUL dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, IMUL_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x10] = {
		0xf7, 0x29,  /* IMUL dword [ECX] */
		0xf7, 0x2a,  /* IMUL dword [EDX] */
		0xf7, 0x2b,  /* IMUL dword [EBX] */
		0xf7, 0x2c, 0x24,  /* IMUL dword [ESP] */
		0xf7, 0x6d, 0x0,  /* IMUL dword [EBP] */
		0xf7, 0x2e,  /* IMUL dword [ESI] */
		0xf7, 0x2f   /* IMUL dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* IMUL dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x801,
			0x0,
			0xd4,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, DIV_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x10] = {
		0xf7, 0x31,  /* DIV dword [ECX] */
		0xf7, 0x32,  /* DIV dword [EDX] */
		0xf7, 0x33,  /* DIV dword [EBX] */
		0xf7, 0x34, 0x24,  /* DIV dword [ESP] */
		0xf7, 0x75, 0x0,  /* DIV dword [EBP] */
		0xf7, 0x36,  /* DIV dword [ESI] */
		0xf7, 0x37   /* DIV dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* DIV dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, IDIV_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x10] = {
		0xf7, 0x39,  /* IDIV dword [ECX] */
		0xf7, 0x3a,  /* IDIV dword [EDX] */
		0xf7, 0x3b,  /* IDIV dword [EBX] */
		0xf7, 0x3c, 0x24,  /* IDIV dword [ESP] */
		0xf7, 0x7d, 0x0,  /* IDIV dword [EBP] */
		0xf7, 0x3e,  /* IDIV dword [ESI] */
		0xf7, 0x3f   /* IDIV dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* IDIV dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x8d5,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, CLC)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf8 
	const uint8_t pOps[0x1] = {
		0xf8   /* CLC */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CLC */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CLC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
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


TEST(x86, STC)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf9 
	const uint8_t pOps[0x1] = {
		0xf9   /* STC */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* STC */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::STC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x1,
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


TEST(x86, CLI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfa 
	const uint8_t pOps[0x1] = {
		0xfa   /* CLI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CLI */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CLI,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x200,
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


TEST(x86, STI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfb 
	const uint8_t pOps[0x1] = {
		0xfb   /* STI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* STI */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::STI,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x200,
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


TEST(x86, CLD)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfc 
	const uint8_t pOps[0x1] = {
		0xfc   /* CLD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CLD */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CLD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x400,
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


TEST(x86, STD)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfd 
	const uint8_t pOps[0x1] = {
		0xfd   /* STD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* STD */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::STD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x400,
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


TEST(x86, INC_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfe 
	const uint8_t pOps[0xe] = {
		0xfe, 0xc1,  /* INC CL */
		0xfe, 0xc2,  /* INC DL */
		0xfe, 0xc3,  /* INC BL */
		0xfe, 0xc4,  /* INC AH */
		0xfe, 0xc5,  /* INC CH */
		0xfe, 0xc6,  /* INC DH */
		0xfe, 0xc7   /* INC BH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* INC CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC AH */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC CH */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC DH */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC BH */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, DEC_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfe 
	const uint8_t pOps[0xe] = {
		0xfe, 0xc9,  /* DEC CL */
		0xfe, 0xca,  /* DEC DL */
		0xfe, 0xcb,  /* DEC BL */
		0xfe, 0xcc,  /* DEC AH */
		0xfe, 0xcd,  /* DEC CH */
		0xfe, 0xce,  /* DEC DH */
		0xfe, 0xcf   /* DEC BH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* DEC CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC AH */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC CH */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC DH */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC BH */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, INC_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x1,  /* INC dword [ECX] */
		0xff, 0x2,  /* INC dword [EDX] */
		0xff, 0x3,  /* INC dword [EBX] */
		0xff, 0x4, 0x24,  /* INC dword [ESP] */
		0xff, 0x45, 0x0,  /* INC dword [EBP] */
		0xff, 0x6,  /* INC dword [ESI] */
		0xff, 0x7   /* INC dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* INC dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d4,
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
	{
		/* INC dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, DEC_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x9,  /* DEC dword [ECX] */
		0xff, 0xa,  /* DEC dword [EDX] */
		0xff, 0xb,  /* DEC dword [EBX] */
		0xff, 0xc, 0x24,  /* DEC dword [ESP] */
		0xff, 0x4d, 0x0,  /* DEC dword [EBP] */
		0xff, 0xe,  /* DEC dword [ESI] */
		0xff, 0xf   /* DEC dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* DEC dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d4,
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
	{
		/* DEC dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d4,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, CALL_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x11,  /* CALL dword [ECX] */
		0xff, 0x12,  /* CALL dword [EDX] */
		0xff, 0x13,  /* CALL dword [EBX] */
		0xff, 0x14, 0x24,  /* CALL dword [ESP] */
		0xff, 0x55, 0x0,  /* CALL dword [EBP] */
		0xff, 0x16,  /* CALL dword [ESI] */
		0xff, 0x17   /* CALL dword [EDI] */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CALL);

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* CALL dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CALL dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CALL dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CALL dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CALL dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CALL dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CALL dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, CALL_O_RM_FULL_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x11,  /* CALL dword [ECX] */
		0xff, 0x12,  /* CALL dword [EDX] */
		0xff, 0x13,  /* CALL dword [EBX] */
		0xff, 0x14, 0x24,  /* CALL dword [ESP] */
		0xff, 0x55, 0x0,  /* CALL dword [EBP] */
		0xff, 0x16,  /* CALL dword [ESI] */
		0xff, 0x17   /* CALL dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CALL dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, CALL_FAR_O_MEM_FULL_M16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x6] = {
		0xff, 0x1d, 0x78, 0x56, 0x34, 0x12   /* CALL FAR [0x12345678] */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CALL);

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CALL FAR [0x12345678] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CALL_FAR,
			FlowControl::CALL,
			InstructionSet::NONE,
			0x6,
			0x12345678,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, CALL_FAR_O_MEM_FULL_M16_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x6] = {
		0xff, 0x1d, 0x78, 0x56, 0x34, 0x12   /* CALL FAR [0x12345678] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CALL;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CALL FAR [0x12345678] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CALL_FAR,
			FlowControl::CALL,
			InstructionSet::NONE,
			0x6,
			0x12345678,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, JMP_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x21,  /* JMP dword [ECX] */
		0xff, 0x22,  /* JMP dword [EDX] */
		0xff, 0x23,  /* JMP dword [EBX] */
		0xff, 0x24, 0x24,  /* JMP dword [ESP] */
		0xff, 0x65, 0x0,  /* JMP dword [EBP] */
		0xff, 0x26,  /* JMP dword [ESI] */
		0xff, 0x27   /* JMP dword [EDI] */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_UNC_BRANCH);

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* JMP dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* JMP dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* JMP dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* JMP dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* JMP dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* JMP dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* JMP dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, JMP_O_RM_FULL_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x21,  /* JMP dword [ECX] */
		0xff, 0x22,  /* JMP dword [EDX] */
		0xff, 0x23,  /* JMP dword [EBX] */
		0xff, 0x24, 0x24,  /* JMP dword [ESP] */
		0xff, 0x65, 0x0,  /* JMP dword [EBP] */
		0xff, 0x26,  /* JMP dword [ESI] */
		0xff, 0x27   /* JMP dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_UNC_BRANCH;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* JMP dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, JMP_FAR_O_MEM_FULL_M16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x6] = {
		0xff, 0x2d, 0x78, 0x56, 0x34, 0x12   /* JMP FAR [0x12345678] */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_UNC_BRANCH);

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* JMP FAR [0x12345678] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JMP_FAR,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
			0x6,
			0x12345678,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, JMP_FAR_O_MEM_FULL_M16_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x6] = {
		0xff, 0x2d, 0x78, 0x56, 0x34, 0x12   /* JMP FAR [0x12345678] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_UNC_BRANCH;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* JMP FAR [0x12345678] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::JMP_FAR,
			FlowControl::UNC_BRANCH,
			InstructionSet::NONE,
			0x6,
			0x12345678,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, PUSH_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x31,  /* PUSH dword [ECX] */
		0xff, 0x32,  /* PUSH dword [EDX] */
		0xff, 0x33,  /* PUSH dword [EBX] */
		0xff, 0x34, 0x24,  /* PUSH dword [ESP] */
		0xff, 0x75, 0x0,  /* PUSH dword [EBP] */
		0xff, 0x36,  /* PUSH dword [ESI] */
		0xff, 0x37   /* PUSH dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* PUSH dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUSH,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUSH,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUSH,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUSH,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::PUSH,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::PUSH,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::PUSH,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, LZCNT_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0xbd 
	const uint8_t pOps[0xf0] = {
		0xf3, 0xf, 0xbd, 0x1,  /* LZCNT EAX, dword [ECX] */
		0xf3, 0xf, 0xbd, 0x2,  /* LZCNT EAX, dword [EDX] */
		0xf3, 0xf, 0xbd, 0x3,  /* LZCNT EAX, dword [EBX] */
		0xf3, 0xf, 0xbd, 0x4, 0x24,  /* LZCNT EAX, dword [ESP] */
		0xf3, 0xf, 0xbd, 0x45, 0x0,  /* LZCNT EAX, dword [EBP] */
		0xf3, 0xf, 0xbd, 0x6,  /* LZCNT EAX, dword [ESI] */
		0xf3, 0xf, 0xbd, 0x7,  /* LZCNT EAX, dword [EDI] */
		0xf3, 0xf, 0xbd, 0x9,  /* LZCNT ECX, dword [ECX] */
		0xf3, 0xf, 0xbd, 0xa,  /* LZCNT ECX, dword [EDX] */
		0xf3, 0xf, 0xbd, 0xb,  /* LZCNT ECX, dword [EBX] */
		0xf3, 0xf, 0xbd, 0xc, 0x24,  /* LZCNT ECX, dword [ESP] */
		0xf3, 0xf, 0xbd, 0x4d, 0x0,  /* LZCNT ECX, dword [EBP] */
		0xf3, 0xf, 0xbd, 0xe,  /* LZCNT ECX, dword [ESI] */
		0xf3, 0xf, 0xbd, 0xf,  /* LZCNT ECX, dword [EDI] */
		0xf3, 0xf, 0xbd, 0x11,  /* LZCNT EDX, dword [ECX] */
		0xf3, 0xf, 0xbd, 0x12,  /* LZCNT EDX, dword [EDX] */
		0xf3, 0xf, 0xbd, 0x13,  /* LZCNT EDX, dword [EBX] */
		0xf3, 0xf, 0xbd, 0x14, 0x24,  /* LZCNT EDX, dword [ESP] */
		0xf3, 0xf, 0xbd, 0x55, 0x0,  /* LZCNT EDX, dword [EBP] */
		0xf3, 0xf, 0xbd, 0x16,  /* LZCNT EDX, dword [ESI] */
		0xf3, 0xf, 0xbd, 0x17,  /* LZCNT EDX, dword [EDI] */
		0xf3, 0xf, 0xbd, 0x19,  /* LZCNT EBX, dword [ECX] */
		0xf3, 0xf, 0xbd, 0x1a,  /* LZCNT EBX, dword [EDX] */
		0xf3, 0xf, 0xbd, 0x1b,  /* LZCNT EBX, dword [EBX] */
		0xf3, 0xf, 0xbd, 0x1c, 0x24,  /* LZCNT EBX, dword [ESP] */
		0xf3, 0xf, 0xbd, 0x5d, 0x0,  /* LZCNT EBX, dword [EBP] */
		0xf3, 0xf, 0xbd, 0x1e,  /* LZCNT EBX, dword [ESI] */
		0xf3, 0xf, 0xbd, 0x1f,  /* LZCNT EBX, dword [EDI] */
		0xf3, 0xf, 0xbd, 0x21,  /* LZCNT ESP, dword [ECX] */
		0xf3, 0xf, 0xbd, 0x22,  /* LZCNT ESP, dword [EDX] */
		0xf3, 0xf, 0xbd, 0x23,  /* LZCNT ESP, dword [EBX] */
		0xf3, 0xf, 0xbd, 0x24, 0x24,  /* LZCNT ESP, dword [ESP] */
		0xf3, 0xf, 0xbd, 0x65, 0x0,  /* LZCNT ESP, dword [EBP] */
		0xf3, 0xf, 0xbd, 0x26,  /* LZCNT ESP, dword [ESI] */
		0xf3, 0xf, 0xbd, 0x27,  /* LZCNT ESP, dword [EDI] */
		0xf3, 0xf, 0xbd, 0x29,  /* LZCNT EBP, dword [ECX] */
		0xf3, 0xf, 0xbd, 0x2a,  /* LZCNT EBP, dword [EDX] */
		0xf3, 0xf, 0xbd, 0x2b,  /* LZCNT EBP, dword [EBX] */
		0xf3, 0xf, 0xbd, 0x2c, 0x24,  /* LZCNT EBP, dword [ESP] */
		0xf3, 0xf, 0xbd, 0x6d, 0x0,  /* LZCNT EBP, dword [EBP] */
		0xf3, 0xf, 0xbd, 0x2e,  /* LZCNT EBP, dword [ESI] */
		0xf3, 0xf, 0xbd, 0x2f,  /* LZCNT EBP, dword [EDI] */
		0xf3, 0xf, 0xbd, 0x31,  /* LZCNT ESI, dword [ECX] */
		0xf3, 0xf, 0xbd, 0x32,  /* LZCNT ESI, dword [EDX] */
		0xf3, 0xf, 0xbd, 0x33,  /* LZCNT ESI, dword [EBX] */
		0xf3, 0xf, 0xbd, 0x34, 0x24,  /* LZCNT ESI, dword [ESP] */
		0xf3, 0xf, 0xbd, 0x75, 0x0,  /* LZCNT ESI, dword [EBP] */
		0xf3, 0xf, 0xbd, 0x36,  /* LZCNT ESI, dword [ESI] */
		0xf3, 0xf, 0xbd, 0x37,  /* LZCNT ESI, dword [EDI] */
		0xf3, 0xf, 0xbd, 0x39,  /* LZCNT EDI, dword [ECX] */
		0xf3, 0xf, 0xbd, 0x3a,  /* LZCNT EDI, dword [EDX] */
		0xf3, 0xf, 0xbd, 0x3b,  /* LZCNT EDI, dword [EBX] */
		0xf3, 0xf, 0xbd, 0x3c, 0x24,  /* LZCNT EDI, dword [ESP] */
		0xf3, 0xf, 0xbd, 0x7d, 0x0,  /* LZCNT EDI, dword [EBP] */
		0xf3, 0xf, 0xbd, 0x3e,  /* LZCNT EDI, dword [ESI] */
		0xf3, 0xf, 0xbd, 0x3f   /* LZCNT EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* LZCNT EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LZCNT EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOVBE_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x38 0xf0 
	const uint8_t pOps[0xf0] = {
		0xf, 0x38, 0xf0, 0x1,  /* MOVBE EAX, dword [ECX] */
		0xf, 0x38, 0xf0, 0x2,  /* MOVBE EAX, dword [EDX] */
		0xf, 0x38, 0xf0, 0x3,  /* MOVBE EAX, dword [EBX] */
		0xf, 0x38, 0xf0, 0x4, 0x24,  /* MOVBE EAX, dword [ESP] */
		0xf, 0x38, 0xf0, 0x45, 0x0,  /* MOVBE EAX, dword [EBP] */
		0xf, 0x38, 0xf0, 0x6,  /* MOVBE EAX, dword [ESI] */
		0xf, 0x38, 0xf0, 0x7,  /* MOVBE EAX, dword [EDI] */
		0xf, 0x38, 0xf0, 0x9,  /* MOVBE ECX, dword [ECX] */
		0xf, 0x38, 0xf0, 0xa,  /* MOVBE ECX, dword [EDX] */
		0xf, 0x38, 0xf0, 0xb,  /* MOVBE ECX, dword [EBX] */
		0xf, 0x38, 0xf0, 0xc, 0x24,  /* MOVBE ECX, dword [ESP] */
		0xf, 0x38, 0xf0, 0x4d, 0x0,  /* MOVBE ECX, dword [EBP] */
		0xf, 0x38, 0xf0, 0xe,  /* MOVBE ECX, dword [ESI] */
		0xf, 0x38, 0xf0, 0xf,  /* MOVBE ECX, dword [EDI] */
		0xf, 0x38, 0xf0, 0x11,  /* MOVBE EDX, dword [ECX] */
		0xf, 0x38, 0xf0, 0x12,  /* MOVBE EDX, dword [EDX] */
		0xf, 0x38, 0xf0, 0x13,  /* MOVBE EDX, dword [EBX] */
		0xf, 0x38, 0xf0, 0x14, 0x24,  /* MOVBE EDX, dword [ESP] */
		0xf, 0x38, 0xf0, 0x55, 0x0,  /* MOVBE EDX, dword [EBP] */
		0xf, 0x38, 0xf0, 0x16,  /* MOVBE EDX, dword [ESI] */
		0xf, 0x38, 0xf0, 0x17,  /* MOVBE EDX, dword [EDI] */
		0xf, 0x38, 0xf0, 0x19,  /* MOVBE EBX, dword [ECX] */
		0xf, 0x38, 0xf0, 0x1a,  /* MOVBE EBX, dword [EDX] */
		0xf, 0x38, 0xf0, 0x1b,  /* MOVBE EBX, dword [EBX] */
		0xf, 0x38, 0xf0, 0x1c, 0x24,  /* MOVBE EBX, dword [ESP] */
		0xf, 0x38, 0xf0, 0x5d, 0x0,  /* MOVBE EBX, dword [EBP] */
		0xf, 0x38, 0xf0, 0x1e,  /* MOVBE EBX, dword [ESI] */
		0xf, 0x38, 0xf0, 0x1f,  /* MOVBE EBX, dword [EDI] */
		0xf, 0x38, 0xf0, 0x21,  /* MOVBE ESP, dword [ECX] */
		0xf, 0x38, 0xf0, 0x22,  /* MOVBE ESP, dword [EDX] */
		0xf, 0x38, 0xf0, 0x23,  /* MOVBE ESP, dword [EBX] */
		0xf, 0x38, 0xf0, 0x24, 0x24,  /* MOVBE ESP, dword [ESP] */
		0xf, 0x38, 0xf0, 0x65, 0x0,  /* MOVBE ESP, dword [EBP] */
		0xf, 0x38, 0xf0, 0x26,  /* MOVBE ESP, dword [ESI] */
		0xf, 0x38, 0xf0, 0x27,  /* MOVBE ESP, dword [EDI] */
		0xf, 0x38, 0xf0, 0x29,  /* MOVBE EBP, dword [ECX] */
		0xf, 0x38, 0xf0, 0x2a,  /* MOVBE EBP, dword [EDX] */
		0xf, 0x38, 0xf0, 0x2b,  /* MOVBE EBP, dword [EBX] */
		0xf, 0x38, 0xf0, 0x2c, 0x24,  /* MOVBE EBP, dword [ESP] */
		0xf, 0x38, 0xf0, 0x6d, 0x0,  /* MOVBE EBP, dword [EBP] */
		0xf, 0x38, 0xf0, 0x2e,  /* MOVBE EBP, dword [ESI] */
		0xf, 0x38, 0xf0, 0x2f,  /* MOVBE EBP, dword [EDI] */
		0xf, 0x38, 0xf0, 0x31,  /* MOVBE ESI, dword [ECX] */
		0xf, 0x38, 0xf0, 0x32,  /* MOVBE ESI, dword [EDX] */
		0xf, 0x38, 0xf0, 0x33,  /* MOVBE ESI, dword [EBX] */
		0xf, 0x38, 0xf0, 0x34, 0x24,  /* MOVBE ESI, dword [ESP] */
		0xf, 0x38, 0xf0, 0x75, 0x0,  /* MOVBE ESI, dword [EBP] */
		0xf, 0x38, 0xf0, 0x36,  /* MOVBE ESI, dword [ESI] */
		0xf, 0x38, 0xf0, 0x37,  /* MOVBE ESI, dword [EDI] */
		0xf, 0x38, 0xf0, 0x39,  /* MOVBE EDI, dword [ECX] */
		0xf, 0x38, 0xf0, 0x3a,  /* MOVBE EDI, dword [EDX] */
		0xf, 0x38, 0xf0, 0x3b,  /* MOVBE EDI, dword [EBX] */
		0xf, 0x38, 0xf0, 0x3c, 0x24,  /* MOVBE EDI, dword [ESP] */
		0xf, 0x38, 0xf0, 0x7d, 0x0,  /* MOVBE EDI, dword [EBP] */
		0xf, 0x38, 0xf0, 0x3e,  /* MOVBE EDI, dword [ESI] */
		0xf, 0x38, 0xf0, 0x3f   /* MOVBE EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* MOVBE EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOVBE_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x38 0xf1 
	const uint8_t pOps[0xf0] = {
		0xf, 0x38, 0xf1, 0x1,  /* MOVBE dword [ECX], EAX */
		0xf, 0x38, 0xf1, 0x9,  /* MOVBE dword [ECX], ECX */
		0xf, 0x38, 0xf1, 0x11,  /* MOVBE dword [ECX], EDX */
		0xf, 0x38, 0xf1, 0x19,  /* MOVBE dword [ECX], EBX */
		0xf, 0x38, 0xf1, 0x21,  /* MOVBE dword [ECX], ESP */
		0xf, 0x38, 0xf1, 0x29,  /* MOVBE dword [ECX], EBP */
		0xf, 0x38, 0xf1, 0x31,  /* MOVBE dword [ECX], ESI */
		0xf, 0x38, 0xf1, 0x39,  /* MOVBE dword [ECX], EDI */
		0xf, 0x38, 0xf1, 0x2,  /* MOVBE dword [EDX], EAX */
		0xf, 0x38, 0xf1, 0xa,  /* MOVBE dword [EDX], ECX */
		0xf, 0x38, 0xf1, 0x12,  /* MOVBE dword [EDX], EDX */
		0xf, 0x38, 0xf1, 0x1a,  /* MOVBE dword [EDX], EBX */
		0xf, 0x38, 0xf1, 0x22,  /* MOVBE dword [EDX], ESP */
		0xf, 0x38, 0xf1, 0x2a,  /* MOVBE dword [EDX], EBP */
		0xf, 0x38, 0xf1, 0x32,  /* MOVBE dword [EDX], ESI */
		0xf, 0x38, 0xf1, 0x3a,  /* MOVBE dword [EDX], EDI */
		0xf, 0x38, 0xf1, 0x3,  /* MOVBE dword [EBX], EAX */
		0xf, 0x38, 0xf1, 0xb,  /* MOVBE dword [EBX], ECX */
		0xf, 0x38, 0xf1, 0x13,  /* MOVBE dword [EBX], EDX */
		0xf, 0x38, 0xf1, 0x1b,  /* MOVBE dword [EBX], EBX */
		0xf, 0x38, 0xf1, 0x23,  /* MOVBE dword [EBX], ESP */
		0xf, 0x38, 0xf1, 0x2b,  /* MOVBE dword [EBX], EBP */
		0xf, 0x38, 0xf1, 0x33,  /* MOVBE dword [EBX], ESI */
		0xf, 0x38, 0xf1, 0x3b,  /* MOVBE dword [EBX], EDI */
		0xf, 0x38, 0xf1, 0x4, 0x24,  /* MOVBE dword [ESP], EAX */
		0xf, 0x38, 0xf1, 0xc, 0x24,  /* MOVBE dword [ESP], ECX */
		0xf, 0x38, 0xf1, 0x14, 0x24,  /* MOVBE dword [ESP], EDX */
		0xf, 0x38, 0xf1, 0x1c, 0x24,  /* MOVBE dword [ESP], EBX */
		0xf, 0x38, 0xf1, 0x24, 0x24,  /* MOVBE dword [ESP], ESP */
		0xf, 0x38, 0xf1, 0x2c, 0x24,  /* MOVBE dword [ESP], EBP */
		0xf, 0x38, 0xf1, 0x34, 0x24,  /* MOVBE dword [ESP], ESI */
		0xf, 0x38, 0xf1, 0x3c, 0x24,  /* MOVBE dword [ESP], EDI */
		0xf, 0x38, 0xf1, 0x45, 0x0,  /* MOVBE dword [EBP], EAX */
		0xf, 0x38, 0xf1, 0x4d, 0x0,  /* MOVBE dword [EBP], ECX */
		0xf, 0x38, 0xf1, 0x55, 0x0,  /* MOVBE dword [EBP], EDX */
		0xf, 0x38, 0xf1, 0x5d, 0x0,  /* MOVBE dword [EBP], EBX */
		0xf, 0x38, 0xf1, 0x65, 0x0,  /* MOVBE dword [EBP], ESP */
		0xf, 0x38, 0xf1, 0x6d, 0x0,  /* MOVBE dword [EBP], EBP */
		0xf, 0x38, 0xf1, 0x75, 0x0,  /* MOVBE dword [EBP], ESI */
		0xf, 0x38, 0xf1, 0x7d, 0x0,  /* MOVBE dword [EBP], EDI */
		0xf, 0x38, 0xf1, 0x6,  /* MOVBE dword [ESI], EAX */
		0xf, 0x38, 0xf1, 0xe,  /* MOVBE dword [ESI], ECX */
		0xf, 0x38, 0xf1, 0x16,  /* MOVBE dword [ESI], EDX */
		0xf, 0x38, 0xf1, 0x1e,  /* MOVBE dword [ESI], EBX */
		0xf, 0x38, 0xf1, 0x26,  /* MOVBE dword [ESI], ESP */
		0xf, 0x38, 0xf1, 0x2e,  /* MOVBE dword [ESI], EBP */
		0xf, 0x38, 0xf1, 0x36,  /* MOVBE dword [ESI], ESI */
		0xf, 0x38, 0xf1, 0x3e,  /* MOVBE dword [ESI], EDI */
		0xf, 0x38, 0xf1, 0x7,  /* MOVBE dword [EDI], EAX */
		0xf, 0x38, 0xf1, 0xf,  /* MOVBE dword [EDI], ECX */
		0xf, 0x38, 0xf1, 0x17,  /* MOVBE dword [EDI], EDX */
		0xf, 0x38, 0xf1, 0x1f,  /* MOVBE dword [EDI], EBX */
		0xf, 0x38, 0xf1, 0x27,  /* MOVBE dword [EDI], ESP */
		0xf, 0x38, 0xf1, 0x2f,  /* MOVBE dword [EDI], EBP */
		0xf, 0x38, 0xf1, 0x37,  /* MOVBE dword [EDI], ESI */
		0xf, 0x38, 0xf1, 0x3f   /* MOVBE dword [EDI], EDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xf0, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* MOVBE dword [ECX], EAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ECX], ECX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ECX], EDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ECX], EBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ECX], ESP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ECX], EBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ECX], ESI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ECX], EDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDX], EAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDX], ECX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDX], EDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDX], EBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDX], ESP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDX], EBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDX], ESI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDX], EDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBX], EAX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBX], ECX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBX], EDX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBX], EBX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBX], ESP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBX], EBP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBX], ESI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBX], EDI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESP], EAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESP], ECX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESP], EDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESP], EBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESP], ESP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESP], EBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESP], ESI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESP], EDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBP], EAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBP], ECX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBP], EDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBP], EBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBP], ESP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBP], EBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBP], ESI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EBP], EDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESI], EAX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESI], ECX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESI], EDX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESI], EBX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESI], ESP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESI], EBP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESI], ESI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [ESI], EDI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDI], EAX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDI], ECX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDI], EDX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDI], EBX */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDI], ESP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDI], EBP */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDI], ESI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE dword [EDI], EDI */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, XGETBV)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x1 0xd0 
	const uint8_t pOps[0x3] = {
		0xf, 0x1, 0xd0   /* XGETBV */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* XGETBV */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XGETBV,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, XSETBV)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x1 0xd1 
	const uint8_t pOps[0x3] = {
		0xf, 0x1, 0xd1   /* XSETBV */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* XSETBV */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XSETBV,
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

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, GETSEC)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x37 
	const uint8_t pOps[0x2] = {
		0xf, 0x37   /* GETSEC */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* GETSEC */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::GETSEC,
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


TEST(x86_FPU, FADD_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0x6   /* FADD dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FADD dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FADD,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FMUL_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xe   /* FMUL dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FMUL dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FMUL,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FCOM_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0x16   /* FCOM dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCOM dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOM,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FCOMP_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0x1e   /* FCOMP dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCOMP dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOMP,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUB_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0x26   /* FSUB dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUB dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSUB,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUBR_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0x2e   /* FSUBR dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUBR dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FSUBR,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIV_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0x36   /* FDIV dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIV dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDIV,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIVR_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0x3e   /* FDIVR dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIVR dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FDIVR,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FADD_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xc2   /* FADD st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FADD st0, st2 */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FMUL_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xca   /* FMUL st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FMUL st0, st2 */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FCOM_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xd3   /* FCOM st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCOM st3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOM,
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


TEST(x86_FPU, FCOMP_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xdb   /* FCOMP st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCOMP st3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOMP,
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


TEST(x86_FPU, FCOMP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xd9   /* db 0xd8
 db 0xd9 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* db 0xd8
 db 0xd9 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCOMP,
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


TEST(x86_FPU, FSUB_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xe2   /* FSUB st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUB st0, st2 */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSUBR_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xea   /* FSUBR st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSUBR st0, st2 */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIV_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xf2   /* FDIV st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIV st0, st2 */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FDIVR_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xfa   /* FDIVR st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FDIVR st0, st2 */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ST0, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ST2, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5e)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FLD_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0x6   /* FLD dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLD dword [esi] */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FST_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0x16   /* FST dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FST dword [esi] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FST,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FSTP_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0x1e   /* FSTP dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FSTP dword [esi] */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FLDENV_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x7] = {
		0xd9, 0x24, 0x95, 0x0, 0x0, 0x0, 0x0   /* FLDENV [edx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLDENV [edx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLDENV,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FLDCW_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0x2b   /* FLDCW word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLDCW word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLDCW,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FNSTENV_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x7] = {
		0xd9, 0x34, 0x95, 0x0, 0x0, 0x0, 0x0   /* FNSTENV [edx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FNSTENV [edx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNSTENV,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FNSTCW_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0x3b   /* FNSTCW word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FNSTCW word [ebx] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNSTCW,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_FPU, FLD_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xc3   /* FLD st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLD st3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLD,
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


TEST(x86_FPU, FXCH_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xcb   /* FXCH st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FXCH st3 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FXCH,
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


TEST(x86_FPU, FXCH)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xc9   /* FXCH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FXCH */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FXCH,
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


TEST(x86_FPU, FNOP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xd0   /* FNOP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FNOP */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNOP,
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


TEST(x86_FPU, FCHS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe0   /* FCHS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FCHS */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FCHS,
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


TEST(x86_FPU, FABS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe1   /* FABS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FABS */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FABS,
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


TEST(x86_FPU, FTST)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe4   /* FTST */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FTST */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FTST,
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


TEST(x86_FPU, FXAM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe5   /* FXAM */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FXAM */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FXAM,
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


TEST(x86_FPU, FLD1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe8   /* FLD1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLD1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLD1,
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


TEST(x86_FPU, FLDL2T)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe9   /* FLDL2T */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLDL2T */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLDL2T,
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


TEST(x86_FPU, FLDL2E)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xea   /* FLDL2E */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLDL2E */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLDL2E,
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


TEST(x86_FPU, FLDPI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xeb   /* FLDPI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLDPI */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLDPI,
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


TEST(x86_FPU, FLDLG2)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xec   /* FLDLG2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLDLG2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLDLG2,
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


TEST(x86_FPU, FLDLN2)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xed   /* FLDLN2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLDLN2 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLDLN2,
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


TEST(x86_FPU, FLDZ)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xee   /* FLDZ */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLDZ */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLDZ,
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


TEST(x86_FPU, F2XM1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf0   /* F2XM1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* F2XM1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::F2XM1,
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


TEST(x86_FPU, FYL2X)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf1   /* FYL2X */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FYL2X */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FYL2X,
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


TEST(x86_FPU, FPTAN)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf2   /* FPTAN */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FPTAN */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FPTAN,
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


TEST(x86_FPU, FPATAN)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf3   /* FPATAN */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FPATAN */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FPATAN,
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

