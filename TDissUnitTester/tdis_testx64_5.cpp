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
			
TEST(x64_MMX, PUNPCKHWD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x69 
	const uint8_t pOps[0xc] = {
		0xf, 0x69, 0xc0,  /* PUNPCKHWD mm0, mm0 */
		0xf, 0x69, 0xc1,  /* PUNPCKHWD mm0, mm1 */
		0xf, 0x69, 0xc8,  /* PUNPCKHWD mm1, mm0 */
		0xf, 0x69, 0xc9   /* PUNPCKHWD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKHWD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHWD,
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
		/* PUNPCKHWD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHWD,
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
		/* PUNPCKHWD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHWD,
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
		/* PUNPCKHWD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHWD,
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


TEST(x64_MMX, PUNPCKHDQ_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x6a 
	const uint8_t pOps[0xc] = {
		0xf, 0x6a, 0xc0,  /* PUNPCKHDQ mm0, mm0 */
		0xf, 0x6a, 0xc1,  /* PUNPCKHDQ mm0, mm1 */
		0xf, 0x6a, 0xc8,  /* PUNPCKHDQ mm1, mm0 */
		0xf, 0x6a, 0xc9   /* PUNPCKHDQ mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PUNPCKHDQ mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHDQ,
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
		/* PUNPCKHDQ mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHDQ,
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
		/* PUNPCKHDQ mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHDQ,
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
		/* PUNPCKHDQ mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PUNPCKHDQ,
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


TEST(x64_MMX, PACKSSDW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x6b 
	const uint8_t pOps[0xc] = {
		0xf, 0x6b, 0xc0,  /* PACKSSDW mm0, mm0 */
		0xf, 0x6b, 0xc1,  /* PACKSSDW mm0, mm1 */
		0xf, 0x6b, 0xc8,  /* PACKSSDW mm1, mm0 */
		0xf, 0x6b, 0xc9   /* PACKSSDW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PACKSSDW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PACKSSDW,
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
		/* PACKSSDW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PACKSSDW,
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
		/* PACKSSDW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PACKSSDW,
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
		/* PACKSSDW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PACKSSDW,
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


TEST(x64_MMX, MOVQ_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x6f 
	const uint8_t pOps[0xc] = {
		0xf, 0x6f, 0xc0,  /* MOVQ mm0, mm0 */
		0xf, 0x6f, 0xc1,  /* MOVQ mm0, mm1 */
		0xf, 0x6f, 0xc8,  /* MOVQ mm1, mm0 */
		0xf, 0x6f, 0xc9   /* MOVQ mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVQ mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
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
		/* MOVQ mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
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
		/* MOVQ mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
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
		/* MOVQ mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
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


TEST(x64_MMX, PSRLW_O_MM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x71 
	const uint8_t pOps[0x8] = {
		0xf, 0x71, 0xd0, 0xaf,  /* PSRLW mm0, 0xaf */
		0xf, 0x71, 0xd1, 0xaf   /* PSRLW mm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRLW mm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLW mm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PSRAW_O_MM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x71 
	const uint8_t pOps[0x8] = {
		0xf, 0x71, 0xe0, 0xaf,  /* PSRAW mm0, 0xaf */
		0xf, 0x71, 0xe1, 0xaf   /* PSRAW mm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRAW mm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRAW mm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PSLLW_O_MM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x71 
	const uint8_t pOps[0x8] = {
		0xf, 0x71, 0xf0, 0xaf,  /* PSLLW mm0, 0xaf */
		0xf, 0x71, 0xf1, 0xaf   /* PSLLW mm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSLLW mm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLW mm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PSRLD_O_MM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x72 
	const uint8_t pOps[0x8] = {
		0xf, 0x72, 0xd0, 0xaf,  /* PSRLD mm0, 0xaf */
		0xf, 0x72, 0xd1, 0xaf   /* PSRLD mm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRLD mm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLD mm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PSRAD_O_MM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x72 
	const uint8_t pOps[0x8] = {
		0xf, 0x72, 0xe0, 0xaf,  /* PSRAD mm0, 0xaf */
		0xf, 0x72, 0xe1, 0xaf   /* PSRAD mm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRAD mm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRAD mm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PSLLD_O_MM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x72 
	const uint8_t pOps[0x8] = {
		0xf, 0x72, 0xf0, 0xaf,  /* PSLLD mm0, 0xaf */
		0xf, 0x72, 0xf1, 0xaf   /* PSLLD mm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSLLD mm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLD mm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PSRLQ_O_MM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x73 
	const uint8_t pOps[0x8] = {
		0xf, 0x73, 0xd0, 0xaf,  /* PSRLQ mm0, 0xaf */
		0xf, 0x73, 0xd1, 0xaf   /* PSRLQ mm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSRLQ mm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSRLQ mm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PSLLQ_O_MM_RM_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x73 
	const uint8_t pOps[0x8] = {
		0xf, 0x73, 0xf0, 0xaf,  /* PSLLQ mm0, 0xaf */
		0xf, 0x73, 0xf1, 0xaf   /* PSLLQ mm1, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* PSLLQ mm0, 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSLLQ mm1, 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x4,
			0x0,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_MMX, PCMPEQB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x74 
	const uint8_t pOps[0xc] = {
		0xf, 0x74, 0xc0,  /* PCMPEQB mm0, mm0 */
		0xf, 0x74, 0xc1,  /* PCMPEQB mm0, mm1 */
		0xf, 0x74, 0xc8,  /* PCMPEQB mm1, mm0 */
		0xf, 0x74, 0xc9   /* PCMPEQB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPEQB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPEQB,
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
		/* PCMPEQB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPEQB,
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
		/* PCMPEQB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPEQB,
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
		/* PCMPEQB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPEQB,
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


TEST(x64_MMX, PCMPEQW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x75 
	const uint8_t pOps[0xc] = {
		0xf, 0x75, 0xc0,  /* PCMPEQW mm0, mm0 */
		0xf, 0x75, 0xc1,  /* PCMPEQW mm0, mm1 */
		0xf, 0x75, 0xc8,  /* PCMPEQW mm1, mm0 */
		0xf, 0x75, 0xc9   /* PCMPEQW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPEQW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPEQW,
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
		/* PCMPEQW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPEQW,
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
		/* PCMPEQW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPEQW,
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
		/* PCMPEQW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPEQW,
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


TEST(x64_MMX, PCMPEQD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x76 
	const uint8_t pOps[0xc] = {
		0xf, 0x76, 0xc0,  /* PCMPEQD mm0, mm0 */
		0xf, 0x76, 0xc1,  /* PCMPEQD mm0, mm1 */
		0xf, 0x76, 0xc8,  /* PCMPEQD mm1, mm0 */
		0xf, 0x76, 0xc9   /* PCMPEQD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPEQD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPEQD,
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
		/* PCMPEQD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPEQD,
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
		/* PCMPEQD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPEQD,
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
		/* PCMPEQD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPEQD,
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


TEST(x64_MMX, EMMS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x77 
	const uint8_t pOps[0x2] = {
		0xf, 0x77   /* EMMS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* EMMS */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::EMMS,
			FlowControl::NONE,
			InstructionSet::MMX,
			0x2,
			0x0,
			0x0,
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


TEST(x64_MMX, MOVQ_O_MM_64_MM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x7f 
	const uint8_t pOps[0xc] = {
		0xf, 0x6f, 0xc0,  /* MOVQ mm0, mm0 */
		0xf, 0x6f, 0xc1,  /* MOVQ mm0, mm1 */
		0xf, 0x6f, 0xc8,  /* MOVQ mm1, mm0 */
		0xf, 0x6f, 0xc9   /* MOVQ mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVQ mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
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
		/* MOVQ mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
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
		/* MOVQ mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
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
		/* MOVQ mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVQ,
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


TEST(x64_MMX, PSRLW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd1 
	const uint8_t pOps[0xc] = {
		0xf, 0xd1, 0xc0,  /* PSRLW mm0, mm0 */
		0xf, 0xd1, 0xc1,  /* PSRLW mm0, mm1 */
		0xf, 0xd1, 0xc8,  /* PSRLW mm1, mm0 */
		0xf, 0xd1, 0xc9   /* PSRLW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSRLW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
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
		/* PSRLW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
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
		/* PSRLW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
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
		/* PSRLW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSRLW,
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


TEST(x64_MMX, PSRLD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd2 
	const uint8_t pOps[0xc] = {
		0xf, 0xd2, 0xc0,  /* PSRLD mm0, mm0 */
		0xf, 0xd2, 0xc1,  /* PSRLD mm0, mm1 */
		0xf, 0xd2, 0xc8,  /* PSRLD mm1, mm0 */
		0xf, 0xd2, 0xc9   /* PSRLD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSRLD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
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
		/* PSRLD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
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
		/* PSRLD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
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
		/* PSRLD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSRLD,
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


TEST(x64_MMX, PSRLQ_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd3 
	const uint8_t pOps[0xc] = {
		0xf, 0xd3, 0xc0,  /* PSRLQ mm0, mm0 */
		0xf, 0xd3, 0xc1,  /* PSRLQ mm0, mm1 */
		0xf, 0xd3, 0xc8,  /* PSRLQ mm1, mm0 */
		0xf, 0xd3, 0xc9   /* PSRLQ mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSRLQ mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
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
		/* PSRLQ mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
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
		/* PSRLQ mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
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
		/* PSRLQ mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSRLQ,
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


TEST(x64_MMX, PMULLW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd5 
	const uint8_t pOps[0xc] = {
		0xf, 0xd5, 0xc0,  /* PMULLW mm0, mm0 */
		0xf, 0xd5, 0xc1,  /* PMULLW mm0, mm1 */
		0xf, 0xd5, 0xc8,  /* PMULLW mm1, mm0 */
		0xf, 0xd5, 0xc9   /* PMULLW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULLW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULLW,
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
		/* PMULLW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULLW,
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
		/* PMULLW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULLW,
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
		/* PMULLW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULLW,
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


TEST(x64_MMX, PSUBUSB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd8 
	const uint8_t pOps[0xc] = {
		0xf, 0xd8, 0xc0,  /* PSUBUSB mm0, mm0 */
		0xf, 0xd8, 0xc1,  /* PSUBUSB mm0, mm1 */
		0xf, 0xd8, 0xc8,  /* PSUBUSB mm1, mm0 */
		0xf, 0xd8, 0xc9   /* PSUBUSB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBUSB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBUSB,
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
		/* PSUBUSB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBUSB,
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
		/* PSUBUSB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBUSB,
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
		/* PSUBUSB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBUSB,
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


TEST(x64_MMX, PSUBUSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd9 
	const uint8_t pOps[0xc] = {
		0xf, 0xd9, 0xc0,  /* PSUBUSW mm0, mm0 */
		0xf, 0xd9, 0xc1,  /* PSUBUSW mm0, mm1 */
		0xf, 0xd9, 0xc8,  /* PSUBUSW mm1, mm0 */
		0xf, 0xd9, 0xc9   /* PSUBUSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBUSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBUSW,
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
		/* PSUBUSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBUSW,
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
		/* PSUBUSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBUSW,
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
		/* PSUBUSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBUSW,
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


TEST(x64_MMX, PAND_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xdb 
	const uint8_t pOps[0xc] = {
		0xf, 0xdb, 0xc0,  /* PAND mm0, mm0 */
		0xf, 0xdb, 0xc1,  /* PAND mm0, mm1 */
		0xf, 0xdb, 0xc8,  /* PAND mm1, mm0 */
		0xf, 0xdb, 0xc9   /* PAND mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PAND mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PAND,
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
		/* PAND mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PAND,
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
		/* PAND mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PAND,
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
		/* PAND mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PAND,
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


TEST(x64_MMX, PADDUSB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xdc 
	const uint8_t pOps[0xc] = {
		0xf, 0xdc, 0xc0,  /* PADDUSB mm0, mm0 */
		0xf, 0xdc, 0xc1,  /* PADDUSB mm0, mm1 */
		0xf, 0xdc, 0xc8,  /* PADDUSB mm1, mm0 */
		0xf, 0xdc, 0xc9   /* PADDUSB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDUSB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDUSB,
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
		/* PADDUSB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDUSB,
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
		/* PADDUSB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDUSB,
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
		/* PADDUSB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDUSB,
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


TEST(x64_MMX, PADDUSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xdd 
	const uint8_t pOps[0xc] = {
		0xf, 0xdd, 0xc0,  /* PADDUSW mm0, mm0 */
		0xf, 0xdd, 0xc1,  /* PADDUSW mm0, mm1 */
		0xf, 0xdd, 0xc8,  /* PADDUSW mm1, mm0 */
		0xf, 0xdd, 0xc9   /* PADDUSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDUSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDUSW,
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
		/* PADDUSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDUSW,
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
		/* PADDUSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDUSW,
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
		/* PADDUSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDUSW,
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


TEST(x64_MMX, PANDN_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xdf 
	const uint8_t pOps[0xc] = {
		0xf, 0xdf, 0xc0,  /* PANDN mm0, mm0 */
		0xf, 0xdf, 0xc1,  /* PANDN mm0, mm1 */
		0xf, 0xdf, 0xc8,  /* PANDN mm1, mm0 */
		0xf, 0xdf, 0xc9   /* PANDN mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PANDN mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PANDN,
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
		/* PANDN mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PANDN,
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
		/* PANDN mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PANDN,
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
		/* PANDN mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PANDN,
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


TEST(x64_MMX, PSRAW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe1 
	const uint8_t pOps[0xc] = {
		0xf, 0xe1, 0xc0,  /* PSRAW mm0, mm0 */
		0xf, 0xe1, 0xc1,  /* PSRAW mm0, mm1 */
		0xf, 0xe1, 0xc8,  /* PSRAW mm1, mm0 */
		0xf, 0xe1, 0xc9   /* PSRAW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSRAW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
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
		/* PSRAW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
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
		/* PSRAW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
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
		/* PSRAW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSRAW,
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


TEST(x64_MMX, PSRAD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe2 
	const uint8_t pOps[0xc] = {
		0xf, 0xe2, 0xc0,  /* PSRAD mm0, mm0 */
		0xf, 0xe2, 0xc1,  /* PSRAD mm0, mm1 */
		0xf, 0xe2, 0xc8,  /* PSRAD mm1, mm0 */
		0xf, 0xe2, 0xc9   /* PSRAD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSRAD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
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
		/* PSRAD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
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
		/* PSRAD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
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
		/* PSRAD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSRAD,
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


TEST(x64_MMX, PMULHW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe5 
	const uint8_t pOps[0xc] = {
		0xf, 0xe5, 0xc0,  /* PMULHW mm0, mm0 */
		0xf, 0xe5, 0xc1,  /* PMULHW mm0, mm1 */
		0xf, 0xe5, 0xc8,  /* PMULHW mm1, mm0 */
		0xf, 0xe5, 0xc9   /* PMULHW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULHW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULHW,
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
		/* PMULHW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULHW,
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
		/* PMULHW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULHW,
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
		/* PMULHW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULHW,
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


TEST(x64_MMX, PSUBSB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe8 
	const uint8_t pOps[0xc] = {
		0xf, 0xe8, 0xc0,  /* PSUBSB mm0, mm0 */
		0xf, 0xe8, 0xc1,  /* PSUBSB mm0, mm1 */
		0xf, 0xe8, 0xc8,  /* PSUBSB mm1, mm0 */
		0xf, 0xe8, 0xc9   /* PSUBSB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBSB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBSB,
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
		/* PSUBSB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBSB,
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
		/* PSUBSB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBSB,
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
		/* PSUBSB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBSB,
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


TEST(x64_MMX, PSUBSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe9 
	const uint8_t pOps[0xc] = {
		0xf, 0xe9, 0xc0,  /* PSUBSW mm0, mm0 */
		0xf, 0xe9, 0xc1,  /* PSUBSW mm0, mm1 */
		0xf, 0xe9, 0xc8,  /* PSUBSW mm1, mm0 */
		0xf, 0xe9, 0xc9   /* PSUBSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBSW,
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
		/* PSUBSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBSW,
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
		/* PSUBSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBSW,
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
		/* PSUBSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBSW,
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


TEST(x64_MMX, POR_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xeb 
	const uint8_t pOps[0xc] = {
		0xf, 0xeb, 0xc0,  /* POR mm0, mm0 */
		0xf, 0xeb, 0xc1,  /* POR mm0, mm1 */
		0xf, 0xeb, 0xc8,  /* POR mm1, mm0 */
		0xf, 0xeb, 0xc9   /* POR mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* POR mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::POR,
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
		/* POR mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::POR,
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
		/* POR mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::POR,
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
		/* POR mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::POR,
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


TEST(x64_MMX, PADDSB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xec 
	const uint8_t pOps[0xc] = {
		0xf, 0xec, 0xc0,  /* PADDSB mm0, mm0 */
		0xf, 0xec, 0xc1,  /* PADDSB mm0, mm1 */
		0xf, 0xec, 0xc8,  /* PADDSB mm1, mm0 */
		0xf, 0xec, 0xc9   /* PADDSB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDSB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDSB,
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
		/* PADDSB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDSB,
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
		/* PADDSB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDSB,
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
		/* PADDSB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDSB,
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


TEST(x64_MMX, PADDSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xed 
	const uint8_t pOps[0xc] = {
		0xf, 0xed, 0xc0,  /* PADDSW mm0, mm0 */
		0xf, 0xed, 0xc1,  /* PADDSW mm0, mm1 */
		0xf, 0xed, 0xc8,  /* PADDSW mm1, mm0 */
		0xf, 0xed, 0xc9   /* PADDSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDSW,
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
		/* PADDSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDSW,
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
		/* PADDSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDSW,
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
		/* PADDSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDSW,
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


TEST(x64_MMX, PXOR_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xef 
	const uint8_t pOps[0xc] = {
		0xf, 0xef, 0xc0,  /* PXOR mm0, mm0 */
		0xf, 0xef, 0xc1,  /* PXOR mm0, mm1 */
		0xf, 0xef, 0xc8,  /* PXOR mm1, mm0 */
		0xf, 0xef, 0xc9   /* PXOR mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PXOR mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PXOR,
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
		/* PXOR mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PXOR,
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
		/* PXOR mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PXOR,
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
		/* PXOR mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PXOR,
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


TEST(x64_MMX, PSLLW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf1 
	const uint8_t pOps[0xc] = {
		0xf, 0xf1, 0xc0,  /* PSLLW mm0, mm0 */
		0xf, 0xf1, 0xc1,  /* PSLLW mm0, mm1 */
		0xf, 0xf1, 0xc8,  /* PSLLW mm1, mm0 */
		0xf, 0xf1, 0xc9   /* PSLLW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSLLW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
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
		/* PSLLW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
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
		/* PSLLW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
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
		/* PSLLW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSLLW,
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


TEST(x64_MMX, PSLLD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf2 
	const uint8_t pOps[0xc] = {
		0xf, 0xf2, 0xc0,  /* PSLLD mm0, mm0 */
		0xf, 0xf2, 0xc1,  /* PSLLD mm0, mm1 */
		0xf, 0xf2, 0xc8,  /* PSLLD mm1, mm0 */
		0xf, 0xf2, 0xc9   /* PSLLD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSLLD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
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
		/* PSLLD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
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
		/* PSLLD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
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
		/* PSLLD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSLLD,
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


TEST(x64_MMX, PSLLQ_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf3 
	const uint8_t pOps[0xc] = {
		0xf, 0xf3, 0xc0,  /* PSLLQ mm0, mm0 */
		0xf, 0xf3, 0xc1,  /* PSLLQ mm0, mm1 */
		0xf, 0xf3, 0xc8,  /* PSLLQ mm1, mm0 */
		0xf, 0xf3, 0xc9   /* PSLLQ mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSLLQ mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
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
		/* PSLLQ mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
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
		/* PSLLQ mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
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
		/* PSLLQ mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSLLQ,
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


TEST(x64_MMX, PMADDWD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf5 
	const uint8_t pOps[0xc] = {
		0xf, 0xf5, 0xc0,  /* PMADDWD mm0, mm0 */
		0xf, 0xf5, 0xc1,  /* PMADDWD mm0, mm1 */
		0xf, 0xf5, 0xc8,  /* PMADDWD mm1, mm0 */
		0xf, 0xf5, 0xc9   /* PMADDWD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMADDWD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMADDWD,
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
		/* PMADDWD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMADDWD,
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
		/* PMADDWD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMADDWD,
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
		/* PMADDWD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMADDWD,
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


TEST(x64_MMX, PSUBB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf8 
	const uint8_t pOps[0xc] = {
		0xf, 0xf8, 0xc0,  /* PSUBB mm0, mm0 */
		0xf, 0xf8, 0xc1,  /* PSUBB mm0, mm1 */
		0xf, 0xf8, 0xc8,  /* PSUBB mm1, mm0 */
		0xf, 0xf8, 0xc9   /* PSUBB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBB,
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
		/* PSUBB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBB,
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
		/* PSUBB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBB,
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
		/* PSUBB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBB,
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


TEST(x64_MMX, PSUBW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf9 
	const uint8_t pOps[0xc] = {
		0xf, 0xf9, 0xc0,  /* PSUBW mm0, mm0 */
		0xf, 0xf9, 0xc1,  /* PSUBW mm0, mm1 */
		0xf, 0xf9, 0xc8,  /* PSUBW mm1, mm0 */
		0xf, 0xf9, 0xc9   /* PSUBW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBW,
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
		/* PSUBW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBW,
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
		/* PSUBW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBW,
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
		/* PSUBW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBW,
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


TEST(x64_MMX, PSUBD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xfa 
	const uint8_t pOps[0xc] = {
		0xf, 0xfa, 0xc0,  /* PSUBD mm0, mm0 */
		0xf, 0xfa, 0xc1,  /* PSUBD mm0, mm1 */
		0xf, 0xfa, 0xc8,  /* PSUBD mm1, mm0 */
		0xf, 0xfa, 0xc9   /* PSUBD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSUBD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSUBD,
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
		/* PSUBD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSUBD,
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
		/* PSUBD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSUBD,
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
		/* PSUBD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSUBD,
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


TEST(x64_MMX, PADDB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xfc 
	const uint8_t pOps[0xc] = {
		0xf, 0xfc, 0xc0,  /* PADDB mm0, mm0 */
		0xf, 0xfc, 0xc1,  /* PADDB mm0, mm1 */
		0xf, 0xfc, 0xc8,  /* PADDB mm1, mm0 */
		0xf, 0xfc, 0xc9   /* PADDB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDB,
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
		/* PADDB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDB,
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
		/* PADDB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDB,
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
		/* PADDB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDB,
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


TEST(x64_MMX, PADDW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xfd 
	const uint8_t pOps[0xc] = {
		0xf, 0xfd, 0xc0,  /* PADDW mm0, mm0 */
		0xf, 0xfd, 0xc1,  /* PADDW mm0, mm1 */
		0xf, 0xfd, 0xc8,  /* PADDW mm1, mm0 */
		0xf, 0xfd, 0xc9   /* PADDW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDW,
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
		/* PADDW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDW,
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
		/* PADDW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDW,
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
		/* PADDW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDW,
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


TEST(x64_MMX, PADDD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xfe 
	const uint8_t pOps[0xc] = {
		0xf, 0xfe, 0xc0,  /* PADDD mm0, mm0 */
		0xf, 0xfe, 0xc1,  /* PADDD mm0, mm1 */
		0xf, 0xfe, 0xc8,  /* PADDD mm1, mm0 */
		0xf, 0xfe, 0xc9   /* PADDD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PADDD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PADDD,
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
		/* PADDD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PADDD,
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
		/* PADDD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PADDD,
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
		/* PADDD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PADDD,
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


TEST(x64_SSE, MOVUPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x10 
	const uint8_t pOps[0xc] = {
		0xf, 0x10, 0xc0,  /* MOVUPS xmm0, xmm0 */
		0xf, 0x10, 0xc1,  /* MOVUPS xmm0, xmm1 */
		0xf, 0x10, 0xc8,  /* MOVUPS xmm1, xmm0 */
		0xf, 0x10, 0xc9   /* MOVUPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVUPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVUPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVUPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVUPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVUPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MOVUPS_O_XMM_128_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x11 
	const uint8_t pOps[0xc] = {
		0xf, 0x10, 0xc0,  /* MOVUPS xmm0, xmm0 */
		0xf, 0x10, 0xc1,  /* MOVUPS xmm0, xmm1 */
		0xf, 0x10, 0xc8,  /* MOVUPS xmm1, xmm0 */
		0xf, 0x10, 0xc9   /* MOVUPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVUPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVUPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVUPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVUPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVUPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVUPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MOVLPS_O_MEM_64_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x13 
	const uint8_t pOps[0x10] = {
		0xf, 0x13, 0x4, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVLPS [rdx*4+0x12345678], xmm0 */
		0xf, 0x13, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12   /* MOVLPS [rdx*4+0x12345678], xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOVLPS [rdx*4+0x12345678], xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVLPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVLPS [rdx*4+0x12345678], xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVLPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, UNPCKLPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x14 
	const uint8_t pOps[0xc] = {
		0xf, 0x14, 0xc0,  /* UNPCKLPS xmm0, xmm0 */
		0xf, 0x14, 0xc1,  /* UNPCKLPS xmm0, xmm1 */
		0xf, 0x14, 0xc8,  /* UNPCKLPS xmm1, xmm0 */
		0xf, 0x14, 0xc9   /* UNPCKLPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* UNPCKLPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::UNPCKLPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKLPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::UNPCKLPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKLPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::UNPCKLPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKLPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::UNPCKLPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, UNPCKHPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x15 
	const uint8_t pOps[0xc] = {
		0xf, 0x15, 0xc0,  /* UNPCKHPS xmm0, xmm0 */
		0xf, 0x15, 0xc1,  /* UNPCKHPS xmm0, xmm1 */
		0xf, 0x15, 0xc8,  /* UNPCKHPS xmm1, xmm0 */
		0xf, 0x15, 0xc9   /* UNPCKHPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* UNPCKHPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::UNPCKHPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKHPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::UNPCKHPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKHPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::UNPCKHPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UNPCKHPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::UNPCKHPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MOVHPS_O_MEM_64_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x17 
	const uint8_t pOps[0x10] = {
		0xf, 0x17, 0x4, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVHPS [rdx*4+0x12345678], xmm0 */
		0xf, 0x17, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12   /* MOVHPS [rdx*4+0x12345678], xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOVHPS [rdx*4+0x12345678], xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVHPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVHPS [rdx*4+0x12345678], xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVHPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, PREFETCHNTA_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x18 
	const uint8_t pOps[0x8] = {
		0xf, 0x18, 0x4, 0x95, 0x0, 0x0, 0x0, 0x0   /* PREFETCHNTA [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* PREFETCHNTA [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PREFETCHNTA,
			FlowControl::NONE,
			InstructionSet::SSE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, PREFETCHT0_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x18 
	const uint8_t pOps[0x8] = {
		0xf, 0x18, 0xc, 0x95, 0x0, 0x0, 0x0, 0x0   /* PREFETCHT0 [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* PREFETCHT0 [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PREFETCHT0,
			FlowControl::NONE,
			InstructionSet::SSE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, PREFETCHT1_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x18 
	const uint8_t pOps[0x8] = {
		0xf, 0x18, 0x14, 0x95, 0x0, 0x0, 0x0, 0x0   /* PREFETCHT1 [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* PREFETCHT1 [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PREFETCHT1,
			FlowControl::NONE,
			InstructionSet::SSE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, PREFETCHT2_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x18 
	const uint8_t pOps[0x8] = {
		0xf, 0x18, 0x1c, 0x95, 0x0, 0x0, 0x0, 0x0   /* PREFETCHT2 [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* PREFETCHT2 [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PREFETCHT2,
			FlowControl::NONE,
			InstructionSet::SSE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MOVAPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x28 
	const uint8_t pOps[0xc] = {
		0xf, 0x28, 0xc0,  /* MOVAPS xmm0, xmm0 */
		0xf, 0x28, 0xc1,  /* MOVAPS xmm0, xmm1 */
		0xf, 0x28, 0xc8,  /* MOVAPS xmm1, xmm0 */
		0xf, 0x28, 0xc9   /* MOVAPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVAPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVAPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVAPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVAPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVAPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MOVAPS_O_XMM_128_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x29 
	const uint8_t pOps[0xc] = {
		0xf, 0x28, 0xc0,  /* MOVAPS xmm0, xmm0 */
		0xf, 0x28, 0xc1,  /* MOVAPS xmm0, xmm1 */
		0xf, 0x28, 0xc8,  /* MOVAPS xmm1, xmm0 */
		0xf, 0x28, 0xc9   /* MOVAPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVAPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVAPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVAPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVAPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVAPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVAPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, CVTPI2PS_O_XMM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2a 
	const uint8_t pOps[0xc] = {
		0xf, 0x2a, 0xc0,  /* CVTPI2PS xmm0, mm0 */
		0xf, 0x2a, 0xc1,  /* CVTPI2PS xmm0, mm1 */
		0xf, 0x2a, 0xc8,  /* CVTPI2PS xmm1, mm0 */
		0xf, 0x2a, 0xc9   /* CVTPI2PS xmm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTPI2PS xmm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTPI2PS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPI2PS xmm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTPI2PS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPI2PS xmm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTPI2PS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPI2PS xmm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTPI2PS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MOVNTPS_O_MEM_128_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2b 
	const uint8_t pOps[0x10] = {
		0xf, 0x2b, 0x4, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTPS [rdx*4+0x12345678], xmm0 */
		0xf, 0x2b, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12   /* MOVNTPS [rdx*4+0x12345678], xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOVNTPS [rdx*4+0x12345678], xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVNTPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTPS [rdx*4+0x12345678], xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVNTPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, CVTTPS2PI_O_MM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2c 
	const uint8_t pOps[0xc] = {
		0xf, 0x2c, 0xc0,  /* CVTTPS2PI mm0, xmm0 */
		0xf, 0x2c, 0xc1,  /* CVTTPS2PI mm0, xmm1 */
		0xf, 0x2c, 0xc8,  /* CVTTPS2PI mm1, xmm0 */
		0xf, 0x2c, 0xc9   /* CVTTPS2PI mm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTTPS2PI mm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTTPS2PI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTPS2PI mm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTTPS2PI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTPS2PI mm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTTPS2PI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTPS2PI mm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTTPS2PI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, CVTPS2PI_O_MM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2d 
	const uint8_t pOps[0xc] = {
		0xf, 0x2d, 0xc0,  /* CVTPS2PI mm0, xmm0 */
		0xf, 0x2d, 0xc1,  /* CVTPS2PI mm0, xmm1 */
		0xf, 0x2d, 0xc8,  /* CVTPS2PI mm1, xmm0 */
		0xf, 0x2d, 0xc9   /* CVTPS2PI mm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTPS2PI mm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTPS2PI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPS2PI mm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTPS2PI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPS2PI mm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTPS2PI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPS2PI mm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTPS2PI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, UCOMISS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2e 
	const uint8_t pOps[0xc] = {
		0xf, 0x2e, 0xc0,  /* UCOMISS xmm0, xmm0 */
		0xf, 0x2e, 0xc1,  /* UCOMISS xmm0, xmm1 */
		0xf, 0x2e, 0xc8,  /* UCOMISS xmm1, xmm0 */
		0xf, 0x2e, 0xc9   /* UCOMISS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* UCOMISS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::UCOMISS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UCOMISS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::UCOMISS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UCOMISS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::UCOMISS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* UCOMISS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::UCOMISS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, COMISS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x2f 
	const uint8_t pOps[0xc] = {
		0xf, 0x2f, 0xc0,  /* COMISS xmm0, xmm0 */
		0xf, 0x2f, 0xc1,  /* COMISS xmm0, xmm1 */
		0xf, 0x2f, 0xc8,  /* COMISS xmm1, xmm0 */
		0xf, 0x2f, 0xc9   /* COMISS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* COMISS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::COMISS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* COMISS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::COMISS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* COMISS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::COMISS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* COMISS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::COMISS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MOVMSKPS_O_REG_32_XMM_RM)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0xf 0x50 
	const uint8_t pOps[0x2a] = {
		0xf, 0x50, 0xc8,  /* MOVMSKPS ECX, xmm0 */
		0xf, 0x50, 0xc9,  /* MOVMSKPS ECX, xmm1 */
		0xf, 0x50, 0xd0,  /* MOVMSKPS EDX, xmm0 */
		0xf, 0x50, 0xd1,  /* MOVMSKPS EDX, xmm1 */
		0xf, 0x50, 0xd8,  /* MOVMSKPS EBX, xmm0 */
		0xf, 0x50, 0xd9,  /* MOVMSKPS EBX, xmm1 */
		0xf, 0x50, 0xe0,  /* MOVMSKPS ESP, xmm0 */
		0xf, 0x50, 0xe1,  /* MOVMSKPS ESP, xmm1 */
		0xf, 0x50, 0xe8,  /* MOVMSKPS EBP, xmm0 */
		0xf, 0x50, 0xe9,  /* MOVMSKPS EBP, xmm1 */
		0xf, 0x50, 0xf0,  /* MOVMSKPS ESI, xmm0 */
		0xf, 0x50, 0xf1,  /* MOVMSKPS ESI, xmm1 */
		0xf, 0x50, 0xf8,  /* MOVMSKPS EDI, xmm0 */
		0xf, 0x50, 0xf9   /* MOVMSKPS EDI, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2a, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0xe_sz, instructionCount);
	{
		/* MOVMSKPS ECX, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS ECX, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS EDX, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS EDX, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS EBX, xmm0 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS EBX, xmm1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS ESP, xmm0 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS ESP, xmm1 */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS EBP, xmm0 */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS EBP, xmm1 */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS ESI, xmm0 */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS ESI, xmm1 */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS EDI, xmm0 */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVMSKPS EDI, xmm1 */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOVMSKPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, SQRTPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x51 
	const uint8_t pOps[0xc] = {
		0xf, 0x51, 0xc0,  /* SQRTPS xmm0, xmm0 */
		0xf, 0x51, 0xc1,  /* SQRTPS xmm0, xmm1 */
		0xf, 0x51, 0xc8,  /* SQRTPS xmm1, xmm0 */
		0xf, 0x51, 0xc9   /* SQRTPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* SQRTPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SQRTPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SQRTPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SQRTPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SQRTPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SQRTPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SQRTPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SQRTPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, RSQRTPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x52 
	const uint8_t pOps[0xc] = {
		0xf, 0x52, 0xc0,  /* RSQRTPS xmm0, xmm0 */
		0xf, 0x52, 0xc1,  /* RSQRTPS xmm0, xmm1 */
		0xf, 0x52, 0xc8,  /* RSQRTPS xmm1, xmm0 */
		0xf, 0x52, 0xc9   /* RSQRTPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* RSQRTPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RSQRTPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RSQRTPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RSQRTPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RSQRTPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RSQRTPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RSQRTPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RSQRTPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, RCPPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x53 
	const uint8_t pOps[0xc] = {
		0xf, 0x53, 0xc0,  /* RCPPS xmm0, xmm0 */
		0xf, 0x53, 0xc1,  /* RCPPS xmm0, xmm1 */
		0xf, 0x53, 0xc8,  /* RCPPS xmm1, xmm0 */
		0xf, 0x53, 0xc9   /* RCPPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* RCPPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCPPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCPPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCPPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCPPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCPPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCPPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCPPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, ANDPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x54 
	const uint8_t pOps[0xc] = {
		0xf, 0x54, 0xc0,  /* ANDPS xmm0, xmm0 */
		0xf, 0x54, 0xc1,  /* ANDPS xmm0, xmm1 */
		0xf, 0x54, 0xc8,  /* ANDPS xmm1, xmm0 */
		0xf, 0x54, 0xc9   /* ANDPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ANDPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ANDPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ANDPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ANDPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ANDPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, ANDNPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x55 
	const uint8_t pOps[0xc] = {
		0xf, 0x55, 0xc0,  /* ANDNPS xmm0, xmm0 */
		0xf, 0x55, 0xc1,  /* ANDNPS xmm0, xmm1 */
		0xf, 0x55, 0xc8,  /* ANDNPS xmm1, xmm0 */
		0xf, 0x55, 0xc9   /* ANDNPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ANDNPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ANDNPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDNPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ANDNPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDNPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ANDNPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ANDNPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ANDNPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, ORPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x56 
	const uint8_t pOps[0xc] = {
		0xf, 0x56, 0xc0,  /* ORPS xmm0, xmm0 */
		0xf, 0x56, 0xc1,  /* ORPS xmm0, xmm1 */
		0xf, 0x56, 0xc8,  /* ORPS xmm1, xmm0 */
		0xf, 0x56, 0xc9   /* ORPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ORPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ORPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ORPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ORPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ORPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ORPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ORPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ORPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, XORPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x57 
	const uint8_t pOps[0xc] = {
		0xf, 0x57, 0xc0,  /* XORPS xmm0, xmm0 */
		0xf, 0x57, 0xc1,  /* XORPS xmm0, xmm1 */
		0xf, 0x57, 0xc8,  /* XORPS xmm1, xmm0 */
		0xf, 0x57, 0xc9   /* XORPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* XORPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XORPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XORPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XORPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XORPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XORPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XORPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XORPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, ADDPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x58 
	const uint8_t pOps[0xc] = {
		0xf, 0x58, 0xc0,  /* ADDPS xmm0, xmm0 */
		0xf, 0x58, 0xc1,  /* ADDPS xmm0, xmm1 */
		0xf, 0x58, 0xc8,  /* ADDPS xmm1, xmm0 */
		0xf, 0x58, 0xc9   /* ADDPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ADDPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADDPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADDPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADDPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADDPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADDPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADDPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADDPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MULPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x59 
	const uint8_t pOps[0xc] = {
		0xf, 0x59, 0xc0,  /* MULPS xmm0, xmm0 */
		0xf, 0x59, 0xc1,  /* MULPS xmm0, xmm1 */
		0xf, 0x59, 0xc8,  /* MULPS xmm1, xmm0 */
		0xf, 0x59, 0xc9   /* MULPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MULPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MULPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MULPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MULPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MULPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MULPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MULPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MULPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, SUBPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5c 
	const uint8_t pOps[0xc] = {
		0xf, 0x5c, 0xc0,  /* SUBPS xmm0, xmm0 */
		0xf, 0x5c, 0xc1,  /* SUBPS xmm0, xmm1 */
		0xf, 0x5c, 0xc8,  /* SUBPS xmm1, xmm0 */
		0xf, 0x5c, 0xc9   /* SUBPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* SUBPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUBPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUBPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUBPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUBPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUBPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUBPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUBPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MINPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5d 
	const uint8_t pOps[0xc] = {
		0xf, 0x5d, 0xc0,  /* MINPS xmm0, xmm0 */
		0xf, 0x5d, 0xc1,  /* MINPS xmm0, xmm1 */
		0xf, 0x5d, 0xc8,  /* MINPS xmm1, xmm0 */
		0xf, 0x5d, 0xc9   /* MINPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MINPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MINPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MINPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MINPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MINPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MINPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MINPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MINPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, DIVPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5e 
	const uint8_t pOps[0xc] = {
		0xf, 0x5e, 0xc0,  /* DIVPS xmm0, xmm0 */
		0xf, 0x5e, 0xc1,  /* DIVPS xmm0, xmm1 */
		0xf, 0x5e, 0xc8,  /* DIVPS xmm1, xmm0 */
		0xf, 0x5e, 0xc9   /* DIVPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* DIVPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::DIVPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIVPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::DIVPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIVPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::DIVPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIVPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::DIVPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MAXPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5f 
	const uint8_t pOps[0xc] = {
		0xf, 0x5f, 0xc0,  /* MAXPS xmm0, xmm0 */
		0xf, 0x5f, 0xc1,  /* MAXPS xmm0, xmm1 */
		0xf, 0x5f, 0xc8,  /* MAXPS xmm1, xmm0 */
		0xf, 0x5f, 0xc9   /* MAXPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MAXPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MAXPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MAXPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MAXPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MAXPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MAXPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MAXPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MAXPS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, PMOVMSKB_O_REG_32_MM_RM)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0xf 0xd7 
	const uint8_t pOps[0x2a] = {
		0xf, 0xd7, 0xc8,  /* PMOVMSKB ECX, mm0 */
		0xf, 0xd7, 0xc9,  /* PMOVMSKB ECX, mm1 */
		0xf, 0xd7, 0xd0,  /* PMOVMSKB EDX, mm0 */
		0xf, 0xd7, 0xd1,  /* PMOVMSKB EDX, mm1 */
		0xf, 0xd7, 0xd8,  /* PMOVMSKB EBX, mm0 */
		0xf, 0xd7, 0xd9,  /* PMOVMSKB EBX, mm1 */
		0xf, 0xd7, 0xe0,  /* PMOVMSKB ESP, mm0 */
		0xf, 0xd7, 0xe1,  /* PMOVMSKB ESP, mm1 */
		0xf, 0xd7, 0xe8,  /* PMOVMSKB EBP, mm0 */
		0xf, 0xd7, 0xe9,  /* PMOVMSKB EBP, mm1 */
		0xf, 0xd7, 0xf0,  /* PMOVMSKB ESI, mm0 */
		0xf, 0xd7, 0xf1,  /* PMOVMSKB ESI, mm1 */
		0xf, 0xd7, 0xf8,  /* PMOVMSKB EDI, mm0 */
		0xf, 0xd7, 0xf9   /* PMOVMSKB EDI, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2a, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0xe_sz, instructionCount);
	{
		/* PMOVMSKB ECX, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB ECX, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EDX, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EDX, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EBX, mm0 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EBX, mm1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB ESP, mm0 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB ESP, mm1 */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EBP, mm0 */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EBP, mm1 */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB ESI, mm0 */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB ESI, mm1 */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EDI, mm0 */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMOVMSKB EDI, mm1 */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::PMOVMSKB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, PMINUB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xda 
	const uint8_t pOps[0xc] = {
		0xf, 0xda, 0xc0,  /* PMINUB mm0, mm0 */
		0xf, 0xda, 0xc1,  /* PMINUB mm0, mm1 */
		0xf, 0xda, 0xc8,  /* PMINUB mm1, mm0 */
		0xf, 0xda, 0xc9   /* PMINUB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMINUB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMINUB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMINUB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMINUB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMINUB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMINUB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMINUB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMINUB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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


TEST(x64_SSE, PMAXUB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xde 
	const uint8_t pOps[0xc] = {
		0xf, 0xde, 0xc0,  /* PMAXUB mm0, mm0 */
		0xf, 0xde, 0xc1,  /* PMAXUB mm0, mm1 */
		0xf, 0xde, 0xc8,  /* PMAXUB mm1, mm0 */
		0xf, 0xde, 0xc9   /* PMAXUB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMAXUB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMAXUB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMAXUB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMAXUB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMAXUB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMAXUB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMAXUB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMAXUB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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


TEST(x64_SSE, PAVGB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe0 
	const uint8_t pOps[0xc] = {
		0xf, 0xe0, 0xc0,  /* PAVGB mm0, mm0 */
		0xf, 0xe0, 0xc1,  /* PAVGB mm0, mm1 */
		0xf, 0xe0, 0xc8,  /* PAVGB mm1, mm0 */
		0xf, 0xe0, 0xc9   /* PAVGB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PAVGB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PAVGB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PAVGB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PAVGB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PAVGB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PAVGB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PAVGB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PAVGB,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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


TEST(x64_SSE, PAVGW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe3 
	const uint8_t pOps[0xc] = {
		0xf, 0xe3, 0xc0,  /* PAVGW mm0, mm0 */
		0xf, 0xe3, 0xc1,  /* PAVGW mm0, mm1 */
		0xf, 0xe3, 0xc8,  /* PAVGW mm1, mm0 */
		0xf, 0xe3, 0xc9   /* PAVGW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PAVGW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PAVGW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PAVGW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PAVGW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PAVGW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PAVGW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PAVGW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PAVGW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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


TEST(x64_SSE, PMULHUW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe4 
	const uint8_t pOps[0xc] = {
		0xf, 0xe4, 0xc0,  /* PMULHUW mm0, mm0 */
		0xf, 0xe4, 0xc1,  /* PMULHUW mm0, mm1 */
		0xf, 0xe4, 0xc8,  /* PMULHUW mm1, mm0 */
		0xf, 0xe4, 0xc9   /* PMULHUW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULHUW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULHUW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMULHUW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULHUW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMULHUW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULHUW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMULHUW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULHUW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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


TEST(x64_SSE, MOVNTQ_O_MEM_64_MM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe7 
	const uint8_t pOps[0x10] = {
		0xf, 0xe7, 0x4, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTQ [rdx*4+0x12345678], mm0 */
		0xf, 0xe7, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12   /* MOVNTQ [rdx*4+0x12345678], mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOVNTQ [rdx*4+0x12345678], mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVNTQ,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTQ [rdx*4+0x12345678], mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVNTQ,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, PMINSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xea 
	const uint8_t pOps[0xc] = {
		0xf, 0xea, 0xc0,  /* PMINSW mm0, mm0 */
		0xf, 0xea, 0xc1,  /* PMINSW mm0, mm1 */
		0xf, 0xea, 0xc8,  /* PMINSW mm1, mm0 */
		0xf, 0xea, 0xc9   /* PMINSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMINSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMINSW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMINSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMINSW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMINSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMINSW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMINSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMINSW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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


TEST(x64_SSE, PMAXSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xee 
	const uint8_t pOps[0xc] = {
		0xf, 0xee, 0xc0,  /* PMAXSW mm0, mm0 */
		0xf, 0xee, 0xc1,  /* PMAXSW mm0, mm1 */
		0xf, 0xee, 0xc8,  /* PMAXSW mm1, mm0 */
		0xf, 0xee, 0xc9   /* PMAXSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMAXSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMAXSW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMAXSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMAXSW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMAXSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMAXSW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PMAXSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMAXSW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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


TEST(x64_SSE, PSADBW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf6 
	const uint8_t pOps[0xc] = {
		0xf, 0xf6, 0xc0,  /* PSADBW mm0, mm0 */
		0xf, 0xf6, 0xc1,  /* PSADBW mm0, mm1 */
		0xf, 0xf6, 0xc8,  /* PSADBW mm1, mm0 */
		0xf, 0xf6, 0xc9   /* PSADBW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSADBW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSADBW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PSADBW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSADBW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PSADBW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSADBW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* PSADBW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSADBW,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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


TEST(x64_SSE, MASKMOVQ_O_MM_MM_RM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf7 
	const uint8_t pOps[0xc] = {
		0xf, 0xf7, 0xc0,  /* MASKMOVQ mm0, mm0 */
		0xf, 0xf7, 0xc1,  /* MASKMOVQ mm0, mm1 */
		0xf, 0xf7, 0xc8,  /* MASKMOVQ mm1, mm0 */
		0xf, 0xf7, 0xc9   /* MASKMOVQ mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MASKMOVQ mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MASKMOVQ,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* MASKMOVQ mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MASKMOVQ,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* MASKMOVQ mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MASKMOVQ,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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
		/* MASKMOVQ mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MASKMOVQ,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x3,
			0x0,
			0x0,
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


TEST(x64_SSE, MOVSS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x10 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x10, 0xc0,  /* MOVSS xmm0, xmm0 */
		0xf3, 0xf, 0x10, 0xc1,  /* MOVSS xmm0, xmm1 */
		0xf3, 0xf, 0x10, 0xc8,  /* MOVSS xmm1, xmm0 */
		0xf3, 0xf, 0x10, 0xc9   /* MOVSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MOVSS_O_XMM_32_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x11 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x10, 0xc0,  /* MOVSS xmm0, xmm0 */
		0xf3, 0xf, 0x10, 0xc1,  /* MOVSS xmm0, xmm1 */
		0xf3, 0xf, 0x10, 0xc8,  /* MOVSS xmm1, xmm0 */
		0xf3, 0xf, 0x10, 0xc9   /* MOVSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, CVTSI2SS_O_XMM_RM_32_64)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0xf 0x2a 
	const uint8_t pOps[0x40] = {
		0xf3, 0xf, 0x2a, 0xc0,  /* CVTSI2SS xmm0, EAX */
		0xf3, 0xf, 0x2a, 0xc1,  /* CVTSI2SS xmm0, ECX */
		0xf3, 0xf, 0x2a, 0xc2,  /* CVTSI2SS xmm0, EDX */
		0xf3, 0xf, 0x2a, 0xc3,  /* CVTSI2SS xmm0, EBX */
		0xf3, 0xf, 0x2a, 0xc4,  /* CVTSI2SS xmm0, ESP */
		0xf3, 0xf, 0x2a, 0xc5,  /* CVTSI2SS xmm0, EBP */
		0xf3, 0xf, 0x2a, 0xc6,  /* CVTSI2SS xmm0, ESI */
		0xf3, 0xf, 0x2a, 0xc7,  /* CVTSI2SS xmm0, EDI */
		0xf3, 0xf, 0x2a, 0xc8,  /* CVTSI2SS xmm1, EAX */
		0xf3, 0xf, 0x2a, 0xc9,  /* CVTSI2SS xmm1, ECX */
		0xf3, 0xf, 0x2a, 0xca,  /* CVTSI2SS xmm1, EDX */
		0xf3, 0xf, 0x2a, 0xcb,  /* CVTSI2SS xmm1, EBX */
		0xf3, 0xf, 0x2a, 0xcc,  /* CVTSI2SS xmm1, ESP */
		0xf3, 0xf, 0x2a, 0xcd,  /* CVTSI2SS xmm1, EBP */
		0xf3, 0xf, 0x2a, 0xce,  /* CVTSI2SS xmm1, ESI */
		0xf3, 0xf, 0x2a, 0xcf   /* CVTSI2SS xmm1, EDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x40, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x10_sz, instructionCount);
	{
		/* CVTSI2SS xmm0, EAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm0, ECX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm0, EDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm0, EBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm0, ESP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm0, EBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm0, ESI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm0, EDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm1, EAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm1, ECX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm1, EDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm1, EBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm1, ESP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm1, EBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm1, ESI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SS xmm1, EDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, CVTTSS2SI_O_REG_32_64_XMM_32)
{
	Instruction instructions[0x20];
	size_t instructionCount;

	// ops: 0xf 0x2c 
	const uint8_t pOps[0x7e] = {
		0xf3, 0xf, 0x2c, 0xc8,  /* CVTTSS2SI ECX, xmm0 */
		0xf3, 0xf, 0x2c, 0xc9,  /* CVTTSS2SI ECX, xmm1 */
		0xf3, 0xf, 0x2c, 0xd0,  /* CVTTSS2SI EDX, xmm0 */
		0xf3, 0xf, 0x2c, 0xd1,  /* CVTTSS2SI EDX, xmm1 */
		0xf3, 0xf, 0x2c, 0xd8,  /* CVTTSS2SI EBX, xmm0 */
		0xf3, 0xf, 0x2c, 0xd9,  /* CVTTSS2SI EBX, xmm1 */
		0xf3, 0xf, 0x2c, 0xe0,  /* CVTTSS2SI ESP, xmm0 */
		0xf3, 0xf, 0x2c, 0xe1,  /* CVTTSS2SI ESP, xmm1 */
		0xf3, 0xf, 0x2c, 0xe8,  /* CVTTSS2SI EBP, xmm0 */
		0xf3, 0xf, 0x2c, 0xe9,  /* CVTTSS2SI EBP, xmm1 */
		0xf3, 0xf, 0x2c, 0xf0,  /* CVTTSS2SI ESI, xmm0 */
		0xf3, 0xf, 0x2c, 0xf1,  /* CVTTSS2SI ESI, xmm1 */
		0xf3, 0xf, 0x2c, 0xf8,  /* CVTTSS2SI EDI, xmm0 */
		0xf3, 0xf, 0x2c, 0xf9,  /* CVTTSS2SI EDI, xmm1 */
		0xf3, 0x48, 0xf, 0x2c, 0xc8,  /* CVTTSS2SI RCX, xmm0 */
		0xf3, 0x48, 0xf, 0x2c, 0xc9,  /* CVTTSS2SI RCX, xmm1 */
		0xf3, 0x48, 0xf, 0x2c, 0xd0,  /* CVTTSS2SI RDX, xmm0 */
		0xf3, 0x48, 0xf, 0x2c, 0xd1,  /* CVTTSS2SI RDX, xmm1 */
		0xf3, 0x48, 0xf, 0x2c, 0xd8,  /* CVTTSS2SI RBX, xmm0 */
		0xf3, 0x48, 0xf, 0x2c, 0xd9,  /* CVTTSS2SI RBX, xmm1 */
		0xf3, 0x48, 0xf, 0x2c, 0xe0,  /* CVTTSS2SI RSP, xmm0 */
		0xf3, 0x48, 0xf, 0x2c, 0xe1,  /* CVTTSS2SI RSP, xmm1 */
		0xf3, 0x48, 0xf, 0x2c, 0xe8,  /* CVTTSS2SI RBP, xmm0 */
		0xf3, 0x48, 0xf, 0x2c, 0xe9,  /* CVTTSS2SI RBP, xmm1 */
		0xf3, 0x48, 0xf, 0x2c, 0xf0,  /* CVTTSS2SI RSI, xmm0 */
		0xf3, 0x48, 0xf, 0x2c, 0xf1,  /* CVTTSS2SI RSI, xmm1 */
		0xf3, 0x48, 0xf, 0x2c, 0xf8,  /* CVTTSS2SI RDI, xmm0 */
		0xf3, 0x48, 0xf, 0x2c, 0xf9   /* CVTTSS2SI RDI, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x20, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1c_sz, instructionCount);
	{
		/* CVTTSS2SI ECX, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI ECX, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI EDX, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI EDX, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI EBX, xmm0 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI EBX, xmm1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI ESP, xmm0 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI ESP, xmm1 */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI EBP, xmm0 */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI EBP, xmm1 */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI ESI, xmm0 */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI ESI, xmm1 */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI EDI, xmm0 */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI EDI, xmm1 */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RCX, xmm0 */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RCX, xmm1 */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RDX, xmm0 */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RDX, xmm1 */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RBX, xmm0 */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RBX, xmm1 */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RSP, xmm0 */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RSP, xmm1 */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RBP, xmm0 */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RBP, xmm1 */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RSI, xmm0 */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RSI, xmm1 */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RDI, xmm0 */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSS2SI RDI, xmm1 */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CVTTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, CVTSS2SI_O_REG_32_64_XMM_32)
{
	Instruction instructions[0x20];
	size_t instructionCount;

	// ops: 0xf 0x2d 
	const uint8_t pOps[0x7e] = {
		0xf3, 0xf, 0x2d, 0xc8,  /* CVTSS2SI ECX, xmm0 */
		0xf3, 0xf, 0x2d, 0xc9,  /* CVTSS2SI ECX, xmm1 */
		0xf3, 0xf, 0x2d, 0xd0,  /* CVTSS2SI EDX, xmm0 */
		0xf3, 0xf, 0x2d, 0xd1,  /* CVTSS2SI EDX, xmm1 */
		0xf3, 0xf, 0x2d, 0xd8,  /* CVTSS2SI EBX, xmm0 */
		0xf3, 0xf, 0x2d, 0xd9,  /* CVTSS2SI EBX, xmm1 */
		0xf3, 0xf, 0x2d, 0xe0,  /* CVTSS2SI ESP, xmm0 */
		0xf3, 0xf, 0x2d, 0xe1,  /* CVTSS2SI ESP, xmm1 */
		0xf3, 0xf, 0x2d, 0xe8,  /* CVTSS2SI EBP, xmm0 */
		0xf3, 0xf, 0x2d, 0xe9,  /* CVTSS2SI EBP, xmm1 */
		0xf3, 0xf, 0x2d, 0xf0,  /* CVTSS2SI ESI, xmm0 */
		0xf3, 0xf, 0x2d, 0xf1,  /* CVTSS2SI ESI, xmm1 */
		0xf3, 0xf, 0x2d, 0xf8,  /* CVTSS2SI EDI, xmm0 */
		0xf3, 0xf, 0x2d, 0xf9,  /* CVTSS2SI EDI, xmm1 */
		0xf3, 0x48, 0xf, 0x2d, 0xc8,  /* CVTSS2SI RCX, xmm0 */
		0xf3, 0x48, 0xf, 0x2d, 0xc9,  /* CVTSS2SI RCX, xmm1 */
		0xf3, 0x48, 0xf, 0x2d, 0xd0,  /* CVTSS2SI RDX, xmm0 */
		0xf3, 0x48, 0xf, 0x2d, 0xd1,  /* CVTSS2SI RDX, xmm1 */
		0xf3, 0x48, 0xf, 0x2d, 0xd8,  /* CVTSS2SI RBX, xmm0 */
		0xf3, 0x48, 0xf, 0x2d, 0xd9,  /* CVTSS2SI RBX, xmm1 */
		0xf3, 0x48, 0xf, 0x2d, 0xe0,  /* CVTSS2SI RSP, xmm0 */
		0xf3, 0x48, 0xf, 0x2d, 0xe1,  /* CVTSS2SI RSP, xmm1 */
		0xf3, 0x48, 0xf, 0x2d, 0xe8,  /* CVTSS2SI RBP, xmm0 */
		0xf3, 0x48, 0xf, 0x2d, 0xe9,  /* CVTSS2SI RBP, xmm1 */
		0xf3, 0x48, 0xf, 0x2d, 0xf0,  /* CVTSS2SI RSI, xmm0 */
		0xf3, 0x48, 0xf, 0x2d, 0xf1,  /* CVTSS2SI RSI, xmm1 */
		0xf3, 0x48, 0xf, 0x2d, 0xf8,  /* CVTSS2SI RDI, xmm0 */
		0xf3, 0x48, 0xf, 0x2d, 0xf9   /* CVTSS2SI RDI, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x20, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1c_sz, instructionCount);
	{
		/* CVTSS2SI ECX, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI ECX, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI EDX, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI EDX, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI EBX, xmm0 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI EBX, xmm1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI ESP, xmm0 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI ESP, xmm1 */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI EBP, xmm0 */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI EBP, xmm1 */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI ESI, xmm0 */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI ESI, xmm1 */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI EDI, xmm0 */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI EDI, xmm1 */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RCX, xmm0 */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RCX, xmm1 */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RDX, xmm0 */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RDX, xmm1 */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RBX, xmm0 */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RBX, xmm1 */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RSP, xmm0 */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RSP, xmm1 */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RBP, xmm0 */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RBP, xmm1 */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RSI, xmm0 */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RSI, xmm1 */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RDI, xmm0 */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSS2SI RDI, xmm1 */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SI,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, SQRTSS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x51 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x51, 0xc0,  /* SQRTSS xmm0, xmm0 */
		0xf3, 0xf, 0x51, 0xc1,  /* SQRTSS xmm0, xmm1 */
		0xf3, 0xf, 0x51, 0xc8,  /* SQRTSS xmm1, xmm0 */
		0xf3, 0xf, 0x51, 0xc9   /* SQRTSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* SQRTSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SQRTSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SQRTSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SQRTSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SQRTSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SQRTSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SQRTSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SQRTSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, RSQRTSS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x52 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x52, 0xc0,  /* RSQRTSS xmm0, xmm0 */
		0xf3, 0xf, 0x52, 0xc1,  /* RSQRTSS xmm0, xmm1 */
		0xf3, 0xf, 0x52, 0xc8,  /* RSQRTSS xmm1, xmm0 */
		0xf3, 0xf, 0x52, 0xc9   /* RSQRTSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* RSQRTSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RSQRTSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RSQRTSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RSQRTSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RSQRTSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RSQRTSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RSQRTSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RSQRTSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, RCPSS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x53 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x53, 0xc0,  /* RCPSS xmm0, xmm0 */
		0xf3, 0xf, 0x53, 0xc1,  /* RCPSS xmm0, xmm1 */
		0xf3, 0xf, 0x53, 0xc8,  /* RCPSS xmm1, xmm0 */
		0xf3, 0xf, 0x53, 0xc9   /* RCPSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* RCPSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCPSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCPSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCPSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCPSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCPSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCPSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCPSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, ADDSS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x58 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x58, 0xc0,  /* ADDSS xmm0, xmm0 */
		0xf3, 0xf, 0x58, 0xc1,  /* ADDSS xmm0, xmm1 */
		0xf3, 0xf, 0x58, 0xc8,  /* ADDSS xmm1, xmm0 */
		0xf3, 0xf, 0x58, 0xc9   /* ADDSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ADDSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADDSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADDSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADDSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADDSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADDSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ADDSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADDSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MULSS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x59 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x59, 0xc0,  /* MULSS xmm0, xmm0 */
		0xf3, 0xf, 0x59, 0xc1,  /* MULSS xmm0, xmm1 */
		0xf3, 0xf, 0x59, 0xc8,  /* MULSS xmm1, xmm0 */
		0xf3, 0xf, 0x59, 0xc9   /* MULSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MULSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MULSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MULSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MULSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MULSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MULSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MULSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MULSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, SUBSS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5c 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x5c, 0xc0,  /* SUBSS xmm0, xmm0 */
		0xf3, 0xf, 0x5c, 0xc1,  /* SUBSS xmm0, xmm1 */
		0xf3, 0xf, 0x5c, 0xc8,  /* SUBSS xmm1, xmm0 */
		0xf3, 0xf, 0x5c, 0xc9   /* SUBSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* SUBSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUBSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUBSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUBSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUBSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUBSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUBSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUBSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MINSS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5d 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x5d, 0xc0,  /* MINSS xmm0, xmm0 */
		0xf3, 0xf, 0x5d, 0xc1,  /* MINSS xmm0, xmm1 */
		0xf3, 0xf, 0x5d, 0xc8,  /* MINSS xmm1, xmm0 */
		0xf3, 0xf, 0x5d, 0xc9   /* MINSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MINSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MINSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MINSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MINSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MINSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MINSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MINSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MINSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, DIVSS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5e 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x5e, 0xc0,  /* DIVSS xmm0, xmm0 */
		0xf3, 0xf, 0x5e, 0xc1,  /* DIVSS xmm0, xmm1 */
		0xf3, 0xf, 0x5e, 0xc8,  /* DIVSS xmm1, xmm0 */
		0xf3, 0xf, 0x5e, 0xc9   /* DIVSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* DIVSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::DIVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIVSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::DIVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIVSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::DIVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* DIVSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::DIVSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE, MAXSS_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5f 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x5f, 0xc0,  /* MAXSS xmm0, xmm0 */
		0xf3, 0xf, 0x5f, 0xc1,  /* MAXSS xmm0, xmm1 */
		0xf3, 0xf, 0x5f, 0xc8,  /* MAXSS xmm1, xmm0 */
		0xf3, 0xf, 0x5f, 0xc9   /* MAXSS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MAXSS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MAXSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MAXSS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MAXSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MAXSS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MAXSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MAXSS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MAXSS,
			FlowControl::NONE,
			InstructionSet::SSE,
			0x4,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, CVTPS2PD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5a 
	const uint8_t pOps[0xc] = {
		0xf, 0x5a, 0xc0,  /* CVTPS2PD xmm0, xmm0 */
		0xf, 0x5a, 0xc1,  /* CVTPS2PD xmm0, xmm1 */
		0xf, 0x5a, 0xc8,  /* CVTPS2PD xmm1, xmm0 */
		0xf, 0x5a, 0xc9   /* CVTPS2PD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTPS2PD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTPS2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPS2PD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTPS2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPS2PD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTPS2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTPS2PD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTPS2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, CVTDQ2PS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5b 
	const uint8_t pOps[0xc] = {
		0xf, 0x5b, 0xc0,  /* CVTDQ2PS xmm0, xmm0 */
		0xf, 0x5b, 0xc1,  /* CVTDQ2PS xmm0, xmm1 */
		0xf, 0x5b, 0xc8,  /* CVTDQ2PS xmm1, xmm0 */
		0xf, 0x5b, 0xc9   /* CVTDQ2PS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTDQ2PS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTDQ2PS,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTDQ2PS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTDQ2PS,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTDQ2PS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTDQ2PS,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTDQ2PS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTDQ2PS,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, MOVNTI_O_MEM_32_64_REG_32_64)
{
	Instruction instructions[0x20];
	size_t instructionCount;

	// ops: 0xf 0xc3 
	const uint8_t pOps[0xfc] = {
		0x67, 0xf, 0xc3, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], ECX */
		0x67, 0xf, 0xc3, 0x14, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], EDX */
		0x67, 0xf, 0xc3, 0x1c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], EBX */
		0x67, 0xf, 0xc3, 0x24, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], ESP */
		0x67, 0xf, 0xc3, 0x2c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], EBP */
		0x67, 0xf, 0xc3, 0x34, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], ESI */
		0x67, 0xf, 0xc3, 0x3c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], EDI */
		0x67, 0x48, 0xf, 0xc3, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], RCX */
		0x67, 0x48, 0xf, 0xc3, 0x14, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], RDX */
		0x67, 0x48, 0xf, 0xc3, 0x1c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], RBX */
		0x67, 0x48, 0xf, 0xc3, 0x24, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], RSP */
		0x67, 0x48, 0xf, 0xc3, 0x2c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], RBP */
		0x67, 0x48, 0xf, 0xc3, 0x34, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], RSI */
		0x67, 0x48, 0xf, 0xc3, 0x3c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [edx*4+0x12345678], RDI */
		0xf, 0xc3, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], ECX */
		0xf, 0xc3, 0x14, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], EDX */
		0xf, 0xc3, 0x1c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], EBX */
		0xf, 0xc3, 0x24, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], ESP */
		0xf, 0xc3, 0x2c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], EBP */
		0xf, 0xc3, 0x34, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], ESI */
		0xf, 0xc3, 0x3c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], EDI */
		0x48, 0xf, 0xc3, 0xc, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], RCX */
		0x48, 0xf, 0xc3, 0x14, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], RDX */
		0x48, 0xf, 0xc3, 0x1c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], RBX */
		0x48, 0xf, 0xc3, 0x24, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], RSP */
		0x48, 0xf, 0xc3, 0x2c, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], RBP */
		0x48, 0xf, 0xc3, 0x34, 0x95, 0x78, 0x56, 0x34, 0x12,  /* MOVNTI [rdx*4+0x12345678], RSI */
		0x48, 0xf, 0xc3, 0x3c, 0x95, 0x78, 0x56, 0x34, 0x12   /* MOVNTI [rdx*4+0x12345678], RDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xfc, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x20, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1c_sz, instructionCount);
	{
		/* MOVNTI [edx*4+0x12345678], ECX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], EDX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], EBX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], ESP */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], EBP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], ESI */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], EDI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], RCX */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0xa,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], RDX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0xa,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], RBX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0xa,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], RSP */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0xa,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], RBP */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0xa,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], RSI */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0xa,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [edx*4+0x12345678], RDI */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0xa,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], ECX */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], EDX */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], EBX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], ESP */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], EBP */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], ESI */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], EDI */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x8,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], RCX */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], RDX */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], RBX */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], RSP */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], RBP */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], RSI */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOVNTI [rdx*4+0x12345678], RDI */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOVNTI,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, PADDQ_O_XMM_XMM_64)
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

