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

TEST(x86_misc, push)
{
	Instruction instructions[32];
	size_t instructionCount;

	const uint8_t pOps[] = {
		0x50,      //     PUSH EAX
		0x53,	   //     PUSH EBX
		0x51,	   //     PUSH ECX
		0x52,      //      PUSH EDX
		0x56,      //      PUSH ESI
		0x57,      //      PUSH EDI
		0x55,       //      PUSH EBP
		0x54			// PUSH ESP
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 32, &instructionCount);

	EXPECT_EQ(DisResult::OK, result);
	EXPECT_EQ(8_sz, instructionCount);

	for (size_t i = 0; i < instructionCount; i++)
	{
		EXPECT_EQ(InstructionID::PUSH, instructions[i].opcode);
		EXPECT_EQ(1, instructions[i].size); // 1 byte
		EXPECT_EQ(OperandTypeAbs::REG, instructions[i].ops[0].type); // all a reg operands.
	}

	// check reg is correct
	EXPECT_EQ(RegIndex::EAX, instructions[0].ops[0].regIndex);
	EXPECT_EQ(RegIndex::EBX, instructions[1].ops[0].regIndex);
	EXPECT_EQ(RegIndex::ECX, instructions[2].ops[0].regIndex);
	EXPECT_EQ(RegIndex::EDX, instructions[3].ops[0].regIndex);
	EXPECT_EQ(RegIndex::ESI, instructions[4].ops[0].regIndex);
	EXPECT_EQ(RegIndex::EDI, instructions[5].ops[0].regIndex);
	EXPECT_EQ(RegIndex::EBP, instructions[6].ops[0].regIndex);
	EXPECT_EQ(RegIndex::ESP, instructions[7].ops[0].regIndex);
}

TEST(x86_misc, pop)
{
	Instruction instructions[32];
	size_t instructionCount;

	// just add 0x8 to shift the push op to pop op.
	const uint8_t pOps[] = {
		0x50 + 0x8,      //     POP EAX
		0x53 + 0x8,	   //     POP EBX
		0x51 + 0x8,	   //     POP ECX
		0x52 + 0x8,      //      POP EDX
		0x56 + 0x8,      //      POP ESI
		0x57 + 0x8,      //      POP EDI
		0x55 + 0x8,       //      POP EBP
		0x54 + 0x8			//		 POP ESP
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);


	DisResult::Enum result = Diss::disassemble(strm, instructions, 32, &instructionCount);

	EXPECT_EQ(DisResult::OK, result);
	EXPECT_EQ(8_sz, instructionCount);

	for (size_t i = 0; i < instructionCount; i++)
	{
		EXPECT_EQ(InstructionID::POP, instructions[i].opcode);
		EXPECT_EQ(1, instructions[i].size); // 1 byte
		EXPECT_EQ(OperandTypeAbs::REG, instructions[i].ops[0].type); // all a reg operands.
	}

	// check reg is correct
	EXPECT_EQ(RegIndex::EAX, instructions[0].ops[0].regIndex);
	EXPECT_EQ(RegIndex::EBX, instructions[1].ops[0].regIndex);
	EXPECT_EQ(RegIndex::ECX, instructions[2].ops[0].regIndex);
	EXPECT_EQ(RegIndex::EDX, instructions[3].ops[0].regIndex);
	EXPECT_EQ(RegIndex::ESI, instructions[4].ops[0].regIndex);
	EXPECT_EQ(RegIndex::EDI, instructions[5].ops[0].regIndex);
	EXPECT_EQ(RegIndex::EBP, instructions[6].ops[0].regIndex);
	EXPECT_EQ(RegIndex::ESP, instructions[7].ops[0].regIndex);
}


TEST(x86_misc, mod_rm_sib)
{
	Instruction instructions[8];
	size_t instructionCount;

	const uint8_t pOps[] = { 0x8B, 0x84, 0x70, 0x55, 0x55, 0x55, 0x00 }; //  MOV EAX, DWORD PTR DS : [EAX + ESI * 2 + 555555]

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(1_sz, instructionCount);

	const Instruction& inst = instructions[0];

	EXPECT_EQ(InstructionID::MOV, inst.opcode);

	EXPECT_EQ(7, inst.size); // 7 byte instruction
	EXPECT_EQ(2, inst.scale);
	EXPECT_EQ(32, inst.displacementSize); // 32 bit displacement
	EXPECT_EQ(0x555555_ui64, inst.displacement);
	EXPECT_EQ(RegIndex::DS, inst.segment); // DS segment.
	EXPECT_EQ(RegIndex::EAX, inst.base); // we have a base reg of EAX
	EXPECT_EQ(FlowControl::NONE, inst.flow); // no flow

	// both ops sould be 32bits.
	for (size_t i = 0; i < 2; i++)
	{
		EXPECT_EQ(32, inst.ops[i].size);
	}

	EXPECT_EQ(OperandTypeAbs::REG, inst.ops[0].type);
	EXPECT_EQ(OperandTypeAbs::MEM, inst.ops[1].type);

	// check registers are correct.
	EXPECT_EQ(RegIndex::EAX, inst.ops[0].regIndex);
	EXPECT_EQ(RegIndex::ESI, inst.ops[1].regIndex);
}

TEST(x86_misc, mov_seg_32dis)
{
	Instruction instructions[8];
	size_t instructionCount;

	const uint8_t pOps[] = { 0x8B, 0x15, 0x30, 0x03, 0xFE, 0x7F,	 //   8B15 3003FE7F    MOV EDX, DWORD PTR DS:[7FFE0330]
		0x64, 0xa1, 0x18, 0x00, 0x00, 0x00,								//   64:A1 18000000   MOV EAX, DWORD PTR FS:[18]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(2_sz, instructionCount);

	{
		const Instruction& inst = instructions[0];

		EXPECT_EQ(InstructionID::MOV, inst.opcode);
		EXPECT_EQ(0_ui64, inst.add);
		EXPECT_EQ(6, inst.size); // 6 byte instruction
		EXPECT_EQ(0, inst.scale);
		EXPECT_EQ(32, inst.displacementSize); // 32 bit displacement
		EXPECT_EQ(0x7FFE0330_ui64, inst.displacement);
		EXPECT_EQ(RegIndex::DS, inst.segment); // DS segment.
		EXPECT_EQ(RegIndex::NONE, inst.base);
		EXPECT_EQ(FlowControl::NONE, inst.flow); // no flow

		// check operands are correct.
		EXPECT_EQ(OperandTypeAbs::REG, inst.ops[0].type);
		EXPECT_EQ(RegIndex::EDX, inst.ops[0].regIndex);

		EXPECT_EQ(OperandTypeAbs::DISP, inst.ops[1].type);
		EXPECT_EQ(32, inst.ops[1].size);
	}

	{
		const Instruction& inst = instructions[1];

		EXPECT_EQ(InstructionID::MOV, inst.opcode);
		EXPECT_EQ(6_ui64, inst.add); // address is 6
		EXPECT_EQ(6, inst.size); // 6 byte instruction
		EXPECT_EQ(0, inst.scale);
		EXPECT_EQ(32, inst.displacementSize); // 32 bit displacement
		EXPECT_EQ(0x18_ui64, inst.displacement);
		EXPECT_EQ(RegIndex::FS, inst.segment); // FS segment.
		EXPECT_EQ(RegIndex::NONE, inst.base);
		EXPECT_EQ(FlowControl::NONE, inst.flow); // no flow

		// check operands are correct.
		EXPECT_EQ(OperandTypeAbs::REG, inst.ops[0].type);
		EXPECT_EQ(RegIndex::EAX, inst.ops[0].regIndex);

		EXPECT_EQ(OperandTypeAbs::DISP, inst.ops[1].type);
		EXPECT_EQ(32, inst.ops[1].size);
	}

}

TEST(x86_misc, add_ebp_base)
{
	Instruction instructions[8];
	size_t instructionCount;

	const uint8_t pOps[] = { 0x0, 0x4c, 0x5, 0x0 }; // ADD [EBP + EAX], CL

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(1_sz, instructionCount);

	const Instruction& inst = instructions[0x0];

	ValidateInstruction(inst,
		InstructionID::ADD,
		FlowControl::NONE,
		InstructionSet::NONE,
		0x4,
		0x0,
		0x0,
		RegIndex::SS,
		RegIndex::EBP,
		__FILE__, __LINE__
	);

	EXPECT_EQ(0x0_ui64, inst.imm.uint64);

	ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, 0x0, 0x8, __FILE__, __LINE__); // set!
	ValidateOperand(inst.ops[1], OperandTypeAbs::REG, 0x31, 0x8, __FILE__, __LINE__); // set!
	ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
	ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
}

TEST(x86_misc, nop)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	// ops: 0xc2 
	const uint8_t pOps[0x2] = {
		0x90, // nop
		0x90 // nop
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x2_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::NOP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
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
	{
		const Instruction& inst = instructions[0x1];

		ValidateInstruction(inst,
			InstructionID::NOP,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x1,
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


TEST(x86_misc, misc)
{
	/*

		776C3EBC   8BFF             MOV EDI, EDI
		776C3EBE   55               PUSH EBP
		776C3EBF   8BEC             MOV EBP, ESP
		776C3EC1   A1 00117177      MOV EAX, DWORD PTR DS:[77711100]
		776C3EC6   83EC 0C          SUB ESP, 0C
		776C3EC9   56               PUSH ESI
		776C3ECA   8BF1             MOV ESI, ECX
		776C3ECC   A8 03            TEST AL, 3
		776C3ECE   74 24            JE SHORT ntdll.776C3EF4
		776C3ED0   56               PUSH ESI
		776C3ED1   68 8AB36577      PUSH ntdll.7765B38A
		776C3ED6   6A 00            PUSH 0
		776C3ED8   68 BEB36577      PUSH ntdll.7765B3BE
		776C3EDD   68 63060000      PUSH 663
		776C3EE2   68 30B36577      PUSH ntdll.7765B330
		776C3EE7   E8 4BD8FFFF      CALL ntdll.776C1737
		776C3EEC   A1 00117177      MOV EAX, DWORD PTR DS:[77711100]
		776C3EF1   83C4 18          ADD ESP, 18
		776C3EF4   A8 10            TEST AL, 10
		776C3EF6   74 01            JE SHORT ntdll.776C3EF9
		776C3EF8   CC               INT3
		776C3EF9   64:A1 30000000   MOV EAX, DWORD PTR FS:[30]
		776C3EFF   BA 383F6C77      MOV EDX, ntdll.776C3F38
		776C3F04   8B48 10          MOV ECX, DWORD PTR DS:[EAX+10]
		776C3F07   83C1 38          ADD ECX, 38
		776C3F0A   E8 7CECFFFF      CALL ntdll.776C2B8B
		776C3F0F   833D 24217177 00 CMP DWORD PTR DS:[77712124], 0
		776C3F16   75 1B            JNZ SHORT ntdll.776C3F33
		776C3F18   8D45 F8          LEA EAX, DWORD PTR SS:[EBP-8]
		776C3F1B   8975 FC          MOV DWORD PTR SS:[EBP-4], ESI
		776C3F1E   50               PUSH EAX
		776C3F1F   6A 01            PUSH 1
		776C3F21   8D45 FC          LEA EAX, DWORD PTR SS:[EBP-4]
		776C3F24   50               PUSH EAX
		776C3F25   6A 00            PUSH 0
		776C3F27   6A 01            PUSH 1
		776C3F29   68 450100C0      PUSH C0000145
		776C3F2E   E8 7D99F8FF      CALL ntdll.ZwRaiseHardError
		776C3F33   5E               POP ESI
		776C3F34   8BE5             MOV ESP, EBP
		776C3F36   5D               POP EBP
		776C3F37   C3               RETN
		776C3F38   07               POP ES
		776C3F39   0000             ADD BYTE PTR DS:[EAX], AL
		776C3F3B   1103             ADC DWORD PTR DS:[EBX], EAX
		776C3F3D   0000             ADD BYTE PTR DS:[EAX], AL
		776C3F3F   0000             ADD BYTE PTR DS:[EAX], AL
		776C3F41   0200             ADD AL, BYTE PTR DS:[EAX]
		776C3F43   0000             ADD BYTE PTR DS:[EAX], AL
		776C3F45   0000             ADD BYTE PTR DS:[EAX], AL
		776C3F47   2090 90909090    AND BYTE PTR DS:[EAX+90909090], DL
		776C3F4D   8BFF             MOV EDI, EDI
		776C3F4F   55               PUSH EBP
		776C3F50   8BEC             MOV EBP, ESP
		776C3F52   83EC 14          SUB ESP, 14
		776C3F55   803D EC02FE7F 00 CMP BYTE PTR DS:[7FFE02EC], 0
		776C3F5C   53               PUSH EBX
		776C3F5D   56               PUSH ESI
		776C3F5E   57               PUSH EDI
		776C3F5F   8BF2             MOV ESI, EDX
		776C3F61   8BD9             MOV EBX, ECX
		776C3F63   74 0C            JE SHORT ntdll.776C3F71
		776C3F65   8166 68 FFFEFFFD AND DWORD PTR DS:[ESI+68], FDFFFEFF
		776C3F6C   E9 3A010000      JMP ntdll.776C40AB
		776C3F71   8A45 08          MOV AL, BYTE PTR SS:[EBP+8]
		776C3F74   84C0             TEST AL, AL
		776C3F76   74 49            JE SHORT ntdll.776C3FC1
		776C3F78   0FB73B           MOVZX EDI, WORD PTR DS:[EBX]
		776C3F7B   8B43 04          MOV EAX, DWORD PTR DS:[EBX+4]
		776C3F7E   8BCF             MOV ECX, EDI
		776C3F80   03C1             ADD EAX, ECX
		776C3F82   85C9             TEST ECX, ECX
		776C3F84   74 0E            JE SHORT ntdll.776C3F94
		776C3F86   66:8378 FE 5C    CMP WORD PTR DS:[EAX-2], 5C
		776C3F8B   74 07            JE SHORT ntdll.776C3F94
		776C3F8D   83C0 FE          ADD EAX, -2
		776C3F90   49               DEC ECX
		776C3F91   49               DEC ECX
		776C3F92  ^75 F2            JNZ SHORT ntdll.776C3F86
		776C3F94   8945 FC          MOV DWORD PTR SS:[EBP-4], EAX
		776C3F97   2BF9             SUB EDI, ECX
		776C3F99   68 EABF6577      PUSH ntdll.7765BFEA
		776C3F9E   8D45 F0          LEA EAX, DWORD PTR SS:[EBP-10]
		776C3FA1   66:897D F8       MOV WORD PTR SS:[EBP-8], DI
		776C3FA5   50               PUSH EAX
		776C3FA6   E8 1530F7FF      CALL ntdll.RtlInitUnicodeString
		776C3FAB   6A 01            PUSH 1
		776C3FAD   8D45 F0          LEA EAX, DWORD PTR SS:[EBP-10]
		776C3FB0   50               PUSH EAX
		776C3FB1   8D45 F8          LEA EAX, DWORD PTR SS:[EBP-8]
		776C3FB4   50               PUSH EAX
		776C3FB5   E8 0668FAFF      CALL ntdll.RtlCompareUnicodeString
		776C3FBA   85C0             TEST EAX, EAX
		776C3FBC  ^74 A7            JE SHORT ntdll.776C3F65
		776C3FBE   8A45 08          MOV AL, BYTE PTR SS:[EBP+8]
		776C3FC1   F746 68 00010002 TEST DWORD PTR DS:[ESI+68], 2000100
		776C3FC8   8B7D 0C          MOV EDI, DWORD PTR SS:[EBP+C]
		776C3FCB   74 39            JE SHORT ntdll.776C4006
		776C3FCD   FF75 14          PUSH DWORD PTR SS:[EBP+14]
		776C3FD0   8BD3             MOV EDX, EBX
		776C3FD2   C605 54117177 01 MOV BYTE PTR DS:[77711154], 1
		776C3FD9   FF75 10          PUSH DWORD PTR SS:[EBP+10]
		776C3FDC   8AC8             MOV CL, AL
		776C3FDE   6A 00            PUSH 0
		776C3FE0   57               PUSH EDI
		776C3FE1   E8 04580000      CALL ntdll.776C97EA
		776C3FE6   85C0             TEST EAX, EAX
		776C3FE8   79 1C            JNS SHORT ntdll.776C4006
		776C3FEA   8B0D F80E7177    MOV ECX, DWORD PTR DS:[77710EF8]
		776C3FF0   8166 68 FFFEFFFD AND DWORD PTR DS:[ESI+68], FDFFFEFF
		776C3FF7   8321 00          AND DWORD PTR DS:[ECX], 0
		776C3FFA   8325 FC0E7177 00 AND DWORD PTR DS:[77710EFC], 0
		776C4001   E9 A7000000      JMP ntdll.776C40AD
		776C4006   8B46 68          MOV EAX, DWORD PTR DS:[ESI+68]
		776C4009   A9 00000002      TEST EAX, 2000000
		776C400E   0F84 97000000    JE ntdll.776C40AB
		776C4014   25 0F67FFFF      AND EAX, FFFF670F
		776C4019   C605 54117177 01 MOV BYTE PTR DS:[77711154], 1
		776C4020   8946 68          MOV DWORD PTR DS:[ESI+68], EAX
		776C4023   A1 F80E7177      MOV EAX, DWORD PTR DS:[77710EF8]
		776C4028   8B18             MOV EBX, DWORD PTR DS:[EAX]
		776C402A   8308 FF          OR DWORD PTR DS:[EAX], FFFFFFFF
		776C402D   85FF             TEST EDI, EDI
		776C402F   74 1E            JE SHORT ntdll.776C404F
		776C4031   6A 00            PUSH 0
		776C4033   6A 04            PUSH 4
		776C4035   50               PUSH EAX
		776C4036   6A 04            PUSH 4
		776C4038   68 00C06577      PUSH ntdll.7765C000
		776C403D   57               PUSH EDI
		776C403E   E8 0D29F7FF      CALL ntdll.LdrQueryImageFileKeyOption
		776C4043   85C0             TEST EAX, EAX
		776C4045   A1 F80E7177      MOV EAX, DWORD PTR DS:[77710EF8]
		776C404A   79 03            JNS SHORT ntdll.776C404F
		776C404C   8308 FF          OR DWORD PTR DS:[EAX], FFFFFFFF
		776C404F   8338 FF          CMP DWORD PTR DS:[EAX], -1
		776C4052   75 02            JNZ SHORT ntdll.776C4056
		776C4054   8918             MOV DWORD PTR DS:[EAX], EBX
		776C4056   F700 00040000    TEST DWORD PTR DS:[EAX], 400
		776C405C   74 43            JE SHORT ntdll.776C40A1
		776C405E   F705 B0167177 00>TEST DWORD PTR DS:[777116B0], 8000
		776C4068   74 37            JE SHORT ntdll.776C40A1
		776C406A   F605 00117177 05 TEST BYTE PTR DS:[77711100], 5
		776C4071   74 23            JE SHORT ntdll.776C4096
		776C4073   68 1CC06577      PUSH ntdll.7765C01C
		776C4078   6A 02            PUSH 2
		776C407A   68 5CC06577      PUSH ntdll.7765C05C
		776C407F   68 DA170000      PUSH 17DA
		776C4084   68 30B36577      PUSH ntdll.7765B330
		776C4089   E8 A9D6FFFF      CALL ntdll.776C1737
		776C408E   A1 F80E7177      MOV EAX, DWORD PTR DS:[77710EF8]
		776C4093   83C4 14          ADD ESP, 14
		776C4096   32C9             XOR CL, CL
		776C4098   74 01            JE SHORT ntdll.776C409B
		776C409A   CC               INT3
		776C409B   8120 FFFBFFFF    AND DWORD PTR DS:[EAX], FFFFFBFF
		776C40A1   C705 FC0E7177 01>MOV DWORD PTR DS:[77710EFC], 1
		776C40AB   33C0             XOR EAX, EAX
		776C40AD   5F               POP EDI
		776C40AE   5E               POP ESI
		776C40AF   5B               POP EBX
		776C40B0   8BE5             MOV ESP, EBP
		776C40B2   5D               POP EBP
		776C40B3   C2 1000          RETN 10

	*/

	Instruction instructions[0x200];
	size_t instructionCount;

	const uint8_t pOps[] =
	{
		0x8B, 0xFF, 0x55, 0x8B, 0xEC, 0xA1, 0x00, 0x11, 0x71, 0x77, 0x83, 0xEC, 0x0C, 0x56, 0x8B, 0xF1,
		0xA8, 0x03, 0x74, 0x24, 0x56, 0x68, 0x8A, 0xB3, 0x65, 0x77, 0x6A, 0x00, 0x68, 0xBE, 0xB3, 0x65,
		0x77, 0x68, 0x63, 0x06, 0x00, 0x00, 0x68, 0x30, 0xB3, 0x65, 0x77, 0xE8, 0x4B, 0xD8, 0xFF, 0xFF,
		0xA1, 0x00, 0x11, 0x71, 0x77, 0x83, 0xC4, 0x18, 0xA8, 0x10, 0x74, 0x01, 0xCC, 0x64, 0xA1, 0x30,
		0x00, 0x00, 0x00, 0xBA, 0x38, 0x3F, 0x6C, 0x77, 0x8B, 0x48, 0x10, 0x83, 0xC1, 0x38, 0xE8, 0x7C,
		0xEC, 0xFF, 0xFF, 0x83, 0x3D, 0x24, 0x21, 0x71, 0x77, 0x00, 0x75, 0x1B, 0x8D, 0x45, 0xF8, 0x89,
		0x75, 0xFC, 0x50, 0x6A, 0x01, 0x8D, 0x45, 0xFC, 0x50, 0x6A, 0x00, 0x6A, 0x01, 0x68, 0x45, 0x01,
		0x00, 0xC0, 0xE8, 0x7D, 0x99, 0xF8, 0xFF, 0x5E, 0x8B, 0xE5, 0x5D, 0xC3, 0x07, 0x00, 0x00, 0x11,
		0x03, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x90, 0x90, 0x90, 0x90,
		0x90, 0x8B, 0xFF, 0x55, 0x8B, 0xEC, 0x83, 0xEC, 0x14, 0x80, 0x3D, 0xEC, 0x02, 0xFE, 0x7F, 0x00,
		0x53, 0x56, 0x57, 0x8B, 0xF2, 0x8B, 0xD9, 0x74, 0x0C, 0x81, 0x66, 0x68, 0xFF, 0xFE, 0xFF, 0xFD,
		0xE9, 0x3A, 0x01, 0x00, 0x00, 0x8A, 0x45, 0x08, 0x84, 0xC0, 0x74, 0x49, 0x0F, 0xB7, 0x3B, 0x8B,
		0x43, 0x04, 0x8B, 0xCF, 0x03, 0xC1, 0x85, 0xC9, 0x74, 0x0E, 0x66, 0x83, 0x78, 0xFE, 0x5C, 0x74,
		0x07, 0x83, 0xC0, 0xFE, 0x49, 0x49, 0x75, 0xF2, 0x89, 0x45, 0xFC, 0x2B, 0xF9, 0x68, 0xEA, 0xBF,
		0x65, 0x77, 0x8D, 0x45, 0xF0, 0x66, 0x89, 0x7D, 0xF8, 0x50, 0xE8, 0x15, 0x30, 0xF7, 0xFF, 0x6A,
		0x01, 0x8D, 0x45, 0xF0, 0x50, 0x8D, 0x45, 0xF8, 0x50, 0xE8, 0x06, 0x68, 0xFA, 0xFF, 0x85, 0xC0,
		0x74, 0xA7, 0x8A, 0x45, 0x08, 0xF7, 0x46, 0x68, 0x00, 0x01, 0x00, 0x02, 0x8B, 0x7D, 0x0C, 0x74,
		0x39, 0xFF, 0x75, 0x14, 0x8B, 0xD3, 0xC6, 0x05, 0x54, 0x11, 0x71, 0x77, 0x01, 0xFF, 0x75, 0x10,
		0x8A, 0xC8, 0x6A, 0x00, 0x57, 0xE8, 0x04, 0x58, 0x00, 0x00, 0x85, 0xC0, 0x79, 0x1C, 0x8B, 0x0D,
		0xF8, 0x0E, 0x71, 0x77, 0x81, 0x66, 0x68, 0xFF, 0xFE, 0xFF, 0xFD, 0x83, 0x21, 0x00, 0x83, 0x25,
		0xFC, 0x0E, 0x71, 0x77, 0x00, 0xE9, 0xA7, 0x00, 0x00, 0x00, 0x8B, 0x46, 0x68, 0xA9, 0x00, 0x00,
		0x00, 0x02, 0x0F, 0x84, 0x97, 0x00, 0x00, 0x00, 0x25, 0x0F, 0x67, 0xFF, 0xFF, 0xC6, 0x05, 0x54,
		0x11, 0x71, 0x77, 0x01, 0x89, 0x46, 0x68, 0xA1, 0xF8, 0x0E, 0x71, 0x77, 0x8B, 0x18, 0x83, 0x08,
		0xFF, 0x85, 0xFF, 0x74, 0x1E, 0x6A, 0x00, 0x6A, 0x04, 0x50, 0x6A, 0x04, 0x68, 0x00, 0xC0, 0x65,
		0x77, 0x57, 0xE8, 0x0D, 0x29, 0xF7, 0xFF, 0x85, 0xC0, 0xA1, 0xF8, 0x0E, 0x71, 0x77, 0x79, 0x03,
		0x83, 0x08, 0xFF, 0x83, 0x38, 0xFF, 0x75, 0x02, 0x89, 0x18, 0xF7, 0x00, 0x00, 0x04, 0x00, 0x00,
		0x74, 0x43, 0xF7, 0x05, 0xB0, 0x16, 0x71, 0x77, 0x00, 0x80, 0x00, 0x00, 0x74, 0x37, 0xF6, 0x05,
		0x00, 0x11, 0x71, 0x77, 0x05, 0x74, 0x23, 0x68, 0x1C, 0xC0, 0x65, 0x77, 0x6A, 0x02, 0x68, 0x5C,
		0xC0, 0x65, 0x77, 0x68, 0xDA, 0x17, 0x00, 0x00, 0x68, 0x30, 0xB3, 0x65, 0x77, 0xE8, 0xA9, 0xD6,
		0xFF, 0xFF, 0xA1, 0xF8, 0x0E, 0x71, 0x77, 0x83, 0xC4, 0x14, 0x32, 0xC9, 0x74, 0x01, 0xCC, 0x81,
		0x20, 0xFF, 0xFB, 0xFF, 0xFF, 0xC7, 0x05, 0xFC, 0x0E, 0x71, 0x77, 0x01, 0x00, 0x00, 0x00, 0x33,
		0xC0, 0x5F, 0x5E, 0x5B, 0x8B, 0xE5, 0x5D, 0xC2, 0x10, 0x00
	};


	CodeStream strm(0, pOps, sizeof(pOps), 0, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x200, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(164_sz, instructionCount);

}


TEST(DISABLED_x86_misc, misc_1)
{
	/*

	0008D4BF   FA               CLI
	0008D4C0   E3 75            JECXZ SHORT joshua.0008D537
	0008D4C2   94               XCHG EAX, ESP
	0008D4C3   FB               STI
	0008D4C4   25 CF43A98B      AND EAX, 8BA943CF
	0008D4C9   BC 7B02907F      MOV ESP, 7F90027B
	0008D4CE   81F4 B5729FC4    XOR ESP, C49F72B5
	0008D4D4   E2 FF            LOOPD SHORT joshua.0008D4D5
	0008D4D6   01F9             ADD ECX, EDI
	0008D4D8   3C 05            CMP AL, 5
	0008D4DA   0B26             OR ESP, DWORD PTR DS:[ESI]
	0008D4DC   3ACC             CMP CL, AH
	0008D4DE   D5 BA            AAD 0BA
	0008D4E0   5A               POP EDX
	0008D4E1   E2 69            LOOPD SHORT joshua.0008D54C
	0008D4E3   44               INC ESP
	0008D4E4   863A             XCHG BYTE PTR DS:[EDX], BH
	0008D4E6  ^E3 8F            JECXZ SHORT joshua.0008D477
	0008D4E8   6C               INS BYTE PTR ES:[EDI], DX                ; I/O command
	0008D4E9   4C               DEC ESP
	0008D4EA   868F C5DF7A25    XCHG BYTE PTR DS:[EDI+257ADFC5], CL
	0008D4F0   BC 2CF92335      MOV ESP, 3523F92C
	0008D4F5   D7               XLAT BYTE PTR DS:[EBX+AL]
	0008D4F6   8891 175B13DC    MOV BYTE PTR DS:[ECX+DC135B17], DL
	0008D4FC   69F9 B5D90F1C    IMUL EDI, ECX, 1C0FD9B5
	0008D502   57               PUSH EDI
	0008D503   46               INC ESI
	0008D504   1101             ADC DWORD PTR DS:[ECX], EAX
	0008D506   BA 79CD1EFD      MOV EDX, FD1ECD79
	0008D50B   F5               CMC
	0008D50C   DFF6             FCOMIP ST, ST(6)
	0008D50E   9A EB870DC8 6CB2 CALL FAR B26C:C80D87EB                   ; Far call
	0008D515   19C0             SBB EAX, EAX
	0008D517   1994CE 232D9BA7  SBB DWORD PTR DS:[ESI+ECX*8+A79B2D23], E>
	0008D51E   4A               DEC EDX
	0008D51F   55               PUSH EBP
	0008D520   0E               PUSH CS
	0008D521   E8 0BC82E99      CALL 99379D31
	0008D526   92               XCHG EAX, EDX
	0008D527   B2 44            MOV DL, 44
	0008D529   CD 5C            INT 5C
	0008D52B   45               INC EBP
	0008D52C   086F A5          OR BYTE PTR DS:[EDI-5B], CH
	0008D52F   FA               CLI
	0008D530   4A               DEC EDX
	0008D531   F1               INT1
	0008D532   F1               INT1
	0008D533   F4               HLT                                      ; Privileged command
	0008D534   9D               POPFD
	0008D535   1C 18            SBB AL, 18
	0008D537   F4               HLT                                      ; Privileged command
	0008D538   1AAE 7457540C    SBB CH, BYTE PTR DS:[ESI+C545774]
	0008D53E   E6 A8            OUT 0A8, AL                              ; I/O command
	0008D540   97               XCHG EAX, EDI
	0008D541   105442 00        ADC BYTE PTR DS:[EDX+EAX*2], DL
	0008D545   EE               OUT DX, AL                               ; I/O command
	0008D546   C3               RETN
	0008D547  ^79 C3            JNS SHORT joshua.0008D50C
	0008D549   86D5             XCHG CH, DL
	0008D54B   C2 6F10          RETN 106F
	0008D54E   BA E152B9DA      MOV EDX, DAB952E1
	0008D553   A1 10D3C205      MOV EAX, DWORD PTR DS:[5C2D310]
	0008D558   3A4D F6          CMP CL, BYTE PTR SS:[EBP-A]
	0008D55B   0B6F 26          OR EBP, DWORD PTR DS:[EDI+26]
	0008D55E   B8 33A54CB6      MOV EAX, B64CA533
	0008D563   A3 E24CA551      MOV DWORD PTR DS:[51A54CE2], EAX
	0008D568   91               XCHG EAX, ECX
	0008D569   6D               INS DWORD PTR ES:[EDI], DX               ; I/O command
	0008D56A   BD 6F44E5EC      MOV EBP, ECE5446F
	0008D56F   4F               DEC EDI
	0008D570   E8 A0826D0C      CALL 0C765815
	0008D575   EC               IN AL, DX                                ; I/O command
	0008D576   DC40 57          FADD QWORD PTR DS:[EAX+57]
	0008D579   A6               CMPS BYTE PTR DS:[ESI], BYTE PTR ES:[EDI>
	0008D57A   C9               LEAVE
	0008D57B   97               XCHG EAX, EDI
	0008D57C   6C               INS BYTE PTR ES:[EDI], DX                ; I/O command
	0008D57D   13AC43 A632621E  ADC EBP, DWORD PTR DS:[EBX+EAX*2+1E6232A>
	0008D584   FF9D 9C323A0F    CALL FAR FWORD PTR SS:[EBP+F3A329C]      ; Far call
	0008D58A   803C79 6A        CMP BYTE PTR DS:[ECX+EDI*2], 6A
	0008D58E   8F               ???                                      ; Unknown command
	0008D58F  ^E2 F5            LOOPD SHORT joshua.0008D586
	0008D591   65:BF B72ECEE8   MOV EDI, E8CE2EB7                        ; Superfluous prefix
	0008D597   0B8D DD995BF6    OR ECX, DWORD PTR SS:[EBP+F65B99DD]
	0008D59D   C7               ???                                      ; Unknown command
	0008D59E   5D               POP EBP
	0008D59F   E4 D8            IN AL, 0D8                               ; I/O command
	0008D5A1   61               POPAD
	0008D5A2   47               INC EDI
	0008D5A3   A2 49D5E350      MOV BYTE PTR DS:[50E3D549], AL
	0008D5A8   51               PUSH ECX
	0008D5A9   3B77 04          CMP ESI, DWORD PTR DS:[EDI+4]
	0008D5AC   3220             XOR AH, BYTE PTR DS:[EAX]
	0008D5AE   E7 15            OUT 15, EAX                              ; I/O command
	0008D5B0   EA E891970F 7448 JMP FAR 4874:0F9791E8                    ; Far jump
	0008D5B7   B1 1D            MOV CL, 1D
	0008D5B9   A3 779FDC79      MOV DWORD PTR DS:[79DC9F77], EAX
	0008D5BE   92               XCHG EAX, EDX
	0008D5BF   7E 07            JLE SHORT joshua.0008D5C8
	0008D5C1   A8 EC            TEST AL, 0EC
	0008D5C3  ^EB A8            JMP SHORT joshua.0008D56D
	0008D5C5   C430             LES ESI, FWORD PTR DS:[EAX]              ; Modification of segment register
	0008D5C7   9E               SAHF
	0008D5C8   E8 41B5BB05      CALL 05C48B0E
	0008D5CD   3A42 79          CMP AL, BYTE PTR DS:[EDX+79]
	0008D5D0   6F               OUTS DX, DWORD PTR ES:[EDI]              ; I/O command
	0008D5D1   5B               POP EBX
	0008D5D2   33FB             XOR EDI, EBX
	0008D5D4   0F2F1F           COMISS XMM3, DWORD PTR DS:[EDI]
	0008D5D7   DACF             FCMOVE ST, ST(7)
	0008D5D9   CF               IRETD
	0008D5DA   29E4             SUB ESP, ESP
	0008D5DC   3F               AAS
	0008D5DD   DAF0             FIDIV EAX                                ; Illegal use of register
	0008D5DF   68 9CE5F272      PUSH 72F2E59C
	0008D5E4   A0 6A11F5F7      MOV AL, BYTE PTR DS:[F7F5116A]
	0008D5E9   F2:              PREFIX REPNE:                            ; Superfluous prefix
	0008D5EA  ^77 BE            JA SHORT joshua.0008D5AA
	0008D5EC   56               PUSH ESI
	0008D5ED   9D               POPFD
	0008D5EE   25 807DCF01      AND EAX, 1CF7D80
	0008D5F3   26:AF            SCAS DWORD PTR ES:[EDI]
	0008D5F5   D067 AB          SHL BYTE PTR DS:[EDI-55], 1
	0008D5F8   CC               INT3
	0008D5F9   036E 2D          ADD EBP, DWORD PTR DS:[ESI+2D]
	0008D5FC   630B             ARPL WORD PTR DS:[EBX], CX
	0008D5FE   ED               IN EAX, DX                               ; I/O command
	0008D5FF   CB               RETF                                     ; Far return
	0008D600   93               XCHG EAX, EBX
	0008D601   34 8A            XOR AL, 8A
	0008D603   27               DAA
	0008D604   08FF             OR BH, BH
	0008D606   EF               OUT DX, EAX                              ; I/O command
	0008D607   22DF             AND BL, BH
	0008D609   0008             ADD BYTE PTR DS:[EAX], CL
	0008D60B   BD 570441F6      MOV EBP, F6410457
	0008D610   6F               OUTS DX, DWORD PTR ES:[EDI]              ; I/O command
	0008D611   7A 21            JPE SHORT joshua.0008D634
	0008D613   41               INC ECX
	0008D614   1324B1           ADC ESP, DWORD PTR DS:[ECX+ESI*4]
	0008D617   E8 2BC6F5A5      CALL A5FE9C47
	0008D61C   0321             ADD ESP, DWORD PTR DS:[ECX]
	0008D61E   A5               MOVS DWORD PTR ES:[EDI], DWORD PTR DS:[E>
	0008D61F   FE               ???                                      ; Unknown command
	0008D620   96               XCHG EAX, ESI
	0008D621   1203             ADC AL, BYTE PTR DS:[EBX]
	0008D623   C3               RETN
	0008D624   0950 9E          OR DWORD PTR DS:[EAX-62], EDX
	0008D627   2E:AE            SCAS BYTE PTR ES:[EDI]
	0008D629   E2 41            LOOPD SHORT joshua.0008D66C
	0008D62B   23A5 570A717E    AND ESP, DWORD PTR SS:[EBP+7E710A57]
	0008D631   399B 997B1964    CMP DWORD PTR DS:[EBX+64197B99], EBX
	0008D637   EE               OUT DX, AL                               ; I/O command
	0008D638   FE               ???                                      ; Unknown command
	0008D639   2818             SUB BYTE PTR DS:[EAX], BL
	0008D63B   D4 FD            AAM 0FD
	0008D63D   1BC7             SBB EAX, EDI
	0008D63F   F8               CLC
	0008D640   E0 20            LOOPDNE SHORT joshua.0008D662
	0008D642   8E8D BD7F7474    MOV CS, WORD PTR SS:[EBP+74747FBD]       ; Segment CS is not allowed
	0008D648   73 56            JNB SHORT joshua.0008D6A0
	0008D64A   42               INC EDX
	0008D64B   BF A817B738      MOV EDI, 38B717A8
	0008D650   032C66           ADD EBP, DWORD PTR DS:[ESI]
	0008D653   FD               STD
	0008D654   6396 CA8554C2    ARPL WORD PTR DS:[ESI+C25485CA], DX
	0008D65A   FB               STI
	0008D65B   27               DAA
	0008D65C   867F BE          XCHG BYTE PTR DS:[EDI-42], BH
	0008D65F  ^71 9F            JNO SHORT joshua.0008D600
	0008D661   93               XCHG EAX, EBX
	0008D662   45               INC EBP
	0008D663   F3:              PREFIX REP:                              ; Superfluous prefix
	0008D664   0E               PUSH CS
	0008D665   54               PUSH ESP
	0008D666   00DB             ADD BL, BL
	0008D668   2049 92          AND BYTE PTR DS:[ECX-6E], CL
	0008D66B   AA               STOS BYTE PTR ES:[EDI]
	0008D66C   D2B0 F2421E0D    SAL BYTE PTR DS:[EAX+D1E42F2], CL
	0008D672   EF               OUT DX, EAX                              ; I/O command
	0008D673   99               CDQ
	0008D674   3E:55            PUSH EBP                                 ; Superfluous prefix
	0008D676   04 81            ADD AL, 81
	0008D678   C7               ???                                      ; Unknown command
	0008D679   EB 1A            JMP SHORT joshua.0008D695
	0008D67B   57               PUSH EDI
	0008D67C   F3:              PREFIX REP:                              ; Superfluous prefix
	0008D67D   1851 79          SBB BYTE PTR DS:[ECX+79], DL
	0008D680   F4               HLT                                      ; Privileged command
	0008D681   04 D0            ADD AL, 0D0
	0008D683   85F4             TEST ESP, ESI
	0008D685   117E 11          ADC DWORD PTR DS:[ESI+11], EDI
	0008D688   90               NOP
	0008D689   6BD2 5F          IMUL EDX, EDX, 5F
	0008D68C   A7               CMPS DWORD PTR DS:[ESI], DWORD PTR ES:[E>
	0008D68D   6C               INS BYTE PTR ES:[EDI], DX                ; I/O command
	0008D68E   B4 80            MOV AH, 80
	0008D690   87C2             XCHG EDX, EAX
	0008D692   4D               DEC EBP
	0008D693   3C 4C            CMP AL, 4C
	0008D695   02D9             ADD BL, CL
	0008D697   CA C899          RETF 99C8                                ; Far return
	0008D69A   09CB             OR EBX, ECX
	0008D69C   8F               ???                                      ; Unknown command
	0008D69D   6E               OUTS DX, BYTE PTR ES:[EDI]               ; I/O command
	0008D69E   E5 9B            IN EAX, 9B                               ; I/O command
	0008D6A0   A7               CMPS DWORD PTR DS:[ESI], DWORD PTR ES:[E>
	0008D6A1   D4 72            AAM 72
	0008D6A3  ^7F F5            JG SHORT joshua.0008D69A
	0008D6A5   48               DEC EAX
	0008D6A6   8E86 1C868362    MOV ES, WORD PTR DS:[ESI+6283861C]       ; Modification of segment register
	0008D6AC   EF               OUT DX, EAX                              ; I/O command
	0008D6AD   6E               OUTS DX, BYTE PTR ES:[EDI]               ; I/O command
	0008D6AE   6D               INS DWORD PTR ES:[EDI], DX               ; I/O command
	0008D6AF   2A6E 42          SUB CH, BYTE PTR DS:[ESI+42]
	0008D6B2   AC               LODS BYTE PTR DS:[ESI]
	0008D6B3   B6 F5            MOV DH, 0F5
	0008D6B5   E7 C1            OUT 0C1, EAX                             ; I/O command
	0008D6B7   21CC             AND ESP, ECX
	0008D6B9   CC               INT3
	0008D6BA   77 1A            JA SHORT joshua.0008D6D6
	0008D6BC   8450 DD          TEST BYTE PTR DS:[EAX-23], DL
	0008D6BF   48               DEC EAX
	0008D6C0   A4               MOVS BYTE PTR ES:[EDI], BYTE PTR DS:[ESI>
	0008D6C1   BD 438D5A6A      MOV EBP, 6A5A8D43
	0008D6C6   8B5D 35          MOV EBX, DWORD PTR SS:[EBP+35]
	0008D6C9  -E9 C58F2C60      JMP 60356693
	0008D6CE   F8               CLC
	0008D6CF   2A98 C02C9E34    SUB BL, BYTE PTR DS:[EAX+349E2CC0]
	0008D6D5   0C 48            OR AL, 48
	0008D6D7   CF               IRETD
	0008D6D8   F7C3 69BA8EF7    TEST EBX, F78EBA69
	0008D6DE   16               PUSH SS
	0008D6DF   16               PUSH SS
	0008D6E0   95               XCHG EAX, EBP
	0008D6E1   C2 546C          RETN 6C54
	0008D6E4   2BB8 9AA4D84C    SUB EDI, DWORD PTR DS:[EAX+4CD8A49A]
	0008D6EA   CD 84            INT 84
	0008D6EC   44               INC ESP
	0008D6ED   57               PUSH EDI
	0008D6EE   0E               PUSH CS
	0008D6EF   4A               DEC EDX
	0008D6F0   8A31             MOV DH, BYTE PTR DS:[ECX]
	0008D6F2   8F               ???                                      ; Unknown command
	0008D6F3   9E               SAHF
	0008D6F4   A7               CMPS DWORD PTR DS:[ESI], DWORD PTR ES:[E>
	0008D6F5   83C2 9F          ADD EDX, -61
	0008D6F8   46               INC ESI
	0008D6F9   54               PUSH ESP
	0008D6FA   E2 6F            LOOPD SHORT joshua.0008D76B
	0008D6FC   75 05            JNZ SHORT joshua.0008D703
	0008D6FE   0F706472 9D A3   PSHUFW MM4, QWORD PTR DS:[EDX+ESI*2-63],>
	0008D704   70 21            JO SHORT joshua.0008D727
	0008D706   3038             XOR BYTE PTR DS:[EAX], BH
	0008D708   38BA 6A774A45    CMP BYTE PTR DS:[EDX+454A776A], BH
	0008D70E   A9 4A1D69EB      TEST EAX, EB691D4A
	0008D713   112D 1E66FAEA    ADC DWORD PTR DS:[EAFA661E], EBP
	0008D719   45               INC EBP
	0008D71A   67:72 62         JB SHORT joshua.0008D77F                 ; Superfluous prefix
	0008D71D   849E F1525AF7    TEST BYTE PTR DS:[ESI+F75A52F1], BL
	0008D723   A7               CMPS DWORD PTR DS:[ESI], DWORD PTR ES:[E>
	0008D724   36:E3 57         JECXZ SHORT joshua.0008D77E              ; Superfluous prefix
	0008D727   D4 40            AAM 40
	0008D729   16               PUSH SS
	0008D72A   A4               MOVS BYTE PTR ES:[EDI], BYTE PTR DS:[ESI>
	0008D72B   08E2             OR DL, AH
	0008D72D   4E               DEC ESI
	0008D72E   56               PUSH ESI
	0008D72F   25 3A890731      AND EAX, 3107893A
	0008D734   81E6 A26474C9    AND ESI, C97464A2
	0008D73A   C125 E0462820 D7 SHL DWORD PTR DS:[202846E0], 0D7         ; Shift constant out of range 1..31
	0008D741   3E:A0 F290226B   MOV AL, BYTE PTR DS:[6B2290F2]
	0008D747   60               PUSHAD
	0008D748   37               AAA
	0008D749   2D 4AD32BA5      SUB EAX, A52BD34A
	0008D74E   12FE             ADC BH, DH
	0008D750   DC22             FSUB QWORD PTR DS:[EDX]
	0008D752   27               DAA
	0008D753   65:82D9 66       SBB CL, 66                               ; Superfluous prefix
	0008D757   3BD5             CMP EDX, EBP
	0008D759   73 77            JNB SHORT joshua.0008D7D2
	0008D75B   1A2C07           SBB CH, BYTE PTR DS:[EDI+EAX]
	0008D75E   8414D4           TEST BYTE PTR SS:[ESP+EDX*8], DL
	0008D761   FD               STD
	0008D762   72 2F            JB SHORT joshua.0008D793
	0008D764   38A7 EE50301D    CMP BYTE PTR DS:[EDI+1D3050EE], AH
	0008D76A   6D               INS DWORD PTR ES:[EDI], DX               ; I/O command
	0008D76B   C0E8 87          SHR AL, 87                               ; Shift constant out of range 1..31
	0008D76E   8177 80 8F947E50 XOR DWORD PTR DS:[EDI-80], 507E948F
	0008D775   E6 0A            OUT 0A, AL                               ; I/O command
	0008D777   1F               POP DS                                   ; Modification of segment register
	0008D778   1E               PUSH DS
	0008D779   17               POP SS                                   ; Modification of segment register
	0008D77A   C06F 56 4B       SHR BYTE PTR DS:[EDI+56], 4B             ; Shift constant out of range 1..31
	0008D77E   8A5A 87          MOV BL, BYTE PTR DS:[EDX-79]
	0008D781   99               CDQ
	0008D782   42               INC EDX
	0008D783  ^78 CF            JS SHORT joshua.0008D754
	0008D785   86DB             XCHG BL, BL
	0008D787   E6 CD            OUT 0CD, AL                              ; I/O command
	0008D789   3109             XOR DWORD PTR DS:[ECX], ECX
	0008D78B   EC               IN AL, DX                                ; I/O command
	0008D78C   43               INC EBX
	0008D78D   16               PUSH SS
	0008D78E   5D               POP EBP
	0008D78F   BE 6118A5FC      MOV ESI, FCA51861
	0008D794   93               XCHG EAX, EBX
	0008D795   0D 479B74FE      OR EAX, FE749B47
	0008D79A   A7               CMPS DWORD PTR DS:[ESI], DWORD PTR ES:[E>
	0008D79B   06               PUSH ES
	0008D79C   B6 03            MOV DH, 3
	0008D79E   7B 81            JPO SHORT joshua.0008D721
	0008D7A0   ED               IN EAX, DX                               ; I/O command
	0008D7A1   9B               WAIT
	0008D7A2   BA 039E11F7      MOV EDX, F7119E03
	0008D7A7   A8 69            TEST AL, 69
	0008D7A9   4A               DEC EDX
	0008D7AA   D0AC33 1295496F  SHR BYTE PTR DS:[EBX+ESI+6F499512], 1
	0008D7B1   04 AE            ADD AL, 0AE
	0008D7B3   8911             MOV DWORD PTR DS:[ECX], EDX
	0008D7B5   FA               CLI
	0008D7B6   9D               POPFD
	0008D7B7   EA DC6F977D FF32 JMP FAR 32FF:7D976FDC                    ; Far jump
	0008D7BE   FD               STD
	0008D7BF   D5 8B            AAD 8B
	0008D7C1   82B2 A398CFA7 C4 XOR BYTE PTR DS:[EDX+A7CF98A3], FFFFFFC4
	0008D7C8   D8CC             FMUL ST, ST(4)
	0008D7CA   1268 19          ADC CH, BYTE PTR DS:[EAX+19]
	0008D7CD   2D 9C2018FE      SUB EAX, FE18209C
	0008D7D2   FA               CLI
	0008D7D3   44               INC ESP
	0008D7D4   DB               ???                                      ; Unknown command
	0008D7D5   26:A6            CMPS BYTE PTR ES:[ESI], BYTE PTR ES:[EDI>
	0008D7D7   1BCB             SBB ECX, EBX
	0008D7D9   2F               DAS
	0008D7DA   7F 24            JG SHORT joshua.0008D800
	0008D7DC   CC               INT3
	0008D7DD   16               PUSH SS
	0008D7DE   B3 9D            MOV BL, 9D
	0008D7E0   6D               INS DWORD PTR ES:[EDI], DX               ; I/O command
	0008D7E1   04 20            ADD AL, 20
	0008D7E3   2243 6D          AND AL, BYTE PTR DS:[EBX+6D]
	0008D7E6   8D744B 56        LEA ESI, DWORD PTR DS:[EBX+ECX*2+56]
	0008D7EA  ^7E 8D            JLE SHORT joshua.0008D779
	0008D7EC   25 8F0411E1      AND EAX, E111048F
	0008D7F1   1095 3DDCD3BC    ADC BYTE PTR SS:[EBP+BCD3DC3D], DL
	0008D7F7   86C8             XCHG AL, CL
	0008D7F9   7A A2            JPE SHORT joshua.0008D79D
	0008D7FB   81BA A18E4DD3 DE>CMP DWORD PTR DS:[EDX+D34D8EA1], 96F686D>
	0008D805   CC               INT3
	0008D806   88C0             MOV AL, AL
	0008D808   117D 82          ADC DWORD PTR SS:[EBP-7E], EDI
	0008D80B   3D 926AB3CC      CMP EAX, CCB36A92
	0008D810   C6               ???                                      ; Unknown command
	0008D811   EC               IN AL, DX                                ; I/O command
	0008D812   CC               INT3
	0008D813   6E               OUTS DX, BYTE PTR ES:[EDI]               ; I/O command
	0008D814   26:8DDC          LEA EBX, ESP                             ; Illegal use of register
	0008D817   0D 5BCBDF5A      OR EAX, 5ADFCB5B
	0008D81C   635B 73          ARPL WORD PTR DS:[EBX+73], BX
	0008D81F   50               PUSH EAX
	0008D820   54               PUSH ESP
	0008D821   4A               DEC EDX
	0008D822   D112             RCL DWORD PTR DS:[EDX], 1
	0008D824   3292 4574B5B6    XOR DL, BYTE PTR DS:[EDX+B6B57445]
	0008D82A   BC C6D52A29      MOV ESP, 292AD5C6
	0008D82F   AA               STOS BYTE PTR ES:[EDI]
	0008D830   27               DAA
	0008D831   55               PUSH EBP
	0008D832   0AF5             OR DH, CH
	0008D834  ^7F F0            JG SHORT joshua.0008D826
	0008D836   FD               STD
	0008D837   893F             MOV DWORD PTR DS:[EDI], EDI
	0008D839   17               POP SS                                   ; Modification of segment register
	0008D83A   018D 70DD7DA5    ADD DWORD PTR SS:[EBP+A57DDD70], ECX
	0008D840   08F2             OR DL, DH
	0008D842   874D 48          XCHG DWORD PTR SS:[EBP+48], ECX
	0008D845   5F               POP EDI
	0008D846  ^70 DC            JO SHORT joshua.0008D824
	0008D848   B8 0352C9D6      MOV EAX, D6C95203
	0008D84D   A7               CMPS DWORD PTR DS:[ESI], DWORD PTR ES:[E>
	0008D84E   04 8D            ADD AL, 8D
	0008D850   63BA AEF63828    ARPL WORD PTR DS:[EDX+2838F6AE], DI
	0008D856   46               INC ESI
	0008D857   1B63 BC          SBB ESP, DWORD PTR DS:[EBX-44]
	0008D85A   25 291E8FDD      AND EAX, DD8F1E29
	0008D85F   D316             RCL DWORD PTR DS:[ESI], CL
	0008D861   CB               RETF                                     ; Far return


	*/

	Instruction instructions[0x200];
	size_t instructionCount;

	const uint8_t pOps[] =
	{
		0xFA, 0xE3, 0x75, 0x94, 0xFB, 0x25, 0xCF, 0x43, 0xA9, 0x8B, 0xBC, 0x7B, 0x02, 0x90, 0x7F, 0x81,
		0xF4, 0xB5, 0x72, 0x9F, 0xC4, 0xE2, 0xFF, 0x01, 0xF9, 0x3C, 0x05, 0x0B, 0x26, 0x3A, 0xCC, 0xD5,
		0xBA, 0x5A, 0xE2, 0x69, 0x44, 0x86, 0x3A, 0xE3, 0x8F, 0x6C, 0x4C, 0x86, 0x8F, 0xC5, 0xDF, 0x7A,
		0x25, 0xBC, 0x2C, 0xF9, 0x23, 0x35, 0xD7, 0x88, 0x91, 0x17, 0x5B, 0x13, 0xDC, 0x69, 0xF9, 0xB5,
		0xD9, 0x0F, 0x1C, 0x57, 0x46, 0x11, 0x01, 0xBA, 0x79, 0xCD, 0x1E, 0xFD, 0xF5, 0xDF, 0xF6, 0x9A,
		0xEB, 0x87, 0x0D, 0xC8, 0x6C, 0xB2, 0x19, 0xC0, 0x19, 0x94, 0xCE, 0x23, 0x2D, 0x9B, 0xA7, 0x4A,
		0x55, 0x0E, 0xE8, 0x0B, 0xC8, 0x2E, 0x99, 0x92, 0xB2, 0x44, 0xCD, 0x5C, 0x45, 0x08, 0x6F, 0xA5,
		0xFA, 0x4A, 0xF1, 0xF1, 0xF4, 0x9D, 0x1C, 0x18, 0xF4, 0x1A, 0xAE, 0x74, 0x57, 0x54, 0x0C, 0xE6,
		0xA8, 0x97, 0x10, 0x54, 0x42, 0x00, 0xEE, 0xC3, 0x79, 0xC3, 0x86, 0xD5, 0xC2, 0x6F, 0x10, 0xBA,
		0xE1, 0x52, 0xB9, 0xDA, 0xA1, 0x10, 0xD3, 0xC2, 0x05, 0x3A, 0x4D, 0xF6, 0x0B, 0x6F, 0x26, 0xB8,
		0x33, 0xA5, 0x4C, 0xB6, 0xA3, 0xE2, 0x4C, 0xA5, 0x51, 0x91, 0x6D, 0xBD, 0x6F, 0x44, 0xE5, 0xEC,
		0x4F, 0xE8, 0xA0, 0x82, 0x6D, 0x0C, 0xEC, 0xDC, 0x40, 0x57, 0xA6, 0xC9, 0x97, 0x6C, 0x13, 0xAC,
		0x43, 0xA6, 0x32, 0x62, 0x1E, 0xFF, 0x9D, 0x9C, 0x32, 0x3A, 0x0F, 0x80, 0x3C, 0x79, 0x6A, 0x8F,
		0xE2, 0xF5, 0x65, 0xBF, 0xB7, 0x2E, 0xCE, 0xE8, 0x0B, 0x8D, 0xDD, 0x99, 0x5B, 0xF6, 0xC7, 0x5D,
		0xE4, 0xD8, 0x61, 0x47, 0xA2, 0x49, 0xD5, 0xE3, 0x50, 0x51, 0x3B, 0x77, 0x04, 0x32, 0x20, 0xE7,
		0x15, 0xEA, 0xE8, 0x91, 0x97, 0x0F, 0x74, 0x48, 0xB1, 0x1D, 0xA3, 0x77, 0x9F, 0xDC, 0x79, 0x92,
		0x7E, 0x07, 0xA8, 0xEC, 0xEB, 0xA8, 0xC4, 0x30, 0x9E, 0xE8, 0x41, 0xB5, 0xBB, 0x05, 0x3A, 0x42,
		0x79, 0x6F, 0x5B, 0x33, 0xFB, 0x0F, 0x2F, 0x1F, 0xDA, 0xCF, 0xCF, 0x29, 0xE4, 0x3F, 0xDA, 0xF0,
		0x68, 0x9C, 0xE5, 0xF2, 0x72, 0xA0, 0x6A, 0x11, 0xF5, 0xF7, 0xF2, 0x77, 0xBE, 0x56, 0x9D, 0x25,
		0x80, 0x7D, 0xCF, 0x01, 0x26, 0xAF, 0xD0, 0x67, 0xAB, 0xCC, 0x03, 0x6E, 0x2D, 0x63, 0x0B, 0xED,
		0xCB, 0x93, 0x34, 0x8A, 0x27, 0x08, 0xFF, 0xEF, 0x22, 0xDF, 0x00, 0x08, 0xBD, 0x57, 0x04, 0x41,
		0xF6, 0x6F, 0x7A, 0x21, 0x41, 0x13, 0x24, 0xB1, 0xE8, 0x2B, 0xC6, 0xF5, 0xA5, 0x03, 0x21, 0xA5,
		0xFE, 0x96, 0x12, 0x03, 0xC3, 0x09, 0x50, 0x9E, 0x2E, 0xAE, 0xE2, 0x41, 0x23, 0xA5, 0x57, 0x0A,
		0x71, 0x7E, 0x39, 0x9B, 0x99, 0x7B, 0x19, 0x64, 0xEE, 0xFE, 0x28, 0x18, 0xD4, 0xFD, 0x1B, 0xC7,
		0xF8, 0xE0, 0x20, 0x8E, 0x8D, 0xBD, 0x7F, 0x74, 0x74, 0x73, 0x56, 0x42, 0xBF, 0xA8, 0x17, 0xB7,
		0x38, 0x03, 0x2C, 0x66, 0xFD, 0x63, 0x96, 0xCA, 0x85, 0x54, 0xC2, 0xFB, 0x27, 0x86, 0x7F, 0xBE,
		0x71, 0x9F, 0x93, 0x45, 0xF3, 0x0E, 0x54, 0x00, 0xDB, 0x20, 0x49, 0x92, 0xAA, 0xD2, 0xB0, 0xF2,
		0x42, 0x1E, 0x0D, 0xEF, 0x99, 0x3E, 0x55, 0x04, 0x81, 0xC7, 0xEB, 0x1A, 0x57, 0xF3, 0x18, 0x51,
		0x79, 0xF4, 0x04, 0xD0, 0x85, 0xF4, 0x11, 0x7E, 0x11, 0x90, 0x6B, 0xD2, 0x5F, 0xA7, 0x6C, 0xB4,
		0x80, 0x87, 0xC2, 0x4D, 0x3C, 0x4C, 0x02, 0xD9, 0xCA, 0xC8, 0x99, 0x09, 0xCB, 0x8F, 0x6E, 0xE5,
		0x9B, 0xA7, 0xD4, 0x72, 0x7F, 0xF5, 0x48, 0x8E, 0x86, 0x1C, 0x86, 0x83, 0x62, 0xEF, 0x6E, 0x6D,
		0x2A, 0x6E, 0x42, 0xAC, 0xB6, 0xF5, 0xE7, 0xC1, 0x21, 0xCC, 0xCC, 0x77, 0x1A, 0x84, 0x50, 0xDD,
		0x48, 0xA4, 0xBD, 0x43, 0x8D, 0x5A, 0x6A, 0x8B, 0x5D, 0x35, 0xE9, 0xC5, 0x8F, 0x2C, 0x60, 0xF8,
		0x2A, 0x98, 0xC0, 0x2C, 0x9E, 0x34, 0x0C, 0x48, 0xCF, 0xF7, 0xC3, 0x69, 0xBA, 0x8E, 0xF7, 0x16,
		0x16, 0x95, 0xC2, 0x54, 0x6C, 0x2B, 0xB8, 0x9A, 0xA4, 0xD8, 0x4C, 0xCD, 0x84, 0x44, 0x57, 0x0E,
		0x4A, 0x8A, 0x31, 0x8F, 0x9E, 0xA7, 0x83, 0xC2, 0x9F, 0x46, 0x54, 0xE2, 0x6F, 0x75, 0x05, 0x0F,
		0x70, 0x64, 0x72, 0x9D, 0xA3, 0x70, 0x21, 0x30, 0x38, 0x38, 0xBA, 0x6A, 0x77, 0x4A, 0x45, 0xA9,
		0x4A, 0x1D, 0x69, 0xEB, 0x11, 0x2D, 0x1E, 0x66, 0xFA, 0xEA, 0x45, 0x67, 0x72, 0x62, 0x84, 0x9E,
		0xF1, 0x52, 0x5A, 0xF7, 0xA7, 0x36, 0xE3, 0x57, 0xD4, 0x40, 0x16, 0xA4, 0x08, 0xE2, 0x4E, 0x56,
		0x25, 0x3A, 0x89, 0x07, 0x31, 0x81, 0xE6, 0xA2, 0x64, 0x74, 0xC9, 0xC1, 0x25, 0xE0, 0x46, 0x28,
		0x20, 0xD7, 0x3E, 0xA0, 0xF2, 0x90, 0x22, 0x6B, 0x60, 0x37, 0x2D, 0x4A, 0xD3, 0x2B, 0xA5, 0x12,
		0xFE, 0xDC, 0x22, 0x27, 0x65, 0x82, 0xD9, 0x66, 0x3B, 0xD5, 0x73, 0x77, 0x1A, 0x2C, 0x07, 0x84,
		0x14, 0xD4, 0xFD, 0x72, 0x2F, 0x38, 0xA7, 0xEE, 0x50, 0x30, 0x1D, 0x6D, 0xC0, 0xE8, 0x87, 0x81,
		0x77, 0x80, 0x8F, 0x94, 0x7E, 0x50, 0xE6, 0x0A, 0x1F, 0x1E, 0x17, 0xC0, 0x6F, 0x56, 0x4B, 0x8A,
		0x5A, 0x87, 0x99, 0x42, 0x78, 0xCF, 0x86, 0xDB, 0xE6, 0xCD, 0x31, 0x09, 0xEC, 0x43, 0x16, 0x5D,
		0xBE, 0x61, 0x18, 0xA5, 0xFC, 0x93, 0x0D, 0x47, 0x9B, 0x74, 0xFE, 0xA7, 0x06, 0xB6, 0x03, 0x7B,
		0x81, 0xED, 0x9B, 0xBA, 0x03, 0x9E, 0x11, 0xF7, 0xA8, 0x69, 0x4A, 0xD0, 0xAC, 0x33, 0x12, 0x95,
		0x49, 0x6F, 0x04, 0xAE, 0x89, 0x11, 0xFA, 0x9D, 0xEA, 0xDC, 0x6F, 0x97, 0x7D, 0xFF, 0x32, 0xFD,
		0xD5, 0x8B, 0x82, 0xB2, 0xA3, 0x98, 0xCF, 0xA7, 0xC4, 0xD8, 0xCC, 0x12, 0x68, 0x19, 0x2D, 0x9C,
		0x20, 0x18, 0xFE, 0xFA, 0x44, 0xDB, 0x26, 0xA6, 0x1B, 0xCB, 0x2F, 0x7F, 0x24, 0xCC, 0x16, 0xB3,
		0x9D, 0x6D, 0x04, 0x20, 0x22, 0x43, 0x6D, 0x8D, 0x74, 0x4B, 0x56, 0x7E, 0x8D, 0x25, 0x8F, 0x04,
		0x11, 0xE1, 0x10, 0x95, 0x3D, 0xDC, 0xD3, 0xBC, 0x86, 0xC8, 0x7A, 0xA2, 0x81, 0xBA, 0xA1, 0x8E,
		0x4D, 0xD3, 0xDE, 0x86, 0xF6, 0x96, 0xCC, 0x88, 0xC0, 0x11, 0x7D, 0x82, 0x3D, 0x92, 0x6A, 0xB3,
		0xCC, 0xC6, 0xEC, 0xCC, 0x6E, 0x26, 0x8D, 0xDC, 0x0D, 0x5B, 0xCB, 0xDF, 0x5A, 0x63, 0x5B, 0x73,
		0x50, 0x54, 0x4A, 0xD1, 0x12, 0x32, 0x92, 0x45, 0x74, 0xB5, 0xB6, 0xBC, 0xC6, 0xD5, 0x2A, 0x29,
		0xAA, 0x27, 0x55, 0x0A, 0xF5, 0x7F, 0xF0, 0xFD, 0x89, 0x3F, 0x17, 0x01, 0x8D, 0x70, 0xDD, 0x7D,
		0xA5, 0x08, 0xF2, 0x87, 0x4D, 0x48, 0x5F, 0x70, 0xDC, 0xB8, 0x03, 0x52, 0xC9, 0xD6, 0xA7, 0x04,
		0x8D, 0x63, 0xBA, 0xAE, 0xF6, 0x38, 0x28, 0x46, 0x1B, 0x63, 0xBC, 0x25, 0x29, 0x1E, 0x8F, 0xDD,
		0xD3, 0x16, 0xCB
	};


	CodeStream strm(0x0, pOps, sizeof(pOps),
		DisOptions::SKIP_INVALID, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x200,
		&instructionCount);

	ASSERT_EQ(DisResult::OK, result);

	// should be 0x183 if i supported the sse1 PSHUFW instruction.
	// currently it's decoded as invalid.
	// ASSERT_EQ(0x183_sz, instructionCount);
	ASSERT_EQ(0x184_sz, instructionCount);
}



TEST(x86_misc, fxsave)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x8] = {
		0x0F, 0xAE, 0x04, 0x45, 0x56, 0x04, 0x00, 0x00  // FXSAVE [eax*2+ 0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::FXSAVE,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::DS,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

TEST(x86_misc, fxrstor)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x8] = {
		0x0F, 0xAE, 0x0c, 0x45, 0x56, 0x04, 0x00, 0x00  // fxrstor [eax*2+ 0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::FXRSTOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::DS,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

TEST(x86_misc, ldmxcsr)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x8] = {
		0x0F, 0xAE, 0x14, 0x45, 0x56, 0x04, 0x00, 0x00  // ldmxcsr [eax*2+0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::LDMXCSR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::DS,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}

TEST(x86_misc, stmxcsr)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x8] = {
		0x0F, 0xAE, 0x1C, 0x45, 0x56, 0x04, 0x00, 0x00  // STMXCSR [eax*2+0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::STMXCSR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::DS,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}



TEST(x86_misc, lfence)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x3] = {
		0x0F, 0xAE, 0xE8  // lfence 
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

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

TEST(x86_misc, xrstor)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x8] = {
		0x0F, 0xAE, 0x2C, 0x45, 0x56, 0x04, 0x00, 0x00  // XRSTOR [eax*2+0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::XRSTOR,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::DS,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_misc, mfence)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x3] = {
		0x0F, 0xAE, 0xF0  // mfence 
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

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

TEST(x86_misc, xsaveopt)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x8] = {
		0x0F, 0xAE, 0x34, 0x45, 0x56, 0x04, 0x00, 0x00  // XSAVEOPT [eax*2+0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::XSAVEOPT,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::DS,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}


TEST(x86_misc, sfence)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x3] = {
		0x0F, 0xAE, 0xF8  // sfence 
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

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


TEST(x86_misc, clflush)
{
	Instruction instructions[0x8];
	size_t instructionCount;

	const uint8_t pOps[0x8] = {
		0x0F, 0xAE, 0x3C, 0x45, 0x56, 0x04, 0x00, 0x00  // clflush [eax*2+0x456]
	};

	CodeStream strm(0, pOps, sizeof(pOps), DisOptions::STOP_ON_FLOW_ALL, CodeType::CODE_32BIT);

	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x8, &instructionCount);

	ASSERT_EQ(DisResult::OK, result);
	ASSERT_EQ(0x1_sz, instructionCount);
	{
		const Instruction& inst = instructions[0x0];

		ValidateInstruction(inst,
			InstructionID::CLFLUSH,
			FlowControl::NONE,
			InstructionSet::NONE,
			0x8,
			0x456,
			0x2,
			RegIndex::DS,
			RegIndex::NONE,
			__FILE__, __LINE__
		);

		ValidateOperand(inst.ops[0], OperandTypeAbs::MEM, RegIndex::EAX, 0x0, __FILE__, __LINE__); // set!
		ValidateOperandNotSet(inst.ops[1], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[2], __FILE__, __LINE__); // ns
		ValidateOperandNotSet(inst.ops[3], __FILE__, __LINE__); // ns
	}
}