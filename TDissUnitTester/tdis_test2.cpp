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
			
TEST(x86, AND_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x17] = {
		0x83, 0x21, 0x63,  /* AND dword [ECX], 99 */
		0x83, 0x22, 0x63,  /* AND dword [EDX], 99 */
		0x83, 0x23, 0x63,  /* AND dword [EBX], 99 */
		0x83, 0x24, 0x24, 0x63,  /* AND dword [ESP], 99 */
		0x83, 0x65, 0x0, 0x63,  /* AND dword [EBP], 99 */
		0x83, 0x26, 0x63,  /* AND dword [ESI], 99 */
		0x83, 0x27, 0x63   /* AND dword [EDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* AND dword [ECX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND dword [EDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND dword [EBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND dword [ESP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND dword [EBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND dword [ESI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* AND dword [EDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::AND,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8c5,
			0x0,
			0x10,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SUB_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x17] = {
		0x83, 0x29, 0x63,  /* SUB dword [ECX], 99 */
		0x83, 0x2a, 0x63,  /* SUB dword [EDX], 99 */
		0x83, 0x2b, 0x63,  /* SUB dword [EBX], 99 */
		0x83, 0x2c, 0x24, 0x63,  /* SUB dword [ESP], 99 */
		0x83, 0x6d, 0x0, 0x63,  /* SUB dword [EBP], 99 */
		0x83, 0x2e, 0x63,  /* SUB dword [ESI], 99 */
		0x83, 0x2f, 0x63   /* SUB dword [EDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SUB dword [ECX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB dword [EDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB dword [EBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB dword [ESP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB dword [EBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB dword [ESI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SUB dword [EDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SUB,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, XOR_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x17] = {
		0x83, 0x31, 0x63,  /* XOR dword [ECX], 99 */
		0x83, 0x32, 0x63,  /* XOR dword [EDX], 99 */
		0x83, 0x33, 0x63,  /* XOR dword [EBX], 99 */
		0x83, 0x34, 0x24, 0x63,  /* XOR dword [ESP], 99 */
		0x83, 0x75, 0x0, 0x63,  /* XOR dword [EBP], 99 */
		0x83, 0x36, 0x63,  /* XOR dword [ESI], 99 */
		0x83, 0x37, 0x63   /* XOR dword [EDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* XOR dword [ECX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR dword [EDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR dword [EBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR dword [ESP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR dword [EBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR dword [ESI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XOR dword [EDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, CMP_O_RM_FULL_IMM_S_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x83 
	const uint8_t pOps[0x17] = {
		0x83, 0x39, 0x63,  /* CMP dword [ECX], 99 */
		0x83, 0x3a, 0x63,  /* CMP dword [EDX], 99 */
		0x83, 0x3b, 0x63,  /* CMP dword [EBX], 99 */
		0x83, 0x3c, 0x24, 0x63,  /* CMP dword [ESP], 99 */
		0x83, 0x7d, 0x0, 0x63,  /* CMP dword [EBP], 99 */
		0x83, 0x3e, 0x63,  /* CMP dword [ESI], 99 */
		0x83, 0x3f, 0x63   /* CMP dword [EDI], 99 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* CMP dword [ECX], 99 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP dword [EDX], 99 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP dword [EBX], 99 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP dword [ESP], 99 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP dword [EBP], 99 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP dword [ESI], 99 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* CMP dword [EDI], 99 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::CMP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x63, inst.imm.sint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, TEST_O_RM_8_REG_8)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x84 
	const uint8_t pOps[0x62] = {
		0x84, 0xc9,  /* TEST CL, CL */
		0x84, 0xd1,  /* TEST CL, DL */
		0x84, 0xd9,  /* TEST CL, BL */
		0x84, 0xe1,  /* TEST CL, AH */
		0x84, 0xe9,  /* TEST CL, CH */
		0x84, 0xf1,  /* TEST CL, DH */
		0x84, 0xf9,  /* TEST CL, BH */
		0x84, 0xca,  /* TEST DL, CL */
		0x84, 0xd2,  /* TEST DL, DL */
		0x84, 0xda,  /* TEST DL, BL */
		0x84, 0xe2,  /* TEST DL, AH */
		0x84, 0xea,  /* TEST DL, CH */
		0x84, 0xf2,  /* TEST DL, DH */
		0x84, 0xfa,  /* TEST DL, BH */
		0x84, 0xcb,  /* TEST BL, CL */
		0x84, 0xd3,  /* TEST BL, DL */
		0x84, 0xdb,  /* TEST BL, BL */
		0x84, 0xe3,  /* TEST BL, AH */
		0x84, 0xeb,  /* TEST BL, CH */
		0x84, 0xf3,  /* TEST BL, DH */
		0x84, 0xfb,  /* TEST BL, BH */
		0x84, 0xcc,  /* TEST AH, CL */
		0x84, 0xd4,  /* TEST AH, DL */
		0x84, 0xdc,  /* TEST AH, BL */
		0x84, 0xe4,  /* TEST AH, AH */
		0x84, 0xec,  /* TEST AH, CH */
		0x84, 0xf4,  /* TEST AH, DH */
		0x84, 0xfc,  /* TEST AH, BH */
		0x84, 0xcd,  /* TEST CH, CL */
		0x84, 0xd5,  /* TEST CH, DL */
		0x84, 0xdd,  /* TEST CH, BL */
		0x84, 0xe5,  /* TEST CH, AH */
		0x84, 0xed,  /* TEST CH, CH */
		0x84, 0xf5,  /* TEST CH, DH */
		0x84, 0xfd,  /* TEST CH, BH */
		0x84, 0xce,  /* TEST DH, CL */
		0x84, 0xd6,  /* TEST DH, DL */
		0x84, 0xde,  /* TEST DH, BL */
		0x84, 0xe6,  /* TEST DH, AH */
		0x84, 0xee,  /* TEST DH, CH */
		0x84, 0xf6,  /* TEST DH, DH */
		0x84, 0xfe,  /* TEST DH, BH */
		0x84, 0xcf,  /* TEST BH, CL */
		0x84, 0xd7,  /* TEST BH, DL */
		0x84, 0xdf,  /* TEST BH, BL */
		0x84, 0xe7,  /* TEST BH, AH */
		0x84, 0xef,  /* TEST BH, CH */
		0x84, 0xf7,  /* TEST BH, DH */
		0x84, 0xff   /* TEST BH, BH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x62, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x31_sz, instructionCount);
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CL, AH */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CL, CH */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CL, DH */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CL, BH */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, CL */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, DL */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, BL */
		const Instruction& inst = instructions[0x9];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, AH */
		const Instruction& inst = instructions[0xa];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, CH */
		const Instruction& inst = instructions[0xb];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, DH */
		const Instruction& inst = instructions[0xc];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DL, BH */
		const Instruction& inst = instructions[0xd];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, CL */
		const Instruction& inst = instructions[0xe];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, DL */
		const Instruction& inst = instructions[0xf];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, BL */
		const Instruction& inst = instructions[0x10];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, AH */
		const Instruction& inst = instructions[0x11];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, CH */
		const Instruction& inst = instructions[0x12];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, DH */
		const Instruction& inst = instructions[0x13];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BL, BH */
		const Instruction& inst = instructions[0x14];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST AH, CL */
		const Instruction& inst = instructions[0x15];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST AH, DL */
		const Instruction& inst = instructions[0x16];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST AH, BL */
		const Instruction& inst = instructions[0x17];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST AH, AH */
		const Instruction& inst = instructions[0x18];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST AH, CH */
		const Instruction& inst = instructions[0x19];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST AH, DH */
		const Instruction& inst = instructions[0x1a];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST AH, BH */
		const Instruction& inst = instructions[0x1b];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CH, CL */
		const Instruction& inst = instructions[0x1c];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CH, DL */
		const Instruction& inst = instructions[0x1d];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CH, BL */
		const Instruction& inst = instructions[0x1e];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CH, AH */
		const Instruction& inst = instructions[0x1f];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CH, CH */
		const Instruction& inst = instructions[0x20];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CH, DH */
		const Instruction& inst = instructions[0x21];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST CH, BH */
		const Instruction& inst = instructions[0x22];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DH, CL */
		const Instruction& inst = instructions[0x23];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DH, DL */
		const Instruction& inst = instructions[0x24];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DH, BL */
		const Instruction& inst = instructions[0x25];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DH, AH */
		const Instruction& inst = instructions[0x26];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DH, CH */
		const Instruction& inst = instructions[0x27];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DH, DH */
		const Instruction& inst = instructions[0x28];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST DH, BH */
		const Instruction& inst = instructions[0x29];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BH, CL */
		const Instruction& inst = instructions[0x2a];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BH, DL */
		const Instruction& inst = instructions[0x2b];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BH, BL */
		const Instruction& inst = instructions[0x2c];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BH, AH */
		const Instruction& inst = instructions[0x2d];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BH, CH */
		const Instruction& inst = instructions[0x2e];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BH, DH */
		const Instruction& inst = instructions[0x2f];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST BH, BH */
		const Instruction& inst = instructions[0x30];
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, TEST_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x85 
	const uint8_t pOps[0x80] = {
		0x85, 0x1,  /* TEST dword [ECX], EAX */
		0x85, 0x9,  /* TEST dword [ECX], ECX */
		0x85, 0x11,  /* TEST dword [ECX], EDX */
		0x85, 0x19,  /* TEST dword [ECX], EBX */
		0x85, 0x21,  /* TEST dword [ECX], ESP */
		0x85, 0x29,  /* TEST dword [ECX], EBP */
		0x85, 0x31,  /* TEST dword [ECX], ESI */
		0x85, 0x39,  /* TEST dword [ECX], EDI */
		0x85, 0x2,  /* TEST dword [EDX], EAX */
		0x85, 0xa,  /* TEST dword [EDX], ECX */
		0x85, 0x12,  /* TEST dword [EDX], EDX */
		0x85, 0x1a,  /* TEST dword [EDX], EBX */
		0x85, 0x22,  /* TEST dword [EDX], ESP */
		0x85, 0x2a,  /* TEST dword [EDX], EBP */
		0x85, 0x32,  /* TEST dword [EDX], ESI */
		0x85, 0x3a,  /* TEST dword [EDX], EDI */
		0x85, 0x3,  /* TEST dword [EBX], EAX */
		0x85, 0xb,  /* TEST dword [EBX], ECX */
		0x85, 0x13,  /* TEST dword [EBX], EDX */
		0x85, 0x1b,  /* TEST dword [EBX], EBX */
		0x85, 0x23,  /* TEST dword [EBX], ESP */
		0x85, 0x2b,  /* TEST dword [EBX], EBP */
		0x85, 0x33,  /* TEST dword [EBX], ESI */
		0x85, 0x3b,  /* TEST dword [EBX], EDI */
		0x85, 0x4, 0x24,  /* TEST dword [ESP], EAX */
		0x85, 0xc, 0x24,  /* TEST dword [ESP], ECX */
		0x85, 0x14, 0x24,  /* TEST dword [ESP], EDX */
		0x85, 0x1c, 0x24,  /* TEST dword [ESP], EBX */
		0x85, 0x24, 0x24,  /* TEST dword [ESP], ESP */
		0x85, 0x2c, 0x24,  /* TEST dword [ESP], EBP */
		0x85, 0x34, 0x24,  /* TEST dword [ESP], ESI */
		0x85, 0x3c, 0x24,  /* TEST dword [ESP], EDI */
		0x85, 0x45, 0x0,  /* TEST dword [EBP], EAX */
		0x85, 0x4d, 0x0,  /* TEST dword [EBP], ECX */
		0x85, 0x55, 0x0,  /* TEST dword [EBP], EDX */
		0x85, 0x5d, 0x0,  /* TEST dword [EBP], EBX */
		0x85, 0x65, 0x0,  /* TEST dword [EBP], ESP */
		0x85, 0x6d, 0x0,  /* TEST dword [EBP], EBP */
		0x85, 0x75, 0x0,  /* TEST dword [EBP], ESI */
		0x85, 0x7d, 0x0,  /* TEST dword [EBP], EDI */
		0x85, 0x6,  /* TEST dword [ESI], EAX */
		0x85, 0xe,  /* TEST dword [ESI], ECX */
		0x85, 0x16,  /* TEST dword [ESI], EDX */
		0x85, 0x1e,  /* TEST dword [ESI], EBX */
		0x85, 0x26,  /* TEST dword [ESI], ESP */
		0x85, 0x2e,  /* TEST dword [ESI], EBP */
		0x85, 0x36,  /* TEST dword [ESI], ESI */
		0x85, 0x3e,  /* TEST dword [ESI], EDI */
		0x85, 0x7,  /* TEST dword [EDI], EAX */
		0x85, 0xf,  /* TEST dword [EDI], ECX */
		0x85, 0x17,  /* TEST dword [EDI], EDX */
		0x85, 0x1f,  /* TEST dword [EDI], EBX */
		0x85, 0x27,  /* TEST dword [EDI], ESP */
		0x85, 0x2f,  /* TEST dword [EDI], EBP */
		0x85, 0x37,  /* TEST dword [EDI], ESI */
		0x85, 0x3f   /* TEST dword [EDI], EDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x80, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* TEST dword [ECX], EAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ECX], ECX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ECX], EDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ECX], EBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ECX], ESP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ECX], EBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ECX], ESI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ECX], EDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDX], EAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDX], ECX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDX], EDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDX], EBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDX], ESP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDX], EBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDX], ESI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDX], EDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBX], EAX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBX], ECX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBX], EDX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBX], EBX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBX], ESP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBX], EBP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBX], ESI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBX], EDI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESP], EAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESP], ECX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESP], EDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESP], EBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESP], ESP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESP], EBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESP], ESI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESP], EDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBP], EAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBP], ECX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBP], EDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBP], EBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBP], ESP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBP], EBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBP], ESI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EBP], EDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESI], EAX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESI], ECX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESI], EDX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESI], EBX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESI], ESP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESI], EBP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESI], ESI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [ESI], EDI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDI], EAX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDI], ECX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDI], EDX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDI], EBX */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDI], ESP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDI], EBP */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDI], ESI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* TEST dword [EDI], EDI */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::TEST,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, XCHG_O_RM_8_REG_8)
{
	Instruction instructions[0x30];
	size_t instructionCount;

	// ops: 0x86 
	const uint8_t pOps[0x60] = {
		0x86, 0xd1,  /* XCHG CL, DL */
		0x86, 0xd9,  /* XCHG CL, BL */
		0x86, 0xe1,  /* XCHG CL, AH */
		0x86, 0xe9,  /* XCHG CL, CH */
		0x86, 0xf1,  /* XCHG CL, DH */
		0x86, 0xf9,  /* XCHG CL, BH */
		0x86, 0xca,  /* XCHG DL, CL */
		0x86, 0xd2,  /* XCHG DL, DL */
		0x86, 0xda,  /* XCHG DL, BL */
		0x86, 0xe2,  /* XCHG DL, AH */
		0x86, 0xea,  /* XCHG DL, CH */
		0x86, 0xf2,  /* XCHG DL, DH */
		0x86, 0xfa,  /* XCHG DL, BH */
		0x86, 0xcb,  /* XCHG BL, CL */
		0x86, 0xd3,  /* XCHG BL, DL */
		0x86, 0xdb,  /* XCHG BL, BL */
		0x86, 0xe3,  /* XCHG BL, AH */
		0x86, 0xeb,  /* XCHG BL, CH */
		0x86, 0xf3,  /* XCHG BL, DH */
		0x86, 0xfb,  /* XCHG BL, BH */
		0x86, 0xcc,  /* XCHG AH, CL */
		0x86, 0xd4,  /* XCHG AH, DL */
		0x86, 0xdc,  /* XCHG AH, BL */
		0x86, 0xe4,  /* XCHG AH, AH */
		0x86, 0xec,  /* XCHG AH, CH */
		0x86, 0xf4,  /* XCHG AH, DH */
		0x86, 0xfc,  /* XCHG AH, BH */
		0x86, 0xcd,  /* XCHG CH, CL */
		0x86, 0xd5,  /* XCHG CH, DL */
		0x86, 0xdd,  /* XCHG CH, BL */
		0x86, 0xe5,  /* XCHG CH, AH */
		0x86, 0xed,  /* XCHG CH, CH */
		0x86, 0xf5,  /* XCHG CH, DH */
		0x86, 0xfd,  /* XCHG CH, BH */
		0x86, 0xce,  /* XCHG DH, CL */
		0x86, 0xd6,  /* XCHG DH, DL */
		0x86, 0xde,  /* XCHG DH, BL */
		0x86, 0xe6,  /* XCHG DH, AH */
		0x86, 0xee,  /* XCHG DH, CH */
		0x86, 0xf6,  /* XCHG DH, DH */
		0x86, 0xfe,  /* XCHG DH, BH */
		0x86, 0xcf,  /* XCHG BH, CL */
		0x86, 0xd7,  /* XCHG BH, DL */
		0x86, 0xdf,  /* XCHG BH, BL */
		0x86, 0xe7,  /* XCHG BH, AH */
		0x86, 0xef,  /* XCHG BH, CH */
		0x86, 0xf7,  /* XCHG BH, DH */
		0x86, 0xff   /* XCHG BH, BH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x60, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x30, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x30_sz, instructionCount);
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CL, AH */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CL, CH */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CL, DH */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CL, BH */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DL, CL */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DL, DL */
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

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DL, BL */
		const Instruction& inst = instructions[0x8];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DL, AH */
		const Instruction& inst = instructions[0x9];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DL, CH */
		const Instruction& inst = instructions[0xa];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DL, DH */
		const Instruction& inst = instructions[0xb];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DL, BH */
		const Instruction& inst = instructions[0xc];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BL, CL */
		const Instruction& inst = instructions[0xd];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BL, DL */
		const Instruction& inst = instructions[0xe];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BL, BL */
		const Instruction& inst = instructions[0xf];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BL, AH */
		const Instruction& inst = instructions[0x10];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BL, CH */
		const Instruction& inst = instructions[0x11];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BL, DH */
		const Instruction& inst = instructions[0x12];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BL, BH */
		const Instruction& inst = instructions[0x13];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG AH, CL */
		const Instruction& inst = instructions[0x14];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG AH, DL */
		const Instruction& inst = instructions[0x15];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG AH, BL */
		const Instruction& inst = instructions[0x16];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG AH, AH */
		const Instruction& inst = instructions[0x17];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG AH, CH */
		const Instruction& inst = instructions[0x18];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG AH, DH */
		const Instruction& inst = instructions[0x19];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG AH, BH */
		const Instruction& inst = instructions[0x1a];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CH, CL */
		const Instruction& inst = instructions[0x1b];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CH, DL */
		const Instruction& inst = instructions[0x1c];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CH, BL */
		const Instruction& inst = instructions[0x1d];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CH, AH */
		const Instruction& inst = instructions[0x1e];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CH, CH */
		const Instruction& inst = instructions[0x1f];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CH, DH */
		const Instruction& inst = instructions[0x20];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG CH, BH */
		const Instruction& inst = instructions[0x21];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DH, CL */
		const Instruction& inst = instructions[0x22];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DH, DL */
		const Instruction& inst = instructions[0x23];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DH, BL */
		const Instruction& inst = instructions[0x24];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DH, AH */
		const Instruction& inst = instructions[0x25];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DH, CH */
		const Instruction& inst = instructions[0x26];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DH, DH */
		const Instruction& inst = instructions[0x27];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG DH, BH */
		const Instruction& inst = instructions[0x28];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BH, CL */
		const Instruction& inst = instructions[0x29];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BH, DL */
		const Instruction& inst = instructions[0x2a];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x32)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BH, BL */
		const Instruction& inst = instructions[0x2b];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x33)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BH, AH */
		const Instruction& inst = instructions[0x2c];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BH, CH */
		const Instruction& inst = instructions[0x2d];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BH, DH */
		const Instruction& inst = instructions[0x2e];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG BH, BH */
		const Instruction& inst = instructions[0x2f];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, XCHG_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x87 
	const uint8_t pOps[0x7e] = {
		0x87, 0x9,  /* XCHG dword [ECX], ECX */
		0x87, 0x11,  /* XCHG dword [ECX], EDX */
		0x87, 0x19,  /* XCHG dword [ECX], EBX */
		0x87, 0x21,  /* XCHG dword [ECX], ESP */
		0x87, 0x29,  /* XCHG dword [ECX], EBP */
		0x87, 0x31,  /* XCHG dword [ECX], ESI */
		0x87, 0x39,  /* XCHG dword [ECX], EDI */
		0x87, 0x2,  /* XCHG dword [EDX], EAX */
		0x87, 0xa,  /* XCHG dword [EDX], ECX */
		0x87, 0x12,  /* XCHG dword [EDX], EDX */
		0x87, 0x1a,  /* XCHG dword [EDX], EBX */
		0x87, 0x22,  /* XCHG dword [EDX], ESP */
		0x87, 0x2a,  /* XCHG dword [EDX], EBP */
		0x87, 0x32,  /* XCHG dword [EDX], ESI */
		0x87, 0x3a,  /* XCHG dword [EDX], EDI */
		0x87, 0x3,  /* XCHG dword [EBX], EAX */
		0x87, 0xb,  /* XCHG dword [EBX], ECX */
		0x87, 0x13,  /* XCHG dword [EBX], EDX */
		0x87, 0x1b,  /* XCHG dword [EBX], EBX */
		0x87, 0x23,  /* XCHG dword [EBX], ESP */
		0x87, 0x2b,  /* XCHG dword [EBX], EBP */
		0x87, 0x33,  /* XCHG dword [EBX], ESI */
		0x87, 0x3b,  /* XCHG dword [EBX], EDI */
		0x87, 0x4, 0x24,  /* XCHG dword [ESP], EAX */
		0x87, 0xc, 0x24,  /* XCHG dword [ESP], ECX */
		0x87, 0x14, 0x24,  /* XCHG dword [ESP], EDX */
		0x87, 0x1c, 0x24,  /* XCHG dword [ESP], EBX */
		0x87, 0x24, 0x24,  /* XCHG dword [ESP], ESP */
		0x87, 0x2c, 0x24,  /* XCHG dword [ESP], EBP */
		0x87, 0x34, 0x24,  /* XCHG dword [ESP], ESI */
		0x87, 0x3c, 0x24,  /* XCHG dword [ESP], EDI */
		0x87, 0x45, 0x0,  /* XCHG dword [EBP], EAX */
		0x87, 0x4d, 0x0,  /* XCHG dword [EBP], ECX */
		0x87, 0x55, 0x0,  /* XCHG dword [EBP], EDX */
		0x87, 0x5d, 0x0,  /* XCHG dword [EBP], EBX */
		0x87, 0x65, 0x0,  /* XCHG dword [EBP], ESP */
		0x87, 0x6d, 0x0,  /* XCHG dword [EBP], EBP */
		0x87, 0x75, 0x0,  /* XCHG dword [EBP], ESI */
		0x87, 0x7d, 0x0,  /* XCHG dword [EBP], EDI */
		0x87, 0x6,  /* XCHG dword [ESI], EAX */
		0x87, 0xe,  /* XCHG dword [ESI], ECX */
		0x87, 0x16,  /* XCHG dword [ESI], EDX */
		0x87, 0x1e,  /* XCHG dword [ESI], EBX */
		0x87, 0x26,  /* XCHG dword [ESI], ESP */
		0x87, 0x2e,  /* XCHG dword [ESI], EBP */
		0x87, 0x36,  /* XCHG dword [ESI], ESI */
		0x87, 0x3e,  /* XCHG dword [ESI], EDI */
		0x87, 0x7,  /* XCHG dword [EDI], EAX */
		0x87, 0xf,  /* XCHG dword [EDI], ECX */
		0x87, 0x17,  /* XCHG dword [EDI], EDX */
		0x87, 0x1f,  /* XCHG dword [EDI], EBX */
		0x87, 0x27,  /* XCHG dword [EDI], ESP */
		0x87, 0x2f,  /* XCHG dword [EDI], EBP */
		0x87, 0x37,  /* XCHG dword [EDI], ESI */
		0x87, 0x3f   /* XCHG dword [EDI], EDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x7e, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x37_sz, instructionCount);
	{
		/* XCHG dword [ECX], ECX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ECX], EDX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ECX], EBX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ECX], ESP */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ECX], EBP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ECX], ESI */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ECX], EDI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDX], EAX */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDX], ECX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDX], EDX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDX], EBX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDX], ESP */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDX], EBP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDX], ESI */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDX], EDI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBX], EAX */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBX], ECX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBX], EDX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBX], EBX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBX], ESP */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBX], EBP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBX], ESI */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBX], EDI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESP], EAX */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESP], ECX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESP], EDX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESP], EBX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESP], ESP */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESP], EBP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESP], ESI */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESP], EDI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBP], EAX */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBP], ECX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBP], EDX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBP], EBX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBP], ESP */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBP], EBP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBP], ESI */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EBP], EDI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESI], EAX */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESI], ECX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESI], EDX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESI], EBX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESI], ESP */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESI], EBP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESI], ESI */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [ESI], EDI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDI], EAX */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDI], ECX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDI], EDX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDI], EBX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDI], ESP */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDI], EBP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDI], ESI */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG dword [EDI], EDI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOV_O_RM_FULL_REG_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x89 
	const uint8_t pOps[0x80] = {
		0x89, 0x1,  /* MOV dword [ECX], EAX */
		0x89, 0x9,  /* MOV dword [ECX], ECX */
		0x89, 0x11,  /* MOV dword [ECX], EDX */
		0x89, 0x19,  /* MOV dword [ECX], EBX */
		0x89, 0x21,  /* MOV dword [ECX], ESP */
		0x89, 0x29,  /* MOV dword [ECX], EBP */
		0x89, 0x31,  /* MOV dword [ECX], ESI */
		0x89, 0x39,  /* MOV dword [ECX], EDI */
		0x89, 0x2,  /* MOV dword [EDX], EAX */
		0x89, 0xa,  /* MOV dword [EDX], ECX */
		0x89, 0x12,  /* MOV dword [EDX], EDX */
		0x89, 0x1a,  /* MOV dword [EDX], EBX */
		0x89, 0x22,  /* MOV dword [EDX], ESP */
		0x89, 0x2a,  /* MOV dword [EDX], EBP */
		0x89, 0x32,  /* MOV dword [EDX], ESI */
		0x89, 0x3a,  /* MOV dword [EDX], EDI */
		0x89, 0x3,  /* MOV dword [EBX], EAX */
		0x89, 0xb,  /* MOV dword [EBX], ECX */
		0x89, 0x13,  /* MOV dword [EBX], EDX */
		0x89, 0x1b,  /* MOV dword [EBX], EBX */
		0x89, 0x23,  /* MOV dword [EBX], ESP */
		0x89, 0x2b,  /* MOV dword [EBX], EBP */
		0x89, 0x33,  /* MOV dword [EBX], ESI */
		0x89, 0x3b,  /* MOV dword [EBX], EDI */
		0x89, 0x4, 0x24,  /* MOV dword [ESP], EAX */
		0x89, 0xc, 0x24,  /* MOV dword [ESP], ECX */
		0x89, 0x14, 0x24,  /* MOV dword [ESP], EDX */
		0x89, 0x1c, 0x24,  /* MOV dword [ESP], EBX */
		0x89, 0x24, 0x24,  /* MOV dword [ESP], ESP */
		0x89, 0x2c, 0x24,  /* MOV dword [ESP], EBP */
		0x89, 0x34, 0x24,  /* MOV dword [ESP], ESI */
		0x89, 0x3c, 0x24,  /* MOV dword [ESP], EDI */
		0x89, 0x45, 0x0,  /* MOV dword [EBP], EAX */
		0x89, 0x4d, 0x0,  /* MOV dword [EBP], ECX */
		0x89, 0x55, 0x0,  /* MOV dword [EBP], EDX */
		0x89, 0x5d, 0x0,  /* MOV dword [EBP], EBX */
		0x89, 0x65, 0x0,  /* MOV dword [EBP], ESP */
		0x89, 0x6d, 0x0,  /* MOV dword [EBP], EBP */
		0x89, 0x75, 0x0,  /* MOV dword [EBP], ESI */
		0x89, 0x7d, 0x0,  /* MOV dword [EBP], EDI */
		0x89, 0x6,  /* MOV dword [ESI], EAX */
		0x89, 0xe,  /* MOV dword [ESI], ECX */
		0x89, 0x16,  /* MOV dword [ESI], EDX */
		0x89, 0x1e,  /* MOV dword [ESI], EBX */
		0x89, 0x26,  /* MOV dword [ESI], ESP */
		0x89, 0x2e,  /* MOV dword [ESI], EBP */
		0x89, 0x36,  /* MOV dword [ESI], ESI */
		0x89, 0x3e,  /* MOV dword [ESI], EDI */
		0x89, 0x7,  /* MOV dword [EDI], EAX */
		0x89, 0xf,  /* MOV dword [EDI], ECX */
		0x89, 0x17,  /* MOV dword [EDI], EDX */
		0x89, 0x1f,  /* MOV dword [EDI], EBX */
		0x89, 0x27,  /* MOV dword [EDI], ESP */
		0x89, 0x2f,  /* MOV dword [EDI], EBP */
		0x89, 0x37,  /* MOV dword [EDI], ESI */
		0x89, 0x3f   /* MOV dword [EDI], EDI */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x80, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* MOV dword [ECX], EAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ECX], ECX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ECX], EDX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ECX], EBX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ECX], ESP */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ECX], EBP */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ECX], ESI */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ECX], EDI */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDX], EAX */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDX], ECX */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDX], EDX */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDX], EBX */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDX], ESP */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDX], EBP */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDX], ESI */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDX], EDI */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBX], EAX */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBX], ECX */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBX], EDX */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBX], EBX */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBX], ESP */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBX], EBP */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBX], ESI */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBX], EDI */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESP], EAX */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESP], ECX */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESP], EDX */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESP], EBX */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESP], ESP */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESP], EBP */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESP], ESI */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESP], EDI */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBP], EAX */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBP], ECX */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBP], EDX */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBP], EBX */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBP], ESP */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBP], EBP */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBP], ESI */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EBP], EDI */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESI], EAX */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESI], ECX */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESI], EDX */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESI], EBX */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESI], ESP */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESI], EBP */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESI], ESI */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [ESI], EDI */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDI], EAX */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDI], ECX */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDI], EDX */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDI], EBX */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDI], ESP */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDI], EBP */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDI], ESI */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV dword [EDI], EDI */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::MOV,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOV_O_REG_FULL_RM_FULL)
{
	Instruction instructions[0x38];
	size_t instructionCount;

	// ops: 0x8b 
	const uint8_t pOps[0x80] = {
		0x8b, 0x1,  /* MOV EAX, dword [ECX] */
		0x8b, 0x2,  /* MOV EAX, dword [EDX] */
		0x8b, 0x3,  /* MOV EAX, dword [EBX] */
		0x8b, 0x4, 0x24,  /* MOV EAX, dword [ESP] */
		0x8b, 0x45, 0x0,  /* MOV EAX, dword [EBP] */
		0x8b, 0x6,  /* MOV EAX, dword [ESI] */
		0x8b, 0x7,  /* MOV EAX, dword [EDI] */
		0x8b, 0x9,  /* MOV ECX, dword [ECX] */
		0x8b, 0xa,  /* MOV ECX, dword [EDX] */
		0x8b, 0xb,  /* MOV ECX, dword [EBX] */
		0x8b, 0xc, 0x24,  /* MOV ECX, dword [ESP] */
		0x8b, 0x4d, 0x0,  /* MOV ECX, dword [EBP] */
		0x8b, 0xe,  /* MOV ECX, dword [ESI] */
		0x8b, 0xf,  /* MOV ECX, dword [EDI] */
		0x8b, 0x11,  /* MOV EDX, dword [ECX] */
		0x8b, 0x12,  /* MOV EDX, dword [EDX] */
		0x8b, 0x13,  /* MOV EDX, dword [EBX] */
		0x8b, 0x14, 0x24,  /* MOV EDX, dword [ESP] */
		0x8b, 0x55, 0x0,  /* MOV EDX, dword [EBP] */
		0x8b, 0x16,  /* MOV EDX, dword [ESI] */
		0x8b, 0x17,  /* MOV EDX, dword [EDI] */
		0x8b, 0x19,  /* MOV EBX, dword [ECX] */
		0x8b, 0x1a,  /* MOV EBX, dword [EDX] */
		0x8b, 0x1b,  /* MOV EBX, dword [EBX] */
		0x8b, 0x1c, 0x24,  /* MOV EBX, dword [ESP] */
		0x8b, 0x5d, 0x0,  /* MOV EBX, dword [EBP] */
		0x8b, 0x1e,  /* MOV EBX, dword [ESI] */
		0x8b, 0x1f,  /* MOV EBX, dword [EDI] */
		0x8b, 0x21,  /* MOV ESP, dword [ECX] */
		0x8b, 0x22,  /* MOV ESP, dword [EDX] */
		0x8b, 0x23,  /* MOV ESP, dword [EBX] */
		0x8b, 0x24, 0x24,  /* MOV ESP, dword [ESP] */
		0x8b, 0x65, 0x0,  /* MOV ESP, dword [EBP] */
		0x8b, 0x26,  /* MOV ESP, dword [ESI] */
		0x8b, 0x27,  /* MOV ESP, dword [EDI] */
		0x8b, 0x29,  /* MOV EBP, dword [ECX] */
		0x8b, 0x2a,  /* MOV EBP, dword [EDX] */
		0x8b, 0x2b,  /* MOV EBP, dword [EBX] */
		0x8b, 0x2c, 0x24,  /* MOV EBP, dword [ESP] */
		0x8b, 0x6d, 0x0,  /* MOV EBP, dword [EBP] */
		0x8b, 0x2e,  /* MOV EBP, dword [ESI] */
		0x8b, 0x2f,  /* MOV EBP, dword [EDI] */
		0x8b, 0x31,  /* MOV ESI, dword [ECX] */
		0x8b, 0x32,  /* MOV ESI, dword [EDX] */
		0x8b, 0x33,  /* MOV ESI, dword [EBX] */
		0x8b, 0x34, 0x24,  /* MOV ESI, dword [ESP] */
		0x8b, 0x75, 0x0,  /* MOV ESI, dword [EBP] */
		0x8b, 0x36,  /* MOV ESI, dword [ESI] */
		0x8b, 0x37,  /* MOV ESI, dword [EDI] */
		0x8b, 0x39,  /* MOV EDI, dword [ECX] */
		0x8b, 0x3a,  /* MOV EDI, dword [EDX] */
		0x8b, 0x3b,  /* MOV EDI, dword [EBX] */
		0x8b, 0x3c, 0x24,  /* MOV EDI, dword [ESP] */
		0x8b, 0x7d, 0x0,  /* MOV EDI, dword [EBP] */
		0x8b, 0x3e,  /* MOV EDI, dword [ESI] */
		0x8b, 0x3f   /* MOV EDI, dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x80, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x38, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x38_sz, instructionCount);
	{
		/* MOV EAX, dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, dword [ECX] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, dword [EDX] */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, dword [EBX] */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, dword [ESP] */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, dword [EBP] */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, dword [ESI] */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, dword [EDI] */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, dword [ECX] */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, dword [EDX] */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, dword [EBX] */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, dword [ESP] */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, dword [EBP] */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, dword [ESI] */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, dword [EDI] */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, dword [ECX] */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, dword [EDX] */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, dword [EBX] */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, dword [ESP] */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, dword [EBP] */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, dword [ESI] */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, dword [EDI] */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, dword [ECX] */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, dword [EDX] */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, dword [EBX] */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, dword [ESP] */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, dword [EBP] */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, dword [ESI] */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, dword [EDI] */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, dword [ECX] */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, dword [EDX] */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, dword [EBX] */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, dword [ESP] */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, dword [EBP] */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, dword [ESI] */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, dword [EDI] */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, dword [ECX] */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, dword [EDX] */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, dword [EBX] */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, dword [ESP] */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, dword [EBP] */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, dword [ESI] */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, dword [EDI] */
		const Instruction& inst = instructions[0x30];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, dword [ECX] */
		const Instruction& inst = instructions[0x31];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, dword [EDX] */
		const Instruction& inst = instructions[0x32];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, dword [EBX] */
		const Instruction& inst = instructions[0x33];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, dword [ESP] */
		const Instruction& inst = instructions[0x34];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, dword [EBP] */
		const Instruction& inst = instructions[0x35];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, dword [ESI] */
		const Instruction& inst = instructions[0x36];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, dword [EDI] */
		const Instruction& inst = instructions[0x37];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOV_O_REG_FULL_M16_SREG)
{
	Instruction instructions[0x90];
	size_t instructionCount;

	// ops: 0x8c 
	const uint8_t pOps[0x15c] = {
		0x8c, 0x0,  /* MOV word [EAX], ES */
		0x8c, 0x8,  /* MOV word [EAX], CS */
		0x8c, 0x10,  /* MOV word [EAX], SS */
		0x8c, 0x18,  /* MOV word [EAX], DS */
		0x8c, 0x20,  /* MOV word [EAX], FS */
		0x8c, 0x28,  /* MOV word [EAX], GS */
		0x8c, 0x1,  /* MOV word [ECX], ES */
		0x8c, 0x9,  /* MOV word [ECX], CS */
		0x8c, 0x11,  /* MOV word [ECX], SS */
		0x8c, 0x19,  /* MOV word [ECX], DS */
		0x8c, 0x21,  /* MOV word [ECX], FS */
		0x8c, 0x29,  /* MOV word [ECX], GS */
		0x8c, 0x2,  /* MOV word [EDX], ES */
		0x8c, 0xa,  /* MOV word [EDX], CS */
		0x8c, 0x12,  /* MOV word [EDX], SS */
		0x8c, 0x1a,  /* MOV word [EDX], DS */
		0x8c, 0x22,  /* MOV word [EDX], FS */
		0x8c, 0x2a,  /* MOV word [EDX], GS */
		0x8c, 0x3,  /* MOV word [EBX], ES */
		0x8c, 0xb,  /* MOV word [EBX], CS */
		0x8c, 0x13,  /* MOV word [EBX], SS */
		0x8c, 0x1b,  /* MOV word [EBX], DS */
		0x8c, 0x23,  /* MOV word [EBX], FS */
		0x8c, 0x2b,  /* MOV word [EBX], GS */
		0x8c, 0x4, 0x24,  /* MOV word [ESP], ES */
		0x8c, 0xc, 0x24,  /* MOV word [ESP], CS */
		0x8c, 0x14, 0x24,  /* MOV word [ESP], SS */
		0x8c, 0x1c, 0x24,  /* MOV word [ESP], DS */
		0x8c, 0x24, 0x24,  /* MOV word [ESP], FS */
		0x8c, 0x2c, 0x24,  /* MOV word [ESP], GS */
		0x8c, 0x45, 0x0,  /* MOV word [EBP], ES */
		0x8c, 0x4d, 0x0,  /* MOV word [EBP], CS */
		0x8c, 0x55, 0x0,  /* MOV word [EBP], SS */
		0x8c, 0x5d, 0x0,  /* MOV word [EBP], DS */
		0x8c, 0x65, 0x0,  /* MOV word [EBP], FS */
		0x8c, 0x6d, 0x0,  /* MOV word [EBP], GS */
		0x8c, 0x6,  /* MOV word [ESI], ES */
		0x8c, 0xe,  /* MOV word [ESI], CS */
		0x8c, 0x16,  /* MOV word [ESI], SS */
		0x8c, 0x1e,  /* MOV word [ESI], DS */
		0x8c, 0x26,  /* MOV word [ESI], FS */
		0x8c, 0x2e,  /* MOV word [ESI], GS */
		0x8c, 0x7,  /* MOV word [EDI], ES */
		0x8c, 0xf,  /* MOV word [EDI], CS */
		0x8c, 0x17,  /* MOV word [EDI], SS */
		0x8c, 0x1f,  /* MOV word [EDI], DS */
		0x8c, 0x27,  /* MOV word [EDI], FS */
		0x8c, 0x2f,  /* MOV word [EDI], GS */
		0x66, 0x8c, 0xc0,  /* MOV AX, ES */
		0x66, 0x8c, 0xc8,  /* MOV AX, CS */
		0x66, 0x8c, 0xd0,  /* MOV AX, SS */
		0x66, 0x8c, 0xd8,  /* MOV AX, DS */
		0x66, 0x8c, 0xe0,  /* MOV AX, FS */
		0x66, 0x8c, 0xe8,  /* MOV AX, GS */
		0x66, 0x8c, 0xc1,  /* MOV CX, ES */
		0x66, 0x8c, 0xc9,  /* MOV CX, CS */
		0x66, 0x8c, 0xd1,  /* MOV CX, SS */
		0x66, 0x8c, 0xd9,  /* MOV CX, DS */
		0x66, 0x8c, 0xe1,  /* MOV CX, FS */
		0x66, 0x8c, 0xe9,  /* MOV CX, GS */
		0x66, 0x8c, 0xc2,  /* MOV DX, ES */
		0x66, 0x8c, 0xca,  /* MOV DX, CS */
		0x66, 0x8c, 0xd2,  /* MOV DX, SS */
		0x66, 0x8c, 0xda,  /* MOV DX, DS */
		0x66, 0x8c, 0xe2,  /* MOV DX, FS */
		0x66, 0x8c, 0xea,  /* MOV DX, GS */
		0x66, 0x8c, 0xc3,  /* MOV BX, ES */
		0x66, 0x8c, 0xcb,  /* MOV BX, CS */
		0x66, 0x8c, 0xd3,  /* MOV BX, SS */
		0x66, 0x8c, 0xdb,  /* MOV BX, DS */
		0x66, 0x8c, 0xe3,  /* MOV BX, FS */
		0x66, 0x8c, 0xeb,  /* MOV BX, GS */
		0x66, 0x8c, 0xc4,  /* MOV SP, ES */
		0x66, 0x8c, 0xcc,  /* MOV SP, CS */
		0x66, 0x8c, 0xd4,  /* MOV SP, SS */
		0x66, 0x8c, 0xdc,  /* MOV SP, DS */
		0x66, 0x8c, 0xe4,  /* MOV SP, FS */
		0x66, 0x8c, 0xec,  /* MOV SP, GS */
		0x66, 0x8c, 0xc5,  /* MOV BP, ES */
		0x66, 0x8c, 0xcd,  /* MOV BP, CS */
		0x66, 0x8c, 0xd5,  /* MOV BP, SS */
		0x66, 0x8c, 0xdd,  /* MOV BP, DS */
		0x66, 0x8c, 0xe5,  /* MOV BP, FS */
		0x66, 0x8c, 0xed,  /* MOV BP, GS */
		0x66, 0x8c, 0xc6,  /* MOV SI, ES */
		0x66, 0x8c, 0xce,  /* MOV SI, CS */
		0x66, 0x8c, 0xd6,  /* MOV SI, SS */
		0x66, 0x8c, 0xde,  /* MOV SI, DS */
		0x66, 0x8c, 0xe6,  /* MOV SI, FS */
		0x66, 0x8c, 0xee,  /* MOV SI, GS */
		0x66, 0x8c, 0xc7,  /* MOV DI, ES */
		0x66, 0x8c, 0xcf,  /* MOV DI, CS */
		0x66, 0x8c, 0xd7,  /* MOV DI, SS */
		0x66, 0x8c, 0xdf,  /* MOV DI, DS */
		0x66, 0x8c, 0xe7,  /* MOV DI, FS */
		0x66, 0x8c, 0xef,  /* MOV DI, GS */
		0x8c, 0xc0,  /* MOV EAX, ES */
		0x8c, 0xc8,  /* MOV EAX, CS */
		0x8c, 0xd0,  /* MOV EAX, SS */
		0x8c, 0xd8,  /* MOV EAX, DS */
		0x8c, 0xe0,  /* MOV EAX, FS */
		0x8c, 0xe8,  /* MOV EAX, GS */
		0x8c, 0xc1,  /* MOV ECX, ES */
		0x8c, 0xc9,  /* MOV ECX, CS */
		0x8c, 0xd1,  /* MOV ECX, SS */
		0x8c, 0xd9,  /* MOV ECX, DS */
		0x8c, 0xe1,  /* MOV ECX, FS */
		0x8c, 0xe9,  /* MOV ECX, GS */
		0x8c, 0xc2,  /* MOV EDX, ES */
		0x8c, 0xca,  /* MOV EDX, CS */
		0x8c, 0xd2,  /* MOV EDX, SS */
		0x8c, 0xda,  /* MOV EDX, DS */
		0x8c, 0xe2,  /* MOV EDX, FS */
		0x8c, 0xea,  /* MOV EDX, GS */
		0x8c, 0xc3,  /* MOV EBX, ES */
		0x8c, 0xcb,  /* MOV EBX, CS */
		0x8c, 0xd3,  /* MOV EBX, SS */
		0x8c, 0xdb,  /* MOV EBX, DS */
		0x8c, 0xe3,  /* MOV EBX, FS */
		0x8c, 0xeb,  /* MOV EBX, GS */
		0x8c, 0xc4,  /* MOV ESP, ES */
		0x8c, 0xcc,  /* MOV ESP, CS */
		0x8c, 0xd4,  /* MOV ESP, SS */
		0x8c, 0xdc,  /* MOV ESP, DS */
		0x8c, 0xe4,  /* MOV ESP, FS */
		0x8c, 0xec,  /* MOV ESP, GS */
		0x8c, 0xc5,  /* MOV EBP, ES */
		0x8c, 0xcd,  /* MOV EBP, CS */
		0x8c, 0xd5,  /* MOV EBP, SS */
		0x8c, 0xdd,  /* MOV EBP, DS */
		0x8c, 0xe5,  /* MOV EBP, FS */
		0x8c, 0xed,  /* MOV EBP, GS */
		0x8c, 0xc6,  /* MOV ESI, ES */
		0x8c, 0xce,  /* MOV ESI, CS */
		0x8c, 0xd6,  /* MOV ESI, SS */
		0x8c, 0xde,  /* MOV ESI, DS */
		0x8c, 0xe6,  /* MOV ESI, FS */
		0x8c, 0xee,  /* MOV ESI, GS */
		0x8c, 0xc7,  /* MOV EDI, ES */
		0x8c, 0xcf,  /* MOV EDI, CS */
		0x8c, 0xd7,  /* MOV EDI, SS */
		0x8c, 0xdf,  /* MOV EDI, DS */
		0x8c, 0xe7,  /* MOV EDI, FS */
		0x8c, 0xef   /* MOV EDI, GS */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x15c, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x90, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x90_sz, instructionCount);
	{
		/* MOV word [EAX], ES */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EAX], CS */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EAX], SS */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EAX], DS */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EAX], FS */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EAX], GS */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EAX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ECX], ES */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ECX], CS */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ECX], SS */
		const Instruction& inst = instructions[0x8];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ECX], DS */
		const Instruction& inst = instructions[0x9];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ECX], FS */
		const Instruction& inst = instructions[0xa];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ECX], GS */
		const Instruction& inst = instructions[0xb];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDX], ES */
		const Instruction& inst = instructions[0xc];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDX], CS */
		const Instruction& inst = instructions[0xd];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDX], SS */
		const Instruction& inst = instructions[0xe];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDX], DS */
		const Instruction& inst = instructions[0xf];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDX], FS */
		const Instruction& inst = instructions[0x10];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDX], GS */
		const Instruction& inst = instructions[0x11];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBX], ES */
		const Instruction& inst = instructions[0x12];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBX], CS */
		const Instruction& inst = instructions[0x13];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBX], SS */
		const Instruction& inst = instructions[0x14];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBX], DS */
		const Instruction& inst = instructions[0x15];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBX], FS */
		const Instruction& inst = instructions[0x16];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBX], GS */
		const Instruction& inst = instructions[0x17];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESP], ES */
		const Instruction& inst = instructions[0x18];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESP], CS */
		const Instruction& inst = instructions[0x19];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESP], SS */
		const Instruction& inst = instructions[0x1a];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESP], DS */
		const Instruction& inst = instructions[0x1b];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESP], FS */
		const Instruction& inst = instructions[0x1c];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESP], GS */
		const Instruction& inst = instructions[0x1d];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBP], ES */
		const Instruction& inst = instructions[0x1e];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBP], CS */
		const Instruction& inst = instructions[0x1f];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBP], SS */
		const Instruction& inst = instructions[0x20];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBP], DS */
		const Instruction& inst = instructions[0x21];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBP], FS */
		const Instruction& inst = instructions[0x22];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EBP], GS */
		const Instruction& inst = instructions[0x23];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESI], ES */
		const Instruction& inst = instructions[0x24];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESI], CS */
		const Instruction& inst = instructions[0x25];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESI], SS */
		const Instruction& inst = instructions[0x26];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESI], DS */
		const Instruction& inst = instructions[0x27];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESI], FS */
		const Instruction& inst = instructions[0x28];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [ESI], GS */
		const Instruction& inst = instructions[0x29];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDI], ES */
		const Instruction& inst = instructions[0x2a];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDI], CS */
		const Instruction& inst = instructions[0x2b];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDI], SS */
		const Instruction& inst = instructions[0x2c];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDI], DS */
		const Instruction& inst = instructions[0x2d];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDI], FS */
		const Instruction& inst = instructions[0x2e];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV word [EDI], GS */
		const Instruction& inst = instructions[0x2f];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV AX, ES */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV AX, CS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV AX, SS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV AX, DS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV AX, FS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV AX, GS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x20)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CX, ES */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CX, CS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CX, SS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CX, DS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CX, FS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CX, GS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x21)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DX, ES */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DX, CS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DX, SS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DX, DS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DX, FS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DX, GS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x22)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BX, ES */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BX, CS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BX, SS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BX, DS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BX, FS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BX, GS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BX, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x23)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SP, ES */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SP, CS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SP, SS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SP, DS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SP, FS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SP, GS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x24)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BP, ES */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BP, CS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BP, SS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BP, DS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BP, FS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BP, GS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BP, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x25)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SI, ES */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SI, CS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SI, SS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SI, DS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SI, FS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV SI, GS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::SI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x26)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DI, ES */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DI, CS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DI, SS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DI, DS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DI, FS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DI, GS */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DI, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x27)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, ES */
		const Instruction& inst = instructions[0x60];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, CS */
		const Instruction& inst = instructions[0x61];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, SS */
		const Instruction& inst = instructions[0x62];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, DS */
		const Instruction& inst = instructions[0x63];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, FS */
		const Instruction& inst = instructions[0x64];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EAX, GS */
		const Instruction& inst = instructions[0x65];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, ES */
		const Instruction& inst = instructions[0x66];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, CS */
		const Instruction& inst = instructions[0x67];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, SS */
		const Instruction& inst = instructions[0x68];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, DS */
		const Instruction& inst = instructions[0x69];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, FS */
		const Instruction& inst = instructions[0x6a];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, GS */
		const Instruction& inst = instructions[0x6b];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, ES */
		const Instruction& inst = instructions[0x6c];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, CS */
		const Instruction& inst = instructions[0x6d];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, SS */
		const Instruction& inst = instructions[0x6e];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, DS */
		const Instruction& inst = instructions[0x6f];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, FS */
		const Instruction& inst = instructions[0x70];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, GS */
		const Instruction& inst = instructions[0x71];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, ES */
		const Instruction& inst = instructions[0x72];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, CS */
		const Instruction& inst = instructions[0x73];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, SS */
		const Instruction& inst = instructions[0x74];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, DS */
		const Instruction& inst = instructions[0x75];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, FS */
		const Instruction& inst = instructions[0x76];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, GS */
		const Instruction& inst = instructions[0x77];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, ES */
		const Instruction& inst = instructions[0x78];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, CS */
		const Instruction& inst = instructions[0x79];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, SS */
		const Instruction& inst = instructions[0x7a];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, DS */
		const Instruction& inst = instructions[0x7b];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, FS */
		const Instruction& inst = instructions[0x7c];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, GS */
		const Instruction& inst = instructions[0x7d];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, ES */
		const Instruction& inst = instructions[0x7e];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, CS */
		const Instruction& inst = instructions[0x7f];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, SS */
		const Instruction& inst = instructions[0x80];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, DS */
		const Instruction& inst = instructions[0x81];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, FS */
		const Instruction& inst = instructions[0x82];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, GS */
		const Instruction& inst = instructions[0x83];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, ES */
		const Instruction& inst = instructions[0x84];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, CS */
		const Instruction& inst = instructions[0x85];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, SS */
		const Instruction& inst = instructions[0x86];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, DS */
		const Instruction& inst = instructions[0x87];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, FS */
		const Instruction& inst = instructions[0x88];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, GS */
		const Instruction& inst = instructions[0x89];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, ES */
		const Instruction& inst = instructions[0x8a];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::ES, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x44)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, CS */
		const Instruction& inst = instructions[0x8b];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x45)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, SS */
		const Instruction& inst = instructions[0x8c];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::SS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x46)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, DS */
		const Instruction& inst = instructions[0x8d];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::DS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x47)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, FS */
		const Instruction& inst = instructions[0x8e];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::FS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x48)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, GS */
		const Instruction& inst = instructions[0x8f];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::GS, 0x10, __FILE__, __LINE__); // set! (reg idx: 0x49)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, LEA_O_REG_FULL_MEM)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x8d 
	const uint8_t pOps[0x38] = {
		0x8d, 0x4, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA EAX, [edx*4] */
		0x8d, 0xc, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA ECX, [edx*4] */
		0x8d, 0x14, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA EDX, [edx*4] */
		0x8d, 0x1c, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA EBX, [edx*4] */
		0x8d, 0x24, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA ESP, [edx*4] */
		0x8d, 0x2c, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA EBP, [edx*4] */
		0x8d, 0x34, 0x95, 0x0, 0x0, 0x0, 0x0,  /* LEA ESI, [edx*4] */
		0x8d, 0x3c, 0x95, 0x0, 0x0, 0x0, 0x0   /* LEA EDI, [edx*4] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x38, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x8_sz, instructionCount);
	{
		/* LEA EAX, [edx*4] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA ECX, [edx*4] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA EDX, [edx*4] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA EBX, [edx*4] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA ESP, [edx*4] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA EBP, [edx*4] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA ESI, [edx*4] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LEA EDI, [edx*4] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::LEA,
			FlowControl::NONE,
			InstructionSet::NONE,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::MEM, RegIndex::EDX, 0x0, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOV_O_SREG_RM_16)
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

	CodeStream strm(0, pOps, 0x60, options, CodeType::CODE_32BIT);

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


TEST(x86, POP_O_RM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x8f 
	const uint8_t pOps[0x10] = {
		0x8f, 0x1,  /* POP dword [ECX] */
		0x8f, 0x2,  /* POP dword [EDX] */
		0x8f, 0x3,  /* POP dword [EBX] */
		0x8f, 0x4, 0x24,  /* POP dword [ESP] */
		0x8f, 0x45, 0x0,  /* POP dword [EBP] */
		0x8f, 0x6,  /* POP dword [ESI] */
		0x8f, 0x7   /* POP dword [EDI] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* POP dword [ECX] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::POP,
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
		/* POP dword [EDX] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::POP,
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
		/* POP dword [EBX] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::POP,
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
		/* POP dword [ESP] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::POP,
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
		/* POP dword [EBP] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::POP,
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
		/* POP dword [ESI] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::POP,
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
		/* POP dword [EDI] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::POP,
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


TEST(x86, XCHG_O_BLOCK_R_FULL_ACC_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x90 
	const uint8_t pOps[0x7] = {
		0x91,  /* XCHG ECX, EAX */
		0x92,  /* XCHG EDX, EAX */
		0x93,  /* XCHG EBX, EAX */
		0x94,  /* XCHG ESP, EAX */
		0x95,  /* XCHG EBP, EAX */
		0x96,  /* XCHG ESI, EAX */
		0x97   /* XCHG EDI, EAX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* XCHG ECX, EAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG EDX, EAX */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG EBX, EAX */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG ESP, EAX */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG EBP, EAX */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG ESI, EAX */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* XCHG EDI, EAX */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::XCHG,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, CBW_CWDE_CDQE)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x98 
	const uint8_t pOps[0x3] = {
		0x66, 0x98,  /* CBW */
		0x98   /*  CWDE */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
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
}


TEST(x86, CWD_CDQ_CQO)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x99 
	const uint8_t pOps[0x3] = {
		0x66, 0x99,  /* CWD */
		0x99   /*  CDQ */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
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
}


TEST(x86, CALL_FAR_O_PTR16_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x9a 
	const uint8_t pOps[0x7] = {
		0x9a, 0x78, 0x56, 0x34, 0x12, 0xff, 0xff   /* CALL FAR 0xffff:0x12345678 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_CALL);

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CALL FAR 0xffff:0x12345678 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CALL_FAR,
			FlowControl::CALL,
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


TEST(x86, CALL_FAR_O_PTR16_FULL_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x9a 
	const uint8_t pOps[0x7] = {
		0x9a, 0x78, 0x56, 0x34, 0x12, 0xff, 0xff   /* CALL FAR 0xffff:0x12345678 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_CALL;

	CodeStream strm(0, pOps, 0x7, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CALL FAR 0xffff:0x12345678 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CALL_FAR,
			FlowControl::CALL,
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


TEST(x86, PUSHF)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x9c 
	const uint8_t pOps[0x1] = {
		0x9c   /* PUSHF */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, POPF)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x9d 
	const uint8_t pOps[0x1] = {
		0x9d   /* POPF */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, SAHF)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x9e 
	const uint8_t pOps[0x1] = {
		0x9e   /* SAHF */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, LAHF)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0x9f 
	const uint8_t pOps[0x1] = {
		0x9f   /* LAHF */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, MOV_O_ACC_8_MOFFS_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa0 
	const uint8_t pOps[0x9] = {
		0x67, 0xa0, 0x78, 0x56,  /* MOV AL, [word 0x5678] */
		0x67, 0x8a, 0x26, 0x78, 0x56   /* MOV AH, [word 0x5678] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOV AL, [word 0x5678] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x5678,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV AH, [word 0x5678] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOV_O_ACC_FULL_MOFFS_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa1 
	const uint8_t pOps[0x4] = {
		0x67, 0xa1, 0x78, 0x56   /* MOV EAX, [word 0x5678] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* MOV EAX, [word 0x5678] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOV_O_MOFFS_8_ACC_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa2 
	const uint8_t pOps[0x9] = {
		0x67, 0xa2, 0x78, 0x56,  /* MOV [word 0x5678], AL */
		0x67, 0x88, 0x26, 0x78, 0x56   /* MOV [word 0x5678], AH */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x9, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		/* MOV [word 0x5678], AL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x5678,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::DISP, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV [word 0x5678], AH */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::DISP, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOV_O_MOFFS_FULL_ACC_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa3 
	const uint8_t pOps[0x4] = {
		0x67, 0xa3, 0x78, 0x56   /* MOV [word 0x5678], EAX */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* MOV [word 0x5678], EAX */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOVSB_O_REG_EDI_REG_ESI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa4 
	const uint8_t pOps[0x1] = {
		0xa4   /* MOVSB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOVS_O_REG_EDI_REG_ESI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa5 
	const uint8_t pOps[0x1] = {
		0xa5   /* MOVSD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* MOVSD */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOVS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x400,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, CMPSB_O_REG_ESI_REG_EDI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa6 
	const uint8_t pOps[0x1] = {
		0xa6   /* CMPSB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, CMPS_O_REG_ESI_REG_EDI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa7 
	const uint8_t pOps[0x1] = {
		0xa7   /* CMPSD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* CMPSD */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::CMPS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x8d5,
			0x400,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, TEST_O_ACC_8_IMM_8)
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

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_32BIT);

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


TEST(x86, TEST_O_ACC_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xa9 
	const uint8_t pOps[0x5] = {
		0xa9, 0xbb, 0xee, 0xaf, 0xab   /* TEST EAX, 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x5, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* TEST EAX, 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::TEST,
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

		EXPECT_EQ(0xabafeebbu, inst.imm.uint32);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, STOSB_O_REG_EDI_ACC_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xaa 
	const uint8_t pOps[0x1] = {
		0xaa   /* STOSB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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
			RegIndex::ES,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, STOS_O_REG_EDI_ACC_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xab 
	const uint8_t pOps[0x1] = {
		0xab   /* STOSD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* STOSD */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::STOS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::ES,
			RegIndex::NONE,
			0x0,
			0x400,
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
}


TEST(x86, LODSB_O_ACC_8_REG_ESI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xac 
	const uint8_t pOps[0x1] = {
		0xac   /* LODSB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperand(inst.ops[1], OperandTypeAbs::SMEM, RegIndex::ESI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, LODS_O_ACC_FULL_REG_ESI)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xad 
	const uint8_t pOps[0x1] = {
		0xad   /* LODSD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* LODSD */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LODS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x400,
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
}


TEST(x86, SCASB_O_REG_EDI_ACC_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xae 
	const uint8_t pOps[0x1] = {
		0xae   /* SCASB */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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
			RegIndex::ES,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SCAS_O_REG_EDI_ACC_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xaf 
	const uint8_t pOps[0x1] = {
		0xaf   /* SCASD */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* SCASD */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SCAS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
			0x0,
			0x0,
			RegIndex::ES,
			RegIndex::NONE,
			0x8d5,
			0x400,
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
}


TEST(x86, MOV_O_BLOCK_R_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xb0 
	const uint8_t pOps[0x10] = {
		0x88, 0xc0,  /* MOV AL, AL */
		0x88, 0xc1,  /* MOV CL, AL */
		0x88, 0xc2,  /* MOV DL, AL */
		0x88, 0xc3,  /* MOV BL, AL */
		0x88, 0xc4,  /* MOV AH, AL */
		0x88, 0xc5,  /* MOV CH, AL */
		0x88, 0xc6,  /* MOV DH, AL */
		0x88, 0xc7   /* MOV BH, AL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x8_sz, instructionCount);
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
	{
		/* MOV AH, AL */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV CH, AL */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV DH, AL */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV BH, AL */
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::AL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x30)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOV_O_BLOCK_R_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xb8 
	const uint8_t pOps[0x28] = {
		0xb8, 0xbb, 0xee, 0xaf, 0xab,  /* MOV EAX, 0xabafeebb */
		0xb9, 0xbb, 0xee, 0xaf, 0xab,  /* MOV ECX, 0xabafeebb */
		0xba, 0xbb, 0xee, 0xaf, 0xab,  /* MOV EDX, 0xabafeebb */
		0xbb, 0xbb, 0xee, 0xaf, 0xab,  /* MOV EBX, 0xabafeebb */
		0xbc, 0xbb, 0xee, 0xaf, 0xab,  /* MOV ESP, 0xabafeebb */
		0xbd, 0xbb, 0xee, 0xaf, 0xab,  /* MOV EBP, 0xabafeebb */
		0xbe, 0xbb, 0xee, 0xaf, 0xab,  /* MOV ESI, 0xabafeebb */
		0xbf, 0xbb, 0xee, 0xaf, 0xab   /* MOV EDI, 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x28, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x8_sz, instructionCount);
	{
		/* MOV EAX, 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ECX, 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDX, 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBX, 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESP, 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EBP, 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV ESI, 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* MOV EDI, 0xabafeebb */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::MOV,
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROL_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x15] = {
		0xc0, 0xc1, 0xaf,  /* ROL CL, 0xaf */
		0xc0, 0xc2, 0xaf,  /* ROL DL, 0xaf */
		0xc0, 0xc3, 0xaf,  /* ROL BL, 0xaf */
		0xc0, 0xc4, 0xaf,  /* ROL AH, 0xaf */
		0xc0, 0xc5, 0xaf,  /* ROL CH, 0xaf */
		0xc0, 0xc6, 0xaf,  /* ROL DH, 0xaf */
		0xc0, 0xc7, 0xaf   /* ROL BH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x15, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* ROL AH, 0xaf */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL CH, 0xaf */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL DH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL BH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROR_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x15] = {
		0xc0, 0xc9, 0xaf,  /* ROR CL, 0xaf */
		0xc0, 0xca, 0xaf,  /* ROR DL, 0xaf */
		0xc0, 0xcb, 0xaf,  /* ROR BL, 0xaf */
		0xc0, 0xcc, 0xaf,  /* ROR AH, 0xaf */
		0xc0, 0xcd, 0xaf,  /* ROR CH, 0xaf */
		0xc0, 0xce, 0xaf,  /* ROR DH, 0xaf */
		0xc0, 0xcf, 0xaf   /* ROR BH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x15, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* ROR AH, 0xaf */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR CH, 0xaf */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR DH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR BH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCL_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x15] = {
		0xc0, 0xd1, 0xaf,  /* RCL CL, 0xaf */
		0xc0, 0xd2, 0xaf,  /* RCL DL, 0xaf */
		0xc0, 0xd3, 0xaf,  /* RCL BL, 0xaf */
		0xc0, 0xd4, 0xaf,  /* RCL AH, 0xaf */
		0xc0, 0xd5, 0xaf,  /* RCL CH, 0xaf */
		0xc0, 0xd6, 0xaf,  /* RCL DH, 0xaf */
		0xc0, 0xd7, 0xaf   /* RCL BH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x15, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* RCL AH, 0xaf */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL CH, 0xaf */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL DH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL BH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCR_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x15] = {
		0xc0, 0xd9, 0xaf,  /* RCR CL, 0xaf */
		0xc0, 0xda, 0xaf,  /* RCR DL, 0xaf */
		0xc0, 0xdb, 0xaf,  /* RCR BL, 0xaf */
		0xc0, 0xdc, 0xaf,  /* RCR AH, 0xaf */
		0xc0, 0xdd, 0xaf,  /* RCR CH, 0xaf */
		0xc0, 0xde, 0xaf,  /* RCR DH, 0xaf */
		0xc0, 0xdf, 0xaf   /* RCR BH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x15, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* RCR AH, 0xaf */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR CH, 0xaf */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR DH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR BH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHL_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x15] = {
		0xc0, 0xe1, 0xaf,  /* SHL CL, 0xaf */
		0xc0, 0xe2, 0xaf,  /* SHL DL, 0xaf */
		0xc0, 0xe3, 0xaf,  /* SHL BL, 0xaf */
		0xc0, 0xe4, 0xaf,  /* SHL AH, 0xaf */
		0xc0, 0xe5, 0xaf,  /* SHL CH, 0xaf */
		0xc0, 0xe6, 0xaf,  /* SHL DH, 0xaf */
		0xc0, 0xe7, 0xaf   /* SHL BH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x15, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SHL AH, 0xaf */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL CH, 0xaf */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL DH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL BH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHR_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x15] = {
		0xc0, 0xe9, 0xaf,  /* SHR CL, 0xaf */
		0xc0, 0xea, 0xaf,  /* SHR DL, 0xaf */
		0xc0, 0xeb, 0xaf,  /* SHR BL, 0xaf */
		0xc0, 0xec, 0xaf,  /* SHR AH, 0xaf */
		0xc0, 0xed, 0xaf,  /* SHR CH, 0xaf */
		0xc0, 0xee, 0xaf,  /* SHR DH, 0xaf */
		0xc0, 0xef, 0xaf   /* SHR BH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x15, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SHR AH, 0xaf */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR CH, 0xaf */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR DH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR BH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAL_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x15] = {
		0xc0, 0xe1, 0xaf,  /* SAL CL, 0xaf */
		0xc0, 0xe2, 0xaf,  /* SAL DL, 0xaf */
		0xc0, 0xe3, 0xaf,  /* SAL BL, 0xaf */
		0xc0, 0xe4, 0xaf,  /* SAL AH, 0xaf */
		0xc0, 0xe5, 0xaf,  /* SAL CH, 0xaf */
		0xc0, 0xe6, 0xaf,  /* SAL DH, 0xaf */
		0xc0, 0xe7, 0xaf   /* SAL BH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x15, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SAL AH, 0xaf */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL CH, 0xaf */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL DH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL BH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAR_O_RM_8_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc0 
	const uint8_t pOps[0x15] = {
		0xc0, 0xf9, 0xaf,  /* SAR CL, 0xaf */
		0xc0, 0xfa, 0xaf,  /* SAR DL, 0xaf */
		0xc0, 0xfb, 0xaf,  /* SAR BL, 0xaf */
		0xc0, 0xfc, 0xaf,  /* SAR AH, 0xaf */
		0xc0, 0xfd, 0xaf,  /* SAR CH, 0xaf */
		0xc0, 0xfe, 0xaf,  /* SAR DH, 0xaf */
		0xc0, 0xff, 0xaf   /* SAR BH, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x15, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SAR AH, 0xaf */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR CH, 0xaf */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR DH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR BH, 0xaf */
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

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROL_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x17] = {
		0xc1, 0x1, 0xaf,  /* ROL dword [ECX], 0xaf */
		0xc1, 0x2, 0xaf,  /* ROL dword [EDX], 0xaf */
		0xc1, 0x3, 0xaf,  /* ROL dword [EBX], 0xaf */
		0xc1, 0x4, 0x24, 0xaf,  /* ROL dword [ESP], 0xaf */
		0xc1, 0x45, 0x0, 0xaf,  /* ROL dword [EBP], 0xaf */
		0xc1, 0x6, 0xaf,  /* ROL dword [ESI], 0xaf */
		0xc1, 0x7, 0xaf   /* ROL dword [EDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROL dword [ECX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [ESP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [ESI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROR_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x17] = {
		0xc1, 0x9, 0xaf,  /* ROR dword [ECX], 0xaf */
		0xc1, 0xa, 0xaf,  /* ROR dword [EDX], 0xaf */
		0xc1, 0xb, 0xaf,  /* ROR dword [EBX], 0xaf */
		0xc1, 0xc, 0x24, 0xaf,  /* ROR dword [ESP], 0xaf */
		0xc1, 0x4d, 0x0, 0xaf,  /* ROR dword [EBP], 0xaf */
		0xc1, 0xe, 0xaf,  /* ROR dword [ESI], 0xaf */
		0xc1, 0xf, 0xaf   /* ROR dword [EDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROR dword [ECX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [ESP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [ESI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCL_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x17] = {
		0xc1, 0x11, 0xaf,  /* RCL dword [ECX], 0xaf */
		0xc1, 0x12, 0xaf,  /* RCL dword [EDX], 0xaf */
		0xc1, 0x13, 0xaf,  /* RCL dword [EBX], 0xaf */
		0xc1, 0x14, 0x24, 0xaf,  /* RCL dword [ESP], 0xaf */
		0xc1, 0x55, 0x0, 0xaf,  /* RCL dword [EBP], 0xaf */
		0xc1, 0x16, 0xaf,  /* RCL dword [ESI], 0xaf */
		0xc1, 0x17, 0xaf   /* RCL dword [EDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCL dword [ECX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [ESP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [ESI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCR_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x17] = {
		0xc1, 0x19, 0xaf,  /* RCR dword [ECX], 0xaf */
		0xc1, 0x1a, 0xaf,  /* RCR dword [EDX], 0xaf */
		0xc1, 0x1b, 0xaf,  /* RCR dword [EBX], 0xaf */
		0xc1, 0x1c, 0x24, 0xaf,  /* RCR dword [ESP], 0xaf */
		0xc1, 0x5d, 0x0, 0xaf,  /* RCR dword [EBP], 0xaf */
		0xc1, 0x1e, 0xaf,  /* RCR dword [ESI], 0xaf */
		0xc1, 0x1f, 0xaf   /* RCR dword [EDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCR dword [ECX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [ESP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [ESI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHL_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x17] = {
		0xc1, 0x21, 0xaf,  /* SHL dword [ECX], 0xaf */
		0xc1, 0x22, 0xaf,  /* SHL dword [EDX], 0xaf */
		0xc1, 0x23, 0xaf,  /* SHL dword [EBX], 0xaf */
		0xc1, 0x24, 0x24, 0xaf,  /* SHL dword [ESP], 0xaf */
		0xc1, 0x65, 0x0, 0xaf,  /* SHL dword [EBP], 0xaf */
		0xc1, 0x26, 0xaf,  /* SHL dword [ESI], 0xaf */
		0xc1, 0x27, 0xaf   /* SHL dword [EDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHL dword [ECX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [ESP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [ESI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHR_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x17] = {
		0xc1, 0x29, 0xaf,  /* SHR dword [ECX], 0xaf */
		0xc1, 0x2a, 0xaf,  /* SHR dword [EDX], 0xaf */
		0xc1, 0x2b, 0xaf,  /* SHR dword [EBX], 0xaf */
		0xc1, 0x2c, 0x24, 0xaf,  /* SHR dword [ESP], 0xaf */
		0xc1, 0x6d, 0x0, 0xaf,  /* SHR dword [EBP], 0xaf */
		0xc1, 0x2e, 0xaf,  /* SHR dword [ESI], 0xaf */
		0xc1, 0x2f, 0xaf   /* SHR dword [EDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHR dword [ECX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [ESP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [ESI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAL_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x17] = {
		0xc1, 0x21, 0xaf,  /* SAL dword [ECX], 0xaf */
		0xc1, 0x22, 0xaf,  /* SAL dword [EDX], 0xaf */
		0xc1, 0x23, 0xaf,  /* SAL dword [EBX], 0xaf */
		0xc1, 0x24, 0x24, 0xaf,  /* SAL dword [ESP], 0xaf */
		0xc1, 0x65, 0x0, 0xaf,  /* SAL dword [EBP], 0xaf */
		0xc1, 0x26, 0xaf,  /* SAL dword [ESI], 0xaf */
		0xc1, 0x27, 0xaf   /* SAL dword [EDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAL dword [ECX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [ESP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [ESI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAR_O_RM_FULL_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc1 
	const uint8_t pOps[0x17] = {
		0xc1, 0x39, 0xaf,  /* SAR dword [ECX], 0xaf */
		0xc1, 0x3a, 0xaf,  /* SAR dword [EDX], 0xaf */
		0xc1, 0x3b, 0xaf,  /* SAR dword [EBX], 0xaf */
		0xc1, 0x3c, 0x24, 0xaf,  /* SAR dword [ESP], 0xaf */
		0xc1, 0x7d, 0x0, 0xaf,  /* SAR dword [EBP], 0xaf */
		0xc1, 0x3e, 0xaf,  /* SAR dword [ESI], 0xaf */
		0xc1, 0x3f, 0xaf   /* SAR dword [EDI], 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x17, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAR dword [ECX], 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EDX], 0xaf */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EBX], 0xaf */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [ESP], 0xaf */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EBP], 0xaf */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x4,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [ESI], 0xaf */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EDI], 0xaf */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0xafu, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RETN_O_IMM_16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc2 
	const uint8_t pOps[0x3] = {
		0xc2, 0xaf, 0xab   /* RETN 0xabaf */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_RET);

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

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


TEST(x86, RETN_O_IMM_16_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc2 
	const uint8_t pOps[0x3] = {
		0xc2, 0xaf, 0xab   /* RETN 0xabaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_RET;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

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


TEST(x86, RETN)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc3 
	const uint8_t pOps[0x1] = {
		0xc3   /* RETN */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_RET);

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, RETN_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc3 
	const uint8_t pOps[0x1] = {
		0xc3   /* RETN */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_RET;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, LES_O_REG_FULL_MOFFS_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc4 
	const uint8_t pOps[0x28] = {
		0x67, 0xc4, 0x6, 0x78, 0x56,  /* LES EAX, [word 0x5678] */
		0x67, 0xc4, 0xe, 0x78, 0x56,  /* LES ECX, [word 0x5678] */
		0x67, 0xc4, 0x16, 0x78, 0x56,  /* LES EDX, [word 0x5678] */
		0x67, 0xc4, 0x1e, 0x78, 0x56,  /* LES EBX, [word 0x5678] */
		0x67, 0xc4, 0x26, 0x78, 0x56,  /* LES ESP, [word 0x5678] */
		0x67, 0xc4, 0x2e, 0x78, 0x56,  /* LES EBP, [word 0x5678] */
		0x67, 0xc4, 0x36, 0x78, 0x56,  /* LES ESI, [word 0x5678] */
		0x67, 0xc4, 0x3e, 0x78, 0x56   /* LES EDI, [word 0x5678] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x28, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x8_sz, instructionCount);
	{
		/* LES EAX, [word 0x5678] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LES,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LES ECX, [word 0x5678] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::LES,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LES EDX, [word 0x5678] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::LES,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LES EBX, [word 0x5678] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::LES,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LES ESP, [word 0x5678] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::LES,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LES EBP, [word 0x5678] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::LES,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LES ESI, [word 0x5678] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::LES,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LES EDI, [word 0x5678] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::LES,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, LDS_O_REG_FULL_MOFFS_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc5 
	const uint8_t pOps[0x28] = {
		0x67, 0xc5, 0x6, 0x78, 0x56,  /* LDS EAX, [word 0x5678] */
		0x67, 0xc5, 0xe, 0x78, 0x56,  /* LDS ECX, [word 0x5678] */
		0x67, 0xc5, 0x16, 0x78, 0x56,  /* LDS EDX, [word 0x5678] */
		0x67, 0xc5, 0x1e, 0x78, 0x56,  /* LDS EBX, [word 0x5678] */
		0x67, 0xc5, 0x26, 0x78, 0x56,  /* LDS ESP, [word 0x5678] */
		0x67, 0xc5, 0x2e, 0x78, 0x56,  /* LDS EBP, [word 0x5678] */
		0x67, 0xc5, 0x36, 0x78, 0x56,  /* LDS ESI, [word 0x5678] */
		0x67, 0xc5, 0x3e, 0x78, 0x56   /* LDS EDI, [word 0x5678] */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x28, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x8_sz, instructionCount);
	{
		/* LDS EAX, [word 0x5678] */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::LDS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LDS ECX, [word 0x5678] */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::LDS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LDS EDX, [word 0x5678] */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::LDS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LDS EBX, [word 0x5678] */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::LDS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LDS ESP, [word 0x5678] */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::LDS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LDS EBP, [word 0x5678] */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::LDS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LDS ESI, [word 0x5678] */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::LDS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* LDS EDI, [word 0x5678] */
		const Instruction& inst = instructions[0x7];
		ValidateInstruction(inst,
			InstructionID::LDS,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x5,
			0x5678,
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
		ValidateOperand(inst.ops[1], OperandTypeAbs::DISP, RegIndex::EAX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, MOV_O_RM_FULL_IMM_FULL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc7 
	const uint8_t pOps[0x2c] = {
		0xc7, 0x1, 0xbb, 0xee, 0xaf, 0xab,  /* MOV dword [ECX], 0xabafeebb */
		0xc7, 0x2, 0xbb, 0xee, 0xaf, 0xab,  /* MOV dword [EDX], 0xabafeebb */
		0xc7, 0x3, 0xbb, 0xee, 0xaf, 0xab,  /* MOV dword [EBX], 0xabafeebb */
		0xc7, 0x4, 0x24, 0xbb, 0xee, 0xaf, 0xab,  /* MOV dword [ESP], 0xabafeebb */
		0xc7, 0x45, 0x0, 0xbb, 0xee, 0xaf, 0xab,  /* MOV dword [EBP], 0xabafeebb */
		0xc7, 0x6, 0xbb, 0xee, 0xaf, 0xab,  /* MOV dword [ESI], 0xabafeebb */
		0xc7, 0x7, 0xbb, 0xee, 0xaf, 0xab   /* MOV dword [EDI], 0xabafeebb */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x2c, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* MOV dword [ECX], 0xabafeebb */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
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
		/* MOV dword [EDX], 0xabafeebb */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
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
		/* MOV dword [EBX], 0xabafeebb */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
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
		/* MOV dword [ESP], 0xabafeebb */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
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
		/* MOV dword [EBP], 0xabafeebb */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x7,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
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
		/* MOV dword [ESI], 0xabafeebb */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
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
		/* MOV dword [EDI], 0xabafeebb */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::MOV,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x6,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x0,
			0x0,
			0x0,
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


TEST(x86, ENTER_O_IMM_16_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc8 
	const uint8_t pOps[0x4] = {
		0xc8, 0xaf, 0xab, 0xaf   /* ENTER 0xabaf, 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x4, options, CodeType::CODE_32BIT);

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


TEST(x86, LEAVE)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc9 
	const uint8_t pOps[0x1] = {
		0xc9   /* LEAVE */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, RETF_O_IMM_16)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xca 
	const uint8_t pOps[0x3] = {
		0xca, 0xaf, 0xab   /* RETF 0xabaf */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_RET);

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

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
			0x3,
			0x0,
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


TEST(x86, RETF_O_IMM_16_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xca 
	const uint8_t pOps[0x3] = {
		0xca, 0xaf, 0xab   /* RETF 0xabaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_RET;

	CodeStream strm(0, pOps, 0x3, options, CodeType::CODE_32BIT);

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
			0x3,
			0x0,
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


TEST(x86, RETF)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcb 
	const uint8_t pOps[0x1] = {
		0xcb   /* RETF */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_RET);

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, RETF_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcb 
	const uint8_t pOps[0x1] = {
		0xcb   /* RETF */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_RET;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, INT3)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcc 
	const uint8_t pOps[0x1] = {
		0xcc   /* INT3 */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_INT);

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, INT3_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcc 
	const uint8_t pOps[0x1] = {
		0xcc   /* INT3 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_INT;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, INT_O_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcd 
	const uint8_t pOps[0x2] = {
		0xcd, 0xaf   /* INT 0xaf */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_INT);

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

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


TEST(x86, INT_O_IMM_8_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcd 
	const uint8_t pOps[0x2] = {
		0xcd, 0xaf   /* INT 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_INT;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

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


TEST(x86, INTO)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xce 
	const uint8_t pOps[0x1] = {
		0xce   /* INTO */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_INT);

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* INTO */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INTO,
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


TEST(x86, INTO_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xce 
	const uint8_t pOps[0x1] = {
		0xce   /* INTO */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_INT;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* INTO */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::INTO,
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


TEST(x86, IRET)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcf 
	const uint8_t pOps[0x1] = {
		0xcf   /* IRET */
	};

	uint32_t options = 0;
	options |= (DisOptions::STOP_ON_FLOW_ALL & ~DisOptions::STOP_ON_RET);

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, IRET_1_stopOnFlow)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xcf 
	const uint8_t pOps[0x1] = {
		0xcf   /* IRET */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_RET;

	CodeStream strm(0, pOps, 0x1, options, CodeType::CODE_32BIT);

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


TEST(x86, ROL_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0xe] = {
		0xd0, 0xc1,  /* ROL CL, 0x1 */
		0xd0, 0xc2,  /* ROL DL, 0x1 */
		0xd0, 0xc3,  /* ROL BL, 0x1 */
		0xd0, 0xc4,  /* ROL AH, 0x1 */
		0xd0, 0xc5,  /* ROL CH, 0x1 */
		0xd0, 0xc6,  /* ROL DH, 0x1 */
		0xd0, 0xc7   /* ROL BH, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* ROL AH, 0x1 */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL CH, 0x1 */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL DH, 0x1 */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL BH, 0x1 */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROR_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0xe] = {
		0xd0, 0xc9,  /* ROR CL, 0x1 */
		0xd0, 0xca,  /* ROR DL, 0x1 */
		0xd0, 0xcb,  /* ROR BL, 0x1 */
		0xd0, 0xcc,  /* ROR AH, 0x1 */
		0xd0, 0xcd,  /* ROR CH, 0x1 */
		0xd0, 0xce,  /* ROR DH, 0x1 */
		0xd0, 0xcf   /* ROR BH, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* ROR AH, 0x1 */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR CH, 0x1 */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR DH, 0x1 */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR BH, 0x1 */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCL_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0xe] = {
		0xd0, 0xd1,  /* RCL CL, 0x1 */
		0xd0, 0xd2,  /* RCL DL, 0x1 */
		0xd0, 0xd3,  /* RCL BL, 0x1 */
		0xd0, 0xd4,  /* RCL AH, 0x1 */
		0xd0, 0xd5,  /* RCL CH, 0x1 */
		0xd0, 0xd6,  /* RCL DH, 0x1 */
		0xd0, 0xd7   /* RCL BH, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* RCL AH, 0x1 */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL CH, 0x1 */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL DH, 0x1 */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL BH, 0x1 */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCR_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0xe] = {
		0xd0, 0xd9,  /* RCR CL, 0x1 */
		0xd0, 0xda,  /* RCR DL, 0x1 */
		0xd0, 0xdb,  /* RCR BL, 0x1 */
		0xd0, 0xdc,  /* RCR AH, 0x1 */
		0xd0, 0xdd,  /* RCR CH, 0x1 */
		0xd0, 0xde,  /* RCR DH, 0x1 */
		0xd0, 0xdf   /* RCR BH, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* RCR AH, 0x1 */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR CH, 0x1 */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR DH, 0x1 */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR BH, 0x1 */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHL_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0xe] = {
		0xd0, 0xe1,  /* SHL CL, 0x1 */
		0xd0, 0xe2,  /* SHL DL, 0x1 */
		0xd0, 0xe3,  /* SHL BL, 0x1 */
		0xd0, 0xe4,  /* SHL AH, 0x1 */
		0xd0, 0xe5,  /* SHL CH, 0x1 */
		0xd0, 0xe6,  /* SHL DH, 0x1 */
		0xd0, 0xe7   /* SHL BH, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SHL AH, 0x1 */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL CH, 0x1 */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL DH, 0x1 */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL BH, 0x1 */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHR_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0xe] = {
		0xd0, 0xe9,  /* SHR CL, 0x1 */
		0xd0, 0xea,  /* SHR DL, 0x1 */
		0xd0, 0xeb,  /* SHR BL, 0x1 */
		0xd0, 0xec,  /* SHR AH, 0x1 */
		0xd0, 0xed,  /* SHR CH, 0x1 */
		0xd0, 0xee,  /* SHR DH, 0x1 */
		0xd0, 0xef   /* SHR BH, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SHR AH, 0x1 */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR CH, 0x1 */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR DH, 0x1 */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR BH, 0x1 */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAL_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0xe] = {
		0xd0, 0xe1,  /* SAL CL, 0x1 */
		0xd0, 0xe2,  /* SAL DL, 0x1 */
		0xd0, 0xe3,  /* SAL BL, 0x1 */
		0xd0, 0xe4,  /* SAL AH, 0x1 */
		0xd0, 0xe5,  /* SAL CH, 0x1 */
		0xd0, 0xe6,  /* SAL DH, 0x1 */
		0xd0, 0xe7   /* SAL BH, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SAL AH, 0x1 */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL CH, 0x1 */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL DH, 0x1 */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL BH, 0x1 */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAR_O_RM_8_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd0 
	const uint8_t pOps[0xe] = {
		0xd0, 0xf9,  /* SAR CL, 0x1 */
		0xd0, 0xfa,  /* SAR DL, 0x1 */
		0xd0, 0xfb,  /* SAR BL, 0x1 */
		0xd0, 0xfc,  /* SAR AH, 0x1 */
		0xd0, 0xfd,  /* SAR CH, 0x1 */
		0xd0, 0xfe,  /* SAR DH, 0x1 */
		0xd0, 0xff   /* SAR BH, 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SAR AH, 0x1 */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR CH, 0x1 */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR DH, 0x1 */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR BH, 0x1 */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROL_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x10] = {
		0xd1, 0x1,  /* ROL dword [ECX], 0x1 */
		0xd1, 0x2,  /* ROL dword [EDX], 0x1 */
		0xd1, 0x3,  /* ROL dword [EBX], 0x1 */
		0xd1, 0x4, 0x24,  /* ROL dword [ESP], 0x1 */
		0xd1, 0x45, 0x0,  /* ROL dword [EBP], 0x1 */
		0xd1, 0x6,  /* ROL dword [ESI], 0x1 */
		0xd1, 0x7   /* ROL dword [EDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROL dword [ECX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [ESP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [ESI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROR_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x10] = {
		0xd1, 0x9,  /* ROR dword [ECX], 0x1 */
		0xd1, 0xa,  /* ROR dword [EDX], 0x1 */
		0xd1, 0xb,  /* ROR dword [EBX], 0x1 */
		0xd1, 0xc, 0x24,  /* ROR dword [ESP], 0x1 */
		0xd1, 0x4d, 0x0,  /* ROR dword [EBP], 0x1 */
		0xd1, 0xe,  /* ROR dword [ESI], 0x1 */
		0xd1, 0xf   /* ROR dword [EDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROR dword [ECX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [ESP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [ESI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCL_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x10] = {
		0xd1, 0x11,  /* RCL dword [ECX], 0x1 */
		0xd1, 0x12,  /* RCL dword [EDX], 0x1 */
		0xd1, 0x13,  /* RCL dword [EBX], 0x1 */
		0xd1, 0x14, 0x24,  /* RCL dword [ESP], 0x1 */
		0xd1, 0x55, 0x0,  /* RCL dword [EBP], 0x1 */
		0xd1, 0x16,  /* RCL dword [ESI], 0x1 */
		0xd1, 0x17   /* RCL dword [EDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCL dword [ECX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [ESP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [ESI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCR_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x10] = {
		0xd1, 0x19,  /* RCR dword [ECX], 0x1 */
		0xd1, 0x1a,  /* RCR dword [EDX], 0x1 */
		0xd1, 0x1b,  /* RCR dword [EBX], 0x1 */
		0xd1, 0x1c, 0x24,  /* RCR dword [ESP], 0x1 */
		0xd1, 0x5d, 0x0,  /* RCR dword [EBP], 0x1 */
		0xd1, 0x1e,  /* RCR dword [ESI], 0x1 */
		0xd1, 0x1f   /* RCR dword [EDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCR dword [ECX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [ESP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [ESI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHL_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x10] = {
		0xd1, 0x21,  /* SHL dword [ECX], 0x1 */
		0xd1, 0x22,  /* SHL dword [EDX], 0x1 */
		0xd1, 0x23,  /* SHL dword [EBX], 0x1 */
		0xd1, 0x24, 0x24,  /* SHL dword [ESP], 0x1 */
		0xd1, 0x65, 0x0,  /* SHL dword [EBP], 0x1 */
		0xd1, 0x26,  /* SHL dword [ESI], 0x1 */
		0xd1, 0x27   /* SHL dword [EDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHL dword [ECX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [ESP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [ESI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHR_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x10] = {
		0xd1, 0x29,  /* SHR dword [ECX], 0x1 */
		0xd1, 0x2a,  /* SHR dword [EDX], 0x1 */
		0xd1, 0x2b,  /* SHR dword [EBX], 0x1 */
		0xd1, 0x2c, 0x24,  /* SHR dword [ESP], 0x1 */
		0xd1, 0x6d, 0x0,  /* SHR dword [EBP], 0x1 */
		0xd1, 0x2e,  /* SHR dword [ESI], 0x1 */
		0xd1, 0x2f   /* SHR dword [EDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHR dword [ECX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [ESP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [ESI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAL_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x10] = {
		0xd1, 0x21,  /* SAL dword [ECX], 0x1 */
		0xd1, 0x22,  /* SAL dword [EDX], 0x1 */
		0xd1, 0x23,  /* SAL dword [EBX], 0x1 */
		0xd1, 0x24, 0x24,  /* SAL dword [ESP], 0x1 */
		0xd1, 0x65, 0x0,  /* SAL dword [EBP], 0x1 */
		0xd1, 0x26,  /* SAL dword [ESI], 0x1 */
		0xd1, 0x27   /* SAL dword [EDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAL dword [ECX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [ESP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [ESI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAR_O_RM_FULL_CONST1)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd1 
	const uint8_t pOps[0x10] = {
		0xd1, 0x39,  /* SAR dword [ECX], 0x1 */
		0xd1, 0x3a,  /* SAR dword [EDX], 0x1 */
		0xd1, 0x3b,  /* SAR dword [EBX], 0x1 */
		0xd1, 0x3c, 0x24,  /* SAR dword [ESP], 0x1 */
		0xd1, 0x7d, 0x0,  /* SAR dword [EBP], 0x1 */
		0xd1, 0x3e,  /* SAR dword [ESI], 0x1 */
		0xd1, 0x3f   /* SAR dword [EDI], 0x1 */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAR dword [ECX], 0x1 */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EDX], 0x1 */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EBX], 0x1 */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [ESP], 0x1 */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EBP], 0x1 */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [ESI], 0x1 */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EDI], 0x1 */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x1u, inst.imm.uint8);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::IMM, RegIndex::EAX, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x0)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROL_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0xe] = {
		0xd2, 0xc1,  /* ROL CL, CL */
		0xd2, 0xc2,  /* ROL DL, CL */
		0xd2, 0xc3,  /* ROL BL, CL */
		0xd2, 0xc4,  /* ROL AH, CL */
		0xd2, 0xc5,  /* ROL CH, CL */
		0xd2, 0xc6,  /* ROL DH, CL */
		0xd2, 0xc7   /* ROL BH, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* ROL AH, CL */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL CH, CL */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL DH, CL */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL BH, CL */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROR_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0xe] = {
		0xd2, 0xc9,  /* ROR CL, CL */
		0xd2, 0xca,  /* ROR DL, CL */
		0xd2, 0xcb,  /* ROR BL, CL */
		0xd2, 0xcc,  /* ROR AH, CL */
		0xd2, 0xcd,  /* ROR CH, CL */
		0xd2, 0xce,  /* ROR DH, CL */
		0xd2, 0xcf   /* ROR BH, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* ROR AH, CL */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR CH, CL */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR DH, CL */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR BH, CL */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCL_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0xe] = {
		0xd2, 0xd1,  /* RCL CL, CL */
		0xd2, 0xd2,  /* RCL DL, CL */
		0xd2, 0xd3,  /* RCL BL, CL */
		0xd2, 0xd4,  /* RCL AH, CL */
		0xd2, 0xd5,  /* RCL CH, CL */
		0xd2, 0xd6,  /* RCL DH, CL */
		0xd2, 0xd7   /* RCL BH, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* RCL AH, CL */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL CH, CL */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL DH, CL */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL BH, CL */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCR_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0xe] = {
		0xd2, 0xd9,  /* RCR CL, CL */
		0xd2, 0xda,  /* RCR DL, CL */
		0xd2, 0xdb,  /* RCR BL, CL */
		0xd2, 0xdc,  /* RCR AH, CL */
		0xd2, 0xdd,  /* RCR CH, CL */
		0xd2, 0xde,  /* RCR DH, CL */
		0xd2, 0xdf   /* RCR BH, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* RCR AH, CL */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR CH, CL */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR DH, CL */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR BH, CL */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHL_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0xe] = {
		0xd2, 0xe1,  /* SHL CL, CL */
		0xd2, 0xe2,  /* SHL DL, CL */
		0xd2, 0xe3,  /* SHL BL, CL */
		0xd2, 0xe4,  /* SHL AH, CL */
		0xd2, 0xe5,  /* SHL CH, CL */
		0xd2, 0xe6,  /* SHL DH, CL */
		0xd2, 0xe7   /* SHL BH, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SHL AH, CL */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL CH, CL */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL DH, CL */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL BH, CL */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHR_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0xe] = {
		0xd2, 0xe9,  /* SHR CL, CL */
		0xd2, 0xea,  /* SHR DL, CL */
		0xd2, 0xeb,  /* SHR BL, CL */
		0xd2, 0xec,  /* SHR AH, CL */
		0xd2, 0xed,  /* SHR CH, CL */
		0xd2, 0xee,  /* SHR DH, CL */
		0xd2, 0xef   /* SHR BH, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SHR AH, CL */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR CH, CL */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR DH, CL */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR BH, CL */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAL_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0xe] = {
		0xd2, 0xe1,  /* SAL CL, CL */
		0xd2, 0xe2,  /* SAL DL, CL */
		0xd2, 0xe3,  /* SAL BL, CL */
		0xd2, 0xe4,  /* SAL AH, CL */
		0xd2, 0xe5,  /* SAL CH, CL */
		0xd2, 0xe6,  /* SAL DH, CL */
		0xd2, 0xe7   /* SAL BH, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SAL AH, CL */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL CH, CL */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL DH, CL */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL BH, CL */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAR_O_RM_8_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd2 
	const uint8_t pOps[0xe] = {
		0xd2, 0xf9,  /* SAR CL, CL */
		0xd2, 0xfa,  /* SAR DL, CL */
		0xd2, 0xfb,  /* SAR BL, CL */
		0xd2, 0xfc,  /* SAR AH, CL */
		0xd2, 0xfd,  /* SAR CH, CL */
		0xd2, 0xfe,  /* SAR DH, CL */
		0xd2, 0xff   /* SAR BH, CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0xe, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
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
	{
		/* SAR AH, CL */
		const Instruction& inst = instructions[0x3];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::AH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x34)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR CH, CL */
		const Instruction& inst = instructions[0x4];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::CH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x35)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR DH, CL */
		const Instruction& inst = instructions[0x5];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::DH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x36)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR BH, CL */
		const Instruction& inst = instructions[0x6];
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

		ValidateOperand(inst.ops[0], OperandTypeAbs::REG, RegIndex::BH, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x37)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROL_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x10] = {
		0xd3, 0x1,  /* ROL dword [ECX], CL */
		0xd3, 0x2,  /* ROL dword [EDX], CL */
		0xd3, 0x3,  /* ROL dword [EBX], CL */
		0xd3, 0x4, 0x24,  /* ROL dword [ESP], CL */
		0xd3, 0x45, 0x0,  /* ROL dword [EBP], CL */
		0xd3, 0x6,  /* ROL dword [ESI], CL */
		0xd3, 0x7   /* ROL dword [EDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROL dword [ECX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [ESP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [ESI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROL dword [EDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, ROR_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x10] = {
		0xd3, 0x9,  /* ROR dword [ECX], CL */
		0xd3, 0xa,  /* ROR dword [EDX], CL */
		0xd3, 0xb,  /* ROR dword [EBX], CL */
		0xd3, 0xc, 0x24,  /* ROR dword [ESP], CL */
		0xd3, 0x4d, 0x0,  /* ROR dword [EBP], CL */
		0xd3, 0xe,  /* ROR dword [ESI], CL */
		0xd3, 0xf   /* ROR dword [EDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* ROR dword [ECX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [ESP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [ESI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* ROR dword [EDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::ROR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x0,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCL_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x10] = {
		0xd3, 0x11,  /* RCL dword [ECX], CL */
		0xd3, 0x12,  /* RCL dword [EDX], CL */
		0xd3, 0x13,  /* RCL dword [EBX], CL */
		0xd3, 0x14, 0x24,  /* RCL dword [ESP], CL */
		0xd3, 0x55, 0x0,  /* RCL dword [EBP], CL */
		0xd3, 0x16,  /* RCL dword [ESI], CL */
		0xd3, 0x17   /* RCL dword [EDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCL dword [ECX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [ESP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [ESI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCL dword [EDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, RCR_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x10] = {
		0xd3, 0x19,  /* RCR dword [ECX], CL */
		0xd3, 0x1a,  /* RCR dword [EDX], CL */
		0xd3, 0x1b,  /* RCR dword [EBX], CL */
		0xd3, 0x1c, 0x24,  /* RCR dword [ESP], CL */
		0xd3, 0x5d, 0x0,  /* RCR dword [EBP], CL */
		0xd3, 0x1e,  /* RCR dword [ESI], CL */
		0xd3, 0x1f   /* RCR dword [EDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* RCR dword [ECX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [ESP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [ESI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* RCR dword [EDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::RCR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0x1,
			0x1,
			0x800,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHL_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x10] = {
		0xd3, 0x21,  /* SHL dword [ECX], CL */
		0xd3, 0x22,  /* SHL dword [EDX], CL */
		0xd3, 0x23,  /* SHL dword [EBX], CL */
		0xd3, 0x24, 0x24,  /* SHL dword [ESP], CL */
		0xd3, 0x65, 0x0,  /* SHL dword [EBP], CL */
		0xd3, 0x26,  /* SHL dword [ESI], CL */
		0xd3, 0x27   /* SHL dword [EDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHL dword [ECX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [ESP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [ESI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHL dword [EDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SHR_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x10] = {
		0xd3, 0x29,  /* SHR dword [ECX], CL */
		0xd3, 0x2a,  /* SHR dword [EDX], CL */
		0xd3, 0x2b,  /* SHR dword [EBX], CL */
		0xd3, 0x2c, 0x24,  /* SHR dword [ESP], CL */
		0xd3, 0x6d, 0x0,  /* SHR dword [EBP], CL */
		0xd3, 0x2e,  /* SHR dword [ESI], CL */
		0xd3, 0x2f   /* SHR dword [EDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SHR dword [ECX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [ESP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [ESI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SHR dword [EDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAL_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x10] = {
		0xd3, 0x21,  /* SAL dword [ECX], CL */
		0xd3, 0x22,  /* SAL dword [EDX], CL */
		0xd3, 0x23,  /* SAL dword [EBX], CL */
		0xd3, 0x24, 0x24,  /* SAL dword [ESP], CL */
		0xd3, 0x65, 0x0,  /* SAL dword [EBP], CL */
		0xd3, 0x26,  /* SAL dword [ESI], CL */
		0xd3, 0x27   /* SAL dword [EDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAL dword [ECX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [ESP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [ESI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAL dword [EDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SHL,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, SAR_O_RM_FULL_REG_CL)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd3 
	const uint8_t pOps[0x10] = {
		0xd3, 0x39,  /* SAR dword [ECX], CL */
		0xd3, 0x3a,  /* SAR dword [EDX], CL */
		0xd3, 0x3b,  /* SAR dword [EBX], CL */
		0xd3, 0x3c, 0x24,  /* SAR dword [ESP], CL */
		0xd3, 0x7d, 0x0,  /* SAR dword [EBP], CL */
		0xd3, 0x3e,  /* SAR dword [ESI], CL */
		0xd3, 0x3f   /* SAR dword [EDI], CL */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x10, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x7_sz, instructionCount);
	{
		/* SAR dword [ECX], CL */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ECX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x1)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EDX], CL */
		const Instruction& inst = instructions[0x1];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x2)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EBX], CL */
		const Instruction& inst = instructions[0x2];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBX, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x3)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [ESP], CL */
		const Instruction& inst = instructions[0x3];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x4)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EBP], CL */
		const Instruction& inst = instructions[0x4];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::SS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EBP, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x5)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [ESI], CL */
		const Instruction& inst = instructions[0x5];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::ESI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x6)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		/* SAR dword [EDI], CL */
		const Instruction& inst = instructions[0x6];
		ValidateInstruction(inst,
			InstructionID::SAR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::DS,
			RegIndex::NONE,
			0xc5,
			0x0,
			0x810,
			__FILE__,
			__LINE__
		);

		EXPECT_EQ(0x0_ui64, inst.imm.uint64);

		ValidateOperand(inst.ops[0], OperandTypeAbs::SMEM, RegIndex::EDI, 0x20, __FILE__, __LINE__); // set! (reg idx: 0x7)
		ValidateOperand(inst.ops[1], OperandTypeAbs::REG, RegIndex::CL, 0x8, __FILE__, __LINE__); // set! (reg idx: 0x31)
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86, AAM_O_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd4 
	const uint8_t pOps[0x2] = {
		0xd4, 0xaf   /* AAM 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* AAM 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AAM,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x811,
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


TEST(x86, AAD_O_IMM_8)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xd5 
	const uint8_t pOps[0x2] = {
		0xd5, 0xaf   /* AAD 0xaf */
	};

	uint32_t options = 0;
	options |= DisOptions::STOP_ON_FLOW_ALL;

	CodeStream strm(0, pOps, 0x2, options, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		/* AAD 0xaf */
		const Instruction& inst = instructions[0x0];
		ValidateInstruction(inst,
			InstructionID::AAD,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x2,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			0xc4,
			0x0,
			0x811,
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

