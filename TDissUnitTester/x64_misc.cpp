#include "pch.h"

using namespace TDiss;

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
		RegIndex::Enum seg, RegIndex::Enum base, const char* pFileName, uint32_t LineNo)
	{
		EXPECT_EQ(id, inst.opcode) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(flow, inst.flow) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(instSet, inst.instSet) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(size, inst.size) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(displacement, inst.displacement) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(scale, inst.scale) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(seg, inst.segment) << pFileName << "(" << LineNo << ") ";
		EXPECT_EQ(base, inst.base) << pFileName << "(" << LineNo << ") ";
	}

} // namespace

TEST(x64_misc, misc_1)
{
	Instruction instructions[0x200];
	size_t instructionCount;

	const uint8_t pOps[] =
	{
		0x48, 0x89, 0x5C, 0x24, 0x08, 0x48, 0x89, 0x6C, 0x24, 0x10, 0x48, 0x89, 0x74, 0x24, 0x18, 0x48,
		0x89, 0x7C, 0x24, 0x20, 0x41, 0x54, 0x48, 0x83, 0xEC, 0x20, 0x48, 0x8B, 0xD9, 0x48, 0x8B, 0x49,
		0x08, 0x48, 0x8B, 0x01, 0xFF, 0x50, 0x50, 0x45, 0x33, 0xE4, 0x48, 0x8B, 0xF0, 0x41, 0x8B, 0xEC,
		0x44, 0x39, 0x23, 0x7E, 0x21, 0x48, 0x8D, 0x7B, 0x20, 0x0F, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00,
		0x48, 0x8B, 0x0F, 0x48, 0x8B, 0x11, 0xFF, 0x52, 0x50, 0xFF, 0xC5, 0x48, 0x83, 0xC7, 0x08, 0x48,
		0x03, 0xF0, 0x3B, 0x2B, 0x7C, 0xEA, 0x48, 0x8B, 0x4B, 0x08, 0x48, 0x8B, 0x01, 0xFF, 0x50, 0x40,
		0x48, 0x8B, 0xE8, 0x44, 0x39, 0x23, 0x7E, 0x20, 0x48, 0x8D, 0x7B, 0x20, 0x0F, 0x1F, 0x40, 0x00,
		0x48, 0x8B, 0x0F, 0x48, 0x8B, 0x11, 0xFF, 0x52, 0x40, 0x41, 0xFF, 0xC4, 0x48, 0x83, 0xC7, 0x08,
		0x48, 0x03, 0xE8, 0x44, 0x3B, 0x23, 0x7C, 0xE8, 0x48, 0x8B, 0x5C, 0x24, 0x30, 0x48, 0x8B, 0x7C,
		0x24, 0x48, 0x48, 0x2B, 0xF5, 0x48, 0x8B, 0x6C, 0x24, 0x38, 0x48, 0x8B, 0xC6, 0x48, 0x8B, 0x74,
		0x24, 0x40, 0x48, 0x83, 0xC4, 0x20, 0x41, 0x5C, 0xC3, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
		0x48, 0x89, 0x5C, 0x24, 0x08, 0x57, 0x48, 0x83, 0xEC, 0x30, 0x33, 0xFF, 0x48, 0x8B, 0xD9, 0x33,
		0xD2, 0x89, 0x39, 0x66, 0x89, 0x79, 0x05, 0x48, 0x89, 0x79, 0x08, 0x89, 0x79, 0x18, 0x48, 0x83,
		0xC1, 0x20, 0x41, 0xB8, 0x80, 0x00, 0x00, 0x00, 0xE8, 0xD3, 0xD7, 0x5B, 0x00, 0x48, 0x8D, 0x8B,
		0xA0, 0x00, 0x00, 0x00, 0x33, 0xD2, 0x41, 0xB8, 0x80, 0x00, 0x00, 0x00, 0xE8, 0xBF, 0xD7, 0x5B,
		0x00, 0x48, 0x8D, 0x8B, 0x20, 0x01, 0x00, 0x00, 0x33, 0xD2, 0x41, 0xB8, 0x80, 0x00, 0x00, 0x00,
		0xE8, 0xAB, 0xD7, 0x5B, 0x00, 0x48, 0x8D, 0x8B, 0xA8, 0x01, 0x00, 0x00, 0x33, 0xD2, 0x41, 0xB8,
		0xC0, 0x0A, 0x00, 0x00, 0xE8, 0x97, 0xD7, 0x5B, 0x00, 0x4C, 0x8B, 0x1D, 0xF0, 0xEB, 0xC7, 0x00,
		0x48, 0x8D, 0x05, 0x29, 0x1F, 0xCF, 0x00, 0x49, 0x8B, 0xCB, 0x49, 0x81, 0xC3, 0xB0, 0x00, 0x00,
		0x00, 0x4C, 0x89, 0x1D, 0xD8, 0xEB, 0xC7, 0x00, 0x4C, 0x3B, 0xD8, 0x76, 0x51, 0xC7, 0x07, 0x0A,
		0x00, 0x00, 0x00, 0x48, 0x8B, 0xC7, 0x48, 0x89, 0x43, 0x10, 0x48, 0x8D, 0x8B, 0xC8, 0x01, 0x00,
		0x00, 0xBA, 0x2B, 0x00, 0x00, 0x00, 0x66, 0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x48, 0x8B, 0x43, 0x10, 0x48, 0x83, 0xC1, 0x40, 0x48, 0xFF, 0xCA, 0x48, 0x89, 0x41, 0xA0, 0x48,
		0x8B, 0x43, 0x10, 0x48, 0x89, 0x41, 0xC0, 0x75, 0xE7, 0x48, 0x89, 0xBB, 0x68, 0x0C, 0x00, 0x00,
		0x48, 0x8B, 0xC3, 0x48, 0x8B, 0x5C, 0x24, 0x40, 0x48, 0x83, 0xC4, 0x30, 0x5F, 0xC3, 0x48, 0x85,
		0xC9, 0x74, 0xB0, 0x48, 0x8D, 0x05, 0x4E, 0x3A, 0xA3, 0x00, 0x41, 0xB1, 0x01, 0x45, 0x33, 0xC0,
		0xBA, 0x00, 0x00, 0x10, 0x00, 0x48, 0x89, 0x44, 0x24, 0x20, 0xE8, 0x61, 0x2A, 0x00, 0x00, 0xEB,
		0x95, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
		0x48, 0x89, 0x5C, 0x24, 0x08, 0x48, 0x89, 0x6C, 0x24, 0x10, 0x48, 0x89, 0x74, 0x24, 0x18, 0x57,
		0x41, 0x54, 0x41, 0x55, 0x41, 0x56, 0x41, 0x57, 0x48, 0x83, 0xEC, 0x30, 0x48, 0x8B, 0x15, 0x2D,
		0xEB, 0xC7, 0x00, 0x48, 0x8B, 0xD9, 0x4C, 0x8D, 0x3D, 0x63, 0x1E, 0xCF, 0x00, 0x48, 0x8B, 0xCA,
		0x48, 0x81, 0xC2, 0x40, 0x04, 0x00, 0x00, 0x33, 0xFF, 0x48, 0x89, 0x15, 0x10, 0xEB, 0xC7, 0x00,
		0x49, 0x3B, 0xD7, 0x0F, 0x86, 0xF7, 0x02, 0x00, 0x00, 0xC7, 0x07, 0x0A, 0x00, 0x00, 0x00, 0x48,
		0x8B, 0xC7, 0x48, 0x8B, 0xCA, 0x48, 0x81, 0xC2, 0xB0, 0x00, 0x00, 0x00, 0x48, 0x89, 0x43, 0x08,
		0x48, 0x89, 0x15, 0xE9, 0xEA, 0xC7, 0x00, 0x49, 0x3B, 0xD7, 0x0F, 0x86, 0xF1, 0x02, 0x00, 0x00,
		0xC7, 0x07, 0x0A, 0x00, 0x00, 0x00, 0x4C, 0x8B, 0xDF, 0x48, 0x63, 0x03, 0x48, 0x8B, 0xCA, 0x48,
		0x81, 0xC2, 0xB0, 0x00, 0x00, 0x00, 0x4C, 0x89, 0x9C, 0xC3, 0xA0, 0x00, 0x00, 0x00, 0x48, 0x89,
		0x15, 0xBB, 0xEA, 0xC7, 0x00, 0x49, 0x3B, 0xD7, 0x0F, 0x86, 0xFB, 0x02, 0x00, 0x00, 0xC7, 0x07,
		0x0A, 0x00, 0x00, 0x00, 0x4C, 0x8B, 0xDF, 0x48, 0x63, 0x03, 0x48, 0x8B, 0xCA, 0x48, 0x83, 0xC2,
		0x60, 0x4C, 0x89, 0x9C, 0xC3, 0x20, 0x01, 0x00, 0x00, 0x48, 0x89, 0x15, 0x90, 0xEA, 0xC7, 0x00,
		0x49, 0x3B, 0xD7, 0x0F, 0x86, 0x07, 0x03, 0x00, 0x00, 0xC7, 0x07, 0x0A, 0x00, 0x00, 0x00, 0x4C,
		0x8B, 0xDF, 0x48, 0x63, 0x03, 0x4C, 0x89, 0x5C, 0xC3, 0x20, 0x48, 0x63, 0x0B, 0x4C, 0x8B, 0xB4,
		0xCB, 0x20, 0x01, 0x00, 0x00, 0x8D, 0x41, 0x01, 0xB9, 0x56, 0x00, 0x00, 0x00, 0x89, 0x03, 0x48,
		0x8D, 0x83, 0xA8, 0x01, 0x00, 0x00,
		// the nop -> NOP WORD [rAX+rAX+0x0]
		0x66, 0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x4C, 0x89, 0x18, 0x48, 0x83, 0xC0, 0x20, 0x48, 0xFF, 0xC9, 0x75, 0xF4, 0x48, 0x8B, 0x43, 0x08,
		0x48, 0x8B, 0xCA, 0x48, 0x81, 0xC2, 0xB0, 0x00, 0x00, 0x00, 0x48, 0x89, 0x83, 0x68, 0x0B, 0x00,
		0x00, 0x48, 0x8B, 0x43, 0x10, 0x48, 0x89, 0x15, 0x24, 0xEA, 0xC7, 0x00, 0x48, 0x89, 0x83, 0xA8,
		0x08, 0x00, 0x00, 0x49, 0x3B, 0xD7, 0x0F, 0x86, 0xCB, 0x02, 0x00, 0x00, 0xC7, 0x07, 0x0A, 0x00,
		0x00, 0x00, 0x4C, 0x8B, 0xDF, 0x48, 0x63, 0x03, 0x48, 0x8B, 0xCA, 0x48, 0x81, 0xC2, 0xB0, 0x00,
		0x00, 0x00, 0x4C, 0x89, 0x9C, 0xC3, 0xA0, 0x00, 0x00, 0x00, 0x48, 0x89, 0x15, 0xEF, 0xE9, 0xC7,
		0x00, 0x49, 0x3B, 0xD7, 0x0F, 0x86, 0xD2, 0x02, 0x00, 0x00, 0xC7, 0x07, 0x0A, 0x00, 0x00, 0x00,
		0x4C, 0x8B, 0xDF, 0x48, 0x63, 0x03, 0x48, 0x8B, 0xCA, 0x48, 0x83, 0xC2, 0x60, 0x4C, 0x89, 0x9C,
		0xC3, 0x20, 0x01, 0x00, 0x00, 0x48, 0x89, 0x15, 0xC4, 0xE9, 0xC7, 0x00, 0x49, 0x3B, 0xD7

	};

	CodeStream strm(0x0, pOps, sizeof(pOps),
		DisOptions::SKIP_INVALID, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x200,
		&instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0xd9_sz, instructionCount);

	// lets validate one towards the end, a 10 byte NOP instruction.
	{
		const Instruction& inst = instructions[0xd9 - 0x1f];

		ValidateInstruction(inst,
			InstructionID::NOP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::RAX,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x10, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}

}

TEST(x64_misc, fxsave)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x9 + 0x8 + 0xa + 0x9] = {
		0x67, 0x0F, 0xAE, 0x04, 0x45, 0x56, 0x04, 0x00, 0x00,  // FXSAVE [eax*2+ 0x456]
		0x0F, 0xAE, 0x04, 0x45, 0x56, 0x04, 0x00, 0x00,	 // FXSAVE [rax*2+ 0x456]

		0x67, 0x48, 0x0F, 0xAE, 0x04, 0x45, 0x56, 0x04, 0x00, 0x00, // FXSAVE64 [eax*2+ 0x456]
		0x48, 0x0F, 0xAE, 0x04, 0x45, 0x56, 0x04, 0x00, 0x00 // FXSAVE64 [rax*2+ 0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::FXSAVE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x1];

		ValidateInstruction(inst,
			InstructionID::FXSAVE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x2];

		ValidateInstruction(inst,
			InstructionID::FXSAVE64,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x3];

		ValidateInstruction(inst,
			InstructionID::FXSAVE64,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

TEST(x64_misc, fxrstor)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x9 + 0x8 + 0xa + 0x9] = {
		0x67, 0x0F, 0xAE, 0x0C, 0x45, 0x56, 0x04, 0x00, 0x00,  // FXRSTOR [eax*2+ 0x456]
		0x0F, 0xAE, 0x0C, 0x45, 0x56, 0x04, 0x00, 0x00,	 // FXRSTOR [rax*2+ 0x456]

		0x67, 0x48, 0x0F, 0xAE, 0x0C, 0x45, 0x56, 0x04, 0x00, 0x00, // FXRSTOR64 [eax*2+ 0x456]
		0x48, 0x0F, 0xAE, 0x0C, 0x45, 0x56, 0x04, 0x00, 0x00 // FXRSTOR64 [rax*2+ 0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::FXRSTOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x1];

		ValidateInstruction(inst,
			InstructionID::FXRSTOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x2];

		ValidateInstruction(inst,
			InstructionID::FXRSTOR64,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x3];

		ValidateInstruction(inst,
			InstructionID::FXRSTOR64,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

TEST(x64_misc, ldmxcsr)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x9 + 0x8] = {
		0x67, 0x0F, 0xAE, 0x14, 0x45, 0x56, 0x04, 0x00, 0x00, // ldmxcsr [eax*2+0x456]
		0x0F, 0xAE, 0x14, 0x45, 0x56, 0x04, 0x00, 0x00  // ldmxcsr [rax*2+0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::LDMXCSR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x1];

		ValidateInstruction(inst,
			InstructionID::LDMXCSR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_misc, stmxcsr)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x9 + 0x8] = {
		0x67, 0x0F, 0xAE, 0x1C, 0x45, 0x56, 0x04, 0x00, 0x00, // STMXCSR [eax*2+0x456]
		0x0F, 0xAE, 0x1C, 0x45, 0x56, 0x04, 0x00, 0x00  // STMXCSR [rax*2+0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::STMXCSR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x1];

		ValidateInstruction(inst,
			InstructionID::STMXCSR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_misc, lfence)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x3] = {
		0x0F, 0xAE, 0xE8  // lfence 
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::LFENCE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}



TEST(x64_misc, xrstor)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x9 + 0x8 + 0xa + 0x9] = {
		0x67, 0x0F, 0xAE, 0x2C, 0x45, 0x56, 0x04, 0x00, 0x00,  // xrstor [eax*2+ 0x456]
		0x0F, 0xAE, 0x2C, 0x45, 0x56, 0x04, 0x00, 0x00,	 // xrstor [rax*2+ 0x456]

		0x67, 0x48, 0x0F, 0xAE, 0x2C, 0x45, 0x56, 0x04, 0x00, 0x00, // xrstor64 [eax*2+ 0x456]
		0x48, 0x0F, 0xAE, 0x2C, 0x45, 0x56, 0x04, 0x00, 0x00 // xrstor64 [rax*2+ 0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::XRSTOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x1];

		ValidateInstruction(inst,
			InstructionID::XRSTOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x2];

		ValidateInstruction(inst,
			InstructionID::XRSTOR64,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x3];

		ValidateInstruction(inst,
			InstructionID::XRSTOR64,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

TEST(x64_misc, mfence)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x3] = {
		0x0F, 0xAE, 0xF0   // mfence 
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::MFENCE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}



TEST(x64_misc, xsaveopt)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x9 + 0x8 + 0xa + 0x9] = {
		0x67, 0x0F, 0xAE, 0x34, 0x45, 0x56, 0x04, 0x00, 0x00,  // XSAVEOPT [eax*2+ 0x456]
		0x0F, 0xAE, 0x34, 0x45, 0x56, 0x04, 0x00, 0x00,	 // XSAVEOPT [rax*2+ 0x456]

		0x67, 0x48, 0x0F, 0xAE, 0x34, 0x45, 0x56, 0x04, 0x00, 0x00, // XSAVEOPT64 [eax*2+ 0x456]
		0x48, 0x0F, 0xAE, 0x34, 0x45, 0x56, 0x04, 0x00, 0x00 // XSAVEOPT64 [rax*2+ 0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x4_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::XSAVEOPT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x1];

		ValidateInstruction(inst,
			InstructionID::XSAVEOPT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x2];

		ValidateInstruction(inst,
			InstructionID::XSAVEOPT64,
			FlowControl::NONE,
			InstructionSet::NONE,
			0xa,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x3];

		ValidateInstruction(inst,
			InstructionID::XSAVEOPT64,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x64_misc, sfence)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x3] = {
		0x0F, 0xAE, 0xF8   // sfence 
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::SFENCE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x3,
			0x0,
			0x0,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperandNotSet(inst.ops[0], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

TEST(x64_misc, clflush)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x9 + 0x8] = {
		0x67, 0x0F, 0xAE, 0x3C, 0x45, 0x56, 0x04, 0x00, 0x00,  // CLFLUSH [eax*2+ 0x456]
		0x0F, 0xAE, 0x3C, 0x45, 0x56, 0x04, 0x00, 0x00	 // CLFLUSH [rax*2+ 0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_64BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::CLFLUSH,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x9,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
	{
		const Instruction& inst = instructions[0x1];

		ValidateInstruction(inst,
			InstructionID::CLFLUSH,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::NONE,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::RAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}