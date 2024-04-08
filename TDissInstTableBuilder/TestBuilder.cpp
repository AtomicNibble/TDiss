#include "pch.h"
#include "Builder.h"

// This file is used to generate files offline.
// So is a little bit quick and dirty / sub optimal.

namespace TDiss
{
	namespace
	{

		
		const char* FlowTypeToStr(FlowControl::Enum flow)
		{
			#define ADD_FLOW_ENUM_STR(f) case FlowControl::f: return #f;

			switch (flow)
			{
				ADD_FLOW_ENUM_STR(NONE)
					ADD_FLOW_ENUM_STR(CALL)
					ADD_FLOW_ENUM_STR(RET)
					ADD_FLOW_ENUM_STR(SYS)
					ADD_FLOW_ENUM_STR(UNC_BRANCH)
					ADD_FLOW_ENUM_STR(CND_BRANCH)
					ADD_FLOW_ENUM_STR(CMOV)
					ADD_FLOW_ENUM_STR(INT)

			default:
				X_ASSERT_UNREACABLE();
				break;
			}

			return "<ukn>";

			#undef ADD_FLOW_ENUM_STR
		}

		const char* CodeTypeToStr(CodeType::Enum flow)
		{
			#define ADD_CT_ENUM_STR(ct) case CodeType::ct: return #ct;

			switch (flow)
			{
				ADD_CT_ENUM_STR(CODE_16BIT)
				ADD_CT_ENUM_STR(CODE_32BIT)
				ADD_CT_ENUM_STR(CODE_64BIT)

			default:
				X_ASSERT_UNREACABLE();
				break;
			}

			return "<ukn>";

			#undef ADD_CT_ENUM_STR
		}

		const char* OperandTypeAbsToStr(OperandTypeAbs::Enum flow)
		{
				#define ADD_OPA_ENUM_STR(ct) case OperandTypeAbs::ct: return #ct;

			switch (flow)
			{
				ADD_OPA_ENUM_STR(NONE)
				ADD_OPA_ENUM_STR(REG)
				ADD_OPA_ENUM_STR(IMM)
				ADD_OPA_ENUM_STR(IMM1)
				ADD_OPA_ENUM_STR(IMM2)
				ADD_OPA_ENUM_STR(DISP)
				ADD_OPA_ENUM_STR(SMEM)
				ADD_OPA_ENUM_STR(MEM)
				ADD_OPA_ENUM_STR(PC)
				ADD_OPA_ENUM_STR(PTR)

			default:
				X_ASSERT_UNREACABLE();
				break;
			}

			return "<ukn>";

			#undef ADD_OPA_ENUM_STR
		}

		const char* InstructionSetAbsToStr(InstructionSet::Enum flow)
		{
			#define ADD_INSTRUCTION_ENUM_STR(ct) case InstructionSet::ct: return #ct;

			switch (flow)
			{
				ADD_INSTRUCTION_ENUM_STR(NONE)
				ADD_INSTRUCTION_ENUM_STR(FPU)
				ADD_INSTRUCTION_ENUM_STR(P6)
				ADD_INSTRUCTION_ENUM_STR(MMX)
				ADD_INSTRUCTION_ENUM_STR(SSE)
				ADD_INSTRUCTION_ENUM_STR(SSE2)
				ADD_INSTRUCTION_ENUM_STR(SSE3)
				ADD_INSTRUCTION_ENUM_STR(SSSE3)
				ADD_INSTRUCTION_ENUM_STR(SSE4_1)
				ADD_INSTRUCTION_ENUM_STR(SSE4_2)
				ADD_INSTRUCTION_ENUM_STR(SSE4_A)
				ADD_INSTRUCTION_ENUM_STR(SSE5)
				ADD_INSTRUCTION_ENUM_STR(NOW3D)
				ADD_INSTRUCTION_ENUM_STR(NOW3DEXT)
				ADD_INSTRUCTION_ENUM_STR(VMX)
				ADD_INSTRUCTION_ENUM_STR(SVM)
				ADD_INSTRUCTION_ENUM_STR(AVX)
				ADD_INSTRUCTION_ENUM_STR(FMA)
				ADD_INSTRUCTION_ENUM_STR(CLMUL)
				ADD_INSTRUCTION_ENUM_STR(AES)

			default:
				X_ASSERT_UNREACABLE();
				break;
			}

			return "<ukn>";

			#undef ADD_INSTRUCTION_ENUM_STR
		}

		size_t CodeTypeBitCount(CodeType::Enum ct)
		{
			switch (ct)
			{
			case CodeType::CODE_16BIT:
				return 16;
			case CodeType::CODE_32BIT:
				return 32;
			case CodeType::CODE_64BIT:
				return 64;
			}

			X_ASSERT_UNREACABLE();
			return 0;
		}


		inline uint16_t unpackCpuFlagsToEFlags(uint8_t flags)
		{
			uint16_t res = (flags & PackedCpuFlag::EFLAGS_COMPAT);

			if (flags & PackedCpuFlag::INTERRUPT) {
				res |= CpuFlag::INTERRUPT;
			}
			if (flags & PackedCpuFlag::DIRECTION) {
				res |= CpuFlag::DIRECTION;
			}
			if (flags & PackedCpuFlag::OVERFLOW) {
				res |= CpuFlag::OVERFLOW;
			}

			return res;
		}


	} // namespace


	// ----------------------------------------

	OperandBuilder::OperandResult::OperandResult() :
		OperandResult(OperandTypeAbs::NONE, 0, 0)
	{
	}

	OperandBuilder::OperandResult::OperandResult(OperandTypeAbs::Enum opType) :
		OperandResult(opType, 0, 0)
	{
	}

	OperandBuilder::OperandResult::OperandResult(OperandTypeAbs::Enum opType, int32_t size) :
		OperandResult(opType, size, 0)
	{
	}

	OperandBuilder::OperandResult::OperandResult(OperandTypeAbs::Enum opType, int32_t size_, int32_t index_)
	{
		operandType = opType;
		size = size_;
		index = index_;
	}


	// ----------------------------------------

	OperandBuilder::OperandInstructionInfo::OperandInstructionInfo() :
		OperandInstructionInfo(0, 0, RegIndex::NONE, RegIndex::NONE, 0)
	{
	}

	OperandBuilder::OperandInstructionInfo::OperandInstructionInfo(uint64_t displacement_,
		uint8_t displacementSize_, RegIndex::Enum segment_,
		RegIndex::Enum base_, uint8_t scale_)
	{
		imm.uint64 = 0;
		immType = ImmType::NONE;

		displacement = displacement_;
		segment = segment_;
		base = base_;
		scale = scale_;
		displacementSize = displacementSize_;
	}


	OperandBuilder::OperandInstructionInfo::OperandInstructionInfo(ImmVal imm_, ImmType::Enum immType_) :
		OperandInstructionInfo(0, 0, RegIndex::NONE, RegIndex::NONE, 0)
	{
		imm = imm_;
		immType = immType_;
	}

	OperandBuilder::OperandInstructionInfo::OperandInstructionInfo(RegIndex::Enum segment) :
		OperandInstructionInfo(0, 0, segment, RegIndex::NONE, 0)
	{
	}


	// ----------------------------------------

	OperandBuilder::OperandData::OperandData() : OperandResult()
	{

	}

	OperandBuilder::OperandData::OperandData(const std::string& op, OperandTypeAbs::Enum type) :
		OperandData(op, type, 0, 0)
	{
		operand = op;
	}

	OperandBuilder::OperandData::OperandData(const std::string& op, OperandTypeAbs::Enum type,
		int32_t size, int32_t index) : OperandResult(type, size, index)
	{
		operand = op;
	}

	OperandBuilder::OperandData::OperandData(const std::string& op, OperandTypeAbs::Enum type,
		OperandInstructionInfo info) : OperandData(op, type, 0, 0, info)
	{

	}

	OperandBuilder::OperandData::OperandData(const std::string& op, OperandTypeAbs::Enum type,
		int32_t size, int32_t index, OperandInstructionInfo info) : OperandResult(type, size, index)
	{
		operand = op;
		instInfo = std::shared_ptr<OperandInstructionInfo>(new OperandInstructionInfo(info));
	}

	// ----------------------------------------

	OperandBuilder::MergedOperand::MergedOperand()
	{

	}

	// ----------------------------------------


	OperandBuilder::OperandBuilder(CodeType::Enum type) :
		full_(false),
		codeType_(type)
	{

	}

	void OperandBuilder::BuildTables(bool full)
	{
		typedef std::vector<RegIndex::Enum> RegIndexVec;

		full_ = full;

		RegIndexVec bases;
		RegIndexVec indices;

		bases.push_back(RegIndex::Enum::EAX);
		bases.push_back(RegIndex::Enum::ESP);

		indices.push_back(RegIndex::Enum::EAX);

		if (full_) {
			bases.push_back(RegIndex::Enum::ECX);
			bases.push_back(RegIndex::Enum::EDX);
			bases.push_back(RegIndex::Enum::EBX);
			bases.push_back(RegIndex::Enum::ESI);
			bases.push_back(RegIndex::Enum::EDI);

			bases.push_back(RegIndex::Enum::ECX);
			bases.push_back(RegIndex::Enum::EDX);
			bases.push_back(RegIndex::Enum::EBX);
			bases.push_back(RegIndex::Enum::EBP);
			bases.push_back(RegIndex::Enum::ESI);
			bases.push_back(RegIndex::Enum::EDI);
		}

		const size_t numBases = bases.size();
		const size_t numIndices = indices.size();
		const size_t defaultOperandBits = CodeTypeBitCount(codeType_);

		X_UNUSED(numBases);
		X_UNUSED(numIndices);

		// NONE
		{
			OperandDataArr& arr = operandTable_[OperandType::NONE];

			// this is needed so instructions with no operands results are also checked to make sure they are not set.
			// it is also needed to make the merging work or multiple operands as 0 x 10 is 0.	
			arr.emplace_back("", OperandTypeAbs::NONE);
		}

		// EXPLICIT_REG
		{
			OperandDataArr& arr = operandTable_[OperandType::EXPLICIT_REG];

			arr.emplace_back("", OperandTypeAbs::NONE);
		}

		// CONST1
		{
			OperandDataArr& arr = operandTable_[OperandType::CONST1];

			ImmVal imm;
			imm.uint8 = 0x1;
			arr.push_back(OperandData("0x1", OperandTypeAbs::IMM, 8, 0,
				OperandInstructionInfo(imm, ImmType::U8)));
		}

		// SEG
		{
			OperandDataArr& arr = operandTable_[OperandType::SEG];
			X_UNUSED(arr);

		}

		// ACC_8
		{
			OperandDataArr& arr = operandTable_[OperandType::ACC_8];

			arr.emplace_back("AL", OperandTypeAbs::REG, 8, RegIndex::AL);
			arr.emplace_back("AH", OperandTypeAbs::REG, 8, RegIndex::AH);
		}

		// ACC_16
		{
			OperandDataArr& arr = operandTable_[OperandType::ACC_16];

			arr.emplace_back("AX", OperandTypeAbs::REG, 16, RegIndex::AX);
		}
		// ACC_FULL
		{
			OperandDataArr& arr = operandTable_[OperandType::ACC_FULL];

			if (codeType_ == CodeType::CODE_16BIT) {
				arr.emplace_back("AX", OperandTypeAbs::REG, 16, RegIndex::AX);
			}
			else if (codeType_ == CodeType::CODE_32BIT) {
				arr.emplace_back("EAX", OperandTypeAbs::REG, 32, RegIndex::EAX);
			}
			else if (codeType_ == CodeType::CODE_64BIT) {
				arr.emplace_back("RAX", OperandTypeAbs::REG, 64, RegIndex::RAX);
			}
		}
		// ACC_FULL_NOT64
		{
			OperandDataArr& arr = operandTable_[OperandType::ACC_FULL_NOT64];

			arr.emplace_back("AX", OperandTypeAbs::REG, 16, RegIndex::AX);
			arr.emplace_back("EAX", OperandTypeAbs::REG, 32, RegIndex::EAX);
		}


		// RM_8
		{
			OperandDataArr& arr = operandTable_[OperandType::RM_8];

			// sil,
			Add_8BitGPR(arr, false, false);
		}

		// RM_16
		{
			OperandDataArr& arr = operandTable_[OperandType::RM_16];

			Add_16BitGPR(arr, false, true);
		}
		// RM_32
		{
			OperandDataArr& arr = operandTable_[OperandType::RM_32];

			Add_32BitGPR(arr, false, true);
		}
		// RM_32_64
		{
			OperandDataArr& arr = operandTable_[OperandType::RM_32_64];

			Add_32BitGPR(arr, false, true);
		}


		// RM_FULL
		{
			OperandDataArr& arr = operandTable_[OperandType::RM_FULL];

			//	arr.push_back(OperandData("[0x48484848]", OperandTypeAbs::DISP, defaultOperandBits, 0,
			//		OperandInstructionInfo(0x48484848, 32, RegIndex::DS, RegIndex::NONE, 0)));

			if (codeType_ == CodeType::CODE_16BIT) {
				Add_16BitGPR(arr, false, false);

				DereferenceOperands(arr);
			}
			else if (codeType_ == CodeType::CODE_32BIT) {
				Add_32BitGPR(arr, false, false);

				DereferenceOperands(arr);
			}
			else if (codeType_ == CodeType::CODE_64BIT) {
				Add_64BitGPR(arr, false, false);

				DereferenceOperands(arr);
			}

		}

		// REG_8
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_8];

			Add_8BitGPR(arr, false);
		}
		// REG_16
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_16];

			Add_16BitGPR(arr, false);
		}
		// REG_32
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_32];

			Add_32BitGPR(arr, false);
		}
		// REG_32_64
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_32_64];

			Add_32BitGPR(arr, false);

			if (codeType_ == CodeType::CODE_64BIT) {
				Add_64BitGPR(arr, false);
			}
		}

		// REG_FULL
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_FULL];

			// supports: 16,32,64 registers and rex prefixes in 32 and 64 bit effective operand sizes.
			if (codeType_ == CodeType::CODE_16BIT) {
				Add_16BitGPR(arr, false, true);
			}
			else if (codeType_ == CodeType::CODE_32BIT) {
				Add_32BitGPR(arr, false, true);
			}
			else if (codeType_ == CodeType::CODE_64BIT) {
				Add_64BitGPR(arr, false, true);
			}
		}

		// REG_FULL_M16
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_FULL_M16];

			if (codeType_ == CodeType::CODE_16BIT) {
				Add_16BitGPR(arr, false, true);

				DereferenceOperands(arr);

				Add_16BitGPR(arr, false, true);
			}
			else if (codeType_ == CodeType::CODE_32BIT) {
				Add_32BitGPR(arr, false, true);

				DereferenceOperands(arr, 16);

				Add_16BitGPR(arr, false, true);
				Add_32BitGPR(arr, false, true);
			}
			else if (codeType_ == CodeType::CODE_64BIT) {
				Add_64BitGPR(arr, false, true);

				DereferenceOperands(arr, 16);

				Add_64BitGPR(arr, false, true);
			}
		}


		// REG_ESI
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_ESI];

			RegIndex::Enum segment = RegIndex::DS;
			if (codeType_ == CodeType::CODE_64BIT) {
				segment = RegIndex::NONE;
			}

			if (codeType_ == CodeType::CODE_64BIT) {
				arr.push_back(OperandData("", OperandTypeAbs::SMEM, 64, RegIndex::RSI,
					OperandInstructionInfo(segment)));
			}
			else {
				arr.push_back(OperandData("", OperandTypeAbs::SMEM, 32, RegIndex::ESI,
					OperandInstructionInfo(segment)));
			}
		}

		// REG_EDI
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_EDI];

			if (codeType_ == CodeType::CODE_64BIT) {
				arr.emplace_back("", OperandTypeAbs::SMEM, 64, RegIndex::RDI);
			}
			else {
				arr.emplace_back("", OperandTypeAbs::SMEM, 32, RegIndex::EDI);

			}
		}

		// REG_DX
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_DX];

			arr.emplace_back("", OperandTypeAbs::REG, 16, RegIndex::DX);
		}

		// REG_CL
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_CL];

			arr.emplace_back("CL", OperandTypeAbs::REG, 8, RegIndex::CL);
		}

		// REG_EBXAL
		{
			OperandDataArr& arr = operandTable_[OperandType::REG_EBXAL];

			if (codeType_ == CodeType::CODE_64BIT)
			{
				arr.push_back(OperandData("", OperandTypeAbs::MEM, 8, RegIndex::AL,
					OperandInstructionInfo(0, 0, RegIndex::NONE, RegIndex::RBX, 0)));
			}
			else
			{
				arr.push_back(OperandData("", OperandTypeAbs::MEM, 8, RegIndex::AL,
					OperandInstructionInfo(0, 0, RegIndex::DS, RegIndex::EBX, 0)));
			}
		}

		// REL_CI_8
		{
			OperandDataArr& arr = operandTable_[OperandType::REL_CI_8];

			ImmVal imm;
			imm.uint8 = 0xfe; // this is a magic value to make JO, .. amd LOOP* instruction intermediateds correct.
			arr.push_back(OperandData("0xfe", OperandTypeAbs::PC, 8, 0,
				OperandInstructionInfo(imm, ImmType::U8)));
		}

		// REL_CI_FULL
		{
			OperandDataArr& arr = operandTable_[OperandType::REL_CI_FULL];

			ImmVal imm;
			imm.uint32 = 0x12345678;
			arr.push_back(OperandData("0x12345678", OperandTypeAbs::PC, 32, 0,
				OperandInstructionInfo(imm, ImmType::U32)));
		}

		// IMM_8
		{
			OperandDataArr& arr = operandTable_[OperandType::IMM_8];

			ImmVal imm;
			imm.uint8 = 0xaf;
			arr.push_back(OperandData("0xaf", OperandTypeAbs::IMM, 8, 0,
				OperandInstructionInfo(imm, ImmType::U8)));
		}

		// IMM_16
		{
			OperandDataArr& arr = operandTable_[OperandType::IMM_16];

			ImmVal imm;
			imm.uint16 = 0xabaf;
			arr.push_back(OperandData("0xabaf", OperandTypeAbs::IMM, 16, 0,
				OperandInstructionInfo(imm, ImmType::U16)));
		}

		// IMM_32
		{
			OperandDataArr& arr = operandTable_[OperandType::IMM_32];

			ImmVal imm;
			imm.uint32 = 0xabafeebb;
			arr.push_back(OperandData("0xabafeebb", OperandTypeAbs::IMM, 32, 0,
				OperandInstructionInfo(imm, ImmType::U32)));
		}

		// IMM_FULL
		{
			OperandDataArr& arr = operandTable_[OperandType::IMM_FULL];

			ImmVal imm;
			imm.uint32 = 0xabafeebb;
			arr.push_back(OperandData("0xabafeebb", OperandTypeAbs::IMM, 32, 0,
				OperandInstructionInfo(imm, ImmType::U32)));
		}

		// IMM_S_8
		{
			OperandDataArr& arr = operandTable_[OperandType::IMM_S_8];

			ImmVal imm;
			imm.sint8 = 99;
			arr.push_back(OperandData("99", OperandTypeAbs::IMM, 8, 0,
				OperandInstructionInfo(imm, ImmType::S8)));
		}


		// BLOCK_R_8
		{
			OperandDataArr& arr = operandTable_[OperandType::BLOCK_R_8];

			Add_8BitGPR(arr, false, true);
		}

		// BLOCK_R_FULL
		{
			OperandDataArr& arr = operandTable_[OperandType::BLOCK_R_FULL];

			if (codeType_ == CodeType::CODE_16BIT) {
				Add_16BitGPR(arr, false, true);
			}
			else if (codeType_ == CodeType::CODE_32BIT) {
				Add_32BitGPR(arr, false, true);
			}
			else if (codeType_ == CodeType::CODE_64BIT) {
				Add_64BitGPR(arr, false, true);
			}
		}

		// MEM
		{
			OperandDataArr& arr = operandTable_[OperandType::MEM];

			// points to memory
			if (codeType_ == CodeType::CODE_16BIT) {

			}
			else if (codeType_ == CodeType::CODE_32BIT) {

				arr.push_back(OperandData("[edx*4]", OperandTypeAbs::MEM, 0, RegIndex::EDX,
					OperandInstructionInfo(0, 0, RegIndex::DS, RegIndex::NONE, 4)));
			}
			else if (codeType_ == CodeType::CODE_64BIT) {

				arr.push_back(OperandData("[rdx*4]", OperandTypeAbs::MEM, 0, RegIndex::RDX,
					OperandInstructionInfo(0, 0, RegIndex::NONE, RegIndex::NONE, 4)));
			}

		}

		// MEM_32
		{
			OperandDataArr& arr = operandTable_[OperandType::MEM_32];

			if (codeType_ == CodeType::CODE_32BIT) {
				arr.push_back(OperandData("[edx*4+0x12345678]", OperandTypeAbs::MEM, 32, RegIndex::EDX,
					OperandInstructionInfo(0x12345678, 0, RegIndex::DS, RegIndex::NONE, 4)));
			}
			else if (codeType_ == CodeType::CODE_64BIT) {
				arr.push_back(OperandData("[rdx*4+0x12345678]", OperandTypeAbs::MEM, 32, RegIndex::EDX,
					OperandInstructionInfo(0x12345678, 0, RegIndex::NONE, RegIndex::NONE, 4)));
			}
		}

		// MEM_32_64
		{
			OperandDataArr& arr = operandTable_[OperandType::MEM_32_64];

			if (codeType_ == CodeType::CODE_32BIT) {
				arr.push_back(OperandData("[edx*4+0x12345678]", OperandTypeAbs::MEM, 32, RegIndex::EDX,
					OperandInstructionInfo(0x12345678, 0, RegIndex::DS, RegIndex::NONE, 4)));
			}
			else if (codeType_ == CodeType::CODE_64BIT) {
				arr.push_back(OperandData("[edx*4+0x12345678]", OperandTypeAbs::MEM, 32, RegIndex::EDX,
					OperandInstructionInfo(0x12345678, 0, RegIndex::NONE, RegIndex::NONE, 4)));
				// can be rex prefixed.
				arr.push_back(OperandData("[rdx*4+0x12345678]", OperandTypeAbs::MEM, 64, RegIndex::RDX,
					OperandInstructionInfo(0x12345678, 0, RegIndex::NONE, RegIndex::NONE, 4)));
			}
		}


		// MEM_64
		{
			OperandDataArr& arr = operandTable_[OperandType::MEM_64];

			if (codeType_ == CodeType::CODE_32BIT) {
				arr.push_back(OperandData("[edx*4+0x12345678]", OperandTypeAbs::MEM, 64, RegIndex::EDX,
					OperandInstructionInfo(0x12345678, 32, RegIndex::DS, RegIndex::NONE, 4)));
			}
			else if (codeType_ == CodeType::CODE_64BIT) {
				arr.push_back(OperandData("[rdx*4+0x12345678]", OperandTypeAbs::MEM, 64, RegIndex::RDX,
					OperandInstructionInfo(0x12345678, 32, RegIndex::NONE, RegIndex::NONE, 4)));
			}
		}

		// MEM_128
		{
			OperandDataArr& arr = operandTable_[OperandType::MEM_128];

			if (codeType_ == CodeType::CODE_32BIT) {
				arr.push_back(OperandData("[edx*4+0x12345678]", OperandTypeAbs::MEM, 128, RegIndex::EDX,
					OperandInstructionInfo(0x12345678, 0, RegIndex::DS, RegIndex::NONE, 4)));
			}
			else if (codeType_ == CodeType::CODE_64BIT) {
				arr.push_back(OperandData("[rdx*4+0x12345678]", OperandTypeAbs::MEM, 128, RegIndex::RDX,
					OperandInstructionInfo(0x12345678, 0, RegIndex::NONE, RegIndex::NONE, 4)));
			}
		}

		// MEM_OPT
		{
			OperandDataArr& arr = operandTable_[OperandType::MEM_OPT];

			// points to memory
			if (codeType_ == CodeType::CODE_16BIT) {

			}
			else if (codeType_ == CodeType::CODE_32BIT) {

				arr.push_back(OperandData("[edx*4]", OperandTypeAbs::MEM, 32, RegIndex::EDX,
					OperandInstructionInfo(0, 0, RegIndex::DS, RegIndex::NONE, 4)));
			}
			else if (codeType_ == CodeType::CODE_64BIT) {

				arr.push_back(OperandData("[rdx*4]", OperandTypeAbs::MEM, 64, RegIndex::RDX,
					OperandInstructionInfo(0, 0, RegIndex::NONE, RegIndex::NONE, 4)));
			}

			arr.push_back(OperandData("", OperandTypeAbs::MEM, 0, RegIndex::NONE,
				OperandInstructionInfo(0, 0, RegIndex::NONE, RegIndex::NONE, 0)));

		}

		// MEM_FULL_M16
		{
			OperandDataArr& arr = operandTable_[OperandType::MEM_FULL_M16];

			// points to memory
			if (codeType_ == CodeType::CODE_16BIT) {

			}
			else if (codeType_ == CodeType::CODE_32BIT) {
				arr.push_back(OperandData("[0x12345678]", OperandTypeAbs::DISP, 32, 0,
					OperandInstructionInfo(0x12345678, 32, RegIndex::DS, RegIndex::NONE, 0)));
			}
			else if (codeType_ == CodeType::CODE_64BIT) {
				arr.push_back(OperandData("[0x12345678]", OperandTypeAbs::DISP, 16, 0,
					OperandInstructionInfo(0x12345678, 32, RegIndex::NONE, RegIndex::NONE, 0)));
			}

		}

		// PTR16_FULL
		{
			OperandDataArr& arr = operandTable_[OperandType::PTR16_FULL];

			// points to memory
			if (codeType_ == CodeType::CODE_16BIT) {

			}
			else if (codeType_ == CodeType::CODE_32BIT) {
				ImmVal imm;
				imm.ptr.seg = 0xffff;
				imm.ptr.off = 0x12345678;
				arr.push_back(OperandData("0xffff:0x12345678", OperandTypeAbs::PTR, 32, RegIndex::NONE,
					OperandInstructionInfo(imm, ImmType::PTR)));
			}
			else if (codeType_ == CodeType::CODE_64BIT) {

			}

		}

		// CREG
		{
			OperandDataArr& arr = operandTable_[OperandType::CREG];

			Add_CREG(arr);
		}

		// DREG
		{
			OperandDataArr& arr = operandTable_[OperandType::DREG];

			Add_DREG(arr);
		}

		// SREG
		{
			OperandDataArr& arr = operandTable_[OperandType::SREG];

			Add_SREG(arr);
		}

		// MOFFS_8
		{
			OperandDataArr& arr = operandTable_[OperandType::MOFFS_8];

			arr.push_back(OperandData("[word 0x5678]", OperandTypeAbs::DISP, 8, 0,
				OperandInstructionInfo(0x5678, 16, RegIndex::DS, RegIndex::NONE, 0)));
		}

		// MOFFS_FULL
		{
			OperandDataArr& arr = operandTable_[OperandType::MOFFS_FULL];

			arr.push_back(OperandData("[word 0x5678]", OperandTypeAbs::DISP, static_cast<int32_t>(defaultOperandBits), 0l,
				OperandInstructionInfo(0x5678, 16, RegIndex::DS, RegIndex::NONE, 0)));
		}


		// FPUM16
		{
			OperandDataArr& arr = operandTable_[OperandType::FPUM16];

			RegIndex::Enum segment = RegIndex::DS;
			if (codeType_ == CodeType::CODE_64BIT) {
				segment = RegIndex::NONE;
			}

			arr.push_back(OperandData("word [ebx]", OperandTypeAbs::SMEM, 16, RegIndex::EBX,
				OperandInstructionInfo(segment)));

		}
		// FPUM32
		{
			OperandDataArr& arr = operandTable_[OperandType::FPUM32];

			RegIndex::Enum segment = RegIndex::DS;
			if (codeType_ == CodeType::CODE_64BIT) {
				segment = RegIndex::NONE;
			}

			arr.push_back(OperandData("dword [esi]", OperandTypeAbs::SMEM, 32, RegIndex::ESI,
				OperandInstructionInfo(segment)));

		}
		// FPUM64
		{
			OperandDataArr& arr = operandTable_[OperandType::FPUM64];

			RegIndex::Enum segment = RegIndex::SS;
			if (codeType_ == CodeType::CODE_64BIT) {
				segment = RegIndex::NONE;
			}

			arr.push_back(OperandData("qword [esp]", OperandTypeAbs::SMEM, 64, RegIndex::ESP,
				OperandInstructionInfo(segment)));
		}
		// FPUM80
		{
			OperandDataArr& arr = operandTable_[OperandType::FPUM80];

			RegIndex::Enum segment = RegIndex::DS;
			if (codeType_ == CodeType::CODE_64BIT) {
				segment = RegIndex::NONE;
			}

			arr.push_back(OperandData("tword [eax]", OperandTypeAbs::SMEM, 80, RegIndex::EAX,
				OperandInstructionInfo(segment)));
		}
		// need to work out a good way for these to get expected operand types for 2nd operand.
		// FPU_SI
		{
			OperandDataArr& arr = operandTable_[OperandType::FPU_SI];

			arr.emplace_back("st3", OperandTypeAbs::REG, 32, RegIndex::ST3);

		}
		// FPU_SSI
		{
			OperandDataArr& arr = operandTable_[OperandType::FPU_SSI];

			arr.emplace_back("st0", OperandTypeAbs::REG, 32, RegIndex::ST0);
		}
		// FPU_SIS
		{
			OperandDataArr& arr = operandTable_[OperandType::FPU_SIS];

			arr.emplace_back("st2", OperandTypeAbs::REG, 32, RegIndex::ST2);
		}


		// MM
		{
			OperandDataArr& arr = operandTable_[OperandType::MM];

			arr.emplace_back("mm0", OperandTypeAbs::REG, 64, RegIndex::MM0);
			arr.emplace_back("mm1", OperandTypeAbs::REG, 64, RegIndex::MM1);
		}
		// MM_32
		{
			OperandDataArr& arr = operandTable_[OperandType::MM_32];

			arr.emplace_back("mm0", OperandTypeAbs::REG, 64, RegIndex::MM0);
			arr.emplace_back("mm1", OperandTypeAbs::REG, 64, RegIndex::MM1);
		}
		// MM_32_64
		{
			OperandDataArr& arr = operandTable_[OperandType::MM_32_64];

			arr.emplace_back("mm0", OperandTypeAbs::REG, 64, RegIndex::MM0);
			arr.emplace_back("mm1", OperandTypeAbs::REG, 64, RegIndex::MM1);
		}
		// MM_64
		{
			OperandDataArr& arr = operandTable_[OperandType::MM_64];

			arr.emplace_back("mm0", OperandTypeAbs::REG, 64, RegIndex::MM0);
			arr.emplace_back("mm1", OperandTypeAbs::REG, 64, RegIndex::MM1);
		}
		// MM_RM
		{
			OperandDataArr& arr = operandTable_[OperandType::MM_RM];

			arr.emplace_back("mm0", OperandTypeAbs::REG, 64, RegIndex::MM0);
			arr.emplace_back("mm1", OperandTypeAbs::REG, 64, RegIndex::MM1);
		}



		// XMM
		{
			OperandDataArr& arr = operandTable_[OperandType::XMM];

			arr.emplace_back("xmm0", OperandTypeAbs::REG, 128, RegIndex::XMM0);
			arr.emplace_back("xmm1", OperandTypeAbs::REG, 128, RegIndex::XMM1);
		}
		// XMM_16
		{
			OperandDataArr& arr = operandTable_[OperandType::XMM_16];

			arr.emplace_back("xmm0", OperandTypeAbs::REG, 128, RegIndex::XMM0);
			arr.emplace_back("xmm1", OperandTypeAbs::REG, 128, RegIndex::XMM1);
		}
		// XMM_32
		{
			OperandDataArr& arr = operandTable_[OperandType::XMM_32];

			arr.emplace_back("xmm0", OperandTypeAbs::REG, 128, RegIndex::XMM0);
			arr.emplace_back("xmm1", OperandTypeAbs::REG, 128, RegIndex::XMM1);
		}
		// XMM_64
		{
			OperandDataArr& arr = operandTable_[OperandType::XMM_64];

			arr.emplace_back("xmm0", OperandTypeAbs::REG, 128, RegIndex::XMM0);
			arr.emplace_back("xmm1", OperandTypeAbs::REG, 128, RegIndex::XMM1);
		}
		// XMM_128
		{
			OperandDataArr& arr = operandTable_[OperandType::XMM_128];

			arr.emplace_back("xmm0", OperandTypeAbs::REG, 128, RegIndex::XMM0);
			arr.emplace_back("xmm1", OperandTypeAbs::REG, 128, RegIndex::XMM1);
		}
		// XMM_RM
		{
			OperandDataArr& arr = operandTable_[OperandType::XMM_RM];

			arr.emplace_back("xmm0", OperandTypeAbs::REG, 128, RegIndex::XMM0);
			arr.emplace_back("xmm1", OperandTypeAbs::REG, 128, RegIndex::XMM1);
		}

	}

	void OperandBuilder::Add_CREG(OperandDataArr& arr) const
	{
		arr.emplace_back("CR0", OperandTypeAbs::REG, 32, RegIndex::CR0);
		arr.emplace_back("CR1", OperandTypeAbs::REG, 32, RegIndex::CR1);
		arr.emplace_back("CR2", OperandTypeAbs::REG, 32, RegIndex::CR2);
		arr.emplace_back("CR3", OperandTypeAbs::REG, 32, RegIndex::CR3);
		arr.emplace_back("CR4", OperandTypeAbs::REG, 32, RegIndex::CR4);
		// 64 bit
		//	arr.emplace_back("CR8", OperandTypeAbs::REG, 16, RegIndex::CR8);
	}

	void OperandBuilder::Add_DREG(OperandDataArr& arr) const
	{
		arr.emplace_back("DR0", OperandTypeAbs::REG, 32, RegIndex::DR0);
		arr.emplace_back("DR1", OperandTypeAbs::REG, 32, RegIndex::DR1);
		arr.emplace_back("DR2", OperandTypeAbs::REG, 32, RegIndex::DR2);
		arr.emplace_back("DR3", OperandTypeAbs::REG, 32, RegIndex::DR3);
		arr.emplace_back("DR6", OperandTypeAbs::REG, 32, RegIndex::DR6);
		arr.emplace_back("DR7", OperandTypeAbs::REG, 32, RegIndex::DR7);
	}

	void OperandBuilder::Add_SREG(OperandDataArr& arr) const
	{
		arr.emplace_back("ES", OperandTypeAbs::REG, 16, RegIndex::ES);
		arr.emplace_back("CS", OperandTypeAbs::REG, 16, RegIndex::CS);
		arr.emplace_back("SS", OperandTypeAbs::REG, 16, RegIndex::SS);
		arr.emplace_back("DS", OperandTypeAbs::REG, 16, RegIndex::DS);
		arr.emplace_back("FS", OperandTypeAbs::REG, 16, RegIndex::FS);
		arr.emplace_back("GS", OperandTypeAbs::REG, 16, RegIndex::GS);
	}

	void OperandBuilder::Add_8BitGPR(OperandDataArr& arr, bool IncExt, bool IncAccume) const
	{
		if (IncAccume) {
			arr.emplace_back("AL", OperandTypeAbs::REG, 8, RegIndex::AL);
		}

		arr.emplace_back("CL", OperandTypeAbs::REG, 8, RegIndex::CL);

		if (full_) {
			arr.emplace_back("DL", OperandTypeAbs::REG, 8, RegIndex::DL);
			arr.emplace_back("BL", OperandTypeAbs::REG, 8, RegIndex::BL);
			if (codeType_ != CodeType::CODE_64BIT) {
				arr.emplace_back("AH", OperandTypeAbs::REG, 8, RegIndex::AH);
				arr.emplace_back("CH", OperandTypeAbs::REG, 8, RegIndex::CH);
				arr.emplace_back("DH", OperandTypeAbs::REG, 8, RegIndex::DH);
				arr.emplace_back("BH", OperandTypeAbs::REG, 8, RegIndex::BH);
			}
		}

		if (!IncExt) {
			return;
		}

		arr.emplace_back("R8B", OperandTypeAbs::REG, 8, RegIndex::R8B);
		if (full_) {
			arr.emplace_back("R9B", OperandTypeAbs::REG, 8, RegIndex::R9B);
			arr.emplace_back("R10B", OperandTypeAbs::REG, 8, RegIndex::R10B);
			arr.emplace_back("R11B", OperandTypeAbs::REG, 8, RegIndex::R11B);
			arr.emplace_back("R12B", OperandTypeAbs::REG, 8, RegIndex::R12B);
			arr.emplace_back("R13B", OperandTypeAbs::REG, 8, RegIndex::R13B);
			arr.emplace_back("R14B", OperandTypeAbs::REG, 8, RegIndex::R14B);
			arr.emplace_back("R15B", OperandTypeAbs::REG, 8, RegIndex::R15B);
		}
	}

	void OperandBuilder::Add_16BitGPR(OperandDataArr& arr, bool IncExt, bool IncAccume) const
	{
		if (IncAccume) {
			arr.emplace_back("AX", OperandTypeAbs::REG, 16, RegIndex::AX);
		}

		arr.emplace_back("CX", OperandTypeAbs::REG, 16, RegIndex::CX);

		if (full_) {
			arr.emplace_back("DX", OperandTypeAbs::REG, 16, RegIndex::DX);
			arr.emplace_back("BX", OperandTypeAbs::REG, 16, RegIndex::BX);
			arr.emplace_back("SP", OperandTypeAbs::REG, 16, RegIndex::SP);
			arr.emplace_back("BP", OperandTypeAbs::REG, 16, RegIndex::BP);
			arr.emplace_back("SI", OperandTypeAbs::REG, 16, RegIndex::SI);
			arr.emplace_back("DI", OperandTypeAbs::REG, 16, RegIndex::DI);
		}

		if (!IncExt) {
			return;
		}

		arr.emplace_back("R8W", OperandTypeAbs::REG, 16, RegIndex::R8W);
		if (full_) {
			arr.emplace_back("R9W", OperandTypeAbs::REG, 16, RegIndex::R9W);
			arr.emplace_back("R10W", OperandTypeAbs::REG, 16, RegIndex::R10W);
			arr.emplace_back("R11W", OperandTypeAbs::REG, 16, RegIndex::R11W);
			arr.emplace_back("R12W", OperandTypeAbs::REG, 16, RegIndex::R12W);
			arr.emplace_back("R13W", OperandTypeAbs::REG, 16, RegIndex::R13W);
			arr.emplace_back("R14W", OperandTypeAbs::REG, 16, RegIndex::R14W);
			arr.emplace_back("R15W", OperandTypeAbs::REG, 16, RegIndex::R15W);
		}
	}

	void OperandBuilder::Add_32BitGPR(OperandDataArr& arr, bool IncExt, bool IncAccume) const
	{
		if (IncAccume) {
			arr.emplace_back("EAX", OperandTypeAbs::REG, 32, RegIndex::EAX);
		}

		arr.emplace_back("ECX", OperandTypeAbs::REG, 32, RegIndex::ECX);

		if (full_) {
			arr.emplace_back("EDX", OperandTypeAbs::REG, 32, RegIndex::EDX);
			arr.emplace_back("EBX", OperandTypeAbs::REG, 32, RegIndex::EBX);
			arr.emplace_back("ESP", OperandTypeAbs::REG, 32, RegIndex::ESP);
			arr.emplace_back("EBP", OperandTypeAbs::REG, 32, RegIndex::EBP);
			arr.emplace_back("ESI", OperandTypeAbs::REG, 32, RegIndex::ESI);
			arr.emplace_back("EDI", OperandTypeAbs::REG, 32, RegIndex::EDI);
		}

		if (!IncExt) {
			return;
		}

		arr.emplace_back("R8D", OperandTypeAbs::REG, 32, RegIndex::R8D);
		if (full_) {
			arr.emplace_back("R9D", OperandTypeAbs::REG, 32, RegIndex::R9D);
			arr.emplace_back("R10D", OperandTypeAbs::REG, 32, RegIndex::R10D);
			arr.emplace_back("R11D", OperandTypeAbs::REG, 32, RegIndex::R11D);
			arr.emplace_back("R12D", OperandTypeAbs::REG, 32, RegIndex::R12D);
			arr.emplace_back("R13D", OperandTypeAbs::REG, 32, RegIndex::R13D);
			arr.emplace_back("R14D", OperandTypeAbs::REG, 32, RegIndex::R14D);
			arr.emplace_back("R15D", OperandTypeAbs::REG, 32, RegIndex::R15D);
		}
	}

	void OperandBuilder::Add_64BitGPR(OperandDataArr& arr, bool IncExt, bool IncAccume) const
	{
		if (IncAccume) {
			arr.emplace_back("RAX", OperandTypeAbs::REG, 64, RegIndex::RAX);
		}

		arr.emplace_back("RCX", OperandTypeAbs::REG, 64, RegIndex::RCX);
		if (full_) {
			arr.emplace_back("RDX", OperandTypeAbs::REG, 64, RegIndex::RDX);
			arr.emplace_back("RBX", OperandTypeAbs::REG, 64, RegIndex::RBX);
			arr.emplace_back("RSP", OperandTypeAbs::REG, 64, RegIndex::RSP);
			arr.emplace_back("RBP", OperandTypeAbs::REG, 64, RegIndex::RBP);
			arr.emplace_back("RSI", OperandTypeAbs::REG, 64, RegIndex::RSI);
			arr.emplace_back("RDI", OperandTypeAbs::REG, 64, RegIndex::RDI);
		}

		if (!IncExt) {
			return;
		}

		// Rex.R prefix
		arr.emplace_back("R8", OperandTypeAbs::REG, 64, RegIndex::R8);
		if (full_) {
			arr.emplace_back("R9", OperandTypeAbs::REG, 64, RegIndex::R9);
			arr.emplace_back("R10", OperandTypeAbs::REG, 64, RegIndex::R10);
			arr.emplace_back("R11", OperandTypeAbs::REG, 64, RegIndex::R11);
			arr.emplace_back("R12", OperandTypeAbs::REG, 64, RegIndex::R12);
			arr.emplace_back("R13", OperandTypeAbs::REG, 64, RegIndex::R13);
			arr.emplace_back("R14", OperandTypeAbs::REG, 64, RegIndex::R14);
			arr.emplace_back("R15", OperandTypeAbs::REG, 64, RegIndex::R15);
		}
	}

	void OperandBuilder::DereferenceOperands(OperandDataArr& arr, int32_t prefixSize) const
	{
		for (auto& op : arr)
		{
			const std::string braced = "[" + op.operand + "]";

			op.operand.clear();

			if (prefixSize > 0)
			{
				if (prefixSize == 32) {
					op.size = 32;
					op.operand = "dword ";
				}
				else if (prefixSize == 16) {
					op.size = 16;
					op.operand = "word ";
				}
				else if (prefixSize == 8) {
					op.size = 8;
					op.operand = "byte ";
				}
			}
			else
			{
				if (op.size == 32) {
					op.operand = "dword ";
				}
				else if (op.size == 64) {
					op.operand = "qword ";
				}
			}

			if (codeType_ == CodeType::CODE_64BIT) {
				// explict segment in 64
				op.instInfo = std::shared_ptr<OperandInstructionInfo>();
			}
			else if (op.operandType == OperandTypeAbs::REG && (op.index == RegIndex::EBP || op.index == RegIndex::ESP)) {
				op.instInfo = std::shared_ptr<OperandInstructionInfo>(new OperandInstructionInfo(RegIndex::SS));
			}
			else if (codeType_ != CodeType::CODE_64BIT) {
				op.instInfo = std::shared_ptr<OperandInstructionInfo>(new OperandInstructionInfo(RegIndex::DS));
			}


			op.operand += braced;
			op.operandType = OperandTypeAbs::SMEM;
		}
	}

	OperandBuilder::MergedOperandsArr::value_type OperandBuilder::CombineOperands(
		const OperandData& op1, const OperandData& op2)
	{
		MergedOperandsArr::value_type ret;

		if (!op1.operand.empty() && !op2.operand.empty())
		{
			ret.operands = " " + op1.operand + ", " + op2.operand;
		}
		else if (!op1.operand.empty())
		{
			ret.operands = " " + op1.operand;
		}
		else if (!op2.operand.empty())
		{
			ret.operands = " " + op2.operand;
		}

		X_DISABLE_WARNING(4373)

		// Slice
		ret.operandResults[0] = static_cast<const OperandResult&>(op1);
		ret.operandResults[1] = static_cast<const OperandResult&>(op2);

		X_ENABLE_WARNING(4373)

		if (op1.instInfo) {
			ret.instInfo = *op1.instInfo;

			if (op2.instInfo) {
				if (op2.instInfo->immType != ImmType::NONE) {
					ret.instInfo.immType = op2.instInfo->immType;
					ret.instInfo.imm = op2.instInfo->imm;
				}

				if (op2.instInfo->segment == RegIndex::DS) {
					ret.instInfo.segment = op2.instInfo->segment;
				}
			}
		}
		else if (op2.instInfo) {
			ret.instInfo = *op2.instInfo;
		}

		return ret;
	}

	OperandBuilder::MergedOperandsArr OperandBuilder::GetOperands(const SourceInstruction& inst)
	{
		OperandType::Enum op1Type = inst.operands[0];
		OperandType::Enum op2Type = inst.operands[1];
		OperandType::Enum op3Type = inst.operands[2];
		OperandType::Enum op4Type = inst.operands[3];

		if (op3Type != OperandType::NONE || op4Type != OperandType::NONE)
		{
			return MergedOperandsArr();
		}


		OperandDataArr op1Data = GetOperand(inst, 0);
		OperandDataArr op2Data = GetOperand(inst, 1);

		MergedOperandsArr ret;

		// mix them.
		for (auto op1 : op1Data)
		{
			for (auto op2 : op2Data)
			{
				// special case for MEM_32_64 && REG_32_64
				// won't promote to rex prefixed unless reg is 64.
				if (op1Type == OperandType::MEM_32_64 && op1.size == 64)
				{
					if (op2Type == OperandType::REG_32_64 && op2.size != 64)
					{
						op1.size = 32;
						op2.size = 32;
					}
				}

				// when we have 64bit reg the mem is promoted to 64bit.
				// example: movnti QWORD PTR [eax*4+0x1234567c],rcx 
				if (op1Type == OperandType::MEM_32_64 && op2Type == OperandType::REG_32_64)
				{
					if (op1.size == 64 || op2.size == 64)
					{
						op1.size = 64;
						op2.size = 64;
					}
				}

				MergedOperandsArr::value_type op = CombineOperands(op1, op2);

				ret.push_back(op);
			}
		}

		return ret;
	}

	OperandBuilder::OperandDataArr OperandBuilder::GetOperand(const SourceInstruction& inst, size_t opIdx)
	{
		OperandType::Enum opType = inst.operands[opIdx];

		OperandDataArr ops = operandTable_[opType];
		AddSegs(ops, opType, inst);

		if (opType == OperandType::REG_EDI || opType == OperandType::REG_ESI)
		{
			for (auto& o : ops)
			{
				if (opType == OperandType::REG_EDI && opIdx == 0 && codeType_ != CodeType::CODE_64BIT)
				{
					o.instInfo = std::shared_ptr<OperandInstructionInfo>(
						new OperandInstructionInfo(RegIndex::ES)
					);
				}

				if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::BITS16))
				{
					if (codeType_ == CodeType::CODE_32BIT)
					{
						o.size = 32;
					}
					else if (codeType_ == CodeType::CODE_16BIT)
					{
						o.size = 8;
					}
					else if (codeType_ == CodeType::CODE_64BIT)
					{
						o.size = 32;
					}
				}
				else
				{
					o.size = 8;
				}

				if (codeType_ == CodeType::CODE_64BIT && bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::BITS64))
				{
					o.size = 64;
				}
			}
		}

		if (opType == OperandType::ACC_8 &&
			(inst.mnemonics[0] == "STOSB" ||
				inst.mnemonics[0] == "LODSB" ||
				inst.mnemonics[0] == "SCASB"))
		{
			// for STOSB ACC is explicit and only AL
			ops.clear();
			ops.emplace_back("AL", OperandTypeAbs::REG, 8, RegIndex::AL);
		}
		else if (opType == OperandType::ACC_8 &&
			(inst.mnemonics[0] == "IN" || inst.mnemonics[0] == "OUT"))
		{
			// for IN ACC is explicit and only AL
			ops.clear();
			ops.emplace_back("AL", OperandTypeAbs::REG, 8, RegIndex::AL);
		}
		else if (opType == OperandType::REG_DX &&
			(inst.mnemonics[0] == "IN" || inst.mnemonics[0] == "OUT"))
		{
			ops.clear();
			ops.emplace_back("DX", OperandTypeAbs::REG, 16, RegIndex::DX);
		}

		if (opIdx == 1)
		{
			OperandType::Enum opType0 = inst.operands[0];

			// if we are op index 2 and index one was FPU_*SI* we need to add expected results for the second operand.
			if (opType0 == OperandType::FPU_SSI)
			{
				ops.clear();
				ops.emplace_back("st2", OperandTypeAbs::REG, 32, RegIndex::ST2);
			}
			// for FPU_SIS 2nd operant is explicit st0
			else if (opType0 == OperandType::FPU_SIS)
			{
				ops.clear();
				ops.emplace_back("st0", OperandTypeAbs::REG, 32, RegIndex::ST0);
			}
		}

		if (opType == OperandType::RM_8 &&
			(inst.mnemonics[0] == "MOV"))
		{
			ops.clear();
			ops.emplace_back("SIL", OperandTypeAbs::REG, 8, RegIndex::SIL);
		}
		if (opType == OperandType::IMM_8 &&
			(inst.mnemonics[0] == "MOV"))
		{
			ops.clear();
			ops.emplace_back("AL", OperandTypeAbs::REG, 8, RegIndex::AL);
		}

		// auto promoted.
		if (codeType_ == CodeType::CODE_64BIT)
		{
			if (opType == OperandType::IMM_FULL && bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::BITS64) &&
				bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_REX))
			{
				ImmVal imm;
				imm.uint64 = 0xabafeebbabafeebb;
				ops.clear();
				ops.push_back(OperandData("0xabafeebbabafeebb", OperandTypeAbs::IMM, 64, 0,
					OperandInstructionInfo(imm, ImmType::U64)));
			}
		}

		return ops;
	}

	void OperandBuilder::AddSegs(OperandDataArr& arr, OperandType::Enum opType,
		const SourceInstruction& inst)
	{
		if (opType != OperandType::SEG) {
			return;
		}

		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_ES)) {
			arr.emplace_back("ES", OperandTypeAbs::REG, 16, RegIndex::ES);
		}
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_CS)) {
			arr.emplace_back("CS", OperandTypeAbs::REG, 16, RegIndex::CS);
		}
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_SS)) {
			arr.emplace_back("SS", OperandTypeAbs::REG, 16, RegIndex::SS);
		}
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_DS)) {
			arr.emplace_back("DS", OperandTypeAbs::REG, 16, RegIndex::DS);
		}
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_FS)) {
			arr.emplace_back("FS", OperandTypeAbs::REG, 16, RegIndex::FS);
		}
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_GS)) {
			arr.emplace_back("GS", OperandTypeAbs::REG, 16, RegIndex::GS);
		}
	}

	// ----------------------------------------------

	TestBuilder::Stats::Stats()
	{
		totalInst = 0;
		totalGenRealInst = 0;
		genInst = 0;
		failedInst = 0;
	}

	// ----------------------------------------------

	TestBuilder::NasmOverride::NasmOverride() :
		requiredOpType(OperandType::NONE)
	{
	}


	TestBuilder::NasmOverride::NasmOverride(std::string nasm_, OperandType::Enum reqOpType) :
		nasm(nasm_),
		requiredOpType(reqOpType)
	{
	}

	TestBuilder::NasmOverride::NasmOverride(std::string nasm_, std::string operandAppend_) :
		nasm(nasm_),
		operandAppend(operandAppend_),
		requiredOpType(OperandType::NONE)
	{
	}

	TestBuilder::NasmOverride::NasmOverride(std::string nasm_, std::string operandAppend_, OperandType::Enum reqOpType) :
		nasm(nasm_),
		operandAppend(operandAppend_),
		requiredOpType(reqOpType)
	{
	}

	// ----------------------------------------------

	TestBuilder::TestResult::TestResult()
	{
		instSet = InstructionSet::NONE;
		flow = FlowControl::NONE;

		modifiedFlags = 0;
		testedFlags = 0;
		undefinedFlags = 0;
	}

	// ----------------------------------------------

	TestBuilder::TestData::TestData()
	{
		codeType = CodeType::CODE_32BIT;
		decodeFlags = 0;
	}

	size_t TestBuilder::TestData::numOpBytes(void) const
	{
		size_t num = 0;
		for (const auto& inst : instructions) {
			num += inst.opcodes.size();
		}
		return num;
	}


	// ----------------------------------------------

	TestBuilder::TestBuilder(CodeType::Enum type) :
		codeType_(type),
		tempPath_(GetTempFileName()),
		opBuilder_(type)
	{
		opBuilder_.BuildTables(true);
		tests_.reserve(256);

		AddNasmOverRides();
	}

	bool TestBuilder::SaveTests(const std::wstring& outDir, size_t numTestFiles)
	{
		size_t numTestPerFile = (tests_.size() / numTestFiles);
		size_t curTest = 0;

		if (numTestPerFile < 1) {
			numTestPerFile = 1;
		}

		const std::string statsStr = GetStatsStr();

		for (size_t i = 0; i < numTestFiles; i++)
		{
			size_t testToWrite = numTestPerFile;
			size_t testLeft = tests_.size() - curTest;

			if ((i + 1) == numTestFiles) {
				testToWrite = testLeft;
			}
			if (testLeft < testToWrite) {
				testToWrite = testLeft;
			}


			std::wstring testName = L"tdis_test";
			if (codeType_ == CodeType::CODE_64BIT) {
				testName += L"x64_";
			}

			const std::wstring testFileName = StrUtil::EnsureSlash(outDir) + testName + StrUtil::to_stringW(i) + L".cpp";

			FileUtil::ScopedFileWin32 f;
			if (!f.Open(testFileName, GENERIC_WRITE, CREATE_ALWAYS)) {
				return false;
			}

			// write headers
			f.WriteStr("#include \"pch.h\"");
			f.WriteStr("\n\n");
			f.WriteStr("using namespace TDiss;\n");
			f.WriteStr("\n\n");

			// write stats.
			f.WriteStr(statsStr.c_str());

			// write util
			f.WriteStr(R"(
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
			)");

			// write each test
			for (size_t t = 0; t < testToWrite; t++)
			{
				const std::unique_ptr<Test>& test = tests_[curTest++];

				f.WriteStr(test->body.c_str());
			}
		}

		return true;
	}


	void TestBuilder::CreateTestForInst(const SourceInstruction& inst)
	{
		// skip 64bit fetch in none x64 mode.
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::BITS64_FETCH)) {
			if (codeType_ != CodeType::CODE_64BIT) {
				return;
			}
		}

		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::INVALID_64)) {
			if (codeType_ == CodeType::CODE_64BIT) {
				return;
			}
		}

		stats_.totalInst++;

		CreateTestForInst_int(inst, false);

		if (inst.flow != FlowControl::NONE)
		{
			CreateTestForInst_int(inst, true);
		}
	}

	void TestBuilder::CreateTestForInst_int(const SourceInstruction& inst, bool FlowFlip)
	{
		std::string testName = MakeTestName(inst);

		if (FlowFlip) {
			testName += "_stopOnFlow";
		}

		{
			TestData data;

			if (!GenerateTestInstructions(inst, data)) {
				size_t numOps = inst.NumOperands();
				stats_.failedInst++;
				stats_.failedTests.push_back(InstructionSetAbsToStr(inst.set) + std::string("-> ") +
					testName + " ops(" + StrUtil::to_string(numOps) + ")");
				return;
			}
			else {
				stats_.genInst++;
			}

			if (data.instructions.empty()) {
				return;
			}

			stats_.totalGenRealInst += data.instructions.size();

			std::stringstream ss;
			ss << "	Instruction instructions[0x" << std::hex << RoundUpToMultiple<size_t>(data.instructions.size(), 8) << "];\n";
			ss << "	size_t instructionCount;\n";
			ss << "\n";

			// save op bytes.
			{
				ss << "	// ops: ";

				size_t num = OpCodeLen::NumOps(inst.opLen);
				for (size_t i = 0; i < num; i++)
				{
					ss << "0x" << std::hex << static_cast<uint32_t>(inst.ops[i]) << " ";
				}
				ss << "\n";
			}

			ss << "	const uint8_t pOps[0x" << data.numOpBytes() << "] = {\n";

			{
				for (size_t x = 0; x < data.instructions.size(); x++)
				{
					const TestInstruction& instX = data.instructions[x];

					ss << "		";
					for (size_t i = 0; i < instX.opcodes.size(); i++)
					{
						ss << "0x" << std::hex << static_cast<int32_t>(instX.opcodes[i]);

						if ((i + 1) < instX.opcodes.size() || (x + 1) < data.instructions.size()) {
							ss << ", ";
						}
						else {
							ss << "  ";
						}
					}
					ss << " /* " << instX.preAssemble << " */\n";

				}
			}

			ss << "	};\n\n";

			ss << "	uint32_t options = 0;\n";

			AddFlowOptions(inst.flow, FlowFlip, ss);

			ss << "\n";
			ss << "	CodeStream strm(";
			ss << "0, "; // virtual add
			ss << "pOps, "; // src
			ss << "0x" << std::hex << data.numOpBytes() << ", "; // len
			ss << "options, "; // options
			ss << "CodeType::" << CodeTypeToStr(data.codeType) << ");\n";
			ss << "\n";

			ss << "	DisResult::Enum result = Diss::disassemble(strm, instructions, 0x";
			ss << std::hex << RoundUpToMultiple<size_t>(data.instructions.size(), 8);
			ss << ", &instructionCount);\n";
			ss << "\n";

			ss << "	ASSERT_EQ(DisResult::OK, result);\n";

			// how many instructions we expect to decode.
			{
				ss << "	ASSERT_EQ(0x";
				if (FlowFlip) {
					ss << "1"; // should only decode one instruction as we stop on flow.
				}
				else {
					ss << std::hex << data.instructions.size();
				}
				ss << "_sz, instructionCount);\n";
			}

			// validate instructions.
			{
				for (size_t i = 0; i < data.instructions.size(); i++)
				{
					const TestInstruction& testInst = data.instructions[i];
					const TestResult& testRes = testInst.expected;
					const OperandBuilder::MergedOperand& operandResult = testRes.operandResult;

					ss << "	{\n";
					ss << "		/* " << testInst.preAssemble << " */\n";
					ss << "		const Instruction& inst = instructions[0x" << std::hex << i << "];\n";
					ss << "		ValidateInstruction(inst,\n";
					ss << "			InstructionID::" << Builder::FormatMnemonic(
						InstructionIdOverride(testRes.InstId)
					) << ",\n";
					ss << "			FlowControl::" << FlowTypeToStr(testRes.flow) << ",\n";
					ss << "			InstructionSet::" << InstructionSetAbsToStr(testRes.instSet) << ",\n";
					ss << "			0x" << std::hex << testInst.opcodes.size() << ",\n";
					ss << "			0x" << std::hex << operandResult.instInfo.displacement << ",\n";
					ss << "			0x" << std::hex << static_cast<uint32_t>(operandResult.instInfo.scale) << ",\n";
					ss << "			RegIndex::" << RegIndex::ToString(operandResult.instInfo.segment) << ",\n";
					ss << "			RegIndex::" << RegIndex::ToString(operandResult.instInfo.base) << ",\n";
					ss << "			0x" << std::hex << testRes.modifiedFlags << ",\n";
					ss << "			0x" << std::hex << testRes.testedFlags << ",\n";
					ss << "			0x" << std::hex << testRes.undefinedFlags << ",\n";
					ss << "			__FILE__,\n";
					ss << "			__LINE__\n";
					ss << "		);\n";

					ss << "\n";

					WriteImmValCheck(operandResult, ss);

					ss << "\n";

					// make sure operand types are valid + invalid.
					for (size_t j = 0; j < MAX_OPERANDS; j++)
					{
						CreateOperandResult(j, operandResult.operandResults[j], ss);
					}

					ss << "	}\n";

					if (FlowFlip) {
						break; // only one should be valid.
					}
				}
			}

			{
				std::unique_ptr<Test> test = std::make_unique<Test>();
				test->name = testName;

				{
					const std::string body = ss.str();
					const std::string testCase = GetTestClass(inst);
					const std::string testCaseFmt = "\nTEST(" + testCase + ", %s)\n{\n";

					test->body.reserve(body.size() + 0xff);

					test->body = "\nTEST(" + testCase + ", " + testName + ")\n{\n";
					test->body += body;
					test->body += "}\n\n";
				}

				tests_.push_back(std::move(test));
			}
		}
	}

	void TestBuilder::WriteImmValCheck(const OperandBuilder::MergedOperand& opRes, std::stringstream& ss)
	{
		OperandBuilder::ImmType::Enum type = opRes.instInfo.immType;
		ImmVal value = opRes.instInfo.imm;

		if (type == OperandBuilder::ImmType::NONE) {
			ss << "		EXPECT_EQ(0x0_ui64, inst.imm.uint64";
		}
		else if (type == OperandBuilder::ImmType::S8) {
			ss << "		EXPECT_EQ(0x" << static_cast<unsigned>(value.sint8) << "_i8, inst.imm.sint8);";
		}
		else if (type == OperandBuilder::ImmType::U8) {
			ss << "		EXPECT_EQ(0x" << static_cast<signed>(value.uint8) << "_ui8, inst.imm.uint8);";
		}
		else if (type == OperandBuilder::ImmType::S16) {
			ss << "		EXPECT_EQ(0x" << value.sint16 << "_i16, inst.imm.sint16);";
		}
		else if (type == OperandBuilder::ImmType::U16) {
			ss << "		EXPECT_EQ(0x" << value.uint16 << "_ui16, inst.imm.uint16);";
		}
		else if (type == OperandBuilder::ImmType::S32) {
			ss << "		EXPECT_EQ(0x" << value.sint32 << "_i32, inst.imm.sint32);";
		}
		else if (type == OperandBuilder::ImmType::U32) {
			ss << "		EXPECT_EQ(0x" << value.uint32 << "_ui32, inst.imm.uint32);";
		}
		else if (type == OperandBuilder::ImmType::S64) {
			ss << "		EXPECT_EQ(0x" << value.sint64 << "_i64, inst.imm.sint64);";
		}
		else if (type == OperandBuilder::ImmType::U64) {
			ss << "		EXPECT_EQ(0x" << value.uint64 << "_ui64, inst.imm.uint64);";
		}
		else if (type == OperandBuilder::ImmType::PTR) {
			ss << "		EXPECT_EQ(0x" << value.ptr.seg << "u, inst.imm.ptr.seg);\n";
			ss << "		EXPECT_EQ(0x" << value.ptr.off << "u, inst.imm.ptr.off);";
		}

		ss << "\n";
	}

	void TestBuilder::CreateOperandResult(size_t idx, const OperandBuilder::OperandResult& opRes, std::stringstream& ss)
	{
		if (opRes.operandType == OperandTypeAbs::NONE) {
			ss << std::dec << "		ValidateOperandNotSet(inst.ops[" << idx << "], __FILE__, __LINE__); // ns\n";
		}
		else
		{
			ss << std::dec << "		ValidateOperand(inst.ops[" << idx << "], "
				"OperandTypeAbs::" << OperandTypeAbsToStr(opRes.operandType) <<
				", RegIndex::" << std::hex << RegIndex::ToString(static_cast<RegIndex::Enum>(opRes.index)) <<
				", 0x" << std::hex << opRes.size << ", __FILE__, __LINE__); // set! (reg idx: 0x" << opRes.index << ")\n";
		}
	}


	void TestBuilder::AddFlowOptions(FlowControl::Enum flow, bool FlowFlip, std::stringstream& ss)
	{
		if (flow != FlowControl::NONE)
		{
			switch (flow)
			{
			case FlowControl::CALL:
				if (!FlowFlip)
					ss << "	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CALL);\n";
				else
					ss << "	options |= DisOptions::STOP_ON_CALL;\n";
				break;
			case FlowControl::CMOV:
				if (!FlowFlip)
					ss << "	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CMOV);\n";
				else
					ss << "	options |= DisOptions::STOP_ON_CMOV;\n";
				break;
			case FlowControl::CND_BRANCH:
				if (!FlowFlip)
					ss << "	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_CND_BRANCH);\n";
				else
					ss << "	options |= DisOptions::STOP_ON_CND_BRANCH;\n";
				break;
			case FlowControl::INT:
				if (!FlowFlip)
					ss << "	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_INT);\n";
				else
					ss << "	options |= DisOptions::STOP_ON_INT;\n";
				break;
			case FlowControl::RET:
				if (!FlowFlip)
					ss << "	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_RET);\n";
				else
					ss << "	options |= DisOptions::STOP_ON_RET;\n";
				break;
			case FlowControl::SYS:
				if (!FlowFlip)
					ss << "	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_SYS);\n";
				else
					ss << "	options |= DisOptions::STOP_ON_SYS;\n";
				break;
			case FlowControl::UNC_BRANCH:
				if (!FlowFlip)
					ss << "	options |= (DisOptions::STOP_ON_FLOW & ~DisOptions::STOP_ON_UNC_BRANCH);\n";
				else
					ss << "	options |= DisOptions::STOP_ON_UNC_BRANCH;\n";
				break;
			}
		}
		else
		{
			// turn on all flow stop to check we don't stop on flow incorrectly.
			ss << "	options |= DisOptions::STOP_ON_FLOW;\n";
		}
	}

	std::string TestBuilder::InstructionIdOverride(const std::string& instId)
	{
		// yasm makes SAL SHL since they perform the same logic.
		if (StrUtil::IsEqualCaseInsen(instId, "SAL")) {
			return "SHL";
		}

		return instId;
	}


	void TestBuilder::AddNasmOverRides(void)
	{
		nasmOverRides_.clear();

		nasmOverRides_.insert(std::make_pair("JO", NasmOverride("@label: jo @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JNO", NasmOverride("@label: jno @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JB", NasmOverride("@label: jb @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JNB", NasmOverride("@label: jnb @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JZ", NasmOverride("@label: jz @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JNZ", NasmOverride("@label: jnz @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JBE", NasmOverride("@label: jbe @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JA", NasmOverride("@label: ja @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JS", NasmOverride("@label: js @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JNS", NasmOverride("@label: jns @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JP", NasmOverride("@label: jp @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JNP", NasmOverride("@label: jnp @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JL", NasmOverride("@label: jl @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JGE", NasmOverride("@label: jge @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JLE", NasmOverride("@label: jle @label", OperandType::REL_CI_8)));
		nasmOverRides_.insert(std::make_pair("JG", NasmOverride("@label: jg @label", OperandType::REL_CI_8)));

		nasmOverRides_.insert(std::make_pair("JMP", NasmOverride("@label: jmp @label", OperandType::REL_CI_8)));

		nasmOverRides_.insert(std::make_pair("LOOPNZ", NasmOverride("", "+0x2")));
		nasmOverRides_.insert(std::make_pair("LOOPZ", NasmOverride("", "+0x2")));
		nasmOverRides_.insert(std::make_pair("LOOP", NasmOverride("", "+0x2")));


		nasmOverRides_.insert(std::make_pair("CALL", NasmOverride("", "+0x5", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JMP", NasmOverride("", "+0x5", OperandType::REL_CI_FULL)));


		nasmOverRides_.insert(std::make_pair("INT1", NasmOverride("db 0xf1", OperandType::NONE)));
		nasmOverRides_.insert(std::make_pair("XLAT", NasmOverride("XLATb", OperandType::REG_EBXAL)));

		if (codeType_ == CodeType::CODE_64BIT)
		{
			nasmOverRides_.insert(std::make_pair("JCXZ", NasmOverride("", "+0x3")));
			nasmOverRides_.insert(std::make_pair(" JECXZ", NasmOverride("", "+0x3"))); // whitespace is important
			nasmOverRides_.insert(std::make_pair(" JRCXZ", NasmOverride("", "+0x2"))); // whitespace is important

			nasmOverRides_.insert(std::make_pair("MOVS", NasmOverride("MOVSQ", OperandType::REG_EDI)));
			nasmOverRides_.insert(std::make_pair("CMPS", NasmOverride("CMPSQ", OperandType::REG_ESI)));
			nasmOverRides_.insert(std::make_pair("STOS", NasmOverride("STOSQ", OperandType::REG_EDI)));
			nasmOverRides_.insert(std::make_pair("LODS", NasmOverride("LODSQ", OperandType::ACC_FULL)));
			nasmOverRides_.insert(std::make_pair("SCAS", NasmOverride("SCASQ", OperandType::ACC_FULL)));
		}
		else
		{
			nasmOverRides_.insert(std::make_pair("JCXZ", NasmOverride("", "+0x3")));
			nasmOverRides_.insert(std::make_pair(" JECXZ", NasmOverride("", "+0x2"))); // whitespace is important
			nasmOverRides_.insert(std::make_pair(" JRCXZ", NasmOverride("", "+0x2"))); // whitespace is important

			nasmOverRides_.insert(std::make_pair("MOVS", NasmOverride("MOVSD", OperandType::REG_EDI)));
			nasmOverRides_.insert(std::make_pair("CMPS", NasmOverride("CMPSD", OperandType::REG_ESI)));
			nasmOverRides_.insert(std::make_pair("STOS", NasmOverride("STOSD", OperandType::REG_EDI)));
			nasmOverRides_.insert(std::make_pair("LODS", NasmOverride("LODSD", OperandType::ACC_FULL)));
			nasmOverRides_.insert(std::make_pair("SCAS", NasmOverride("SCASD", OperandType::ACC_FULL)));
		}

		nasmOverRides_.insert(std::make_pair("STOSB", NasmOverride("STOSB", OperandType::ACC_8)));
		nasmOverRides_.insert(std::make_pair("LODSB", NasmOverride("LODSB", OperandType::ACC_8)));
		nasmOverRides_.insert(std::make_pair("SCASB", NasmOverride("SCASB", OperandType::ACC_8)));

		nasmOverRides_.insert(std::make_pair("JO", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JNO", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JB", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JAE", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JNB", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JZ", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JNZ", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JBE", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JA", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JS", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JNS", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JP", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JNP", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JL", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JGE", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JLE", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));
		nasmOverRides_.insert(std::make_pair("JG", NasmOverride("", "+0x6", OperandType::REL_CI_FULL)));

		// 3 below not needed to create correct output, but needed to make the 4th line not get applied to all FCOMP.
		nasmOverRides_.insert(std::make_pair("FCOMP", NasmOverride("", "", OperandType::FPUM32)));
		nasmOverRides_.insert(std::make_pair("FCOMP", NasmOverride("", "", OperandType::FPUM64)));
		nasmOverRides_.insert(std::make_pair("FCOMP", NasmOverride("", "", OperandType::FPU_SI)));
		nasmOverRides_.insert(std::make_pair("FCOMP", NasmOverride("db 0xd8\n db 0xd9", OperandType::NONE)));

		nasmOverRides_.insert(std::make_pair("FENI", NasmOverride("db 0xdb\n db 0xe0", OperandType::NONE)));
		nasmOverRides_.insert(std::make_pair("FNDISI", NasmOverride("db 0xdb\n db 0xe1", OperandType::NONE)));
	}

	std::string TestBuilder::ApplyNasmOverride(const SourceInstruction& inst, const std::string& nasm,
		const std::string& operands)
	{
		const auto range = nasmOverRides_.equal_range(nasm);
		for (auto it = range.first; it != range.second; ++it)
		{
			const NasmOverride& o = it->second;

			if (o.requiredOpType != OperandType::NONE) {
				if (inst.operands[0] != o.requiredOpType && inst.operands[1] != o.requiredOpType) {
					continue;
				}
			}

			if (!o.nasm.empty()) {
				return o.nasm;
			}

			return nasm + operands + o.operandAppend;
		}

		return nasm + operands;
	}

	bool TestBuilder::GenerateTestInstructions(const SourceInstruction& inst, TestData& dataOut)
	{
		dataOut.decodeFlags = 0;
		dataOut.codeType = codeType_; //CodeType::CODE_32BIT;

		// I will want to generate instructions for each mnemonic also.
		for (const std::string& mnemonic : inst.mnemonics)
		{
			// some instructions have mnemonics that are only valid in certain modes.
			// for example: CBW, CWDE, CDQE
			// how to decide which mne's are valid in current mode :/
			// for now hardcode as only a few.
			if (inst.mnemonics.size() > 1)
			{
				if (mnemonic == " CDQE" && codeType_ != CodeType::CODE_64BIT) {
					continue;
				}
				if (mnemonic == " CQO" && codeType_ != CodeType::CODE_64BIT) {
					continue;
				}

				if (mnemonic == " JRCXZ" && codeType_ != CodeType::CODE_64BIT) {
					continue;
				}
			}

			OperandBuilder::MergedOperandsArr ops = opBuilder_.GetOperands(inst);

			if (ops.empty()) {
				std::cerr << "No operands for: " << MakeTestName(inst) << "\n";
				return false;
			}

			// skip testing XCHG EAX, EAX
			// it encodes to NOP.
			if (mnemonic == "XCHG")
			{
				ops.erase(ops.begin());
			}

			if (mnemonic == "CVTPD2PI") {
				int x = 0;
				X_UNUSED(x);
			}

			for (const auto& op : ops)
			{
				TestInstruction newInst;

				std::string nasm = ApplyNasmOverride(inst, mnemonic, op.operands);

				newInst.preAssemble = nasm;

				if (!Assemble(dataOut.codeType, nasm, newInst.opcodes)) {
					return false;
				}

				// results.
				TestResult& result = newInst.expected;
				{
					result.InstId = mnemonic; // the mnemonic becomes the instruction id.
					result.instSet = inst.set;
					result.flow = inst.flow;
					result.modifiedFlags = unpackCpuFlagsToEFlags(inst.modifiedFlags);
					result.testedFlags = unpackCpuFlagsToEFlags(inst.testedFlags);
					result.undefinedFlags = unpackCpuFlagsToEFlags(inst.undefinedFlags);

					result.operandResult = op;

					if (codeType_ == CodeType::CODE_64BIT)
					{
						if (mnemonic == "JCXZ") {
							result.InstId = "JECXZ";
						}
					}
				}

				dataOut.instructions.push_back(newInst);
			}
		}

		return true;
	}


	bool TestBuilder::Assemble(const CodeType::Enum type, const std::string& byteSource, std::vector<uint8_t>& bytes)
	{
		bytes.clear();

		FileUtil::ScopedFileWin32 file;
		if (!file.Open(tempPath_, GENERIC_WRITE, CREATE_ALWAYS)) {
			return false;
		}

		if (type == CodeType::CODE_16BIT) {
			file.WriteStr("BITS 16\n");
		}
		else if (type == CodeType::CODE_32BIT) {
			file.WriteStr("BITS 32\n");
		}
		else if (type == CodeType::CODE_64BIT) {
			file.WriteStr("BITS 64\n");
		}
		else {
			X_ASSERT_UNREACABLE();
		}

		if (!file.Write(byteSource.data(), byteSource.length())) {
			return false;
		}

		return AssembleFile(type, tempPath_, bytes);
	}

	bool TestBuilder::AssembleFile(const CodeType::Enum type, const std::wstring& path, std::vector<uint8_t>& bytes)
	{
		// run yasm.
		const std::wstring yasmBinPath = L"..\\..\\3rdparty\\bin\\yasm-1.3.0-win64.exe";

		X_ASSERT(FileUtil::FileExsists(yasmBinPath));

		std::wstring outFile = path + L".out";
		std::wstring cmd = yasmBinPath + std::wstring(L" ");

		if (type == CodeType::CODE_16BIT) {
			cmd += L"-m x86";
		}
		else if (type == CodeType::CODE_32BIT) {
			cmd += L"-m x86";
		}
		else if (type == CodeType::CODE_64BIT) {
			cmd += L"-m amd64";
		}

		cmd += L" -o \"" + outFile + L"\" \"" + path + L"\"";

		STARTUPINFOW info = { sizeof(info) };
		PROCESS_INFORMATION processInfo;

		if (CreateProcessW(NULL, const_cast<wchar_t*>(cmd.c_str()), NULL, NULL, TRUE, 0, NULL, NULL, &info, &processInfo))
		{
			DWORD exitCode;
			::WaitForSingleObject(processInfo.hProcess, INFINITE);
			::GetExitCodeProcess(processInfo.hProcess, &exitCode);

			CloseHandle(processInfo.hProcess);
			CloseHandle(processInfo.hThread);
			if (exitCode != 0) {
				return false;
			}

			// read the output.
			FileUtil::ScopedFileWin32 file;
			if (file.Open(outFile, GENERIC_READ, OPEN_EXISTING))
			{
				size_t length = file.GetLength();

				bytes.resize(length);

				file.Read(bytes.data(), length);

				return !bytes.empty();
			}
		}

		lastError::Description dsc;
		lastError::ToString(dsc);

		X_ASSERT_UNREACABLE();
		return false;
	}

	std::wstring TestBuilder::GetTempFileName(void)
	{
		WCHAR tempDir[MAX_PATH];
		WCHAR tempFileName[MAX_PATH] = { 0 };

		DWORD dwRetVal = GetTempPathW(MAX_PATH, tempDir);
		if (dwRetVal > MAX_PATH || (dwRetVal == 0))
		{
			// failed :(
			return L"yasm_temp.asm";
		}

		//  Generates a temporary file name. 
		dwRetVal = GetTempFileNameW(tempDir, L"yasm_temp", 0, tempFileName);
		if (dwRetVal == 0)
		{
			return L"yasm_temp.asm";
		}

		return std::wstring(tempFileName);
	}

	std::string TestBuilder::MakeTestName(const SourceInstruction& inst)
	{
		std::string name;

		for (size_t i = 0; i < inst.mnemonics.size(); i++)
		{
			name += FormatNameString(inst.mnemonics[i]);
			name += "_";
		}

		// also add the operand types.
		if (inst.HasOperands())
		{
			name += "O_";

			for (size_t i = 0; i < 4; i++)
			{
				if (inst.operands[i] == OperandType::NONE) {
					continue;
				}

				name += OperandType::ToString(inst.operands[i]);
				if (i < 3 && inst.operands[i + 1] != OperandType::NONE) {
					name += "_";
				}
			}
		}
		else
		{
			// remove trailing '_'
			name = name.substr(0, name.length() - 1);
		}


		// check for seg prefix.
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_CS)) {
			name += "_CS";
		}
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_SS)) {
			name += "_SS";
		}
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_DS)) {
			name += "_DS";
		}
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_ES)) {
			name += "_ES";
		}
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_FS)) {
			name += "_FS";
		}
		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::PRE_GS)) {
			name += "_GS";
		}


		TestNameMap::iterator it = testNames_.find(name);
		if (it == testNames_.end()) {
			testNames_[name] = 0;
		}
		else {
			it->second++;

			name += "_" + StrUtil::to_string(it->second);
		}

		return name;
	}

	std::string TestBuilder::FormatNameString(const std::string& str)
	{
		std::string s(str);
		s = StrUtil::trim(s);
		std::replace(s.begin(), s.end(), ' ', '_');
		return s;
	}

	std::string TestBuilder::GetTestClass(const SourceInstruction& inst) const
	{
		if (codeType_ == CodeType::CODE_16BIT) {
			return "x16";
		}
		if (codeType_ == CodeType::CODE_32BIT) {
			if (inst.set != InstructionSet::NONE) {
				return std::string("x86_") + InstructionSetAbsToStr(inst.set);
			}
			return "x86";
		}
		if (codeType_ == CodeType::CODE_64BIT) {
			if (inst.set != InstructionSet::NONE) {
				return std::string("x64_") + InstructionSetAbsToStr(inst.set);
			}
			return "x64";
		}

		X_ASSERT_UNREACABLE();
		return "unk";
	}

	std::string TestBuilder::GetStatsStr(void) const
	{
		std::stringstream ss;

		ss << "// This file is generated, below is a summary for all generated " << CodeType::ToString(codeType_) << " tests\n";
		ss << "// Some of the instructions we fail to generate tests for are covered by manual tests\n";
		ss << "// Total instructions: " << stats_.totalInst << "\n";
		ss << "// Total instructionTests: " << stats_.genInst << "\n";
		ss << "// Total instructions without tests: " << stats_.failedInst << "\n";
		ss << "// Total real instructions: " << stats_.totalGenRealInst << "\n";
		ss << "\n";
		ss << "// Failed Test names:\n";

		for (const auto& testName : stats_.failedTests)
		{
			ss << "// " << testName << "\n";
		}

		return ss.str();
	}

} // namespace TDiss