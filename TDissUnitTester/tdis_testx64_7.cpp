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
			
TEST(x64_SSE2, CVTSI2SD_O_XMM_RM_32_64)
{
	Instruction instructions[0x10];
	size_t instructionCount;

	// ops: 0xf 0x2a 
	const uint8_t pOps[0x40] = {
		0xf2, 0xf, 0x2a, 0xc0,  /* CVTSI2SD xmm0, EAX */
		0xf2, 0xf, 0x2a, 0xc1,  /* CVTSI2SD xmm0, ECX */
		0xf2, 0xf, 0x2a, 0xc2,  /* CVTSI2SD xmm0, EDX */
		0xf2, 0xf, 0x2a, 0xc3,  /* CVTSI2SD xmm0, EBX */
		0xf2, 0xf, 0x2a, 0xc4,  /* CVTSI2SD xmm0, ESP */
		0xf2, 0xf, 0x2a, 0xc5,  /* CVTSI2SD xmm0, EBP */
		0xf2, 0xf, 0x2a, 0xc6,  /* CVTSI2SD xmm0, ESI */
		0xf2, 0xf, 0x2a, 0xc7,  /* CVTSI2SD xmm0, EDI */
		0xf2, 0xf, 0x2a, 0xc8,  /* CVTSI2SD xmm1, EAX */
		0xf2, 0xf, 0x2a, 0xc9,  /* CVTSI2SD xmm1, ECX */
		0xf2, 0xf, 0x2a, 0xca,  /* CVTSI2SD xmm1, EDX */
		0xf2, 0xf, 0x2a, 0xcb,  /* CVTSI2SD xmm1, EBX */
		0xf2, 0xf, 0x2a, 0xcc,  /* CVTSI2SD xmm1, ESP */
		0xf2, 0xf, 0x2a, 0xcd,  /* CVTSI2SD xmm1, EBP */
		0xf2, 0xf, 0x2a, 0xce,  /* CVTSI2SD xmm1, ESI */
		0xf2, 0xf, 0x2a, 0xcf   /* CVTSI2SD xmm1, EDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x40, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x10, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x10_sz, instructionCount);
	{
		/* CVTSI2SD xmm0, EAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm0, ECX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm0, EDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm0, EBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm0, ESP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm0, EBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm0, ESI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm0, EDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm1, EAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm1, ECX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm1, EDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm1, EBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm1, ESP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm1, EBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm1, ESI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSI2SD xmm1, EDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CVTSI2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, CVTTSD2SI_O_REG_32_64_XMM_64)
{
	Instruction instructions[0x20];
	size_t instructionCount;

	// ops: 0xf 0x2c 
	const uint8_t pOps[0x7e] = {
		0xf2, 0xf, 0x2c, 0xc8,  /* CVTTSD2SI ECX, xmm0 */
		0xf2, 0xf, 0x2c, 0xc9,  /* CVTTSD2SI ECX, xmm1 */
		0xf2, 0xf, 0x2c, 0xd0,  /* CVTTSD2SI EDX, xmm0 */
		0xf2, 0xf, 0x2c, 0xd1,  /* CVTTSD2SI EDX, xmm1 */
		0xf2, 0xf, 0x2c, 0xd8,  /* CVTTSD2SI EBX, xmm0 */
		0xf2, 0xf, 0x2c, 0xd9,  /* CVTTSD2SI EBX, xmm1 */
		0xf2, 0xf, 0x2c, 0xe0,  /* CVTTSD2SI ESP, xmm0 */
		0xf2, 0xf, 0x2c, 0xe1,  /* CVTTSD2SI ESP, xmm1 */
		0xf2, 0xf, 0x2c, 0xe8,  /* CVTTSD2SI EBP, xmm0 */
		0xf2, 0xf, 0x2c, 0xe9,  /* CVTTSD2SI EBP, xmm1 */
		0xf2, 0xf, 0x2c, 0xf0,  /* CVTTSD2SI ESI, xmm0 */
		0xf2, 0xf, 0x2c, 0xf1,  /* CVTTSD2SI ESI, xmm1 */
		0xf2, 0xf, 0x2c, 0xf8,  /* CVTTSD2SI EDI, xmm0 */
		0xf2, 0xf, 0x2c, 0xf9,  /* CVTTSD2SI EDI, xmm1 */
		0xf2, 0x48, 0xf, 0x2c, 0xc8,  /* CVTTSD2SI RCX, xmm0 */
		0xf2, 0x48, 0xf, 0x2c, 0xc9,  /* CVTTSD2SI RCX, xmm1 */
		0xf2, 0x48, 0xf, 0x2c, 0xd0,  /* CVTTSD2SI RDX, xmm0 */
		0xf2, 0x48, 0xf, 0x2c, 0xd1,  /* CVTTSD2SI RDX, xmm1 */
		0xf2, 0x48, 0xf, 0x2c, 0xd8,  /* CVTTSD2SI RBX, xmm0 */
		0xf2, 0x48, 0xf, 0x2c, 0xd9,  /* CVTTSD2SI RBX, xmm1 */
		0xf2, 0x48, 0xf, 0x2c, 0xe0,  /* CVTTSD2SI RSP, xmm0 */
		0xf2, 0x48, 0xf, 0x2c, 0xe1,  /* CVTTSD2SI RSP, xmm1 */
		0xf2, 0x48, 0xf, 0x2c, 0xe8,  /* CVTTSD2SI RBP, xmm0 */
		0xf2, 0x48, 0xf, 0x2c, 0xe9,  /* CVTTSD2SI RBP, xmm1 */
		0xf2, 0x48, 0xf, 0x2c, 0xf0,  /* CVTTSD2SI RSI, xmm0 */
		0xf2, 0x48, 0xf, 0x2c, 0xf1,  /* CVTTSD2SI RSI, xmm1 */
		0xf2, 0x48, 0xf, 0x2c, 0xf8,  /* CVTTSD2SI RDI, xmm0 */
		0xf2, 0x48, 0xf, 0x2c, 0xf9   /* CVTTSD2SI RDI, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x20, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1c_sz, instructionCount);
	{
		/* CVTTSD2SI ECX, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI ECX, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI EDX, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI EDX, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI EBX, xmm0 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI EBX, xmm1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI ESP, xmm0 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI ESP, xmm1 */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI EBP, xmm0 */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI EBP, xmm1 */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI ESI, xmm0 */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI ESI, xmm1 */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI EDI, xmm0 */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTSD2SI EDI, xmm1 */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
	{
		/* CVTTSD2SI RCX, xmm0 */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RCX, xmm1 */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RDX, xmm0 */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RDX, xmm1 */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RBX, xmm0 */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RBX, xmm1 */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RSP, xmm0 */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RSP, xmm1 */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RBP, xmm0 */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RBP, xmm1 */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RSI, xmm0 */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RSI, xmm1 */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RDI, xmm0 */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTTSD2SI RDI, xmm1 */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CVTTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, CVTSD2SI_O_REG_32_64_XMM_64)
{
	Instruction instructions[0x20];
	size_t instructionCount;

	// ops: 0xf 0x2d 
	const uint8_t pOps[0x7e] = {
		0xf2, 0xf, 0x2d, 0xc8,  /* CVTSD2SI ECX, xmm0 */
		0xf2, 0xf, 0x2d, 0xc9,  /* CVTSD2SI ECX, xmm1 */
		0xf2, 0xf, 0x2d, 0xd0,  /* CVTSD2SI EDX, xmm0 */
		0xf2, 0xf, 0x2d, 0xd1,  /* CVTSD2SI EDX, xmm1 */
		0xf2, 0xf, 0x2d, 0xd8,  /* CVTSD2SI EBX, xmm0 */
		0xf2, 0xf, 0x2d, 0xd9,  /* CVTSD2SI EBX, xmm1 */
		0xf2, 0xf, 0x2d, 0xe0,  /* CVTSD2SI ESP, xmm0 */
		0xf2, 0xf, 0x2d, 0xe1,  /* CVTSD2SI ESP, xmm1 */
		0xf2, 0xf, 0x2d, 0xe8,  /* CVTSD2SI EBP, xmm0 */
		0xf2, 0xf, 0x2d, 0xe9,  /* CVTSD2SI EBP, xmm1 */
		0xf2, 0xf, 0x2d, 0xf0,  /* CVTSD2SI ESI, xmm0 */
		0xf2, 0xf, 0x2d, 0xf1,  /* CVTSD2SI ESI, xmm1 */
		0xf2, 0xf, 0x2d, 0xf8,  /* CVTSD2SI EDI, xmm0 */
		0xf2, 0xf, 0x2d, 0xf9,  /* CVTSD2SI EDI, xmm1 */
		0xf2, 0x48, 0xf, 0x2d, 0xc8,  /* CVTSD2SI RCX, xmm0 */
		0xf2, 0x48, 0xf, 0x2d, 0xc9,  /* CVTSD2SI RCX, xmm1 */
		0xf2, 0x48, 0xf, 0x2d, 0xd0,  /* CVTSD2SI RDX, xmm0 */
		0xf2, 0x48, 0xf, 0x2d, 0xd1,  /* CVTSD2SI RDX, xmm1 */
		0xf2, 0x48, 0xf, 0x2d, 0xd8,  /* CVTSD2SI RBX, xmm0 */
		0xf2, 0x48, 0xf, 0x2d, 0xd9,  /* CVTSD2SI RBX, xmm1 */
		0xf2, 0x48, 0xf, 0x2d, 0xe0,  /* CVTSD2SI RSP, xmm0 */
		0xf2, 0x48, 0xf, 0x2d, 0xe1,  /* CVTSD2SI RSP, xmm1 */
		0xf2, 0x48, 0xf, 0x2d, 0xe8,  /* CVTSD2SI RBP, xmm0 */
		0xf2, 0x48, 0xf, 0x2d, 0xe9,  /* CVTSD2SI RBP, xmm1 */
		0xf2, 0x48, 0xf, 0x2d, 0xf0,  /* CVTSD2SI RSI, xmm0 */
		0xf2, 0x48, 0xf, 0x2d, 0xf1,  /* CVTSD2SI RSI, xmm1 */
		0xf2, 0x48, 0xf, 0x2d, 0xf8,  /* CVTSD2SI RDI, xmm0 */
		0xf2, 0x48, 0xf, 0x2d, 0xf9   /* CVTSD2SI RDI, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x7e, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x20, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1c_sz, instructionCount);
	{
		/* CVTSD2SI ECX, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI ECX, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI EDX, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI EDX, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI EBX, xmm0 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI EBX, xmm1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI ESP, xmm0 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI ESP, xmm1 */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI EBP, xmm0 */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI EBP, xmm1 */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI ESI, xmm0 */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI ESI, xmm1 */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI EDI, xmm0 */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SI EDI, xmm1 */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
	{
		/* CVTSD2SI RCX, xmm0 */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RCX, xmm1 */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RDX, xmm0 */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RDX, xmm1 */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RBX, xmm0 */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RBX, xmm1 */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RSP, xmm0 */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RSP, xmm1 */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RBP, xmm0 */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RBP, xmm1 */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RSI, xmm0 */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RSI, xmm1 */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RDI, xmm0 */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM0, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6c)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CVTSD2SI RDI, xmm1 */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SI,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::XMM1, 0x80, __FILE__, __LINE__); // set! (reg idx: 0x6d)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE2, SQRTSD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x51 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x51, 0xc0,  /* SQRTSD xmm0, xmm0 */
		0xf2, 0xf, 0x51, 0xc1,  /* SQRTSD xmm0, xmm1 */
		0xf2, 0xf, 0x51, 0xc8,  /* SQRTSD xmm1, xmm0 */
		0xf2, 0xf, 0x51, 0xc9   /* SQRTSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* SQRTSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SQRTSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* SQRTSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SQRTSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* SQRTSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SQRTSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* SQRTSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SQRTSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, ADDSD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x58 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x58, 0xc0,  /* ADDSD xmm0, xmm0 */
		0xf2, 0xf, 0x58, 0xc1,  /* ADDSD xmm0, xmm1 */
		0xf2, 0xf, 0x58, 0xc8,  /* ADDSD xmm1, xmm0 */
		0xf2, 0xf, 0x58, 0xc9   /* ADDSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ADDSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADDSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* ADDSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADDSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* ADDSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADDSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* ADDSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADDSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, MULSD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x59 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x59, 0xc0,  /* MULSD xmm0, xmm0 */
		0xf2, 0xf, 0x59, 0xc1,  /* MULSD xmm0, xmm1 */
		0xf2, 0xf, 0x59, 0xc8,  /* MULSD xmm1, xmm0 */
		0xf2, 0xf, 0x59, 0xc9   /* MULSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MULSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MULSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MULSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MULSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MULSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MULSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MULSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MULSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, CVTSD2SS_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5a 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x5a, 0xc0,  /* CVTSD2SS xmm0, xmm0 */
		0xf2, 0xf, 0x5a, 0xc1,  /* CVTSD2SS xmm0, xmm1 */
		0xf2, 0xf, 0x5a, 0xc8,  /* CVTSD2SS xmm1, xmm0 */
		0xf2, 0xf, 0x5a, 0xc9   /* CVTSD2SS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTSD2SS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SS,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SS,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SS,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSD2SS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTSD2SS,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, SUBSD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5c 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x5c, 0xc0,  /* SUBSD xmm0, xmm0 */
		0xf2, 0xf, 0x5c, 0xc1,  /* SUBSD xmm0, xmm1 */
		0xf2, 0xf, 0x5c, 0xc8,  /* SUBSD xmm1, xmm0 */
		0xf2, 0xf, 0x5c, 0xc9   /* SUBSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* SUBSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUBSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* SUBSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUBSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* SUBSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUBSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* SUBSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUBSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, MINSD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5d 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x5d, 0xc0,  /* MINSD xmm0, xmm0 */
		0xf2, 0xf, 0x5d, 0xc1,  /* MINSD xmm0, xmm1 */
		0xf2, 0xf, 0x5d, 0xc8,  /* MINSD xmm1, xmm0 */
		0xf2, 0xf, 0x5d, 0xc9   /* MINSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MINSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MINSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MINSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MINSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MINSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MINSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MINSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MINSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, DIVSD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5e 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x5e, 0xc0,  /* DIVSD xmm0, xmm0 */
		0xf2, 0xf, 0x5e, 0xc1,  /* DIVSD xmm0, xmm1 */
		0xf2, 0xf, 0x5e, 0xc8,  /* DIVSD xmm1, xmm0 */
		0xf2, 0xf, 0x5e, 0xc9   /* DIVSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* DIVSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::DIVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* DIVSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::DIVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* DIVSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::DIVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* DIVSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::DIVSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, MAXSD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5f 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x5f, 0xc0,  /* MAXSD xmm0, xmm0 */
		0xf2, 0xf, 0x5f, 0xc1,  /* MAXSD xmm0, xmm1 */
		0xf2, 0xf, 0x5f, 0xc8,  /* MAXSD xmm1, xmm0 */
		0xf2, 0xf, 0x5f, 0xc9   /* MAXSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MAXSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MAXSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MAXSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MAXSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MAXSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MAXSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MAXSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MAXSD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, MOVDQ2Q_O_MM_XMM_RM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd6 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0xd6, 0xc0,  /* MOVDQ2Q mm0, xmm0 */
		0xf2, 0xf, 0xd6, 0xc1,  /* MOVDQ2Q mm0, xmm1 */
		0xf2, 0xf, 0xd6, 0xc8,  /* MOVDQ2Q mm1, xmm0 */
		0xf2, 0xf, 0xd6, 0xc9   /* MOVDQ2Q mm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVDQ2Q mm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVDQ2Q,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVDQ2Q mm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVDQ2Q,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVDQ2Q mm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVDQ2Q,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVDQ2Q mm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVDQ2Q,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, CVTPD2DQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe6 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0xe6, 0xc0,  /* CVTPD2DQ xmm0, xmm0 */
		0xf2, 0xf, 0xe6, 0xc1,  /* CVTPD2DQ xmm0, xmm1 */
		0xf2, 0xf, 0xe6, 0xc8,  /* CVTPD2DQ xmm1, xmm0 */
		0xf2, 0xf, 0xe6, 0xc9   /* CVTPD2DQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTPD2DQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTPD2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTPD2DQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTPD2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTPD2DQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTPD2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTPD2DQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTPD2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, CVTSS2SD_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5a 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x5a, 0xc0,  /* CVTSS2SD xmm0, xmm0 */
		0xf3, 0xf, 0x5a, 0xc1,  /* CVTSS2SD xmm0, xmm1 */
		0xf3, 0xf, 0x5a, 0xc8,  /* CVTSS2SD xmm1, xmm0 */
		0xf3, 0xf, 0x5a, 0xc9   /* CVTSS2SD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTSS2SD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSS2SD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSS2SD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTSS2SD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTSS2SD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, CVTTPS2DQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x5b 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x5b, 0xc0,  /* CVTTPS2DQ xmm0, xmm0 */
		0xf3, 0xf, 0x5b, 0xc1,  /* CVTTPS2DQ xmm0, xmm1 */
		0xf3, 0xf, 0x5b, 0xc8,  /* CVTTPS2DQ xmm1, xmm0 */
		0xf3, 0xf, 0x5b, 0xc9   /* CVTTPS2DQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTTPS2DQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTTPS2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTPS2DQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTTPS2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTPS2DQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTTPS2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTTPS2DQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTTPS2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, MOVDQU_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x6f 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x6f, 0xc0,  /* MOVDQU xmm0, xmm0 */
		0xf3, 0xf, 0x6f, 0xc1,  /* MOVDQU xmm0, xmm1 */
		0xf3, 0xf, 0x6f, 0xc8,  /* MOVDQU xmm1, xmm0 */
		0xf3, 0xf, 0x6f, 0xc9   /* MOVDQU xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVDQU xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVDQU xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVDQU xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVDQU xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, MOVQ_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x7e 
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


TEST(x64_SSE2, MOVDQU_O_XMM_128_XMM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x7f 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x6f, 0xc0,  /* MOVDQU xmm0, xmm0 */
		0xf3, 0xf, 0x6f, 0xc1,  /* MOVDQU xmm0, xmm1 */
		0xf3, 0xf, 0x6f, 0xc8,  /* MOVDQU xmm1, xmm0 */
		0xf3, 0xf, 0x6f, 0xc9   /* MOVDQU xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVDQU xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVDQU xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVDQU xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVDQU xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVDQU,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, MOVQ2DQ_O_XMM_MM_RM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd6 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0xd6, 0xc0,  /* MOVQ2DQ xmm0, mm0 */
		0xf3, 0xf, 0xd6, 0xc1,  /* MOVQ2DQ xmm0, mm1 */
		0xf3, 0xf, 0xd6, 0xc8,  /* MOVQ2DQ xmm1, mm0 */
		0xf3, 0xf, 0xd6, 0xc9   /* MOVQ2DQ xmm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVQ2DQ xmm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVQ2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVQ2DQ xmm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVQ2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVQ2DQ xmm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVQ2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* MOVQ2DQ xmm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVQ2DQ,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE2, CVTDQ2PD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe6 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0xe6, 0xc0,  /* CVTDQ2PD xmm0, xmm0 */
		0xf3, 0xf, 0xe6, 0xc1,  /* CVTDQ2PD xmm0, xmm1 */
		0xf3, 0xf, 0xe6, 0xc8,  /* CVTDQ2PD xmm1, xmm0 */
		0xf3, 0xf, 0xe6, 0xc9   /* CVTDQ2PD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* CVTDQ2PD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CVTDQ2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTDQ2PD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CVTDQ2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTDQ2PD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CVTDQ2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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
		/* CVTDQ2PD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CVTDQ2PD,
			FlowControl::NONE,
			InstructionSet::SSE2,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE3, HADDPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x7c 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x7c, 0xc0,  /* HADDPD xmm0, xmm0 */
		0x66, 0xf, 0x7c, 0xc1,  /* HADDPD xmm0, xmm1 */
		0x66, 0xf, 0x7c, 0xc8,  /* HADDPD xmm1, xmm0 */
		0x66, 0xf, 0x7c, 0xc9   /* HADDPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* HADDPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::HADDPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HADDPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::HADDPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HADDPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::HADDPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HADDPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::HADDPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE3, HSUBPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x7d 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0x7d, 0xc0,  /* HSUBPD xmm0, xmm0 */
		0x66, 0xf, 0x7d, 0xc1,  /* HSUBPD xmm0, xmm1 */
		0x66, 0xf, 0x7d, 0xc8,  /* HSUBPD xmm1, xmm0 */
		0x66, 0xf, 0x7d, 0xc9   /* HSUBPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* HSUBPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::HSUBPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HSUBPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::HSUBPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HSUBPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::HSUBPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HSUBPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::HSUBPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE3, ADDSUBPD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd0 
	const uint8_t pOps[0x10] = {
		0x66, 0xf, 0xd0, 0xc0,  /* ADDSUBPD xmm0, xmm0 */
		0x66, 0xf, 0xd0, 0xc1,  /* ADDSUBPD xmm0, xmm1 */
		0x66, 0xf, 0xd0, 0xc8,  /* ADDSUBPD xmm1, xmm0 */
		0x66, 0xf, 0xd0, 0xc9   /* ADDSUBPD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ADDSUBPD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADDSUBPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* ADDSUBPD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADDSUBPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* ADDSUBPD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADDSUBPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* ADDSUBPD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADDSUBPD,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE3, MOVDDUP_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x12 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x12, 0xc0,  /* MOVDDUP xmm0, xmm0 */
		0xf2, 0xf, 0x12, 0xc1,  /* MOVDDUP xmm0, xmm1 */
		0xf2, 0xf, 0x12, 0xc8,  /* MOVDDUP xmm1, xmm0 */
		0xf2, 0xf, 0x12, 0xc9   /* MOVDDUP xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVDDUP xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVDDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* MOVDDUP xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVDDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* MOVDDUP xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVDDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* MOVDDUP xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVDDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE3, MOVSLDUP_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x12 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x12, 0xc0,  /* MOVSLDUP xmm0, xmm0 */
		0xf3, 0xf, 0x12, 0xc1,  /* MOVSLDUP xmm0, xmm1 */
		0xf3, 0xf, 0x12, 0xc8,  /* MOVSLDUP xmm1, xmm0 */
		0xf3, 0xf, 0x12, 0xc9   /* MOVSLDUP xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVSLDUP xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVSLDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* MOVSLDUP xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVSLDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* MOVSLDUP xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVSLDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* MOVSLDUP xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVSLDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE3, HADDPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x7c 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x7c, 0xc0,  /* HADDPS xmm0, xmm0 */
		0xf2, 0xf, 0x7c, 0xc1,  /* HADDPS xmm0, xmm1 */
		0xf2, 0xf, 0x7c, 0xc8,  /* HADDPS xmm1, xmm0 */
		0xf2, 0xf, 0x7c, 0xc9   /* HADDPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* HADDPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::HADDPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HADDPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::HADDPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HADDPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::HADDPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HADDPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::HADDPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE3, HSUBPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x7d 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0x7d, 0xc0,  /* HSUBPS xmm0, xmm0 */
		0xf2, 0xf, 0x7d, 0xc1,  /* HSUBPS xmm0, xmm1 */
		0xf2, 0xf, 0x7d, 0xc8,  /* HSUBPS xmm1, xmm0 */
		0xf2, 0xf, 0x7d, 0xc9   /* HSUBPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* HSUBPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::HSUBPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HSUBPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::HSUBPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HSUBPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::HSUBPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* HSUBPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::HSUBPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE3, ADDSUBPS_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd0 
	const uint8_t pOps[0x10] = {
		0xf2, 0xf, 0xd0, 0xc0,  /* ADDSUBPS xmm0, xmm0 */
		0xf2, 0xf, 0xd0, 0xc1,  /* ADDSUBPS xmm0, xmm1 */
		0xf2, 0xf, 0xd0, 0xc8,  /* ADDSUBPS xmm1, xmm0 */
		0xf2, 0xf, 0xd0, 0xc9   /* ADDSUBPS xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* ADDSUBPS xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ADDSUBPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* ADDSUBPS xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ADDSUBPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* ADDSUBPS xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ADDSUBPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* ADDSUBPS xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ADDSUBPS,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSE3, MOVSHDUP_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x16 
	const uint8_t pOps[0x10] = {
		0xf3, 0xf, 0x16, 0xc0,  /* MOVSHDUP xmm0, xmm0 */
		0xf3, 0xf, 0x16, 0xc1,  /* MOVSHDUP xmm0, xmm1 */
		0xf3, 0xf, 0x16, 0xc8,  /* MOVSHDUP xmm1, xmm0 */
		0xf3, 0xf, 0x16, 0xc9   /* MOVSHDUP xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* MOVSHDUP xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVSHDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* MOVSHDUP xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOVSHDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* MOVSHDUP xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOVSHDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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
		/* MOVSHDUP xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOVSHDUP,
			FlowControl::NONE,
			InstructionSet::SSE3,
			0x4,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PSHUFB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x0 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x0, 0xc0,  /* PSHUFB mm0, mm0 */
		0xf, 0x38, 0x0, 0xc1,  /* PSHUFB mm0, mm1 */
		0xf, 0x38, 0x0, 0xc8,  /* PSHUFB mm1, mm0 */
		0xf, 0x38, 0x0, 0xc9   /* PSHUFB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSHUFB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSHUFB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSHUFB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSHUFB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSHUFB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSHUFB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSHUFB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSHUFB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PHADDW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x1 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x1, 0xc0,  /* PHADDW mm0, mm0 */
		0xf, 0x38, 0x1, 0xc1,  /* PHADDW mm0, mm1 */
		0xf, 0x38, 0x1, 0xc8,  /* PHADDW mm1, mm0 */
		0xf, 0x38, 0x1, 0xc9   /* PHADDW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHADDW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHADDW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHADDW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHADDW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHADDW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHADDW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHADDW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHADDW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PHADDD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x2 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x2, 0xc0,  /* PHADDD mm0, mm0 */
		0xf, 0x38, 0x2, 0xc1,  /* PHADDD mm0, mm1 */
		0xf, 0x38, 0x2, 0xc8,  /* PHADDD mm1, mm0 */
		0xf, 0x38, 0x2, 0xc9   /* PHADDD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHADDD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHADDD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHADDD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHADDD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHADDD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHADDD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHADDD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHADDD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PHADDSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x3 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x3, 0xc0,  /* PHADDSW mm0, mm0 */
		0xf, 0x38, 0x3, 0xc1,  /* PHADDSW mm0, mm1 */
		0xf, 0x38, 0x3, 0xc8,  /* PHADDSW mm1, mm0 */
		0xf, 0x38, 0x3, 0xc9   /* PHADDSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHADDSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHADDSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHADDSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHADDSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHADDSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHADDSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHADDSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHADDSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PMADDUBSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x4 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x4, 0xc0,  /* PMADDUBSW mm0, mm0 */
		0xf, 0x38, 0x4, 0xc1,  /* PMADDUBSW mm0, mm1 */
		0xf, 0x38, 0x4, 0xc8,  /* PMADDUBSW mm1, mm0 */
		0xf, 0x38, 0x4, 0xc9   /* PMADDUBSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMADDUBSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMADDUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMADDUBSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMADDUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMADDUBSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMADDUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMADDUBSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMADDUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PHSUBW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x5 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x5, 0xc0,  /* PHSUBW mm0, mm0 */
		0xf, 0x38, 0x5, 0xc1,  /* PHSUBW mm0, mm1 */
		0xf, 0x38, 0x5, 0xc8,  /* PHSUBW mm1, mm0 */
		0xf, 0x38, 0x5, 0xc9   /* PHSUBW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHSUBW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHSUBW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHSUBW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHSUBW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHSUBW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHSUBW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHSUBW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHSUBW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PHSUBD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x6 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x6, 0xc0,  /* PHSUBD mm0, mm0 */
		0xf, 0x38, 0x6, 0xc1,  /* PHSUBD mm0, mm1 */
		0xf, 0x38, 0x6, 0xc8,  /* PHSUBD mm1, mm0 */
		0xf, 0x38, 0x6, 0xc9   /* PHSUBD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHSUBD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHSUBD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHSUBD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHSUBD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHSUBD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHSUBD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHSUBD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHSUBD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PHSUBSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x7 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x7, 0xc0,  /* PHSUBSW mm0, mm0 */
		0xf, 0x38, 0x7, 0xc1,  /* PHSUBSW mm0, mm1 */
		0xf, 0x38, 0x7, 0xc8,  /* PHSUBSW mm1, mm0 */
		0xf, 0x38, 0x7, 0xc9   /* PHSUBSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHSUBSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHSUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHSUBSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHSUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHSUBSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHSUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PHSUBSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHSUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PSIGNB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x8 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x8, 0xc0,  /* PSIGNB mm0, mm0 */
		0xf, 0x38, 0x8, 0xc1,  /* PSIGNB mm0, mm1 */
		0xf, 0x38, 0x8, 0xc8,  /* PSIGNB mm1, mm0 */
		0xf, 0x38, 0x8, 0xc9   /* PSIGNB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSIGNB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSIGNB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSIGNB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSIGNB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSIGNB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSIGNB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSIGNB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSIGNB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PSIGNW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x9 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x9, 0xc0,  /* PSIGNW mm0, mm0 */
		0xf, 0x38, 0x9, 0xc1,  /* PSIGNW mm0, mm1 */
		0xf, 0x38, 0x9, 0xc8,  /* PSIGNW mm1, mm0 */
		0xf, 0x38, 0x9, 0xc9   /* PSIGNW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSIGNW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSIGNW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSIGNW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSIGNW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSIGNW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSIGNW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSIGNW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSIGNW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PSIGND_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0xa 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0xa, 0xc0,  /* PSIGND mm0, mm0 */
		0xf, 0x38, 0xa, 0xc1,  /* PSIGND mm0, mm1 */
		0xf, 0x38, 0xa, 0xc8,  /* PSIGND mm1, mm0 */
		0xf, 0x38, 0xa, 0xc9   /* PSIGND mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSIGND mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSIGND,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSIGND mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSIGND,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSIGND mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSIGND,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSIGND mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSIGND,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PMULHRSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0xb 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0xb, 0xc0,  /* PMULHRSW mm0, mm0 */
		0xf, 0x38, 0xb, 0xc1,  /* PMULHRSW mm0, mm1 */
		0xf, 0x38, 0xb, 0xc8,  /* PMULHRSW mm1, mm0 */
		0xf, 0x38, 0xb, 0xc9   /* PMULHRSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULHRSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULHRSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHRSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULHRSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHRSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULHRSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHRSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULHRSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PABSB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x1c 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x1c, 0xc0,  /* PABSB mm0, mm0 */
		0xf, 0x38, 0x1c, 0xc1,  /* PABSB mm0, mm1 */
		0xf, 0x38, 0x1c, 0xc8,  /* PABSB mm1, mm0 */
		0xf, 0x38, 0x1c, 0xc9   /* PABSB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PABSB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PABSB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PABSB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PABSB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PABSB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PABSB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PABSB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PABSB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PABSW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x1d 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x1d, 0xc0,  /* PABSW mm0, mm0 */
		0xf, 0x38, 0x1d, 0xc1,  /* PABSW mm0, mm1 */
		0xf, 0x38, 0x1d, 0xc8,  /* PABSW mm1, mm0 */
		0xf, 0x38, 0x1d, 0xc9   /* PABSW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PABSW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PABSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PABSW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PABSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PABSW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PABSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PABSW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PABSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PABSD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x1e 
	const uint8_t pOps[0x10] = {
		0xf, 0x38, 0x1e, 0xc0,  /* PABSD mm0, mm0 */
		0xf, 0x38, 0x1e, 0xc1,  /* PABSD mm0, mm1 */
		0xf, 0x38, 0x1e, 0xc8,  /* PABSD mm1, mm0 */
		0xf, 0x38, 0x1e, 0xc9   /* PABSD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PABSD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PABSD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PABSD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PABSD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PABSD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PABSD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PABSD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PABSD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSSE3, PSHUFB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x0 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x0, 0xc0,  /* PSHUFB xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x0, 0xc1,  /* PSHUFB xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x0, 0xc8,  /* PSHUFB xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x0, 0xc9   /* PSHUFB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSHUFB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSHUFB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSHUFB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSHUFB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSHUFB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSHUFB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSHUFB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSHUFB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PHADDW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x1 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x1, 0xc0,  /* PHADDW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x1, 0xc1,  /* PHADDW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x1, 0xc8,  /* PHADDW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x1, 0xc9   /* PHADDW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHADDW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHADDW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHADDW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHADDW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHADDW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHADDW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHADDW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHADDW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PHADDD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x2 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x2, 0xc0,  /* PHADDD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x2, 0xc1,  /* PHADDD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x2, 0xc8,  /* PHADDD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x2, 0xc9   /* PHADDD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHADDD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHADDD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHADDD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHADDD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHADDD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHADDD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHADDD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHADDD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PHADDSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x3 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x3, 0xc0,  /* PHADDSW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x3, 0xc1,  /* PHADDSW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x3, 0xc8,  /* PHADDSW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x3, 0xc9   /* PHADDSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHADDSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHADDSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHADDSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHADDSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHADDSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHADDSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHADDSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHADDSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PMADDUBSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x4 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x4, 0xc0,  /* PMADDUBSW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x4, 0xc1,  /* PMADDUBSW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x4, 0xc8,  /* PMADDUBSW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x4, 0xc9   /* PMADDUBSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMADDUBSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMADDUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PMADDUBSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMADDUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PMADDUBSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMADDUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PMADDUBSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMADDUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PHSUBW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x5 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x5, 0xc0,  /* PHSUBW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x5, 0xc1,  /* PHSUBW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x5, 0xc8,  /* PHSUBW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x5, 0xc9   /* PHSUBW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHSUBW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHSUBW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHSUBW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHSUBW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHSUBW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHSUBW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHSUBW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHSUBW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PHSUBD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x6 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x6, 0xc0,  /* PHSUBD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x6, 0xc1,  /* PHSUBD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x6, 0xc8,  /* PHSUBD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x6, 0xc9   /* PHSUBD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHSUBD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHSUBD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHSUBD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHSUBD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHSUBD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHSUBD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHSUBD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHSUBD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PHSUBSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x7 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x7, 0xc0,  /* PHSUBSW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x7, 0xc1,  /* PHSUBSW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x7, 0xc8,  /* PHSUBSW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x7, 0xc9   /* PHSUBSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PHSUBSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PHSUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHSUBSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PHSUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHSUBSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PHSUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PHSUBSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PHSUBSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PSIGNB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x8 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x8, 0xc0,  /* PSIGNB xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x8, 0xc1,  /* PSIGNB xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x8, 0xc8,  /* PSIGNB xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x8, 0xc9   /* PSIGNB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSIGNB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSIGNB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSIGNB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSIGNB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSIGNB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSIGNB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSIGNB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSIGNB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PSIGNW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x9 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x9, 0xc0,  /* PSIGNW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x9, 0xc1,  /* PSIGNW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x9, 0xc8,  /* PSIGNW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x9, 0xc9   /* PSIGNW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSIGNW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSIGNW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSIGNW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSIGNW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSIGNW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSIGNW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSIGNW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSIGNW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PSIGND_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0xa 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0xa, 0xc0,  /* PSIGND xmm0, xmm0 */
		0x66, 0xf, 0x38, 0xa, 0xc1,  /* PSIGND xmm0, xmm1 */
		0x66, 0xf, 0x38, 0xa, 0xc8,  /* PSIGND xmm1, xmm0 */
		0x66, 0xf, 0x38, 0xa, 0xc9   /* PSIGND xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSIGND xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSIGND,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSIGND xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSIGND,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSIGND xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSIGND,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PSIGND xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSIGND,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PMULHRSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0xb 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0xb, 0xc0,  /* PMULHRSW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0xb, 0xc1,  /* PMULHRSW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0xb, 0xc8,  /* PMULHRSW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0xb, 0xc9   /* PMULHRSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULHRSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULHRSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PMULHRSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULHRSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PMULHRSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULHRSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PMULHRSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULHRSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PABSB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x1c 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x1c, 0xc0,  /* PABSB xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x1c, 0xc1,  /* PABSB xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x1c, 0xc8,  /* PABSB xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x1c, 0xc9   /* PABSB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PABSB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PABSB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PABSB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PABSB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PABSB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PABSB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PABSB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PABSB,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PABSW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x1d 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x1d, 0xc0,  /* PABSW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x1d, 0xc1,  /* PABSW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x1d, 0xc8,  /* PABSW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x1d, 0xc9   /* PABSW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PABSW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PABSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PABSW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PABSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PABSW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PABSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PABSW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PABSW,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSSE3, PABSD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x1e 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x1e, 0xc0,  /* PABSD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x1e, 0xc1,  /* PABSD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x1e, 0xc8,  /* PABSD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x1e, 0xc9   /* PABSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PABSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PABSD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PABSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PABSD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PABSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PABSD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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
		/* PABSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PABSD,
			FlowControl::NONE,
			InstructionSet::SSSE3,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMAXSB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x3c 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x3c, 0xc0,  /* PMAXSB xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x3c, 0xc1,  /* PMAXSB xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x3c, 0xc8,  /* PMAXSB xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x3c, 0xc9   /* PMAXSB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMAXSB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMAXSB,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXSB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMAXSB,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXSB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMAXSB,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXSB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMAXSB,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMAXSD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x3d 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x3d, 0xc0,  /* PMAXSD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x3d, 0xc1,  /* PMAXSD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x3d, 0xc8,  /* PMAXSD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x3d, 0xc9   /* PMAXSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMAXSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMAXSD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMAXSD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMAXSD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMAXSD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMAXUD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x3f 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x3f, 0xc0,  /* PMAXUD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x3f, 0xc1,  /* PMAXUD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x3f, 0xc8,  /* PMAXUD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x3f, 0xc9   /* PMAXUD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMAXUD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMAXUD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXUD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMAXUD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXUD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMAXUD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXUD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMAXUD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMAXUW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x3e 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x3e, 0xc0,  /* PMAXUW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x3e, 0xc1,  /* PMAXUW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x3e, 0xc8,  /* PMAXUW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x3e, 0xc9   /* PMAXUW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMAXUW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMAXUW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXUW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMAXUW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXUW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMAXUW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMAXUW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMAXUW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMINSB_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x38 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x38, 0xc0,  /* PMINSB xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x38, 0xc1,  /* PMINSB xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x38, 0xc8,  /* PMINSB xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x38, 0xc9   /* PMINSB xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMINSB xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMINSB,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINSB xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMINSB,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINSB xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMINSB,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINSB xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMINSB,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMINSD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x39 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x39, 0xc0,  /* PMINSD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x39, 0xc1,  /* PMINSD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x39, 0xc8,  /* PMINSD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x39, 0xc9   /* PMINSD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMINSD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMINSD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINSD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMINSD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINSD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMINSD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINSD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMINSD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMINUD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x3b 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x3b, 0xc0,  /* PMINUD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x3b, 0xc1,  /* PMINUD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x3b, 0xc8,  /* PMINUD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x3b, 0xc9   /* PMINUD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMINUD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMINUD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINUD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMINUD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINUD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMINUD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINUD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMINUD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMINUW_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x3a 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x3a, 0xc0,  /* PMINUW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x3a, 0xc1,  /* PMINUW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x3a, 0xc8,  /* PMINUW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x3a, 0xc9   /* PMINUW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMINUW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMINUW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINUW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMINUW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINUW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMINUW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMINUW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMINUW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVSXBW_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x20 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x20, 0xc0,  /* PMOVSXBW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x20, 0xc1,  /* PMOVSXBW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x20, 0xc8,  /* PMOVSXBW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x20, 0xc9   /* PMOVSXBW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVSXBW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXBW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXBW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXBW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVSXBD_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x21 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x21, 0xc0,  /* PMOVSXBD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x21, 0xc1,  /* PMOVSXBD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x21, 0xc8,  /* PMOVSXBD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x21, 0xc9   /* PMOVSXBD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVSXBD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXBD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXBD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXBD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVSXBQ_O_XMM_XMM_16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x22 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x22, 0xc0,  /* PMOVSXBQ xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x22, 0xc1,  /* PMOVSXBQ xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x22, 0xc8,  /* PMOVSXBQ xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x22, 0xc9   /* PMOVSXBQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVSXBQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXBQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXBQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXBQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVSXBQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVSXWD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x23 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x23, 0xc0,  /* PMOVSXWD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x23, 0xc1,  /* PMOVSXWD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x23, 0xc8,  /* PMOVSXWD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x23, 0xc9   /* PMOVSXWD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVSXWD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVSXWD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXWD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVSXWD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXWD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVSXWD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXWD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVSXWD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVSXWQ_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x24 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x24, 0xc0,  /* PMOVSXWQ xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x24, 0xc1,  /* PMOVSXWQ xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x24, 0xc8,  /* PMOVSXWQ xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x24, 0xc9   /* PMOVSXWQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVSXWQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVSXWQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXWQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVSXWQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXWQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVSXWQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXWQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVSXWQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVSXDQ_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x25 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x25, 0xc0,  /* PMOVSXDQ xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x25, 0xc1,  /* PMOVSXDQ xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x25, 0xc8,  /* PMOVSXDQ xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x25, 0xc9   /* PMOVSXDQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVSXDQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVSXDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXDQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVSXDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXDQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVSXDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVSXDQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVSXDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVZXBW_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x30 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x30, 0xc0,  /* PMOVZXBW xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x30, 0xc1,  /* PMOVZXBW xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x30, 0xc8,  /* PMOVZXBW xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x30, 0xc9   /* PMOVZXBW xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVZXBW xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXBW xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXBW xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXBW xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBW,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVZXBD_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x31 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x31, 0xc0,  /* PMOVZXBD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x31, 0xc1,  /* PMOVZXBD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x31, 0xc8,  /* PMOVZXBD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x31, 0xc9   /* PMOVZXBD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVZXBD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXBD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXBD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXBD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVZXBQ_O_XMM_XMM_16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x32 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x32, 0xc0,  /* PMOVZXBQ xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x32, 0xc1,  /* PMOVZXBQ xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x32, 0xc8,  /* PMOVZXBQ xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x32, 0xc9   /* PMOVZXBQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVZXBQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXBQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXBQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXBQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVZXBQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVZXWD_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x33 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x33, 0xc0,  /* PMOVZXWD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x33, 0xc1,  /* PMOVZXWD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x33, 0xc8,  /* PMOVZXWD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x33, 0xc9   /* PMOVZXWD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVZXWD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVZXWD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXWD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVZXWD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXWD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVZXWD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXWD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVZXWD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVZXWQ_O_XMM_XMM_32)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x34 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x34, 0xc0,  /* PMOVZXWQ xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x34, 0xc1,  /* PMOVZXWQ xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x34, 0xc8,  /* PMOVZXWQ xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x34, 0xc9   /* PMOVZXWQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVZXWQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVZXWQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXWQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVZXWQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXWQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVZXWQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXWQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVZXWQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMOVZXDQ_O_XMM_XMM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x35 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x35, 0xc0,  /* PMOVZXDQ xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x35, 0xc1,  /* PMOVZXDQ xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x35, 0xc8,  /* PMOVZXDQ xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x35, 0xc9   /* PMOVZXDQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMOVZXDQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMOVZXDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXDQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMOVZXDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXDQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMOVZXDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMOVZXDQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMOVZXDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMULDQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x28 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x28, 0xc0,  /* PMULDQ xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x28, 0xc1,  /* PMULDQ xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x28, 0xc8,  /* PMULDQ xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x28, 0xc9   /* PMULDQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULDQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMULDQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMULDQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMULDQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULDQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PMULLD_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x40 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x40, 0xc0,  /* PMULLD xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x40, 0xc1,  /* PMULLD xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x40, 0xc8,  /* PMULLD xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x40, 0xc9   /* PMULLD xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULLD xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULLD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMULLD xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULLD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMULLD xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULLD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PMULLD xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULLD,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, CRC32_O_REG_32_64_RM_8)
{
	Instruction instructions[0x30];
	size_t instructionCount;

	// ops: 0xf 0x38 0xf0 
	const uint8_t pOps[0xe7] = {
		0xf2, 0xf, 0x38, 0xf0, 0xc9,  /* CRC32 ECX, CL */
		0xf2, 0xf, 0x38, 0xf0, 0xca,  /* CRC32 ECX, DL */
		0xf2, 0xf, 0x38, 0xf0, 0xcb,  /* CRC32 ECX, BL */
		0xf2, 0xf, 0x38, 0xf0, 0xd1,  /* CRC32 EDX, CL */
		0xf2, 0xf, 0x38, 0xf0, 0xd2,  /* CRC32 EDX, DL */
		0xf2, 0xf, 0x38, 0xf0, 0xd3,  /* CRC32 EDX, BL */
		0xf2, 0xf, 0x38, 0xf0, 0xd9,  /* CRC32 EBX, CL */
		0xf2, 0xf, 0x38, 0xf0, 0xda,  /* CRC32 EBX, DL */
		0xf2, 0xf, 0x38, 0xf0, 0xdb,  /* CRC32 EBX, BL */
		0xf2, 0xf, 0x38, 0xf0, 0xe1,  /* CRC32 ESP, CL */
		0xf2, 0xf, 0x38, 0xf0, 0xe2,  /* CRC32 ESP, DL */
		0xf2, 0xf, 0x38, 0xf0, 0xe3,  /* CRC32 ESP, BL */
		0xf2, 0xf, 0x38, 0xf0, 0xe9,  /* CRC32 EBP, CL */
		0xf2, 0xf, 0x38, 0xf0, 0xea,  /* CRC32 EBP, DL */
		0xf2, 0xf, 0x38, 0xf0, 0xeb,  /* CRC32 EBP, BL */
		0xf2, 0xf, 0x38, 0xf0, 0xf1,  /* CRC32 ESI, CL */
		0xf2, 0xf, 0x38, 0xf0, 0xf2,  /* CRC32 ESI, DL */
		0xf2, 0xf, 0x38, 0xf0, 0xf3,  /* CRC32 ESI, BL */
		0xf2, 0xf, 0x38, 0xf0, 0xf9,  /* CRC32 EDI, CL */
		0xf2, 0xf, 0x38, 0xf0, 0xfa,  /* CRC32 EDI, DL */
		0xf2, 0xf, 0x38, 0xf0, 0xfb,  /* CRC32 EDI, BL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xc9,  /* CRC32 RCX, CL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xca,  /* CRC32 RCX, DL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xcb,  /* CRC32 RCX, BL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xd1,  /* CRC32 RDX, CL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xd2,  /* CRC32 RDX, DL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xd3,  /* CRC32 RDX, BL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xd9,  /* CRC32 RBX, CL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xda,  /* CRC32 RBX, DL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xdb,  /* CRC32 RBX, BL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xe1,  /* CRC32 RSP, CL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xe2,  /* CRC32 RSP, DL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xe3,  /* CRC32 RSP, BL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xe9,  /* CRC32 RBP, CL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xea,  /* CRC32 RBP, DL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xeb,  /* CRC32 RBP, BL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xf1,  /* CRC32 RSI, CL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xf2,  /* CRC32 RSI, DL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xf3,  /* CRC32 RSI, BL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xf9,  /* CRC32 RDI, CL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xfa,  /* CRC32 RDI, DL */
		0xf2, 0x48, 0xf, 0x38, 0xf0, 0xfb   /* CRC32 RDI, BL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0xe7, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x30, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2a_sz, instructionCount);
	{
		/* CRC32 ECX, CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 ECX, DL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 ECX, BL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EDX, CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EDX, DL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EDX, BL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EBX, CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EBX, DL */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EBX, BL */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 ESP, CL */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 ESP, DL */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 ESP, BL */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EBP, CL */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EBP, DL */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EBP, BL */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 ESI, CL */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 ESI, DL */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 ESI, BL */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EDI, CL */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EDI, DL */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 EDI, BL */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RCX, CL */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RCX, DL */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RCX, BL */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RCX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x11)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RDX, CL */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RDX, DL */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RDX, BL */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RBX, CL */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RBX, DL */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RBX, BL */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBX, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x13)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RSP, CL */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RSP, DL */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RSP, BL */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x14)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RBP, CL */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RBP, DL */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RBP, BL */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RBP, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x15)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RSI, CL */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RSI, DL */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RSI, BL */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RSI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x16)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RDI, CL */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RDI, DL */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CRC32 RDI, BL */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::CRC32,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::RDI, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x17)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_SSE4_1, PTEST_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x17 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x17, 0xc0,  /* PTEST xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x17, 0xc1,  /* PTEST xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x17, 0xc8,  /* PTEST xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x17, 0xc9   /* PTEST xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PTEST xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PTEST,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PTEST xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PTEST,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PTEST xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PTEST,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PTEST xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PTEST,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, PCMPGTQ_O_XMM_XMM_128)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0x38 0x37 
	const uint8_t pOps[0x14] = {
		0x66, 0xf, 0x38, 0x37, 0xc0,  /* PCMPGTQ xmm0, xmm0 */
		0x66, 0xf, 0x38, 0x37, 0xc1,  /* PCMPGTQ xmm0, xmm1 */
		0x66, 0xf, 0x38, 0x37, 0xc8,  /* PCMPGTQ xmm1, xmm0 */
		0x66, 0xf, 0x38, 0x37, 0xc9   /* PCMPGTQ xmm1, xmm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x14, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PCMPGTQ xmm0, xmm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PCMPGTQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PCMPGTQ xmm0, xmm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PCMPGTQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PCMPGTQ xmm1, xmm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PCMPGTQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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
		/* PCMPGTQ xmm1, xmm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PCMPGTQ,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
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


TEST(x64_SSE4_1, POPCNT_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0xf 0xb8 
	const uint8_t pOps[0x128] = {
		0xf3, 0x48, 0xf, 0xb8, 0x1,  /* POPCNT RAX, qword [RCX] */
		0xf3, 0x48, 0xf, 0xb8, 0x2,  /* POPCNT RAX, qword [RDX] */
		0xf3, 0x48, 0xf, 0xb8, 0x3,  /* POPCNT RAX, qword [RBX] */
		0xf3, 0x48, 0xf, 0xb8, 0x4, 0x24,  /* POPCNT RAX, qword [RSP] */
		0xf3, 0x48, 0xf, 0xb8, 0x45, 0x0,  /* POPCNT RAX, qword [RBP] */
		0xf3, 0x48, 0xf, 0xb8, 0x6,  /* POPCNT RAX, qword [RSI] */
		0xf3, 0x48, 0xf, 0xb8, 0x7,  /* POPCNT RAX, qword [RDI] */
		0xf3, 0x48, 0xf, 0xb8, 0x9,  /* POPCNT RCX, qword [RCX] */
		0xf3, 0x48, 0xf, 0xb8, 0xa,  /* POPCNT RCX, qword [RDX] */
		0xf3, 0x48, 0xf, 0xb8, 0xb,  /* POPCNT RCX, qword [RBX] */
		0xf3, 0x48, 0xf, 0xb8, 0xc, 0x24,  /* POPCNT RCX, qword [RSP] */
		0xf3, 0x48, 0xf, 0xb8, 0x4d, 0x0,  /* POPCNT RCX, qword [RBP] */
		0xf3, 0x48, 0xf, 0xb8, 0xe,  /* POPCNT RCX, qword [RSI] */
		0xf3, 0x48, 0xf, 0xb8, 0xf,  /* POPCNT RCX, qword [RDI] */
		0xf3, 0x48, 0xf, 0xb8, 0x11,  /* POPCNT RDX, qword [RCX] */
		0xf3, 0x48, 0xf, 0xb8, 0x12,  /* POPCNT RDX, qword [RDX] */
		0xf3, 0x48, 0xf, 0xb8, 0x13,  /* POPCNT RDX, qword [RBX] */
		0xf3, 0x48, 0xf, 0xb8, 0x14, 0x24,  /* POPCNT RDX, qword [RSP] */
		0xf3, 0x48, 0xf, 0xb8, 0x55, 0x0,  /* POPCNT RDX, qword [RBP] */
		0xf3, 0x48, 0xf, 0xb8, 0x16,  /* POPCNT RDX, qword [RSI] */
		0xf3, 0x48, 0xf, 0xb8, 0x17,  /* POPCNT RDX, qword [RDI] */
		0xf3, 0x48, 0xf, 0xb8, 0x19,  /* POPCNT RBX, qword [RCX] */
		0xf3, 0x48, 0xf, 0xb8, 0x1a,  /* POPCNT RBX, qword [RDX] */
		0xf3, 0x48, 0xf, 0xb8, 0x1b,  /* POPCNT RBX, qword [RBX] */
		0xf3, 0x48, 0xf, 0xb8, 0x1c, 0x24,  /* POPCNT RBX, qword [RSP] */
		0xf3, 0x48, 0xf, 0xb8, 0x5d, 0x0,  /* POPCNT RBX, qword [RBP] */
		0xf3, 0x48, 0xf, 0xb8, 0x1e,  /* POPCNT RBX, qword [RSI] */
		0xf3, 0x48, 0xf, 0xb8, 0x1f,  /* POPCNT RBX, qword [RDI] */
		0xf3, 0x48, 0xf, 0xb8, 0x21,  /* POPCNT RSP, qword [RCX] */
		0xf3, 0x48, 0xf, 0xb8, 0x22,  /* POPCNT RSP, qword [RDX] */
		0xf3, 0x48, 0xf, 0xb8, 0x23,  /* POPCNT RSP, qword [RBX] */
		0xf3, 0x48, 0xf, 0xb8, 0x24, 0x24,  /* POPCNT RSP, qword [RSP] */
		0xf3, 0x48, 0xf, 0xb8, 0x65, 0x0,  /* POPCNT RSP, qword [RBP] */
		0xf3, 0x48, 0xf, 0xb8, 0x26,  /* POPCNT RSP, qword [RSI] */
		0xf3, 0x48, 0xf, 0xb8, 0x27,  /* POPCNT RSP, qword [RDI] */
		0xf3, 0x48, 0xf, 0xb8, 0x29,  /* POPCNT RBP, qword [RCX] */
		0xf3, 0x48, 0xf, 0xb8, 0x2a,  /* POPCNT RBP, qword [RDX] */
		0xf3, 0x48, 0xf, 0xb8, 0x2b,  /* POPCNT RBP, qword [RBX] */
		0xf3, 0x48, 0xf, 0xb8, 0x2c, 0x24,  /* POPCNT RBP, qword [RSP] */
		0xf3, 0x48, 0xf, 0xb8, 0x6d, 0x0,  /* POPCNT RBP, qword [RBP] */
		0xf3, 0x48, 0xf, 0xb8, 0x2e,  /* POPCNT RBP, qword [RSI] */
		0xf3, 0x48, 0xf, 0xb8, 0x2f,  /* POPCNT RBP, qword [RDI] */
		0xf3, 0x48, 0xf, 0xb8, 0x31,  /* POPCNT RSI, qword [RCX] */
		0xf3, 0x48, 0xf, 0xb8, 0x32,  /* POPCNT RSI, qword [RDX] */
		0xf3, 0x48, 0xf, 0xb8, 0x33,  /* POPCNT RSI, qword [RBX] */
		0xf3, 0x48, 0xf, 0xb8, 0x34, 0x24,  /* POPCNT RSI, qword [RSP] */
		0xf3, 0x48, 0xf, 0xb8, 0x75, 0x0,  /* POPCNT RSI, qword [RBP] */
		0xf3, 0x48, 0xf, 0xb8, 0x36,  /* POPCNT RSI, qword [RSI] */
		0xf3, 0x48, 0xf, 0xb8, 0x37,  /* POPCNT RSI, qword [RDI] */
		0xf3, 0x48, 0xf, 0xb8, 0x39,  /* POPCNT RDI, qword [RCX] */
		0xf3, 0x48, 0xf, 0xb8, 0x3a,  /* POPCNT RDI, qword [RDX] */
		0xf3, 0x48, 0xf, 0xb8, 0x3b,  /* POPCNT RDI, qword [RBX] */
		0xf3, 0x48, 0xf, 0xb8, 0x3c, 0x24,  /* POPCNT RDI, qword [RSP] */
		0xf3, 0x48, 0xf, 0xb8, 0x7d, 0x0,  /* POPCNT RDI, qword [RBP] */
		0xf3, 0x48, 0xf, 0xb8, 0x3e,  /* POPCNT RDI, qword [RSI] */
		0xf3, 0x48, 0xf, 0xb8, 0x3f   /* POPCNT RDI, qword [RDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x128, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* POPCNT RAX, qword [RCX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RAX, qword [RDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RAX, qword [RBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RAX, qword [RSP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RAX, qword [RBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RAX, qword [RSI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RAX, qword [RDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RCX, qword [RCX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RCX, qword [RDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RCX, qword [RBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RCX, qword [RSP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RCX, qword [RBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RCX, qword [RSI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RCX, qword [RDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDX, qword [RCX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDX, qword [RDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDX, qword [RBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDX, qword [RSP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDX, qword [RBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDX, qword [RSI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDX, qword [RDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBX, qword [RCX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBX, qword [RDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBX, qword [RBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBX, qword [RSP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBX, qword [RBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBX, qword [RSI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBX, qword [RDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSP, qword [RCX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSP, qword [RDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSP, qword [RBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSP, qword [RSP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSP, qword [RBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSP, qword [RSI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSP, qword [RDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBP, qword [RCX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBP, qword [RDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBP, qword [RBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBP, qword [RSP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBP, qword [RBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBP, qword [RSI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RBP, qword [RDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSI, qword [RCX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSI, qword [RDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSI, qword [RBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSI, qword [RSP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSI, qword [RBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSI, qword [RSI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RSI, qword [RDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDI, qword [RCX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDI, qword [RDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDI, qword [RBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDI, qword [RSP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDI, qword [RBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x6,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDI, qword [RSI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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
		/* POPCNT RDI, qword [RDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::POPCNT,
			FlowControl::NONE,
			InstructionSet::SSE4_1,
			0x5,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0x40,
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


TEST(x64_NOW3D, PREFETCH_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd 
	const uint8_t pOps[0x8] = {
		0xf, 0xd, 0x4, 0x95, 0x0, 0x0, 0x0, 0x0   /* PREFETCH [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* PREFETCH [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PREFETCH,
			FlowControl::NONE,
			InstructionSet::NOW3D,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PREFETCHW_O_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xd 
	const uint8_t pOps[0x8] = {
		0xf, 0xd, 0xc, 0x95, 0x0, 0x0, 0x0, 0x0   /* PREFETCHW [rdx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x8, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* PREFETCHW [rdx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PREFETCHW,
			FlowControl::NONE,
			InstructionSet::NOW3D,
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

		EXPECT_EQ(0x0, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x12)
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, FEMMS)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xe 
	const uint8_t pOps[0x2] = {
		0xf, 0xe   /* FEMMS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* FEMMS */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::FEMMS,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x2,
			0x0,
			0x0,
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


TEST(x64_NOW3D, PI2FD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xd 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xd,  /* PI2FD mm0, mm0 */
		0xf, 0xf, 0xc1, 0xd,  /* PI2FD mm0, mm1 */
		0xf, 0xf, 0xc8, 0xd,  /* PI2FD mm1, mm0 */
		0xf, 0xf, 0xc9, 0xd   /* PI2FD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PI2FD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PI2FD,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PI2FD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PI2FD,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PI2FD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PI2FD,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PI2FD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PI2FD,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PF2ID_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0x1d 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0x1d,  /* PF2ID mm0, mm0 */
		0xf, 0xf, 0xc1, 0x1d,  /* PF2ID mm0, mm1 */
		0xf, 0xf, 0xc8, 0x1d,  /* PF2ID mm1, mm0 */
		0xf, 0xf, 0xc9, 0x1d   /* PF2ID mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PF2ID mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PF2ID,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PF2ID mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PF2ID,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PF2ID mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PF2ID,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PF2ID mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PF2ID,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFCMPGE_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0x90 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0x90,  /* PFCMPGE mm0, mm0 */
		0xf, 0xf, 0xc1, 0x90,  /* PFCMPGE mm0, mm1 */
		0xf, 0xf, 0xc8, 0x90,  /* PFCMPGE mm1, mm0 */
		0xf, 0xf, 0xc9, 0x90   /* PFCMPGE mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFCMPGE mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFCMPGE,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFCMPGE mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFCMPGE,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFCMPGE mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFCMPGE,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFCMPGE mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFCMPGE,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFMIN_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0x94 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0x94,  /* PFMIN mm0, mm0 */
		0xf, 0xf, 0xc1, 0x94,  /* PFMIN mm0, mm1 */
		0xf, 0xf, 0xc8, 0x94,  /* PFMIN mm1, mm0 */
		0xf, 0xf, 0xc9, 0x94   /* PFMIN mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFMIN mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFMIN,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFMIN mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFMIN,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFMIN mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFMIN,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFMIN mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFMIN,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFRCP_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0x96 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0x96,  /* PFRCP mm0, mm0 */
		0xf, 0xf, 0xc1, 0x96,  /* PFRCP mm0, mm1 */
		0xf, 0xf, 0xc8, 0x96,  /* PFRCP mm1, mm0 */
		0xf, 0xf, 0xc9, 0x96   /* PFRCP mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFRCP mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFRCP,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRCP mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFRCP,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRCP mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFRCP,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRCP mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFRCP,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFRSQRT_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0x97 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0x97,  /* PFRSQRT mm0, mm0 */
		0xf, 0xf, 0xc1, 0x97,  /* PFRSQRT mm0, mm1 */
		0xf, 0xf, 0xc8, 0x97,  /* PFRSQRT mm1, mm0 */
		0xf, 0xf, 0xc9, 0x97   /* PFRSQRT mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFRSQRT mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFRSQRT,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRSQRT mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFRSQRT,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRSQRT mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFRSQRT,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRSQRT mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFRSQRT,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFSUB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0x9a 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0x9a,  /* PFSUB mm0, mm0 */
		0xf, 0xf, 0xc1, 0x9a,  /* PFSUB mm0, mm1 */
		0xf, 0xf, 0xc8, 0x9a,  /* PFSUB mm1, mm0 */
		0xf, 0xf, 0xc9, 0x9a   /* PFSUB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFSUB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFSUB,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFSUB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFSUB,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFSUB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFSUB,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFSUB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFSUB,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFADD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0x9e 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0x9e,  /* PFADD mm0, mm0 */
		0xf, 0xf, 0xc1, 0x9e,  /* PFADD mm0, mm1 */
		0xf, 0xf, 0xc8, 0x9e,  /* PFADD mm1, mm0 */
		0xf, 0xf, 0xc9, 0x9e   /* PFADD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFADD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFADD,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFADD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFADD,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFADD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFADD,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFADD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFADD,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFCMPGT_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xa0 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xa0,  /* PFCMPGT mm0, mm0 */
		0xf, 0xf, 0xc1, 0xa0,  /* PFCMPGT mm0, mm1 */
		0xf, 0xf, 0xc8, 0xa0,  /* PFCMPGT mm1, mm0 */
		0xf, 0xf, 0xc9, 0xa0   /* PFCMPGT mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFCMPGT mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFCMPGT,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFCMPGT mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFCMPGT,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFCMPGT mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFCMPGT,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFCMPGT mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFCMPGT,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFMAX_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xa4 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xa4,  /* PFMAX mm0, mm0 */
		0xf, 0xf, 0xc1, 0xa4,  /* PFMAX mm0, mm1 */
		0xf, 0xf, 0xc8, 0xa4,  /* PFMAX mm1, mm0 */
		0xf, 0xf, 0xc9, 0xa4   /* PFMAX mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFMAX mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFMAX,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFMAX mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFMAX,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFMAX mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFMAX,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFMAX mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFMAX,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFRCPIT1_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xa6 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xa6,  /* PFRCPIT1 mm0, mm0 */
		0xf, 0xf, 0xc1, 0xa6,  /* PFRCPIT1 mm0, mm1 */
		0xf, 0xf, 0xc8, 0xa6,  /* PFRCPIT1 mm1, mm0 */
		0xf, 0xf, 0xc9, 0xa6   /* PFRCPIT1 mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFRCPIT1 mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFRCPIT1,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRCPIT1 mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFRCPIT1,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRCPIT1 mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFRCPIT1,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRCPIT1 mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFRCPIT1,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFRSQIT1_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xa7 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xa7,  /* PFRSQIT1 mm0, mm0 */
		0xf, 0xf, 0xc1, 0xa7,  /* PFRSQIT1 mm0, mm1 */
		0xf, 0xf, 0xc8, 0xa7,  /* PFRSQIT1 mm1, mm0 */
		0xf, 0xf, 0xc9, 0xa7   /* PFRSQIT1 mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFRSQIT1 mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFRSQIT1,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRSQIT1 mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFRSQIT1,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRSQIT1 mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFRSQIT1,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRSQIT1 mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFRSQIT1,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFSUBR_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xaa 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xaa,  /* PFSUBR mm0, mm0 */
		0xf, 0xf, 0xc1, 0xaa,  /* PFSUBR mm0, mm1 */
		0xf, 0xf, 0xc8, 0xaa,  /* PFSUBR mm1, mm0 */
		0xf, 0xf, 0xc9, 0xaa   /* PFSUBR mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFSUBR mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFSUBR,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFSUBR mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFSUBR,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFSUBR mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFSUBR,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFSUBR mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFSUBR,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFACC_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xae 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xae,  /* PFACC mm0, mm0 */
		0xf, 0xf, 0xc1, 0xae,  /* PFACC mm0, mm1 */
		0xf, 0xf, 0xc8, 0xae,  /* PFACC mm1, mm0 */
		0xf, 0xf, 0xc9, 0xae   /* PFACC mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFACC mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFACC,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFACC mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFACC,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFACC mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFACC,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFACC mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFACC,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFCMPEQ_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xb0 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xb0,  /* PFCMPEQ mm0, mm0 */
		0xf, 0xf, 0xc1, 0xb0,  /* PFCMPEQ mm0, mm1 */
		0xf, 0xf, 0xc8, 0xb0,  /* PFCMPEQ mm1, mm0 */
		0xf, 0xf, 0xc9, 0xb0   /* PFCMPEQ mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFCMPEQ mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFCMPEQ,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFCMPEQ mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFCMPEQ,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFCMPEQ mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFCMPEQ,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFCMPEQ mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFCMPEQ,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFMUL_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xb4 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xb4,  /* PFMUL mm0, mm0 */
		0xf, 0xf, 0xc1, 0xb4,  /* PFMUL mm0, mm1 */
		0xf, 0xf, 0xc8, 0xb4,  /* PFMUL mm1, mm0 */
		0xf, 0xf, 0xc9, 0xb4   /* PFMUL mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFMUL mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFMUL,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFMUL mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFMUL,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFMUL mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFMUL,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFMUL mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFMUL,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PFRCPIT2_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xb6 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xb6,  /* PFRCPIT2 mm0, mm0 */
		0xf, 0xf, 0xc1, 0xb6,  /* PFRCPIT2 mm0, mm1 */
		0xf, 0xf, 0xc8, 0xb6,  /* PFRCPIT2 mm1, mm0 */
		0xf, 0xf, 0xc9, 0xb6   /* PFRCPIT2 mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFRCPIT2 mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFRCPIT2,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRCPIT2 mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFRCPIT2,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRCPIT2 mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFRCPIT2,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFRCPIT2 mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFRCPIT2,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PMULHRW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xb7 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xb7,  /* PMULHRW mm0, mm0 */
		0xf, 0xf, 0xc1, 0xb7,  /* PMULHRW mm0, mm1 */
		0xf, 0xf, 0xc8, 0xb7,  /* PMULHRW mm1, mm0 */
		0xf, 0xf, 0xc9, 0xb7   /* PMULHRW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PMULHRW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PMULHRW,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHRW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PMULHRW,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHRW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PMULHRW,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PMULHRW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PMULHRW,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3D, PAVGUSB_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xbf 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xbf,  /* PAVGUSB mm0, mm0 */
		0xf, 0xf, 0xc1, 0xbf,  /* PAVGUSB mm0, mm1 */
		0xf, 0xf, 0xc8, 0xbf,  /* PAVGUSB mm1, mm0 */
		0xf, 0xf, 0xc9, 0xbf   /* PAVGUSB mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PAVGUSB mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PAVGUSB,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAVGUSB mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PAVGUSB,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAVGUSB mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PAVGUSB,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PAVGUSB mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PAVGUSB,
			FlowControl::NONE,
			InstructionSet::NOW3D,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3DEXT, PI2FW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xc 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xc,  /* PI2FW mm0, mm0 */
		0xf, 0xf, 0xc1, 0xc,  /* PI2FW mm0, mm1 */
		0xf, 0xf, 0xc8, 0xc,  /* PI2FW mm1, mm0 */
		0xf, 0xf, 0xc9, 0xc   /* PI2FW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PI2FW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PI2FW,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PI2FW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PI2FW,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PI2FW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PI2FW,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PI2FW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PI2FW,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3DEXT, PF2IW_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0x1c 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0x1c,  /* PF2IW mm0, mm0 */
		0xf, 0xf, 0xc1, 0x1c,  /* PF2IW mm0, mm1 */
		0xf, 0xf, 0xc8, 0x1c,  /* PF2IW mm1, mm0 */
		0xf, 0xf, 0xc9, 0x1c   /* PF2IW mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PF2IW mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PF2IW,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PF2IW mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PF2IW,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PF2IW mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PF2IW,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PF2IW mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PF2IW,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3DEXT, PFNACC_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0x8a 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0x8a,  /* PFNACC mm0, mm0 */
		0xf, 0xf, 0xc1, 0x8a,  /* PFNACC mm0, mm1 */
		0xf, 0xf, 0xc8, 0x8a,  /* PFNACC mm1, mm0 */
		0xf, 0xf, 0xc9, 0x8a   /* PFNACC mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFNACC mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFNACC,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFNACC mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFNACC,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFNACC mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFNACC,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFNACC mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFNACC,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3DEXT, PFPNACC_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0x8e 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0x8e,  /* PFPNACC mm0, mm0 */
		0xf, 0xf, 0xc1, 0x8e,  /* PFPNACC mm0, mm1 */
		0xf, 0xf, 0xc8, 0x8e,  /* PFPNACC mm1, mm0 */
		0xf, 0xf, 0xc9, 0x8e   /* PFPNACC mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PFPNACC mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PFPNACC,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFPNACC mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PFPNACC,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFPNACC mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PFPNACC,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PFPNACC mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PFPNACC,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_NOW3DEXT, PSWAPD_O_MM_MM_64)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xf 0xf 0xbb 
	const uint8_t pOps[0x10] = {
		0xf, 0xf, 0xc0, 0xbb,  /* PSWAPD mm0, mm0 */
		0xf, 0xf, 0xc1, 0xbb,  /* PSWAPD mm0, mm1 */
		0xf, 0xf, 0xc8, 0xbb,  /* PSWAPD mm1, mm0 */
		0xf, 0xf, 0xc9, 0xbb   /* PSWAPD mm1, mm1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		/* PSWAPD mm0, mm0 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::PSWAPD,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSWAPD mm0, mm1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::PSWAPD,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSWAPD mm1, mm0 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::PSWAPD,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM0, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x64)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* PSWAPD mm1, mm1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::PSWAPD,
			FlowControl::NONE,
			InstructionSet::NOW3DEXT,
			0x4,
			0x0,
			0x0,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::MM1, 0x40, __FILE__, __LINE__); // set! (reg idx: 0x65)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

