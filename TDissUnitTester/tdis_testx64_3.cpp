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
			
TEST(x64, JMP_O_REL_CI_FULL_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xe9 
	const uint8_t pOps[0x5] = {
		0xe9, 0x78, 0x56, 0x34, 0x12   /* JMP 0x12345678+0x5 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_UNC_BRANCH;

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


TEST(x64, JMP_O_REL_CI_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xeb 
	const uint8_t pOps[0x2] = {
		0xeb, 0xfe   /* @label: jmp @label */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_UNC_BRANCH);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64, JMP_O_REL_CI_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xeb 
	const uint8_t pOps[0x2] = {
		0xeb, 0xfe   /* @label: jmp @label */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_UNC_BRANCH;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64, IN_O_ACC_8_REG_DX)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xec 
	const uint8_t pOps[0x1] = {
		0xec   /* IN AL, DX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, IN_O_ACC_FULL_NOT64_REG_DX)
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

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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


TEST(x64, OUT_O_REG_DX_ACC_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xee 
	const uint8_t pOps[0x1] = {
		0xee   /* OUT DX, AL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, OUT_O_REG_DX_ACC_FULL_NOT64)
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

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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


TEST(x64, INT1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf1 
	const uint8_t pOps[0x1] = {
		0xf1   /* db 0xf1 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_INT);

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, INT1_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf1 
	const uint8_t pOps[0x1] = {
		0xf1   /* db 0xf1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_INT;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, HLT)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf4 
	const uint8_t pOps[0x1] = {
		0xf4   /* HLT */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, CMC)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf5 
	const uint8_t pOps[0x1] = {
		0xf5   /* CMC */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, TEST_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0x9] = {
		0xf6, 0xc1, 0xaf,  /* TEST CL, 0xaf */
		0xf6, 0xc2, 0xaf,  /* TEST DL, 0xaf */
		0xf6, 0xc3, 0xaf   /* TEST BL, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
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
}


TEST(x64, NOT_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0x6] = {
		0xf6, 0xd1,  /* NOT CL */
		0xf6, 0xd2,  /* NOT DL */
		0xf6, 0xd3   /* NOT BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
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
}


TEST(x64, NEG_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0x6] = {
		0xf6, 0xd9,  /* NEG CL */
		0xf6, 0xda,  /* NEG DL */
		0xf6, 0xdb   /* NEG BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
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
}


TEST(x64, MUL_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0x6] = {
		0xf6, 0xe1,  /* MUL CL */
		0xf6, 0xe2,  /* MUL DL */
		0xf6, 0xe3   /* MUL BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
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
}


TEST(x64, IMUL_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0x6] = {
		0xf6, 0xe9,  /* IMUL CL */
		0xf6, 0xea,  /* IMUL DL */
		0xf6, 0xeb   /* IMUL BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
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
}


TEST(x64, DIV_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0x6] = {
		0xf6, 0xf1,  /* DIV CL */
		0xf6, 0xf2,  /* DIV DL */
		0xf6, 0xf3   /* DIV BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
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
}


TEST(x64, IDIV_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf6 
	const uint8_t pOps[0x6] = {
		0xf6, 0xf9,  /* IDIV CL */
		0xf6, 0xfa,  /* IDIV DL */
		0xf6, 0xfb   /* IDIV BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
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
}


TEST(x64, TEST_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x33] = {
		0x48, 0xf7, 0x1, 0xbb, 0xee, 0xaf, 0xab,  /* TEST qword [RCX], 0xabafeebb */
		0x48, 0xf7, 0x2, 0xbb, 0xee, 0xaf, 0xab,  /* TEST qword [RDX], 0xabafeebb */
		0x48, 0xf7, 0x3, 0xbb, 0xee, 0xaf, 0xab,  /* TEST qword [RBX], 0xabafeebb */
		0x48, 0xf7, 0x4, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* TEST qword [RSP], 0xabafeebb */
		0x48, 0xf7, 0x45, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* TEST qword [RBP], 0xabafeebb */
		0x48, 0xf7, 0x6, 0xbb, 0xee, 0xaf, 0xab,  /* TEST qword [RSI], 0xabafeebb */
		0x48, 0xf7, 0x7, 0xbb, 0xee, 0xaf, 0xab   /* TEST qword [RDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x33, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* TEST qword [RCX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::TEST,
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
		/* TEST qword [RDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::TEST,
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
		/* TEST qword [RBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::TEST,
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
		/* TEST qword [RSP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::TEST,
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
		/* TEST qword [RBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::TEST,
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
		/* TEST qword [RSI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::TEST,
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
		/* TEST qword [RDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::TEST,
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


TEST(x64, NOT_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x17] = {
		0x48, 0xf7, 0x11,  /* NOT qword [RCX] */
		0x48, 0xf7, 0x12,  /* NOT qword [RDX] */
		0x48, 0xf7, 0x13,  /* NOT qword [RBX] */
		0x48, 0xf7, 0x14, 0x24,  /* NOT qword [RSP] */
		0x48, 0xf7, 0x55, 0x0,  /* NOT qword [RBP] */
		0x48, 0xf7, 0x16,  /* NOT qword [RSI] */
		0x48, 0xf7, 0x17   /* NOT qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* NOT qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NOT qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::NOT,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, NEG_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x17] = {
		0x48, 0xf7, 0x19,  /* NEG qword [RCX] */
		0x48, 0xf7, 0x1a,  /* NEG qword [RDX] */
		0x48, 0xf7, 0x1b,  /* NEG qword [RBX] */
		0x48, 0xf7, 0x1c, 0x24,  /* NEG qword [RSP] */
		0x48, 0xf7, 0x5d, 0x0,  /* NEG qword [RBP] */
		0x48, 0xf7, 0x1e,  /* NEG qword [RSI] */
		0x48, 0xf7, 0x1f   /* NEG qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* NEG qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* NEG qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::NEG,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MUL_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x17] = {
		0x48, 0xf7, 0x21,  /* MUL qword [RCX] */
		0x48, 0xf7, 0x22,  /* MUL qword [RDX] */
		0x48, 0xf7, 0x23,  /* MUL qword [RBX] */
		0x48, 0xf7, 0x24, 0x24,  /* MUL qword [RSP] */
		0x48, 0xf7, 0x65, 0x0,  /* MUL qword [RBP] */
		0x48, 0xf7, 0x26,  /* MUL qword [RSI] */
		0x48, 0xf7, 0x27   /* MUL qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* MUL qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MUL qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, IMUL_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x17] = {
		0x48, 0xf7, 0x29,  /* IMUL qword [RCX] */
		0x48, 0xf7, 0x2a,  /* IMUL qword [RDX] */
		0x48, 0xf7, 0x2b,  /* IMUL qword [RBX] */
		0x48, 0xf7, 0x2c, 0x24,  /* IMUL qword [RSP] */
		0x48, 0xf7, 0x6d, 0x0,  /* IMUL qword [RBP] */
		0x48, 0xf7, 0x2e,  /* IMUL qword [RSI] */
		0x48, 0xf7, 0x2f   /* IMUL qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* IMUL qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IMUL qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::IMUL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, DIV_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x17] = {
		0x48, 0xf7, 0x31,  /* DIV qword [RCX] */
		0x48, 0xf7, 0x32,  /* DIV qword [RDX] */
		0x48, 0xf7, 0x33,  /* DIV qword [RBX] */
		0x48, 0xf7, 0x34, 0x24,  /* DIV qword [RSP] */
		0x48, 0xf7, 0x75, 0x0,  /* DIV qword [RBP] */
		0x48, 0xf7, 0x36,  /* DIV qword [RSI] */
		0x48, 0xf7, 0x37   /* DIV qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* DIV qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIV qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::DIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, IDIV_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf7 
	const uint8_t pOps[0x17] = {
		0x48, 0xf7, 0x39,  /* IDIV qword [RCX] */
		0x48, 0xf7, 0x3a,  /* IDIV qword [RDX] */
		0x48, 0xf7, 0x3b,  /* IDIV qword [RBX] */
		0x48, 0xf7, 0x3c, 0x24,  /* IDIV qword [RSP] */
		0x48, 0xf7, 0x7d, 0x0,  /* IDIV qword [RBP] */
		0x48, 0xf7, 0x3e,  /* IDIV qword [RSI] */
		0x48, 0xf7, 0x3f   /* IDIV qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* IDIV qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* IDIV qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::IDIV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CLC)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf8 
	const uint8_t pOps[0x1] = {
		0xf8   /* CLC */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, STC)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf9 
	const uint8_t pOps[0x1] = {
		0xf9   /* STC */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, CLI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfa 
	const uint8_t pOps[0x1] = {
		0xfa   /* CLI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, STI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfb 
	const uint8_t pOps[0x1] = {
		0xfb   /* STI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, CLD)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfc 
	const uint8_t pOps[0x1] = {
		0xfc   /* CLD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, STD)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfd 
	const uint8_t pOps[0x1] = {
		0xfd   /* STD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_64BIT);

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


TEST(x64, INC_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfe 
	const uint8_t pOps[0x6] = {
		0xfe, 0xc1,  /* INC CL */
		0xfe, 0xc2,  /* INC DL */
		0xfe, 0xc3   /* INC BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
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
}


TEST(x64, DEC_O_RM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xfe 
	const uint8_t pOps[0x6] = {
		0xfe, 0xc9,  /* DEC CL */
		0xfe, 0xca,  /* DEC DL */
		0xfe, 0xcb   /* DEC BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x6, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x3_sz, instructionCount);
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
}


TEST(x64, INC_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x17] = {
		0x48, 0xff, 0x1,  /* INC qword [RCX] */
		0x48, 0xff, 0x2,  /* INC qword [RDX] */
		0x48, 0xff, 0x3,  /* INC qword [RBX] */
		0x48, 0xff, 0x4, 0x24,  /* INC qword [RSP] */
		0x48, 0xff, 0x45, 0x0,  /* INC qword [RBP] */
		0x48, 0xff, 0x6,  /* INC qword [RSI] */
		0x48, 0xff, 0x7   /* INC qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* INC qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* INC qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::INC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, DEC_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x17] = {
		0x48, 0xff, 0x9,  /* DEC qword [RCX] */
		0x48, 0xff, 0xa,  /* DEC qword [RDX] */
		0x48, 0xff, 0xb,  /* DEC qword [RBX] */
		0x48, 0xff, 0xc, 0x24,  /* DEC qword [RSP] */
		0x48, 0xff, 0x4d, 0x0,  /* DEC qword [RBP] */
		0x48, 0xff, 0xe,  /* DEC qword [RSI] */
		0x48, 0xff, 0xf   /* DEC qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* DEC qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DEC qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::DEC,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CALL_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x11,  /* CALL qword [RCX] */
		0xff, 0x12,  /* CALL qword [RDX] */
		0xff, 0x13,  /* CALL qword [RBX] */
		0xff, 0x14, 0x24,  /* CALL qword [RSP] */
		0xff, 0x55, 0x0,  /* CALL qword [RBP] */
		0xff, 0x16,  /* CALL qword [RSI] */
		0xff, 0x17   /* CALL qword [RDI] */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CALL);

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* CALL qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
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
		/* CALL qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
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
		/* CALL qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
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
		/* CALL qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
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
		/* CALL qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
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
		/* CALL qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
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
		/* CALL qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
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


TEST(x64, CALL_O_RM_FULL_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x11,  /* CALL qword [RCX] */
		0xff, 0x12,  /* CALL qword [RDX] */
		0xff, 0x13,  /* CALL qword [RBX] */
		0xff, 0x14, 0x24,  /* CALL qword [RSP] */
		0xff, 0x55, 0x0,  /* CALL qword [RBP] */
		0xff, 0x16,  /* CALL qword [RSI] */
		0xff, 0x17   /* CALL qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CALL qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CALL,
			FlowControl::CALL,
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
}


TEST(x64, CALL_FAR_O_MEM_FULL_M16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x7] = {
		0xff, 0x1c, 0x25, 0x78, 0x56, 0x34, 0x12   /* CALL FAR [0x12345678] */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CALL);

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_64BIT);

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
			0x7,
			0x12345678,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::DISP, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, CALL_FAR_O_MEM_FULL_M16_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x7] = {
		0xff, 0x1c, 0x25, 0x78, 0x56, 0x34, 0x12   /* CALL FAR [0x12345678] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CALL;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_64BIT);

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
			0x7,
			0x12345678,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::DISP, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, JMP_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x21,  /* JMP qword [RCX] */
		0xff, 0x22,  /* JMP qword [RDX] */
		0xff, 0x23,  /* JMP qword [RBX] */
		0xff, 0x24, 0x24,  /* JMP qword [RSP] */
		0xff, 0x65, 0x0,  /* JMP qword [RBP] */
		0xff, 0x26,  /* JMP qword [RSI] */
		0xff, 0x27   /* JMP qword [RDI] */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_UNC_BRANCH);

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* JMP qword [RCX] */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* JMP qword [RDX] */
		const Instruction& inst = instructions[0x1];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* JMP qword [RBX] */
		const Instruction& inst = instructions[0x2];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* JMP qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
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
		/* JMP qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::JMP,
			FlowControl::UNC_BRANCH,
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
		/* JMP qword [RSI] */
		const Instruction& inst = instructions[0x5];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* JMP qword [RDI] */
		const Instruction& inst = instructions[0x6];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, JMP_O_RM_FULL_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x21,  /* JMP qword [RCX] */
		0xff, 0x22,  /* JMP qword [RDX] */
		0xff, 0x23,  /* JMP qword [RBX] */
		0xff, 0x24, 0x24,  /* JMP qword [RSP] */
		0xff, 0x65, 0x0,  /* JMP qword [RBP] */
		0xff, 0x26,  /* JMP qword [RSI] */
		0xff, 0x27   /* JMP qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_UNC_BRANCH;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* JMP qword [RCX] */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, JMP_FAR_O_MEM_FULL_M16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x7] = {
		0xff, 0x2c, 0x25, 0x78, 0x56, 0x34, 0x12   /* JMP FAR [0x12345678] */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_UNC_BRANCH);

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_64BIT);

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
			0x7,
			0x12345678,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::DISP, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, JMP_FAR_O_MEM_FULL_M16_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x7] = {
		0xff, 0x2c, 0x25, 0x78, 0x56, 0x34, 0x12   /* JMP FAR [0x12345678] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_UNC_BRANCH;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_64BIT);

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
			0x7,
			0x12345678,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::DISP, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, PUSH_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xff 
	const uint8_t pOps[0x10] = {
		0xff, 0x31,  /* PUSH qword [RCX] */
		0xff, 0x32,  /* PUSH qword [RDX] */
		0xff, 0x33,  /* PUSH qword [RBX] */
		0xff, 0x34, 0x24,  /* PUSH qword [RSP] */
		0xff, 0x75, 0x0,  /* PUSH qword [RBP] */
		0xff, 0x36,  /* PUSH qword [RSI] */
		0xff, 0x37   /* PUSH qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* PUSH qword [RCX] */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH qword [RDX] */
		const Instruction& inst = instructions[0x1];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH qword [RBX] */
		const Instruction& inst = instructions[0x2];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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
		/* PUSH qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::PUSH,
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
		/* PUSH qword [RSI] */
		const Instruction& inst = instructions[0x5];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PUSH qword [RDI] */
		const Instruction& inst = instructions[0x6];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, LZCNT_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0xbd 
	const uint8_t pOps[0x128] = {
		0xf3, 0x48, 0xf, 0xbd, 0x1,  /* LZCNT RAX, qword [RCX] */
		0xf3, 0x48, 0xf, 0xbd, 0x2,  /* LZCNT RAX, qword [RDX] */
		0xf3, 0x48, 0xf, 0xbd, 0x3,  /* LZCNT RAX, qword [RBX] */
		0xf3, 0x48, 0xf, 0xbd, 0x4, 0x24,  /* LZCNT RAX, qword [RSP] */
		0xf3, 0x48, 0xf, 0xbd, 0x45, 0x0,  /* LZCNT RAX, qword [RBP] */
		0xf3, 0x48, 0xf, 0xbd, 0x6,  /* LZCNT RAX, qword [RSI] */
		0xf3, 0x48, 0xf, 0xbd, 0x7,  /* LZCNT RAX, qword [RDI] */
		0xf3, 0x48, 0xf, 0xbd, 0x9,  /* LZCNT RCX, qword [RCX] */
		0xf3, 0x48, 0xf, 0xbd, 0xa,  /* LZCNT RCX, qword [RDX] */
		0xf3, 0x48, 0xf, 0xbd, 0xb,  /* LZCNT RCX, qword [RBX] */
		0xf3, 0x48, 0xf, 0xbd, 0xc, 0x24,  /* LZCNT RCX, qword [RSP] */
		0xf3, 0x48, 0xf, 0xbd, 0x4d, 0x0,  /* LZCNT RCX, qword [RBP] */
		0xf3, 0x48, 0xf, 0xbd, 0xe,  /* LZCNT RCX, qword [RSI] */
		0xf3, 0x48, 0xf, 0xbd, 0xf,  /* LZCNT RCX, qword [RDI] */
		0xf3, 0x48, 0xf, 0xbd, 0x11,  /* LZCNT RDX, qword [RCX] */
		0xf3, 0x48, 0xf, 0xbd, 0x12,  /* LZCNT RDX, qword [RDX] */
		0xf3, 0x48, 0xf, 0xbd, 0x13,  /* LZCNT RDX, qword [RBX] */
		0xf3, 0x48, 0xf, 0xbd, 0x14, 0x24,  /* LZCNT RDX, qword [RSP] */
		0xf3, 0x48, 0xf, 0xbd, 0x55, 0x0,  /* LZCNT RDX, qword [RBP] */
		0xf3, 0x48, 0xf, 0xbd, 0x16,  /* LZCNT RDX, qword [RSI] */
		0xf3, 0x48, 0xf, 0xbd, 0x17,  /* LZCNT RDX, qword [RDI] */
		0xf3, 0x48, 0xf, 0xbd, 0x19,  /* LZCNT RBX, qword [RCX] */
		0xf3, 0x48, 0xf, 0xbd, 0x1a,  /* LZCNT RBX, qword [RDX] */
		0xf3, 0x48, 0xf, 0xbd, 0x1b,  /* LZCNT RBX, qword [RBX] */
		0xf3, 0x48, 0xf, 0xbd, 0x1c, 0x24,  /* LZCNT RBX, qword [RSP] */
		0xf3, 0x48, 0xf, 0xbd, 0x5d, 0x0,  /* LZCNT RBX, qword [RBP] */
		0xf3, 0x48, 0xf, 0xbd, 0x1e,  /* LZCNT RBX, qword [RSI] */
		0xf3, 0x48, 0xf, 0xbd, 0x1f,  /* LZCNT RBX, qword [RDI] */
		0xf3, 0x48, 0xf, 0xbd, 0x21,  /* LZCNT RSP, qword [RCX] */
		0xf3, 0x48, 0xf, 0xbd, 0x22,  /* LZCNT RSP, qword [RDX] */
		0xf3, 0x48, 0xf, 0xbd, 0x23,  /* LZCNT RSP, qword [RBX] */
		0xf3, 0x48, 0xf, 0xbd, 0x24, 0x24,  /* LZCNT RSP, qword [RSP] */
		0xf3, 0x48, 0xf, 0xbd, 0x65, 0x0,  /* LZCNT RSP, qword [RBP] */
		0xf3, 0x48, 0xf, 0xbd, 0x26,  /* LZCNT RSP, qword [RSI] */
		0xf3, 0x48, 0xf, 0xbd, 0x27,  /* LZCNT RSP, qword [RDI] */
		0xf3, 0x48, 0xf, 0xbd, 0x29,  /* LZCNT RBP, qword [RCX] */
		0xf3, 0x48, 0xf, 0xbd, 0x2a,  /* LZCNT RBP, qword [RDX] */
		0xf3, 0x48, 0xf, 0xbd, 0x2b,  /* LZCNT RBP, qword [RBX] */
		0xf3, 0x48, 0xf, 0xbd, 0x2c, 0x24,  /* LZCNT RBP, qword [RSP] */
		0xf3, 0x48, 0xf, 0xbd, 0x6d, 0x0,  /* LZCNT RBP, qword [RBP] */
		0xf3, 0x48, 0xf, 0xbd, 0x2e,  /* LZCNT RBP, qword [RSI] */
		0xf3, 0x48, 0xf, 0xbd, 0x2f,  /* LZCNT RBP, qword [RDI] */
		0xf3, 0x48, 0xf, 0xbd, 0x31,  /* LZCNT RSI, qword [RCX] */
		0xf3, 0x48, 0xf, 0xbd, 0x32,  /* LZCNT RSI, qword [RDX] */
		0xf3, 0x48, 0xf, 0xbd, 0x33,  /* LZCNT RSI, qword [RBX] */
		0xf3, 0x48, 0xf, 0xbd, 0x34, 0x24,  /* LZCNT RSI, qword [RSP] */
		0xf3, 0x48, 0xf, 0xbd, 0x75, 0x0,  /* LZCNT RSI, qword [RBP] */
		0xf3, 0x48, 0xf, 0xbd, 0x36,  /* LZCNT RSI, qword [RSI] */
		0xf3, 0x48, 0xf, 0xbd, 0x37,  /* LZCNT RSI, qword [RDI] */
		0xf3, 0x48, 0xf, 0xbd, 0x39,  /* LZCNT RDI, qword [RCX] */
		0xf3, 0x48, 0xf, 0xbd, 0x3a,  /* LZCNT RDI, qword [RDX] */
		0xf3, 0x48, 0xf, 0xbd, 0x3b,  /* LZCNT RDI, qword [RBX] */
		0xf3, 0x48, 0xf, 0xbd, 0x3c, 0x24,  /* LZCNT RDI, qword [RSP] */
		0xf3, 0x48, 0xf, 0xbd, 0x7d, 0x0,  /* LZCNT RDI, qword [RBP] */
		0xf3, 0x48, 0xf, 0xbd, 0x3e,  /* LZCNT RDI, qword [RSI] */
		0xf3, 0x48, 0xf, 0xbd, 0x3f   /* LZCNT RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x128, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* LZCNT RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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
		/* LZCNT RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::LZCNT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x41,
			0x0,
			0x894,
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


TEST(x64, MOVBE_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x38 0xf0 
	const uint8_t pOps[0x128] = {
		0x48, 0xf, 0x38, 0xf0, 0x1,  /* MOVBE RAX, qword [RCX] */
		0x48, 0xf, 0x38, 0xf0, 0x2,  /* MOVBE RAX, qword [RDX] */
		0x48, 0xf, 0x38, 0xf0, 0x3,  /* MOVBE RAX, qword [RBX] */
		0x48, 0xf, 0x38, 0xf0, 0x4, 0x24,  /* MOVBE RAX, qword [RSP] */
		0x48, 0xf, 0x38, 0xf0, 0x45, 0x0,  /* MOVBE RAX, qword [RBP] */
		0x48, 0xf, 0x38, 0xf0, 0x6,  /* MOVBE RAX, qword [RSI] */
		0x48, 0xf, 0x38, 0xf0, 0x7,  /* MOVBE RAX, qword [RDI] */
		0x48, 0xf, 0x38, 0xf0, 0x9,  /* MOVBE RCX, qword [RCX] */
		0x48, 0xf, 0x38, 0xf0, 0xa,  /* MOVBE RCX, qword [RDX] */
		0x48, 0xf, 0x38, 0xf0, 0xb,  /* MOVBE RCX, qword [RBX] */
		0x48, 0xf, 0x38, 0xf0, 0xc, 0x24,  /* MOVBE RCX, qword [RSP] */
		0x48, 0xf, 0x38, 0xf0, 0x4d, 0x0,  /* MOVBE RCX, qword [RBP] */
		0x48, 0xf, 0x38, 0xf0, 0xe,  /* MOVBE RCX, qword [RSI] */
		0x48, 0xf, 0x38, 0xf0, 0xf,  /* MOVBE RCX, qword [RDI] */
		0x48, 0xf, 0x38, 0xf0, 0x11,  /* MOVBE RDX, qword [RCX] */
		0x48, 0xf, 0x38, 0xf0, 0x12,  /* MOVBE RDX, qword [RDX] */
		0x48, 0xf, 0x38, 0xf0, 0x13,  /* MOVBE RDX, qword [RBX] */
		0x48, 0xf, 0x38, 0xf0, 0x14, 0x24,  /* MOVBE RDX, qword [RSP] */
		0x48, 0xf, 0x38, 0xf0, 0x55, 0x0,  /* MOVBE RDX, qword [RBP] */
		0x48, 0xf, 0x38, 0xf0, 0x16,  /* MOVBE RDX, qword [RSI] */
		0x48, 0xf, 0x38, 0xf0, 0x17,  /* MOVBE RDX, qword [RDI] */
		0x48, 0xf, 0x38, 0xf0, 0x19,  /* MOVBE RBX, qword [RCX] */
		0x48, 0xf, 0x38, 0xf0, 0x1a,  /* MOVBE RBX, qword [RDX] */
		0x48, 0xf, 0x38, 0xf0, 0x1b,  /* MOVBE RBX, qword [RBX] */
		0x48, 0xf, 0x38, 0xf0, 0x1c, 0x24,  /* MOVBE RBX, qword [RSP] */
		0x48, 0xf, 0x38, 0xf0, 0x5d, 0x0,  /* MOVBE RBX, qword [RBP] */
		0x48, 0xf, 0x38, 0xf0, 0x1e,  /* MOVBE RBX, qword [RSI] */
		0x48, 0xf, 0x38, 0xf0, 0x1f,  /* MOVBE RBX, qword [RDI] */
		0x48, 0xf, 0x38, 0xf0, 0x21,  /* MOVBE RSP, qword [RCX] */
		0x48, 0xf, 0x38, 0xf0, 0x22,  /* MOVBE RSP, qword [RDX] */
		0x48, 0xf, 0x38, 0xf0, 0x23,  /* MOVBE RSP, qword [RBX] */
		0x48, 0xf, 0x38, 0xf0, 0x24, 0x24,  /* MOVBE RSP, qword [RSP] */
		0x48, 0xf, 0x38, 0xf0, 0x65, 0x0,  /* MOVBE RSP, qword [RBP] */
		0x48, 0xf, 0x38, 0xf0, 0x26,  /* MOVBE RSP, qword [RSI] */
		0x48, 0xf, 0x38, 0xf0, 0x27,  /* MOVBE RSP, qword [RDI] */
		0x48, 0xf, 0x38, 0xf0, 0x29,  /* MOVBE RBP, qword [RCX] */
		0x48, 0xf, 0x38, 0xf0, 0x2a,  /* MOVBE RBP, qword [RDX] */
		0x48, 0xf, 0x38, 0xf0, 0x2b,  /* MOVBE RBP, qword [RBX] */
		0x48, 0xf, 0x38, 0xf0, 0x2c, 0x24,  /* MOVBE RBP, qword [RSP] */
		0x48, 0xf, 0x38, 0xf0, 0x6d, 0x0,  /* MOVBE RBP, qword [RBP] */
		0x48, 0xf, 0x38, 0xf0, 0x2e,  /* MOVBE RBP, qword [RSI] */
		0x48, 0xf, 0x38, 0xf0, 0x2f,  /* MOVBE RBP, qword [RDI] */
		0x48, 0xf, 0x38, 0xf0, 0x31,  /* MOVBE RSI, qword [RCX] */
		0x48, 0xf, 0x38, 0xf0, 0x32,  /* MOVBE RSI, qword [RDX] */
		0x48, 0xf, 0x38, 0xf0, 0x33,  /* MOVBE RSI, qword [RBX] */
		0x48, 0xf, 0x38, 0xf0, 0x34, 0x24,  /* MOVBE RSI, qword [RSP] */
		0x48, 0xf, 0x38, 0xf0, 0x75, 0x0,  /* MOVBE RSI, qword [RBP] */
		0x48, 0xf, 0x38, 0xf0, 0x36,  /* MOVBE RSI, qword [RSI] */
		0x48, 0xf, 0x38, 0xf0, 0x37,  /* MOVBE RSI, qword [RDI] */
		0x48, 0xf, 0x38, 0xf0, 0x39,  /* MOVBE RDI, qword [RCX] */
		0x48, 0xf, 0x38, 0xf0, 0x3a,  /* MOVBE RDI, qword [RDX] */
		0x48, 0xf, 0x38, 0xf0, 0x3b,  /* MOVBE RDI, qword [RBX] */
		0x48, 0xf, 0x38, 0xf0, 0x3c, 0x24,  /* MOVBE RDI, qword [RSP] */
		0x48, 0xf, 0x38, 0xf0, 0x7d, 0x0,  /* MOVBE RDI, qword [RBP] */
		0x48, 0xf, 0x38, 0xf0, 0x3e,  /* MOVBE RDI, qword [RSI] */
		0x48, 0xf, 0x38, 0xf0, 0x3f   /* MOVBE RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x128, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* MOVBE RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		/* MOVBE RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, MOVBE_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0x38 0xf1 
	const uint8_t pOps[0x128] = {
		0x48, 0xf, 0x38, 0xf1, 0x1,  /* MOVBE qword [RCX], RAX */
		0x48, 0xf, 0x38, 0xf1, 0x9,  /* MOVBE qword [RCX], RCX */
		0x48, 0xf, 0x38, 0xf1, 0x11,  /* MOVBE qword [RCX], RDX */
		0x48, 0xf, 0x38, 0xf1, 0x19,  /* MOVBE qword [RCX], RBX */
		0x48, 0xf, 0x38, 0xf1, 0x21,  /* MOVBE qword [RCX], RSP */
		0x48, 0xf, 0x38, 0xf1, 0x29,  /* MOVBE qword [RCX], RBP */
		0x48, 0xf, 0x38, 0xf1, 0x31,  /* MOVBE qword [RCX], RSI */
		0x48, 0xf, 0x38, 0xf1, 0x39,  /* MOVBE qword [RCX], RDI */
		0x48, 0xf, 0x38, 0xf1, 0x2,  /* MOVBE qword [RDX], RAX */
		0x48, 0xf, 0x38, 0xf1, 0xa,  /* MOVBE qword [RDX], RCX */
		0x48, 0xf, 0x38, 0xf1, 0x12,  /* MOVBE qword [RDX], RDX */
		0x48, 0xf, 0x38, 0xf1, 0x1a,  /* MOVBE qword [RDX], RBX */
		0x48, 0xf, 0x38, 0xf1, 0x22,  /* MOVBE qword [RDX], RSP */
		0x48, 0xf, 0x38, 0xf1, 0x2a,  /* MOVBE qword [RDX], RBP */
		0x48, 0xf, 0x38, 0xf1, 0x32,  /* MOVBE qword [RDX], RSI */
		0x48, 0xf, 0x38, 0xf1, 0x3a,  /* MOVBE qword [RDX], RDI */
		0x48, 0xf, 0x38, 0xf1, 0x3,  /* MOVBE qword [RBX], RAX */
		0x48, 0xf, 0x38, 0xf1, 0xb,  /* MOVBE qword [RBX], RCX */
		0x48, 0xf, 0x38, 0xf1, 0x13,  /* MOVBE qword [RBX], RDX */
		0x48, 0xf, 0x38, 0xf1, 0x1b,  /* MOVBE qword [RBX], RBX */
		0x48, 0xf, 0x38, 0xf1, 0x23,  /* MOVBE qword [RBX], RSP */
		0x48, 0xf, 0x38, 0xf1, 0x2b,  /* MOVBE qword [RBX], RBP */
		0x48, 0xf, 0x38, 0xf1, 0x33,  /* MOVBE qword [RBX], RSI */
		0x48, 0xf, 0x38, 0xf1, 0x3b,  /* MOVBE qword [RBX], RDI */
		0x48, 0xf, 0x38, 0xf1, 0x4, 0x24,  /* MOVBE qword [RSP], RAX */
		0x48, 0xf, 0x38, 0xf1, 0xc, 0x24,  /* MOVBE qword [RSP], RCX */
		0x48, 0xf, 0x38, 0xf1, 0x14, 0x24,  /* MOVBE qword [RSP], RDX */
		0x48, 0xf, 0x38, 0xf1, 0x1c, 0x24,  /* MOVBE qword [RSP], RBX */
		0x48, 0xf, 0x38, 0xf1, 0x24, 0x24,  /* MOVBE qword [RSP], RSP */
		0x48, 0xf, 0x38, 0xf1, 0x2c, 0x24,  /* MOVBE qword [RSP], RBP */
		0x48, 0xf, 0x38, 0xf1, 0x34, 0x24,  /* MOVBE qword [RSP], RSI */
		0x48, 0xf, 0x38, 0xf1, 0x3c, 0x24,  /* MOVBE qword [RSP], RDI */
		0x48, 0xf, 0x38, 0xf1, 0x45, 0x0,  /* MOVBE qword [RBP], RAX */
		0x48, 0xf, 0x38, 0xf1, 0x4d, 0x0,  /* MOVBE qword [RBP], RCX */
		0x48, 0xf, 0x38, 0xf1, 0x55, 0x0,  /* MOVBE qword [RBP], RDX */
		0x48, 0xf, 0x38, 0xf1, 0x5d, 0x0,  /* MOVBE qword [RBP], RBX */
		0x48, 0xf, 0x38, 0xf1, 0x65, 0x0,  /* MOVBE qword [RBP], RSP */
		0x48, 0xf, 0x38, 0xf1, 0x6d, 0x0,  /* MOVBE qword [RBP], RBP */
		0x48, 0xf, 0x38, 0xf1, 0x75, 0x0,  /* MOVBE qword [RBP], RSI */
		0x48, 0xf, 0x38, 0xf1, 0x7d, 0x0,  /* MOVBE qword [RBP], RDI */
		0x48, 0xf, 0x38, 0xf1, 0x6,  /* MOVBE qword [RSI], RAX */
		0x48, 0xf, 0x38, 0xf1, 0xe,  /* MOVBE qword [RSI], RCX */
		0x48, 0xf, 0x38, 0xf1, 0x16,  /* MOVBE qword [RSI], RDX */
		0x48, 0xf, 0x38, 0xf1, 0x1e,  /* MOVBE qword [RSI], RBX */
		0x48, 0xf, 0x38, 0xf1, 0x26,  /* MOVBE qword [RSI], RSP */
		0x48, 0xf, 0x38, 0xf1, 0x2e,  /* MOVBE qword [RSI], RBP */
		0x48, 0xf, 0x38, 0xf1, 0x36,  /* MOVBE qword [RSI], RSI */
		0x48, 0xf, 0x38, 0xf1, 0x3e,  /* MOVBE qword [RSI], RDI */
		0x48, 0xf, 0x38, 0xf1, 0x7,  /* MOVBE qword [RDI], RAX */
		0x48, 0xf, 0x38, 0xf1, 0xf,  /* MOVBE qword [RDI], RCX */
		0x48, 0xf, 0x38, 0xf1, 0x17,  /* MOVBE qword [RDI], RDX */
		0x48, 0xf, 0x38, 0xf1, 0x1f,  /* MOVBE qword [RDI], RBX */
		0x48, 0xf, 0x38, 0xf1, 0x27,  /* MOVBE qword [RDI], RSP */
		0x48, 0xf, 0x38, 0xf1, 0x2f,  /* MOVBE qword [RDI], RBP */
		0x48, 0xf, 0x38, 0xf1, 0x37,  /* MOVBE qword [RDI], RSI */
		0x48, 0xf, 0x38, 0xf1, 0x3f   /* MOVBE qword [RDI], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x128, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* MOVBE qword [RCX], RAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RCX], RCX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RCX], RDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RCX], RBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RCX], RSP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RCX], RBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RCX], RSI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RCX], RDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDX], RAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDX], RCX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDX], RDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDX], RBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDX], RSP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDX], RBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDX], RSI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDX], RDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBX], RAX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBX], RCX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBX], RDX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBX], RBX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBX], RSP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBX], RBP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBX], RSI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBX], RDI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSP], RAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSP], RCX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSP], RDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSP], RBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSP], RSP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSP], RBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSP], RSI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSP], RDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBP], RAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBP], RCX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBP], RDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBP], RBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBP], RSP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBP], RBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBP], RSI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RBP], RDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSI], RAX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSI], RCX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSI], RDX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSI], RBX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSI], RSP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSI], RBP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSI], RSI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RSI], RDI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDI], RAX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RAX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x10)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDI], RCX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDI], RDX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDI], RBX */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDI], RSP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDI], RBP */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDI], RSI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVBE qword [RDI], RDI */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::MOVBE,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64, XGETBV)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x1 0xd0 
	const uint8_t pOps[0x3] = {
		0xf, 0x1, 0xd0   /* XGETBV */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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


TEST(x64, XSETBV)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x1 0xd1 
	const uint8_t pOps[0x3] = {
		0xf, 0x1, 0xd1   /* XSETBV */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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


TEST(x64, GETSEC)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x37 
	const uint8_t pOps[0x2] = {
		0xf, 0x37   /* GETSEC */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FADD_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x3] = {
		0x67, 0xd8, 0x6   /* FADD dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FMUL_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x3] = {
		0x67, 0xd8, 0xe   /* FMUL dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FCOM_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x3] = {
		0x67, 0xd8, 0x16   /* FCOM dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FCOMP_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x3] = {
		0x67, 0xd8, 0x1e   /* FCOMP dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FSUB_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x3] = {
		0x67, 0xd8, 0x26   /* FSUB dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FSUBR_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x3] = {
		0x67, 0xd8, 0x2e   /* FSUBR dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FDIV_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x3] = {
		0x67, 0xd8, 0x36   /* FDIV dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FDIVR_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x3] = {
		0x67, 0xd8, 0x3e   /* FDIVR dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FADD_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xc2   /* FADD st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FMUL_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xca   /* FMUL st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FCOM_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xd3   /* FCOM st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FCOMP_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xdb   /* FCOMP st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FCOMP)
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

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FSUB_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xe2   /* FSUB st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FSUBR_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xea   /* FSUBR st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FDIV_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xf2   /* FDIV st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FDIVR_O_FPU_SSI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd8 
	const uint8_t pOps[0x2] = {
		0xd8, 0xfa   /* FDIVR st0, st2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FLD_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x3] = {
		0x67, 0xd9, 0x6   /* FLD dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FST_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x3] = {
		0x67, 0xd9, 0x16   /* FST dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FSTP_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x3] = {
		0x67, 0xd9, 0x1e   /* FSTP dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FLDENV_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x7] = {
		0xd9, 0x24, 0x95, 0x0, 0x0, 0x0, 0x0   /* FLDENV [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FLDENV [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FLDENV,
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


TEST(x64_FPU, FLDCW_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x3] = {
		0x67, 0xd9, 0x2b   /* FLDCW word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FNSTENV_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x7] = {
		0xd9, 0x34, 0x95, 0x0, 0x0, 0x0, 0x0   /* FNSTENV [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FNSTENV [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FNSTENV,
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


TEST(x64_FPU, FNSTCW_O_FPUM16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x3] = {
		0x67, 0xd9, 0x3b   /* FNSTCW word [ebx] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FLD_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xc3   /* FLD st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FXCH_O_FPU_SI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xcb   /* FXCH st3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FXCH)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xc9   /* FXCH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FNOP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xd0   /* FNOP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FCHS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe0   /* FCHS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FABS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe1   /* FABS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FTST)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe4   /* FTST */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FXAM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe5   /* FXAM */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FLD1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe8   /* FLD1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FLDL2T)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xe9   /* FLDL2T */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FLDL2E)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xea   /* FLDL2E */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FLDPI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xeb   /* FLDPI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FLDLG2)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xec   /* FLDLG2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FLDLN2)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xed   /* FLDLN2 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FLDZ)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xee   /* FLDZ */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, F2XM1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf0   /* F2XM1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FYL2X)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf1   /* FYL2X */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FPTAN)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf2   /* FPTAN */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FPATAN)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf3   /* FPATAN */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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


TEST(x64_FPU, FXTRACT)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf4   /* FXTRACT */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FPREM1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf5   /* FPREM1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FDECSTP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf6   /* FDECSTP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FINCSTP)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf7   /* FINCSTP */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FPREM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf8   /* FPREM */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FYL2XP1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xf9   /* FYL2XP1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSQRT)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xfa   /* FSQRT */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSINCOS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xfb   /* FSINCOS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FRNDINT)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xfc   /* FRNDINT */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSCALE)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xfd   /* FSCALE */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FSIN)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xfe   /* FSIN */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FCOS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd9 
	const uint8_t pOps[0x2] = {
		0xd9, 0xff   /* FCOS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_FPU, FIADD_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x3] = {
		0x67, 0xda, 0x6   /* FIADD dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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


TEST(x64_FPU, FIMUL_O_FPUM32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xda 
	const uint8_t pOps[0x3] = {
		0x67, 0xda, 0xe   /* FIMUL dword [esi] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_64BIT);

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
			0x3,
			0x0,
			0x0,
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

