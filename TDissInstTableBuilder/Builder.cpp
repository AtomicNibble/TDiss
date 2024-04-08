#include "pch.h"
#include "Builder.h"

namespace TDiss
{
	namespace
	{
		// N is pretty low so O(n) is fine
		template<typename T>
		inline size_t AddUnique(std::vector<T>& vec, const T& item)
		{
			size_t i = 0;
			for (i = 0; i < vec.size(); i++)
			{
				if (vec[i] == item) {
					return i;
				}
			}

			vec.push_back(item);
			return i;
		}

	} // namespace

	// this function goes down on you.
	OpCodeLen::Enum OpCodeLen::NextOpLen(OpCodeLen::Enum len)
	{
		if (len == OpCodeLen::OL_4) {
			return OpCodeLen::OL_3;
		}
		if (len == OpCodeLen::OL_3) {
			return OpCodeLen::OL_2;
		}
		if (len == OpCodeLen::OL_2) {
			return OpCodeLen::OL_1;
		}

		if (len == OpCodeLen::OL_33) {
			return OpCodeLen::OL_23;
		}
		if (len == OpCodeLen::OL_23) {
			return OpCodeLen::OL_13;
		}
		if (len == OpCodeLen::OL_13) {
			return OpCodeLen::OL_1;
		}

		// div
		if (len == OpCodeLen::OL_1d) {
			return OpCodeLen::OL_1;
		}
		if (len == OpCodeLen::OL_2d) {
			return OpCodeLen::OL_1d;
		}


		X_ASSERT_UNREACABLE();
		return OpCodeLen::OL_1;
	}

	size_t OpCodeLen::NumOps(OpCodeLen::Enum len)
	{
		if (len == OpCodeLen::OL_3) {
			return 3;
		}
		if (len == OpCodeLen::OL_2) {
			return 2;
		}

		if (len == OpCodeLen::OL_33) {
			return 3;
		}
		if (len == OpCodeLen::OL_23) {
			return 2;
		}
		if (len == OpCodeLen::OL_13) {
			return 1;
		}

		// div
		if (len == OpCodeLen::OL_1d) {
			return 1;
		}
		if (len == OpCodeLen::OL_2d) {
			return 2;
		}

		// OpCodeLen::OL_1;
		return 1;
	}

	// ====================================

	SourceInstruction::SourceInstruction()
	{
		opLen = OpCodeLen::OL_1;

		for (int32_t i = 0; i < MAX_OPERANDS; i++) {
			ops[i] = 0;
			operands[i] = OperandType::NONE;
		}

		Flags = 0;
		set = InstructionSet::NONE;
		flow = FlowControl::NONE;

		prefixed = false;
		prefix = 0;
		entry = 0;
		_pad = 0;

		modifiedFlags = 0;
		testedFlags = 0;
		undefinedFlags = 0;
	}

	bool SourceInstruction::HasOperands(void) const
	{
		for (size_t i = 0; i < MAX_OPERANDS; i++) {
			if (operands[i] != OperandType::NONE) {
				return true;
			}
		}

		return false;
	}

	size_t SourceInstruction::NumOperands(void) const
	{
		size_t num = 0;

		for (size_t i = 0; i < 2; i++) {
			if (operands[i] != OperandType::NONE) {
				num++;
			}
		}

		if (bitUtil::IsBitFlagSet(Flags, InstructionFlag::USE_OP3)) {
			num++;
		}
		if (bitUtil::IsBitFlagSet(Flags, InstructionFlag::USE_OP4)) {
			num++;
		}

		return num;
	}

	// ====================================

	TableNode::TableNode(NodeType::Enum type, TableNode* pParent) :
		pParent_(pParent),
		parentIdx(-1)
	{
		this->type = type;
		pInst = nullptr;

		if (type == NodeType::FULL) {
			children.resize(256);
		}
		else if (type == NodeType::GROUP) {
			children.resize(8);
		}
		else if (type == NodeType::PREFIXED) {
			children.resize(12);
		}
		else if (type == NodeType::DIVIDED) {
			children.resize(256);
		}
		else {
			//	X_ASSERT_UNREACABLE();
		}
	}

	TableNode::~TableNode()
	{
		for (auto child : children) {
			if (child) {
				delete child;
			}
		}
	}



	std::string TableNode::GetTagHierarchyStr(void) const
	{
		std::string s;

		const std::vector<uint8_t> vec = GetTagHierarchy();

		if (!vec.empty())
		{
			for (size_t i = 0; i < vec.size(); i++)
			{
				uint32_t op = vec[i]; // wide to 32bit so not treated as char.

				std::stringstream ss;
				if (i > 0) {
					ss << "_";
				}
				ss << std::hex << std::setfill('0') << std::setw(2);
				ss << op;
				s += ss.str();
			}
		}
		return s;
	}

	std::vector<uint8_t> TableNode::GetTagHierarchy(void) const
	{
		std::vector<uint8_t> v;

		if (parentIdx != -1)
		{
			X_ASSERT(parentIdx > 0 && parentIdx <= std::numeric_limits<uint8_t>::max());
			v.push_back(static_cast<uint8_t>(parentIdx));

			TableNode* pParent = pParent_;
			while (pParent && pParent->parentIdx != -1) {
				X_ASSERT(pParent->parentIdx > 0 && pParent->parentIdx <= std::numeric_limits<uint8_t>::max());

				v.push_back(static_cast<uint8_t>(pParent->parentIdx));
				pParent = pParent->pParent_;
			}
		}

		std::reverse(v.begin(), v.end());
		return v;
	}

	// ====================================



	Builder::MnemoicInfo::MnemoicInfo(const std::string& mne, uint16_t idx) :
		mnemonic(mne),
		index(idx)
	{

	}

	// ====================================


	Builder::ExportedNode::ExportedNode(const std::string& str, uint16_t idx) :
		tag(str),
		index(idx)
	{

	}

	// ====================================

	std::pair<uint8_t, uint8_t> Builder::mandatoryPrefix[4] = {
		{(uint8_t)0x9b, (uint8_t)0x1},
		{(uint8_t)0x66, (uint8_t)0x1},
		{(uint8_t)0xf3, (uint8_t)0x2},
		{(uint8_t)0xf2, (uint8_t)0x3},
	};

	std::array<std::vector<uint8_t>, 1> Builder::exportedTreeNodes = {
		{{ 0xf, 0xf }},
	};

	Builder::Builder() :
		curInstructionSet_(InstructionSet::NONE),
		root_(NodeType::FULL, nullptr)
	{
		// we always going to have loads so reserve.
		instructions_.reserve(0x400);
		mnemoics_.reserve(0x200);
	}

	Builder::~Builder()
	{

	}

	void Builder::AddInstructionToTree(const SourceInstruction& inst)
	{
		uint32_t flag = (inst.Flags & 0xFFFFFFFF); // clip internal flags.

		InstSharedInfo si;
		si.flagsIdx = static_cast<uint8_t>(AddUnique(flags_, flag));
		si.s = inst.operands[1]; // dest
		si.d = inst.operands[0]; // src
		si.instSet = inst.set;
		si.flow = inst.flow;
		si.modifiedFlags = inst.modifiedFlags;
		si.testedFlags = inst.testedFlags;
		si.undefinedFlags = inst.undefinedFlags;

		if ((inst.Flags & InstructionFlag::EXTENDED) == 0)
		{
			X_ASSERT(inst.mnemonics.size() == 1); // none extended only allowed one mnem

			InstInfo info;
			info.opcodeId = AddMnemonic(inst.mnemonics[0]);
			info.sharedIdx = static_cast<uint16_t>(AddUnique(sharedInfo_, si));

			size_t infoIdx = AddUnique(instInfo_, info);

			uint16_t val = (infoIdx & 0x1FFF);

			val |= (NodeType::INFO << 13);

			std::string fullTag = StrUtil::to_string_hex(tree_.size()) + " : " + inst.tag +
				" (info:" + StrUtil::to_string(infoIdx) + ")";

			tree_.push_back(std::make_pair(val, fullTag));
		}
		else
		{
			InstInfoEx info;
			info.opcodeId = AddMnemonic(inst.mnemonics[0]);
			info.sharedIdx = static_cast<uint16_t>(AddUnique(sharedInfo_, si));

			info.opcodeId2 = 0;
			info.opcodeId3 = 0;
			info.op3 = inst.operands[2];
			info.op4 = inst.operands[3];

			if (inst.mnemonics.size() > 1) {
				info.opcodeId2 = AddMnemonic(inst.mnemonics[1]);
			}
			if (inst.mnemonics.size() > 2) {
				info.opcodeId3 = AddMnemonic(inst.mnemonics[2]);
			}

			size_t infoIdx = AddUnique(instInfoEx_, info);

			uint16_t val = (infoIdx & 0x1FFF);

			val |= (NodeType::INFOEX << 13);

			std::string fullTag = StrUtil::to_string_hex(tree_.size()) + " : " + inst.tag +
				" (infoEx:" + StrUtil::to_string(infoIdx) + ")";

			tree_.push_back(std::make_pair(val, fullTag));
		}
	}

	bool Builder::Build(void)
	{
		addBaseInstructions();
		addFPU();
		addP6();
		addMMX();
		addCollisions();
		addSSE1();
		addSSE2();
		addSSE3();
		addSSSE3();
		addSSE4_1();
		addSSE4_2();
		addSSE4_A();
		add3DNOW();
		add3DNOWEXT();
		addVMX();
		addSVM();
		addAVX();
		addFMA();

		addInstructionFlags();

		BuildTable();

		// BFS
		// so we get table then add all it's tables 
		std::vector<TableNode*> Tables;
		Tables.push_back(&root_);

		TableNode* pCur = &root_;
		size_t curIdx = Tables.size();

		while (1)
		{
			for (size_t i = 0; i < pCur->Size(); i++)
			{
				if (pCur->isChildTable(i))
				{
					Tables.push_back(pCur->ChildAt(i));
				}
			}

			if (curIdx == Tables.size()) {
				break;
			}

			pCur = Tables[curIdx++];
		}

		tree_.clear();
		instInfo_.clear();
		sharedInfo_.clear();
		flags_.clear();

		tree_.reserve(2048);
		instInfo_.reserve(256);
		sharedInfo_.reserve(256);
		flags_.reserve(64);

		size_t i;
		size_t nextTableIdx = 256;

		AddMnemonic("INVALID"); // make inst id 0 invalid.

		for (i = 0; i < Tables.size(); i++)
		{
			TableNode& table = *Tables[i];

			treeTableIndxes_.push(tree_.size());

			for (size_t x = 0; x < table.Size(); x++)
			{
				if (table.type == NodeType::DIVIDED) {
					if (x == 8) {
						x = 0xc0;
					}
				}

				if (table.isChildValue(x))
				{
					const SourceInstruction& inst = *table.ChildValue(x);
					size_t j, num = 1;

					if (inst.Flags & InstructionFlag::REG_BLOCK) {
						num = 8;
						// can't just skip since we might have overrides in the block. (fpu)
						// so we need to make it not skip and able to override tree entries.
						// x += 7;
					}

					for (j = 0; j < num; j++)
					{
						if ((j > 0) && table.isChildValue(x))
						{
							const SourceInstruction& overide = *table.ChildValue(x);
							AddInstructionToTree(overide);
						}
						else
						{
							AddInstructionToTree(inst);
						}

						x++;
					}

					x--;
				}
				else if (table.isChildTable(x))
				{
					TableNode* pChild = table.ChildAt(x);

					// top 3 bits for type 13 bits for tableIdx
					uint16_t val = static_cast<uint16_t>(((pChild->type << 13) & 0x1FFF) | (nextTableIdx & 0x1FFF));

					const auto tagHStr = pChild->GetTagHierarchyStr();
					const auto tagH = pChild->GetTagHierarchy();

					for (const auto& etn : exportedTreeNodes)
					{
						if (etn == tagH)
						{
							exportedTreeNodes_.emplace_back("TableNode_" + tagHStr, val);
						}
					}

					tree_.push_back(std::make_pair(val,
						StrUtil::to_string_hex(tree_.size()) + " " +
						NodeType::ToString(pChild->type) +
						std::string(" ") +
						StrUtil::to_string_hex(nextTableIdx) +
						" path: " + tagHStr)
					);

					if (pChild->type == NodeType::DIVIDED) {
						nextTableIdx += 72;
					}
					else {
						nextTableIdx += pChild->Size();
					}
				}
				else
				{
					tree_.push_back(std::make_pair(NodeType::NONE, NodeType::ToString(NodeType::NONE)));
				}
			}
		}

		return true;
	}

	bool Builder::SaveTables(const std::string& outPath)
	{
		size_t i;

		FileUtil::ScopedFile f;
		if (f.Open(outPath, "w"))
		{
			f.WriteStr("// FILE IS GENERATED by TDissInstTableBuilder\n");
			f.WriteStr("// TDiss instruction tables");
			f.WriteStr("\n\n");

			f.WriteStr("#include \"pch.h\"\n");
			f.WriteStr("#include \"Instruction.h\"\n");
			f.WriteStr("\n");
			f.WriteStr("namespace TDiss\n");
			f.WriteStr("{\n\n");

			// collisions
			for (i = 0; i < collisions_.size(); i++)
			{
				const SourceInstruction& inst = collisions_[i];

				uint32_t flag = (inst.Flags & 0xFFFFFFFF);

				InstSharedInfo si;
				si.flagsIdx = static_cast<uint8_t>(AddUnique(flags_, flag));
				si.s = inst.operands[1]; // dest
				si.d = inst.operands[0]; // src
				si.instSet = inst.set;
				si.flow = inst.flow;
				si.modifiedFlags = inst.modifiedFlags;
				si.testedFlags = inst.testedFlags;
				si.undefinedFlags = inst.undefinedFlags;

				if ((inst.Flags & InstructionFlag::EXTENDED) == 0)
				{
					X_ASSERT(inst.mnemonics.size() == 1); // none extended only allowed one mnem

					InstInfo info;
					info.opcodeId = AddMnemonic(inst.mnemonics[0]);
					info.sharedIdx = static_cast<uint16_t>(AddUnique(sharedInfo_, si));


					f.WriteFmt("\textern const InstInfo II_%s = { 0x%x, static_cast<InstructionID::Enum>(0x%x) };\n",
						inst.mnemonics[0].c_str(), info.sharedIdx, info.opcodeId);
				}
				else
				{
					X_ASSERT_NOT_IMPLEMENTED();
				}
			}
			f.WriteStr("\n\n");


			// exported nodes, fuck 3dnow right now.
			for (const auto& en : exportedTreeNodes_)
			{
				f.WriteFmt("\textern const InstNode %s = 0x%x;\n", en.tag.c_str(), en.index);
			}

			f.WriteStr(R"(
	// This is a compressed prefix tree
	// The uncompressed version would look something like this:
	//	struct Node {
	//		uint8_t byte;
	//
	//		InstInfo* pInfo;
	//		InstInfoEx* pInfo;
	//
	//		std::vector<Node*> children;
	//	};
	//
	// The compressed version is very cache friendly as it's a single block of read only memory about 8Kb in size.
)");

			// tree
			f.WriteFmt("\n\n\textern const uint16_t InstTree[%i] = {\n", tree_.size());

			size_t nextTableIdx = std::numeric_limits<size_t>::max();

			if (!treeTableIndxes_.empty()) {
				nextTableIdx = treeTableIndxes_.front();
				treeTableIndxes_.pop();
			}

			for (i = 0; i < tree_.size(); i++)
			{
				if (i == nextTableIdx) {
					f.WriteFmt("\t\t/* TABLE - 0x%x */\n", nextTableIdx);
					if (!treeTableIndxes_.empty()) {
						nextTableIdx = treeTableIndxes_.front();
						treeTableIndxes_.pop();
					}
				}

				f.WriteFmt("\t\t0x%x,  /* %s */\n", tree_[i].first, tree_[i].second.c_str());
			}
			f.WriteStr("\t};\n\n");

			// flags
			f.WriteFmt("\textern const uint32_t Flags[%i] = {\n", flags_.size());
			for (i = 0; i < flags_.size(); i++)
			{
				f.WriteFmt("\t\t0x%x,\n", flags_[i]);
			}
			f.WriteStr("\t};\n\n");

			// instInfo
			f.WriteFmt("\textern const InstInfo instInfo[%i] = {\n", instInfo_.size());
			for (i = 0; i < instInfo_.size(); i++)
			{
				const InstInfo& info = instInfo_[i];
				f.WriteFmt("\t\t{0x%x, static_cast<InstructionID::Enum>(0x%x)}, /* idx: %i */\n",
					info.sharedIdx, info.opcodeId, i);
			}
			f.WriteStr("\t};\n\n");

			// instInfoEx
			f.WriteFmt("\textern const InstInfoEx instInfoEx[%i] = {\n", instInfoEx_.size());
			for (i = 0; i < instInfoEx_.size(); i++)
			{
				const InstInfoEx& info = instInfoEx_[i];
				f.WriteFmt("\t\t{0x%x, "
					"static_cast<InstructionID::Enum>(0x%x), "
					"static_cast<InstructionID::Enum>(0x%x), "
					"static_cast<InstructionID::Enum>(0x%x), "
					"static_cast<OperandType::Enum>(0x%x), "
					"static_cast<OperandType::Enum>(0x%x) "
					"}, /* idx: %i */\n",
					info.sharedIdx, info.opcodeId,
					info.opcodeId2, info.opcodeId3,
					info.op3, info.op4, i);
			}
			f.WriteStr("\t};\n\n");

			// SharedInfo
			f.WriteFmt("\textern const InstSharedInfo SharedInfo[%i] = {\n", sharedInfo_.size());
			for (i = 0; i < sharedInfo_.size(); i++)
			{
				const InstSharedInfo& info = sharedInfo_[i];
				f.WriteFmt("\t\t{0x%x, static_cast<OperandType::Enum>(0x%x), static_cast<OperandType::Enum>(0x%x),"
					"static_cast<InstructionSet::Enum>(0x%x), static_cast<FlowControl::Enum>(0x%x), %i, %i, %i}, /* idx: %i */\n",
					info.flagsIdx, info.s, info.d, info.instSet, info.flow, info.modifiedFlags, info.testedFlags, info.undefinedFlags, i);
			}
			f.WriteStr("\t};\n\n");

			f.WriteStr("} // namespace TDiss\n");
			return true;
		}
		return false;
	}

	bool Builder::Mnemocis_sortName(const MnemoicInfo& lhs, const MnemoicInfo& rhs)
	{
		return lhs.mnemonic < rhs.mnemonic;
	}

	bool Builder::Mnemocis_sortIdx(const MnemoicInfo& lhs, const MnemoicInfo& rhs)
	{
		return lhs.index < rhs.index;
	}


	bool Builder::SaveMnemocis(const std::string& outHeader, const std::string& outSource)
	{
		FileUtil::ScopedFile fh, fs;
		if (!fh.Open(outHeader, "w") || !fs.Open(outSource, "w"))
		{
			return false;
		}

		// sort 
		std::sort(mnemoics_.begin(), mnemoics_.end(), Mnemocis_sortName);

		// header.
		fh.WriteStr("#pragma once\n\n");
		fh.WriteStr("// FILE IS GENERATED by TDissInstTableBuilder\n");

		fh.WriteStr("#ifdef IN\n");
		fh.WriteStr("#undef IN\n");
		fh.WriteStr("#endif // IN\n");
		fh.WriteStr("\n");
		fh.WriteStr("#ifdef OUT\n");
		fh.WriteStr("#undef OUT\n");
		fh.WriteStr("#endif // OUT\n");
		fh.WriteStr("\n");


		fh.WriteStr("namespace TDiss\n");
		fh.WriteStr("{\n");

		fh.WriteStr("\tstruct InstructionID\n");
		fh.WriteStr("\t{\n");
		fh.WriteFmt("\t\tstatic const size_t NUM_ENUM = %d;\n\n", mnemoics_.size());
		fh.WriteStr("\t\tenum Enum : uint16_t\n");
		fh.WriteStr("\t\t{\n");

		for (const auto& mne : mnemoics_)
		{
			const std::string formated = FormatMnemonic(mne.mnemonic);
			fh.WriteFmt("\t\t\t%s = %i,\n", formated.c_str(), mne.index);
		}

		fh.WriteStr("\t\t};\n\n");
		fh.WriteStr("\t\tstatic TDISS_API const char* ToString(Enum id);\n");
		fh.WriteStr("\t};\n");

		fh.WriteStr("} // namespace TDiss\n");

		// source.
		fs.WriteStr("#include \"pch.h\"\n");
		fs.WriteStr("#include \"mnemonics.h\"\n");
		fs.WriteStr("\n");
		fs.WriteStr("// FILE IS GENERATED by TDissInstTableBuilder\n");
		fs.WriteStr("\n");
		fs.WriteStr("namespace TDiss\n");
		fs.WriteStr("{\n\n");

		std::sort(mnemoics_.begin(), mnemoics_.end(), Mnemocis_sortIdx);

		fs.WriteStr("\tnamespace {\n\n");
		fs.WriteStr("\t\tconst char* pNames[] = {\n");

		for (const auto& mne : mnemoics_)
		{
			fs.WriteFmt("\t\t\t\"%s\", /* %i */\n", mne.mnemonic.c_str(), mne.index);
		}
		fs.WriteStr("\t\t};\n\n");
		fs.WriteStr("\t\tstatic const size_t numStrings = sizeof(pNames) / sizeof(const char*);\n");
		fs.WriteStr("\t} // namespace\n");

		fs.WriteStr("\n");
		fs.WriteStr("\tconst char* InstructionID::ToString(Enum id)\n");
		fs.WriteStr("\t{\n");
		fs.WriteStr("\t\tstatic_assert(NUM_ENUM == numStrings, \"\");\n");
		fs.WriteStr("\t\treturn pNames[id];\n");
		fs.WriteStr("\t}\n");

		fs.WriteStr("} // namespace TDiss\n");

		return true;
	}


	// -----------------------------------------------------

	bool Builder::SaveTests(const std::string& outDir, size_t numTestFiles)
	{
		{
			TestBuilder builder(CodeType::CODE_32BIT);

			for (const auto& inst : instructions_)
			{
				builder.CreateTestForInst(inst);
			}

			if (!builder.SaveTests(outDir, numTestFiles)) {
				return false;
			}
		}
		{
			TestBuilder builder(CodeType::CODE_64BIT);

			for (const auto& inst : instructions_)
			{
				builder.CreateTestForInst(inst);
			}

			if (!builder.SaveTests(outDir, numTestFiles)) {
				return false;
			}
		}

		return true;
	}

	void Builder::addBaseInstructions()
	{
		// things I need to know for each enty:
		//		op codes
		//		mode of operation <- part of flags?
		//		ring lvl <- part of flags?
		//		mnemonic
		//		operands:
		//			ModR/M
		//			opcode extension
		//		instruction set: sse,mmx

		// flags:
		//		tested
		//		modified
		//		defined
		//		undefined
		SetCurrentInstructionSet(InstructionSet::NONE);

		AddInstruction("0x00", "ADD", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x01", "ADD", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		// pretty sure these two are not pre lock
		AddInstruction("0x02", "ADD", OperandType::REG_8, OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x03", "ADD", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x04", "ADD", OperandType::ACC_8, OperandType::IMM_8,
			InstructionFlag::NONE);
		AddInstruction("0x05", "ADD", OperandType::ACC_FULL, OperandType::IMM_FULL,
			InstructionFlag::NONE);

		// not valid in x64
		AddInstruction("0x06", "PUSH", OperandType::SEG,
			InstructionFlag::INVALID_64 | InstructionFlag::PRE_ES);
		AddInstruction("0x07", "POP", OperandType::SEG,
			InstructionFlag::INVALID_64 | InstructionFlag::PRE_ES);

		AddInstruction("0x08", "OR", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x09", "OR", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x0a", "OR", OperandType::REG_8, OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x0b", "OR", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x0c", "OR", OperandType::ACC_8, OperandType::IMM_8,
			InstructionFlag::NONE);
		AddInstruction("0x0d", "OR", OperandType::ACC_FULL, OperandType::IMM_FULL,
			InstructionFlag::NONE);

		// not valid in x64
		AddInstruction("0x0e", "PUSH", OperandType::SEG,
			InstructionFlag::INVALID_64 | InstructionFlag::PRE_CS);

		// 0F is two op instruction prefix.
		{
			// add some double op instructions.
			AddInstruction("0x0f 0x01 //04", "SMSW", OperandType::REG_FULL_M16,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::NOT_DIVIDED);
			AddInstruction("0x0f 0x01 //06", "LMSW", OperandType::RM_16,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::NOT_DIVIDED);

			AddInstruction("0x0f 0x01 //07", "INVLPG", OperandType::MEM,
				InstructionFlag::MODRM_REQUIRED);
			AddInstruction("0x0f 0x01 //c8", "MONITOR", OperandType::NONE,
				InstructionFlag::BITS32);
			AddInstruction("0x0f 0x01 //c9", "MWAIT", OperandType::NONE,
				InstructionFlag::BITS32);
			AddInstruction("0x0f 0x01 //f8", "SWAPGS", OperandType::NONE,
				InstructionFlag::BITS32 | InstructionFlag::BITS64_FETCH);
			AddInstruction("0x0f 0x01 //f9", "RDTSCP", OperandType::NONE,
				InstructionFlag::BITS32 | InstructionFlag::BITS64_FETCH);


			AddInstruction("0x0f 0x02", "LAR", OperandType::REG_FULL, OperandType::RM_16,
				InstructionFlag::MODRM_REQUIRED);
			AddInstruction("0x0f 0x03", "LSL", OperandType::REG_FULL, OperandType::RM_16,
				InstructionFlag::MODRM_REQUIRED);
			AddInstruction("0x0f 0x06", "CLTS", OperandType::NONE,
				InstructionFlag::BITS32);
			AddInstruction("0x0f 0x08", "INVD", OperandType::NONE,
				InstructionFlag::BITS32);
			AddInstruction("0x0f 0x09", "WBINVD", OperandType::NONE,
				InstructionFlag::BITS32);
			AddInstruction("0x0f 0x0b", "UD2", OperandType::NONE,
				InstructionFlag::BITS32);

			AddInstruction("0x0f 0x1f", "NOP", OperandType::RM_FULL,
				InstructionFlag::MODRM_REQUIRED);

			AddInstruction("0x0f 0x30", "WRMSR", OperandType::NONE, InstructionFlag::BITS32);
			AddInstruction("0x0f 0x31", "RDTSC", OperandType::NONE, InstructionFlag::BITS32);
			AddInstruction("0x0f 0x32", "RDMSR", OperandType::NONE, InstructionFlag::BITS32);
			AddInstruction("0x0f 0x33", "RDPMC", OperandType::NONE, InstructionFlag::BITS32);


			AddInstruction("0x0f 0x80", "JO", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x81", "JNO", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x82", "JB", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x83", "JAE", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x84", "JZ", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x85", "JNZ", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x86", "JBE", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x87", "JA", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x88", "JS", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x89", "JNS", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x8a", "JP", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x8b", "JNP", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x8c", "JL", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x8d", "JGE", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x8e", "JLE", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);
			AddInstruction("0x0f 0x8f", "JG", OperandType::REL_CI_FULL, InstructionFlag::BITS32, FlowControl::CND_BRANCH);


			AddInstruction("0x0f 0x90", "SETO", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x91", "SETNO", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x92", "SETB", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x93", "SETAE", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x94", "SETZ", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x95", "SETNZ", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x96", "SETBE", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x97", "SETA", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x98", "SETS", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x99", "SETNS", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x9a", "SETP", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x9b", "SETNP", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x9c", "SETL", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x9d", "SETGE", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x9e", "SETLE", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0x9f", "SETG", OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);


			AddInstruction("0x0f 0xa0", "PUSH", OperandType::SEG,
				InstructionFlag::PRE_FS | InstructionFlag::BITS32 | InstructionFlag::BITS64);
			AddInstruction("0x0f 0xa1", "POP", OperandType::SEG,
				InstructionFlag::PRE_FS | InstructionFlag::BITS32 | InstructionFlag::BITS64);
			AddInstruction("0x0f 0xa2", "CPUID", OperandType::NONE, InstructionFlag::BITS32);
			AddInstruction("0x0f 0xa3", "BT", OperandType::RM_FULL, OperandType::REG_FULL,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

			AddInstruction("0x0f 0xa4", "SHLD", OperandType::RM_FULL, OperandType::REG_FULL, OperandType::IMM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0xa5", "SHLD", OperandType::RM_FULL, OperandType::REG_FULL, OperandType::REG_CL,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

			AddInstruction("0x0f 0xa8", "PUSH", OperandType::SEG,
				InstructionFlag::PRE_GS | InstructionFlag::BITS32 | InstructionFlag::BITS64);
			AddInstruction("0x0f 0xa9", "POP", OperandType::SEG,
				InstructionFlag::PRE_GS | InstructionFlag::BITS32 | InstructionFlag::BITS64);
			AddInstruction("0x0f 0xaa", "RSM", OperandType::NONE, InstructionFlag::BITS32);

			AddInstruction("0x0f 0xab", "BTS", OperandType::RM_FULL, OperandType::REG_FULL,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK | InstructionFlag::BITS32);

			AddInstruction("0x0f 0xac", "SHRD", OperandType::RM_FULL, OperandType::REG_FULL, OperandType::IMM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0xad", "SHRD", OperandType::RM_FULL, OperandType::REG_FULL, OperandType::REG_CL,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

			// saves x87 FPU, MMX technology, XMM, and MXCSR register state to 512 byte block.
			AddInstruction("0x0f 0xae /00", "FXSAVE, INVALID, FXSAVE64", OperandType::MEM,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 |
				InstructionFlag::BITS64 | InstructionFlag::PRE_REX | InstructionFlag::EX_MNEMONIC2);
			// reverse of above.
			AddInstruction("0x0f 0xae /01", "FXRSTOR, INVALID, FXRSTOR64", OperandType::MEM,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 |
				InstructionFlag::BITS64 | InstructionFlag::PRE_REX | InstructionFlag::EX_MNEMONIC2);

			AddInstruction("0x0f 0xae /02", "LDMXCSR", OperandType::MEM,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0xae /03", "STMXCSR", OperandType::MEM,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

			// LFENCE when MOD=11, else XRSTOR(x86) XRSTOR64(x64). operand only used when MOD!=11
			AddInstruction("0x0f 0xae /05", "LFENCE, XRSTOR, XRSTOR64", OperandType::MEM_OPT,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX |
				InstructionFlag::EX_MNEMONIC | InstructionFlag::EX_MNEMONIC2 | InstructionFlag::EX_MNEMONIC_MODRM_BASED);

			// MFENCE MOD=11, else XSAVEOPT or XSAVEOPT64 in 64.
			AddInstruction("0x0f 0xae /06", "MFENCE, XSAVEOPT, XSAVEOPT64", OperandType::MEM_OPT,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX |
				InstructionFlag::EX_MNEMONIC | InstructionFlag::EX_MNEMONIC2 | InstructionFlag::EX_MNEMONIC_MODRM_BASED);

			// SFENCE when MOD=11, else CLFLUSH. operand only used when MOD!=11
			AddInstruction("0x0f 0xae /07", "SFENCE, CLFLUSH", OperandType::MEM_OPT,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 |
				InstructionFlag::EX_MNEMONIC | InstructionFlag::EX_MNEMONIC_MODRM_BASED);

			// ~~

			AddInstruction("0x0f 0xaf", "IMUL", OperandType::REG_FULL, OperandType::RM_FULL,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0xb0", "CMPXCHG", OperandType::RM_8, OperandType::REG_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_LOCK);
			AddInstruction("0x0f 0xb1", "CMPXCHG", OperandType::RM_FULL, OperandType::REG_FULL,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_LOCK);
			AddInstruction("0x0f 0xb2", "LSS", OperandType::REG_FULL, OperandType::MEM_FULL_M16,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_REX | InstructionFlag::BITS64);
			AddInstruction("0x0f 0xb3", "BTR", OperandType::RM_FULL, OperandType::REG_FULL,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_LOCK);
			AddInstruction("0x0f 0xb4", "LFS", OperandType::REG_FULL, OperandType::MEM_FULL_M16,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_REX | InstructionFlag::BITS64);
			AddInstruction("0x0f 0xb5", "LGS", OperandType::REG_FULL, OperandType::MEM_FULL_M16,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_REX | InstructionFlag::BITS64);
			AddInstruction("0x0f 0xb6", "MOVZX", OperandType::REG_FULL, OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0xb7", "MOVZX", OperandType::REG_FULL, OperandType::RM_16,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);
			AddInstruction("0x0f 0xb9", "UD2", OperandType::NONE,
				InstructionFlag::BITS32);


			AddInstruction("0x0f 0xba /04", "BT", OperandType::RM_FULL, OperandType::IMM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0xba /05", "BTS", OperandType::RM_FULL, OperandType::IMM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_LOCK);
			AddInstruction("0x0f 0xba /06", "BTR", OperandType::RM_FULL, OperandType::IMM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_LOCK);
			AddInstruction("0x0f 0xba /07", "BTC", OperandType::RM_FULL, OperandType::IMM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_LOCK);
			AddInstruction("0x0f 0xbb", "BTC", OperandType::RM_FULL, OperandType::IMM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_LOCK);
			AddInstruction("0x0f 0xbc", "BSF", OperandType::RM_FULL, OperandType::IMM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0xbd", "BSR", OperandType::RM_FULL, OperandType::IMM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);


			AddInstruction("0x0f 0xbe", "MOVSX", OperandType::REG_FULL, OperandType::RM_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
			AddInstruction("0x0f 0xbf", "MOVSX", OperandType::REG_FULL, OperandType::RM_16,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32
				| InstructionFlag::BITS64 | InstructionFlag::PRE_REX);

			AddInstruction("0x0f 0xc0", "XADD", OperandType::RM_8, OperandType::REG_8,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_LOCK);
			AddInstruction("0x0f 0xc1", "XADD", OperandType::RM_FULL, OperandType::REG_FULL,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_LOCK);

			// need ome new operand types to handle these.
			AddInstruction("0x0f 0xc7 /01", "CMPXCHG8B, INVALID, CMPXCHG16B", OperandType::MEM_64_128,
				InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 |
				InstructionFlag::PRE_LOCK | InstructionFlag::PRE_REX | InstructionFlag::EX_MNEMONIC2);

			//	AddInstruction("0x0f 0xc8", "BSWAP", OperandType::RM_FULL, OperandType::REG_FULL,
			//		InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_LOCK);
		}

		AddInstruction("0x10", "ADC", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x11", "ADC", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x12", "ADC", OperandType::REG_8, OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x13", "ADC", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x14", "ADC", OperandType::ACC_8, OperandType::IMM_8,
			InstructionFlag::NONE);
		AddInstruction("0x15", "ADC", OperandType::ACC_FULL, OperandType::IMM_FULL,
			InstructionFlag::NONE);

		// not valid in x64
		AddInstruction("0x16", "PUSH", OperandType::SEG,
			InstructionFlag::INVALID_64 | InstructionFlag::PRE_SS);
		AddInstruction("0x17", "POP", OperandType::SEG,
			InstructionFlag::INVALID_64 | InstructionFlag::PRE_SS);

		AddInstruction("0x18", "SBB", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x19", "SBB", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x1a", "SBB", OperandType::REG_8, OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x1b", "SBB", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x1c", "SBB", OperandType::ACC_8, OperandType::IMM_8,
			InstructionFlag::NONE);
		AddInstruction("0x1d", "SBB", OperandType::ACC_FULL, OperandType::IMM_FULL,
			InstructionFlag::NONE);

		// not valid in x64






		AddInstruction("0x1e", "PUSH", OperandType::SEG,
			InstructionFlag::INVALID_64 | InstructionFlag::PRE_DS);
		AddInstruction("0x1f", "POP", OperandType::SEG,
			InstructionFlag::INVALID_64 | InstructionFlag::PRE_DS);

		AddInstruction("0x20", "AND", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x21", "AND", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x22", "AND", OperandType::REG_8, OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x23", "AND", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x24", "AND", OperandType::ACC_8, OperandType::IMM_8,
			InstructionFlag::NONE);
		AddInstruction("0x25", "AND", OperandType::ACC_FULL, OperandType::IMM_FULL,
			InstructionFlag::NONE);

		// see Prefix.h Prefix::Enum
		// 0x26 ES seg override

		// this one might not take a op, only modify ACC_8
		// Same for DAS, AAA, AAS,
		AddInstruction("0x27", "DAA", OperandType::EXPLICIT_REG,
			InstructionFlag::INVALID_64);


		AddInstruction("0x28", "SUB", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x29", "SUB", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x2a", "SUB", OperandType::REG_8, OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x2b", "SUB", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x2c", "SUB", OperandType::ACC_8, OperandType::IMM_8,
			InstructionFlag::NONE);
		AddInstruction("0x2d", "SUB", OperandType::ACC_FULL, OperandType::IMM_FULL,
			InstructionFlag::NONE);

		// see Prefix.h Prefix::Enum
		// 0x2e CS seg override

		AddInstruction("0x2f", "DAS", OperandType::EXPLICIT_REG,
			InstructionFlag::INVALID_64);


		AddInstruction("0x30", "XOR", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x31", "XOR", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x32", "XOR", OperandType::REG_8, OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x33", "XOR", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x34", "XOR", OperandType::ACC_8, OperandType::IMM_8,
			InstructionFlag::NONE);
		AddInstruction("0x35", "XOR", OperandType::ACC_FULL, OperandType::IMM_FULL,
			InstructionFlag::NONE);

		// see Prefix.h Prefix::Enum
		// 0x36 SS seg override

		AddInstruction("0x37", "AAA", OperandType::EXPLICIT_REG,
			InstructionFlag::INVALID_64);

		AddInstruction("0x38", "CMP", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x39", "CMP", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x3a", "CMP", OperandType::REG_8, OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x3b", "CMP", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x3c", "CMP", OperandType::ACC_8, OperandType::IMM_8,
			InstructionFlag::NONE);
		AddInstruction("0x3d", "CMP", OperandType::ACC_FULL, OperandType::IMM_FULL,
			InstructionFlag::NONE);

		// see Prefix.h Prefix::Enum
		// 0x3e DS seg override

		AddInstruction("0x3f", "AAS", OperandType::EXPLICIT_REG,
			InstructionFlag::INVALID_64);

		{
			// in x64 these 16 op codes are rex prefixes.
			// 40 - 4F

			// 0x40 + r
			AddInstruction("0x40", "INC", OperandType::BLOCK_R_FULL,
				InstructionFlag::INVALID_64 | InstructionFlag::REG_BLOCK);
			// 0x48 + r
			AddInstruction("0x48", "DEC", OperandType::BLOCK_R_FULL,
				InstructionFlag::INVALID_64 | InstructionFlag::REG_BLOCK);
		}

		{
			// 0x50 + r
			AddInstruction("0x50", "PUSH", OperandType::BLOCK_R_FULL,
				InstructionFlag::BITS64 | InstructionFlag::REG_BLOCK);
			// 0x58 + r
			AddInstruction("0x58", "POP", OperandType::BLOCK_R_FULL,
				InstructionFlag::BITS64 | InstructionFlag::REG_BLOCK);
		}

		{
			// PUSHA + PUSHAD
			AddInstruction("0x60", "PUSHA", OperandType::EXPLICIT_REG,
				InstructionFlag::INVALID_64 | InstructionFlag::NATIVE);
			// POPA + POPAD
			AddInstruction("0x61", "POPA", OperandType::EXPLICIT_REG,
				InstructionFlag::INVALID_64 | InstructionFlag::NATIVE);
		}


		AddInstruction("0x62", "BOUND", OperandType::REG_FULL,
			// Two one - word operands in memory or two double - word operands in memory
			OperandType::MEM,
			InstructionFlag::INVALID_64 | InstructionFlag::MODRM_REQUIRED);


		// got two for 0x63 :|

		// 0x64 : FS
		// 0x65 : GS
		// 0x66 : OP size override
		// 0x67 : ADD size override

		AddInstruction("0x68", "PUSH", OperandType::IMM_FULL, InstructionFlag::BITS64);
		AddInstruction("0x69", "IMUL", OperandType::REG_FULL, OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED);

		// this fucker can be prefixed by operand size.
		AddInstruction("0x6a", "PUSH", OperandType::IMM_S_8,
			InstructionFlag::BITS64 | InstructionFlag::PRE_OP_SIZE);

		AddInstruction("0x6b", "IMUL", OperandType::REG_FULL, OperandType::RM_FULL, OperandType::IMM_S_8,
			InstructionFlag::MODRM_REQUIRED);

		// string instructions
		{
			// Input byte from I/O port specified in DX into memory location specified -> IN <- ES:(E)DI.
			AddInstruction("0x6c", "INSB", OperandType::REG_EDI, OperandType::REG_DX,
				InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ);
			// Same as before but full size 16/32
			AddInstruction("0x6d", "INSD", OperandType::REG_EDI, OperandType::REG_DX,
				InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ | InstructionFlag::BITS16);

			// Output byte from memory location specified in DS:(E)SI to I/O port specified -> IN <- DX.
			AddInstruction("0x6e", "OUTSB", OperandType::REG_DX, OperandType::REG_ESI,
				InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ);
			// Same as before but full size 16/32
			AddInstruction("0x6f", "OUTSD", OperandType::REG_DX, OperandType::REG_ESI,
				InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ | InstructionFlag::BITS16);

		}

		// jmp
		// not unconditional tho like: 0xe9, 0ex9, 0ex9!!
		// all these are rel 8

		AddInstruction("0x70", "JO", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x71", "JNO", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x72", "JB", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x73", "JNB", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x74", "JZ", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x75", "JNZ", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x76", "JBE", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x77", "JA", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x78", "JS", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x79", "JNS", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x7a", "JP", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x7b", "JNP", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x7c", "JL", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x7d", "JGE", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x7e", "JLE", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);
		AddInstruction("0x7f", "JG", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::CND_BRANCH);


		// following ops have op extensions.
		AddInstruction("0x80 /0", "ADD", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x80 /1", "OR", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x80 /2", "ADC", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x80 /3", "SBB", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x80 /4", "AND", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x80 /5", "SUB", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x80 /6", "XOR", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x80 /7", "CMP", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0x81 /0", "ADD", OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x81 /1", "OR", OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x81 /2", "ADC", OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x81 /3", "SBB", OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x81 /4", "AND", OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x81 /5", "SUB", OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x81 /6", "XOR", OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x81 /7", "CMP", OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED);

		// alias of 80 /*
		AddInstruction("0x82 /0", "ADD", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK | InstructionFlag::INVALID_64);
		AddInstruction("0x82 /1", "OR", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK | InstructionFlag::INVALID_64);
		AddInstruction("0x82 /2", "ADC", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK | InstructionFlag::INVALID_64);
		AddInstruction("0x82 /3", "SBB", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK | InstructionFlag::INVALID_64);
		AddInstruction("0x82 /4", "AND", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK | InstructionFlag::INVALID_64);
		AddInstruction("0x82 /5", "SUB", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK | InstructionFlag::INVALID_64);
		AddInstruction("0x82 /6", "XOR", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK | InstructionFlag::INVALID_64);
		AddInstruction("0x82 /7", "CMP", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::INVALID_64);

		// sign extended
		// http://ref.x86asm.net/geek.html#x83_0
		AddInstruction("0x83 /0", "ADD", OperandType::RM_FULL, OperandType::IMM_S_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x83 /1", "OR", OperandType::RM_FULL, OperandType::IMM_S_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x83 /2", "ADC", OperandType::RM_FULL, OperandType::IMM_S_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x83 /3", "SBB", OperandType::RM_FULL, OperandType::IMM_S_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x83 /4", "AND", OperandType::RM_FULL, OperandType::IMM_S_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x83 /5", "SUB", OperandType::RM_FULL, OperandType::IMM_S_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x83 /6", "XOR", OperandType::RM_FULL, OperandType::IMM_S_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x83 /7", "CMP", OperandType::RM_FULL, OperandType::IMM_S_8,
			InstructionFlag::MODRM_REQUIRED);


		AddInstruction("0x84", "TEST", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x85", "TEST", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x86", "XCHG", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x87", "XCHG", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0x88", "MOV", OperandType::RM_8, OperandType::REG_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x89", "MOV", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x8a", "MOV", OperandType::REG_8, OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x8b", "MOV", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x8c", "MOV", OperandType::REG_FULL_M16, OperandType::SREG,
			InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0x8d", "LEA", OperandType::REG_FULL, OperandType::MEM,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x8e", "MOV", OperandType::SREG, OperandType::RM_16, // conflicting docs (one says RM full 16)
			InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0x8f /0", "POP", OperandType::RM_FULL, // OperandType::MEM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS64);

		{
			// 0x90 is NOP in x86 but x64 it can be REX prefixed making it XCHG
			// then we also have 0xf4 0x90 PAUSE :Z

			// the XCHG is also a block 0x90 + r
			AddInstruction("0x90", "XCHG", OperandType::BLOCK_R_FULL, OperandType::ACC_FULL,
				InstructionFlag::REG_BLOCK);
		}

		{
			// for 0x98 it's CBW, CWDE, CDQE depending on Operand size.

			AddInstruction("0x98", "CBW, CWDE, CDQE", OperandType::EXPLICIT_REG,
				InstructionFlag::EX_MNEMONIC | InstructionFlag::EX_MNEMONIC2);

			AddInstruction("0x99", "CWD, CDQ, CQO", OperandType::EXPLICIT_REG,
				InstructionFlag::EX_MNEMONIC | InstructionFlag::EX_MNEMONIC2);
		}


		AddInstruction("0x9a", "CALL FAR", OperandType::PTR16_FULL,
			InstructionFlag::INVALID_64, FlowControl::CALL);

		{
			// skip FPU 0x9b
		}


		AddInstruction("0x9c", "PUSHF", OperandType::EXPLICIT_REG,
			InstructionFlag::BITS64 | InstructionFlag::NATIVE);
		AddInstruction("0x9d", "POPF", OperandType::EXPLICIT_REG,
			InstructionFlag::BITS64 | InstructionFlag::NATIVE);

		AddInstruction("0x9e", "SAHF", OperandType::EXPLICIT_REG,
			InstructionFlag::NONE);
		AddInstruction("0x9f", "LAHF", OperandType::EXPLICIT_REG,
			InstructionFlag::NONE);


		AddInstruction("0xa0", "MOV", OperandType::ACC_8, OperandType::MOFFS_8,
			InstructionFlag::NONE);
		AddInstruction("0xa1", "MOV", OperandType::ACC_FULL, OperandType::MOFFS_FULL,
			InstructionFlag::NONE);
		AddInstruction("0xa2", "MOV", OperandType::MOFFS_8, OperandType::ACC_8,
			InstructionFlag::NONE);
		AddInstruction("0xa3", "MOV", OperandType::MOFFS_FULL, OperandType::ACC_FULL,
			InstructionFlag::NONE);

		// movs es:di, ds:si*
		// geek: movs, Y*, X*

		// geek: Y
		// Memory addressed by the ES:eDI or by RDI (only MOVS, CMPS, INS, STOS, and SCAS).
		// In 64-bit mode, only 64-bit (RDI) and 32-bit (EDI) address sizes are supported. 
		// In non-64-bit modes, only 32-bit (EDI) and 16-bit (DI) address sizes are supported. The implicit ES segment register cannot be overriden by a segment prefix.

		// geek: X
		// Memory addressed by the DS:eSI or by RSI (only MOVS, CMPS, OUTS, and LODS). 
		// In 64-bit mode, only 64-bit (RSI) and 32-bit (ESI) address sizes are supported. 
		// In non-64-bit modes, only 32-bit (ESI) and 16-bit (SI) address sizes are supported.

		AddInstruction("0xa4", "MOVSB", OperandType::REG_EDI, OperandType::REG_ESI,
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ);
		AddInstruction("0xa5", "MOVS", OperandType::REG_EDI, OperandType::REG_ESI,
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ |
			InstructionFlag::BITS16 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);

		// cmps ds:si*, es:di 
		AddInstruction("0xa6", "CMPSB", OperandType::REG_ESI, OperandType::REG_EDI,
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ);
		AddInstruction("0xa7", "CMPS", OperandType::REG_ESI, OperandType::REG_EDI,
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ |
			InstructionFlag::BITS16 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);


		AddInstruction("0xa8", "TEST", OperandType::ACC_8, OperandType::IMM_8,
			InstructionFlag::NONE);
		AddInstruction("0xa9", "TEST", OperandType::ACC_FULL, OperandType::IMM_FULL,
			InstructionFlag::NONE);

		// stos es:di, al
		AddInstruction("0xaa", "STOSB", OperandType::REG_EDI, OperandType::ACC_8,
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ);
		AddInstruction("0xab", "STOS", OperandType::REG_EDI, OperandType::ACC_FULL,
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ |
			InstructionFlag::BITS16 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);

		// lods al, ds:si*
		AddInstruction("0xac", "LODSB", OperandType::ACC_8, OperandType::REG_ESI,
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ);
		AddInstruction("0xad", "LODS", OperandType::ACC_FULL, OperandType::REG_ESI,
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ |
			InstructionFlag::BITS16 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);

		// scas es:di, al
		AddInstruction("0xae", "SCASB", OperandType::REG_EDI, OperandType::ACC_8,
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ);
		AddInstruction("0xaf", "SCAS", OperandType::REG_EDI, OperandType::ACC_FULL,
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ |
			InstructionFlag::BITS16 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);

		{
			// blocks

			// 0xb0 + r
			AddInstruction("0xb0", "MOV", OperandType::BLOCK_R_8, OperandType::IMM_8,
				InstructionFlag::REG_BLOCK);
			// 0xb8 + r
			AddInstruction("0xb8", "MOV", OperandType::BLOCK_R_FULL, OperandType::IMM_FULL,
				InstructionFlag::BITS64 | InstructionFlag::PRE_REX | InstructionFlag::REG_BLOCK);
		}


		AddInstruction("0xc0 /0", "ROL", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc0 /1", "ROR", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc0 /2", "RCL", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc0 /3", "RCR", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc0 /4", "SHL", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc0 /5", "SHR", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc0 /6", "SAL", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc0 /7", "SAR", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0xc1 /0", "ROL", OperandType::RM_FULL, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc1 /1", "ROR", OperandType::RM_FULL, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc1 /2", "RCL", OperandType::RM_FULL, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc1 /3", "RCR", OperandType::RM_FULL, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc1 /4", "SHL", OperandType::RM_FULL, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc1 /5", "SHR", OperandType::RM_FULL, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc1 /6", "SAL", OperandType::RM_FULL, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc1 /7", "SAR", OperandType::RM_FULL, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);


		AddInstruction("0xc2", "RETN", OperandType::IMM_16, InstructionFlag::BITS64, FlowControl::RET);
		AddInstruction("0xc3", "RETN", OperandType::EXPLICIT_REG, InstructionFlag::BITS64, FlowControl::RET);

		// LES ES, r16/32, m16:16/32
		AddInstruction("0xc4", "LES", OperandType::REG_FULL, OperandType::MOFFS_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::INVALID_64);

		// LES DS, r16/32, m16:16/32
		AddInstruction("0xc5", "LDS", OperandType::REG_FULL, OperandType::MOFFS_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::INVALID_64);

		AddInstruction("0xc6 /0", "MOV", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xc7 /0", "MOV", OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED);

		// ENTER eBP, imm16, imm8
		AddInstruction("0xc8", "ENTER", OperandType::IMM_16, OperandType::IMM_8,
			InstructionFlag::BITS64);
		// LEAVE eBP
		AddInstruction("0xc9", "LEAVE", OperandType::EXPLICIT_REG,
			InstructionFlag::BITS64);

		// REFT is not promoted automatically in 64bits. rex required.
		AddInstruction("0xca", "RETF", OperandType::IMM_16,
			InstructionFlag::NATIVE | InstructionFlag::BITS64 | InstructionFlag::PRE_REX, FlowControl::RET);
		AddInstruction("0xcb", "RETF", OperandType::EXPLICIT_REG,
			InstructionFlag::NATIVE | InstructionFlag::BITS64 | InstructionFlag::PRE_REX, FlowControl::RET);

		// call to Interrupt Procedure
		AddInstruction("0xcc", "INT3", OperandType::EXPLICIT_REG,
			InstructionFlag::NONE, FlowControl::INT);
		AddInstruction("0xcd", "INT", OperandType::IMM_8,
			InstructionFlag::NONE, FlowControl::INT);
		AddInstruction("0xce", "INTO", OperandType::EXPLICIT_REG,
			InstructionFlag::INVALID_64, FlowControl::INT);

		// IRET		Flags
		// IRETD	EFlags
		// IRET		Flags
		// IRETD	EFlags
		// IRETQ	RFlags
		AddInstruction("0xcf", "IRET", OperandType::EXPLICIT_REG,
			InstructionFlag::NATIVE | InstructionFlag::BITS64 | InstructionFlag::PRE_REX, FlowControl::RET);


		AddInstruction("0xd0 /0", "ROL", OperandType::RM_8, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd0 /1", "ROR", OperandType::RM_8, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd0 /2", "RCL", OperandType::RM_8, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd0 /3", "RCR", OperandType::RM_8, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd0 /4", "SHL", OperandType::RM_8, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd0 /5", "SHR", OperandType::RM_8, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd0 /6", "SAL", OperandType::RM_8, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd0 /7", "SAR", OperandType::RM_8, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0xd1 /0", "ROL", OperandType::RM_FULL, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd1 /1", "ROR", OperandType::RM_FULL, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd1 /2", "RCL", OperandType::RM_FULL, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd1 /3", "RCR", OperandType::RM_FULL, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd1 /4", "SHL", OperandType::RM_FULL, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd1 /5", "SHR", OperandType::RM_FULL, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd1 /6", "SAL", OperandType::RM_FULL, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd1 /7", "SAR", OperandType::RM_FULL, OperandType::CONST1,
			InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0xd2 /0", "ROL", OperandType::RM_8, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd2 /1", "ROR", OperandType::RM_8, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd2 /2", "RCL", OperandType::RM_8, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd2 /3", "RCR", OperandType::RM_8, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd2 /4", "SHL", OperandType::RM_8, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd2 /5", "SHR", OperandType::RM_8, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd2 /6", "SAL", OperandType::RM_8, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd2 /7", "SAR", OperandType::RM_8, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0xd3 /0", "ROL", OperandType::RM_FULL, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd3 /1", "ROR", OperandType::RM_FULL, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd3 /2", "RCL", OperandType::RM_FULL, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd3 /3", "RCR", OperandType::RM_FULL, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd3 /4", "SHL", OperandType::RM_FULL, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd3 /5", "SHR", OperandType::RM_FULL, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd3 /6", "SAL", OperandType::RM_FULL, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd3 /7", "SAR", OperandType::RM_FULL, OperandType::REG_CL,
			InstructionFlag::MODRM_REQUIRED);


		// AAM AL, AH, imm8
		AddInstruction("0xd4", "AAM", OperandType::IMM_8, InstructionFlag::INVALID_64);
		// AAD AL, AH, imm8
		AddInstruction("0xd5", "AAD", OperandType::IMM_8, InstructionFlag::INVALID_64);
		AddInstruction("0xd6", "SALC", OperandType::EXPLICIT_REG, InstructionFlag::INVALID_64);

		// Memory addressed by DS:eBX+AL, or by rBX+AL in 64-bit mode 
		AddInstruction("0xd7", "XLAT", OperandType::REG_EBXAL, InstructionFlag::PRE_DS);

		// Load of floating point ops from here down. 
		// 0xD8 -> DF

		// 0xE0 first gen op after.
		AddInstruction("0xe0", "LOOPNZ", OperandType::REL_CI_8,
			InstructionFlag::PRE_ADDR_SIZE | InstructionFlag::NATIVE, FlowControl::CND_BRANCH);
		AddInstruction("0xe1", "LOOPZ", OperandType::REL_CI_8,
			InstructionFlag::PRE_ADDR_SIZE | InstructionFlag::NATIVE, FlowControl::CND_BRANCH);
		AddInstruction("0xe2", "LOOP", OperandType::REL_CI_8,
			InstructionFlag::PRE_ADDR_SIZE | InstructionFlag::NATIVE, FlowControl::CND_BRANCH);

		// the address prefix affects the register size: (e)CX
		// in 64bits it's promoted: J(r/e)CXZ
		AddInstruction("0xe3", "JCXZ, JECXZ, JRCXZ", OperandType::REL_CI_8,
			InstructionFlag::PRE_ADDR_SIZE |
			InstructionFlag::EX_MNEMONIC | InstructionFlag::EX_MNEMONIC2, FlowControl::CND_BRANCH);

		AddInstruction("0xe4", "IN", OperandType::ACC_8, OperandType::IMM_8,
			InstructionFlag::NONE);
		AddInstruction("0xe5", "IN", OperandType::ACC_FULL_NOT64, OperandType::IMM_8,
			InstructionFlag::NONE);

		AddInstruction("0xe6", "OUT", OperandType::IMM_8, OperandType::ACC_8,
			InstructionFlag::NONE);
		AddInstruction("0xe7", "OUT", OperandType::IMM_8, OperandType::ACC_FULL_NOT64,
			InstructionFlag::NONE);

		AddInstruction("0xe8", "CALL", OperandType::REL_CI_FULL, InstructionFlag::BITS64, FlowControl::CALL);
		AddInstruction("0xe9", "JMP", OperandType::REL_CI_FULL, InstructionFlag::BITS64, FlowControl::UNC_BRANCH);
		AddInstruction("0xea", "JMP FAR", OperandType::PTR16_FULL, InstructionFlag::INVALID_64, FlowControl::UNC_BRANCH);
		AddInstruction("0xeb", "JMP", OperandType::REL_CI_8, InstructionFlag::BITS64, FlowControl::UNC_BRANCH);

		AddInstruction("0xec", "IN", OperandType::ACC_8, OperandType::REG_DX,
			InstructionFlag::NONE);
		AddInstruction("0xed", "IN", OperandType::ACC_FULL_NOT64, OperandType::REG_DX,
			InstructionFlag::NONE);

		AddInstruction("0xee", "OUT", OperandType::REG_DX, OperandType::ACC_8,
			InstructionFlag::NONE);
		AddInstruction("0xef", "OUT", OperandType::REG_DX, OperandType::ACC_FULL_NOT64,
			InstructionFlag::NONE);

		// f0 LOCK

		// YASM don't support this :(
		AddInstruction("0xf1", "INT1", OperandType::EXPLICIT_REG, InstructionFlag::NONE, FlowControl::INT);

		// Prefixes:
		// f2 REPNZ
		// f3 REP

		AddInstruction("0xf4", "HLT", OperandType::EXPLICIT_REG, InstructionFlag::NONE);
		AddInstruction("0xf5", "CMC", OperandType::EXPLICIT_REG, InstructionFlag::NONE);


		AddInstruction("0xf6 /0", "TEST", OperandType::RM_8, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED);
		//		AddInstruction("0xf6 /1", "TEST", OperandType::RM_8, 
		//			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xf6 /2", "NOT", OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0xf6 /3", "NEG", OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0xf6 /4", "MUL", OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xf6 /5", "IMUL", OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xf6 /6", "DIV", OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xf6 /7", "IDIV", OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0xf7 /0", "TEST", OperandType::RM_FULL, OperandType::IMM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		//		AddInstruction("0xf7 /1", "TEST", OperandType::RM_FULL,
		//			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xf7 /2", "NOT", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0xf7 /3", "NEG", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0xf7 /4", "MUL", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xf7 /5", "IMUL", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xf7 /6", "DIV", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xf7 /7", "IDIV", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED);


		AddInstruction("0xf8", "CLC", OperandType::EXPLICIT_REG, InstructionFlag::NONE);
		AddInstruction("0xf9", "STC", OperandType::EXPLICIT_REG, InstructionFlag::NONE);
		AddInstruction("0xfa", "CLI", OperandType::EXPLICIT_REG, InstructionFlag::NONE);
		AddInstruction("0xfb", "STI", OperandType::EXPLICIT_REG, InstructionFlag::NONE);
		AddInstruction("0xfc", "CLD", OperandType::EXPLICIT_REG, InstructionFlag::NONE);
		AddInstruction("0xfd", "STD", OperandType::EXPLICIT_REG, InstructionFlag::NONE);


		AddInstruction("0xfe /0", "INC", OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0xfe /1", "DEC", OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);

		AddInstruction("0xff /0", "INC", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);
		AddInstruction("0xff /1", "DEC", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_LOCK);

		AddInstruction("0xff /2", "CALL", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS64, FlowControl::CALL);
		AddInstruction("0xff /3", "CALL FAR", OperandType::MEM_FULL_M16,
			InstructionFlag::MODRM_REQUIRED |
			InstructionFlag::BITS64 | InstructionFlag::PRE_REX, FlowControl::CALL);

		AddInstruction("0xff /4", "JMP", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS64, FlowControl::UNC_BRANCH);
		AddInstruction("0xff /5", "JMP FAR", OperandType::MEM_FULL_M16,
			InstructionFlag::MODRM_REQUIRED |
			InstructionFlag::BITS64 | InstructionFlag::PRE_REX, FlowControl::UNC_BRANCH);

		AddInstruction("0xff /6", "PUSH", OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS64);


		// New instructions from AMD July 2007
		AddInstruction("0xf3 0x0f 0xbd", "LZCNT", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_OP_SIZE);

		AddInstruction("0x0f 0x38 0xf0", "MOVBE", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0xf1", "MOVBE", OperandType::RM_FULL, OperandType::REG_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		// New instructions from Intel 2008:
		AddInstruction("0x0f 0x01 0xd0", "XGETBV", OperandType::NONE, InstructionFlag::BITS32);
		AddInstruction("0x0f 0x01 0xd1", "XSETBV", OperandType::NONE, InstructionFlag::BITS32);
		// 2nd op is not valid but i don't support adding blank 2nd with a valid 3rd.
		AddInstruction("0x0f 0xae /04", "XSAVE, INVALID, XSAVE64", OperandType::MEM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX | InstructionFlag::EX_MNEMONIC2);

		// New instructions from Intel 2009:
		// Intel 64 and IA - 32 Architecture Software Developer's Manual Volume 2B: Instruction Set Reference,
		//	N-Z: The GETSEC instruction supports multiple leaf functions. Leaf functions are selected by the value in EAX at the time GETSEC is executed. 
		//	The following leaf functions are available: CAPABILITIES, ENTERACCS, EXITAC, SENTER, SEXIT, PARAMETERS, 
		//	SMCTRL, WAKEUP. GETSEC instruction operands are specific to selected leaf function.
		AddInstruction("0x0f 0x37", "GETSEC", OperandType::NONE, InstructionFlag::BITS32);
	}

	void Builder::addFPU()
	{
		SetCurrentInstructionSet(InstructionSet::FPU);

		// x87 fpu.
		AddInstruction("0xd8 //00", "FADD", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd8 //01", "FMUL", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd8 //02", "FCOM", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd8 //03", "FCOMP", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd8 //04", "FSUB", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd8 //05", "FSUBR", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd8 //06", "FDIV", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd8 //07", "FDIVR", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0xd8 //c0", "FADD", OperandType::FPU_SSI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xd8 //c8", "FMUL", OperandType::FPU_SSI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xd8 //d0", "FCOM", OperandType::FPU_SI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xd8 //d8", "FCOMP", OperandType::FPU_SI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xd8 //d9", "FCOMP", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd8 //e0", "FSUB", OperandType::FPU_SSI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xd8 //e8", "FSUBR", OperandType::FPU_SSI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xd8 //f0", "FDIV", OperandType::FPU_SSI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xd8 //f8", "FDIVR", OperandType::FPU_SSI, InstructionFlag::REG_BLOCK);

		AddInstruction("0xd9 //00", "FLD", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd9 //02", "FST", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd9 //03", "FSTP", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd9 //04", "FLDENV", OperandType::MEM, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd9 //05", "FLDCW", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd9 //06", "FNSTENV", OperandType::MEM, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd9 //07", "FNSTCW", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xd9 //c0", "FLD", OperandType::FPU_SI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xd9 //c8", "FXCH", OperandType::FPU_SI, InstructionFlag::REG_BLOCK);

		AddInstruction("0xd9 //c9", "FXCH", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //d0", "FNOP", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //e0", "FCHS", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //e1", "FABS", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //e4", "FTST", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //e5", "FXAM", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //e8", "FLD1", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //e9", "FLDL2T", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //ea", "FLDL2E", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //eb", "FLDPI", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //ec", "FLDLG2", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //ed", "FLDLN2", OperandType::NONE, InstructionFlag::NONE);

		AddInstruction("0xd9 //ee", "FLDZ", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //f0", "F2XM1", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //f1", "FYL2X", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //f2", "FPTAN", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //f3", "FPATAN", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //f4", "FXTRACT", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //f5", "FPREM1", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //f6", "FDECSTP", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //f7", "FINCSTP", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //f8", "FPREM", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //f9", "FYL2XP1", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //fa", "FSQRT", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //fb", "FSINCOS", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //fc", "FRNDINT", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //fd", "FSCALE", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //fe", "FSIN", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xd9 //ff", "FCOS", OperandType::NONE, InstructionFlag::NONE);

		AddInstruction("0xda //00", "FIADD", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xda //01", "FIMUL", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xda //02", "FICOM", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xda //03", "FICOMP", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xda //04", "FISUB", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xda //05", "FISUBR", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xda //06", "FIDIV", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xda //07", "FIDIVR", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xda //e9", "FUCOMPP", OperandType::NONE, InstructionFlag::NONE);

		AddInstruction("0xdb //00", "FILD", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdb //02", "FIST", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdb //03", "FISTP", OperandType::FPUM32, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdb //05", "FLD", OperandType::FPUM80, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdb //07", "FSTP", OperandType::FPUM80, InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0xdb //e0", "FENI", OperandType::NONE, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdb //e1", "FNDISI", OperandType::NONE, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdb //e2", "FNCLEX", OperandType::NONE, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdb //e3", "FNINIT", OperandType::NONE, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdb //e4", "FSETPM", OperandType::NONE, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdb //e8", "FUCOMI", OperandType::FPU_SSI, InstructionFlag::BITS32 | InstructionFlag::REG_BLOCK);


		AddInstruction("0xdc //00", "FADD", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdc //01", "FMUL", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdc //02", "FCOM", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdc //03", "FCOMP", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdc //04", "FSUB", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdc //05", "FSUBR", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdc //06", "FDIV", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdc //07", "FDIVR", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0xdc //c0", "FADD", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xdc //c8", "FMUL", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xdc //e0", "FSUBR", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xdc //e8", "FSUB", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xdc //f0", "FDIVR", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xdc //f8", "FDIV", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);


		AddInstruction("0xdd //00", "FLD", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdd //02", "FST", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdd //03", "FSTP", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdd //04", "FRSTOR", OperandType::MEM, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdd //06", "FNSAVE", OperandType::MEM, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdd //07", "FNSTSW", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdd //c0", "FFREE", OperandType::FPU_SI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xdd //d0", "FST", OperandType::FPU_SI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xdd //d8", "FSTP", OperandType::FPU_SI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xdd //e0", "FUCOM", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xdd //e1", "FUCOM", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xdd //e8", "FUCOMP", OperandType::FPU_SI, InstructionFlag::REG_BLOCK);
		AddInstruction("0xdd //e9", "FUCOMP", OperandType::NONE, InstructionFlag::NONE);

		AddInstruction("0xde //00", "FIADD", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xde //01", "FIMUL", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xde //02", "FICOM", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xde //03", "FICOMP", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xde //04", "FISUB", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xde //05", "FISUBR", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xde //06", "FIDIV", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xde //07", "FIDIVR", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);

		AddInstruction("0xde //c0", "FADDP", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xde //c1", "FADDP", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xde //c8", "FMULP", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xde //c9", "FMULP", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xde //d9", "FCOMPP", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xde //e0", "FSUBRP", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xde //e1", "FSUBRP", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xde //e8", "FSUBP", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xde //e9", "FSUBP", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xde //f0", "FDIVRP", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xde //f1", "FDIVRP", OperandType::NONE, InstructionFlag::NONE);
		AddInstruction("0xde //f8", "FDIVP", OperandType::FPU_SIS, InstructionFlag::REG_BLOCK);
		AddInstruction("0xde //f9", "FDIVP", OperandType::NONE, InstructionFlag::NONE);

		AddInstruction("0xdf //00", "FILD", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdf //02", "FIST", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdf //03", "FISTP", OperandType::FPUM16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdf //04", "FBLD", OperandType::FPUM80, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdf //05", "FILD", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdf //06", "FBSTP", OperandType::FPUM80, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdf //07", "FISTP", OperandType::FPUM64, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdf //e0", "FNSTSW", OperandType::ACC_16, InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0xdf //e8", "FUCOMIP", OperandType::FPU_SSI, InstructionFlag::BITS32 | InstructionFlag::REG_BLOCK);
		AddInstruction("0xdf //f0", "FCOMIP", OperandType::FPU_SSI, InstructionFlag::BITS32 | InstructionFlag::REG_BLOCK);






	}

	void Builder::addP6()
	{
		SetCurrentInstructionSet(InstructionSet::P6);

		AddInstruction("0x0f 0x40", "CMOVO", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x41", "CMOVNO", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x42", "CMOVB", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x43", "CMOVAE", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x44", "CMOVZ", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x45", "CMOVNZ", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x46", "CMOVBE", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x47", "CMOVA", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x48", "CMOVS", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x49", "CMOVNS", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x4a", "CMOVP", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x4b", "CMOVNP", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x4c", "CMOVL", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x4d", "CMOVGE", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x4e", "CMOVLE", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x4f", "CMOVG", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0xda //c0", "FCMOVB", OperandType::FPU_SSI,
			InstructionFlag::REG_BLOCK | InstructionFlag::BITS32);
		AddInstruction("0xda //c8", "FCMOVE", OperandType::FPU_SSI,
			InstructionFlag::REG_BLOCK | InstructionFlag::BITS32);
		AddInstruction("0xda //d0", "FCMOVBE", OperandType::FPU_SSI,
			InstructionFlag::REG_BLOCK | InstructionFlag::BITS32);
		AddInstruction("0xda //d8", "FCMOVU", OperandType::FPU_SSI,
			InstructionFlag::REG_BLOCK | InstructionFlag::BITS32);
		AddInstruction("0xdb //c0", "FCMOVNB", OperandType::FPU_SSI,
			InstructionFlag::REG_BLOCK | InstructionFlag::BITS32);
		AddInstruction("0xdb //c8", "FCMOVNE", OperandType::FPU_SSI,
			InstructionFlag::REG_BLOCK | InstructionFlag::BITS32);
		AddInstruction("0xdb //d0", "FCMOVNBE", OperandType::FPU_SSI,
			InstructionFlag::REG_BLOCK | InstructionFlag::BITS32);
		AddInstruction("0xdb //d8", "FCMOVNU", OperandType::FPU_SSI,
			InstructionFlag::REG_BLOCK | InstructionFlag::BITS32);
		AddInstruction("0xdb //f0", "FCOMI", OperandType::FPU_SSI,
			InstructionFlag::REG_BLOCK | InstructionFlag::BITS32);


	}

	void Builder::addMMX(void)
	{
		SetCurrentInstructionSet(InstructionSet::MMX);

		AddInstruction("0x0f 0x60", "PUNPCKLBW", OperandType::MM, OperandType::MM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x61", "PUNPCKLWD", OperandType::MM, OperandType::MM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x62", "PUNPCKLDQ", OperandType::MM, OperandType::MM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x63", "PACKSSWB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x64", "PCMPGTB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x65", "PCMPGTW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x66", "PCMPGTD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x67", "PACKUSWB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x68", "PUNPCKHBW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x69", "PUNPCKHWD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x6a", "PUNPCKHDQ", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x6b", "PACKSSDW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x0f 0x6e", "MOVD, MOVQ, MOVQ", OperandType::MM, OperandType::MM_32_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64
			| InstructionFlag::PRE_REX | InstructionFlag::EX_MNEMONIC2);
		AddInstruction("0x0f 0x6f", "MOVQ", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x0f 0x71 /02", "PSRLW", OperandType::MM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x71 /04", "PSRAW", OperandType::MM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x71 /06", "PSLLW", OperandType::MM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x72 /02", "PSRLD", OperandType::MM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x72 /04", "PSRAD", OperandType::MM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x72 /06", "PSLLD", OperandType::MM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x73 /02", "PSRLQ", OperandType::MM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x73 /06", "PSLLQ", OperandType::MM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x0f 0x74", "PCMPEQB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x75", "PCMPEQW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x76", "PCMPEQD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x77", "EMMS", OperandType::NONE, InstructionFlag::BITS32);

		AddInstruction("0x0f 0x7f", "MOVQ", OperandType::MM_64, OperandType::MM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xd1", "PSRLW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xd2", "PSRLD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xd3", "PSRLQ", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xd5", "PMULLW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xd8", "PSUBUSB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xd9", "PSUBUSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xdb", "PAND", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xdc", "PADDUSB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xdd", "PADDUSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xdf", "PANDN", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xe1", "PSRAW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xe2", "PSRAD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xe5", "PMULHW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xe8", "PSUBSB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xe9", "PSUBSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xeb", "POR", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xec", "PADDSB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xed", "PADDSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xef", "PXOR", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xf1", "PSLLW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xf2", "PSLLD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xf3", "PSLLQ", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xf5", "PMADDWD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xf8", "PSUBB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xf9", "PSUBW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xfa", "PSUBD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xfc", "PADDB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xfd", "PADDW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xfe", "PADDD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

	}

	void Builder::addSSE1(void)
	{
		SetCurrentInstructionSet(InstructionSet::SSE);

		AddInstruction("0x0f 0x10", "MOVUPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x11", "MOVUPS", OperandType::XMM_128, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x12", "MOVHLPS, MOVLPS", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 |
			InstructionFlag::EX_MNEMONIC | InstructionFlag::EX_MNEMONIC_MODRM_BASED);
		AddInstruction("0x0f 0x13", "MOVLPS", OperandType::MEM_64, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x14", "UNPCKLPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x15", "UNPCKHPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x16", "MOVLHPS, MOVHPS", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 |
			InstructionFlag::EX_MNEMONIC | InstructionFlag::EX_MNEMONIC_MODRM_BASED);
		AddInstruction("0x0f 0x17", "MOVHPS", OperandType::MEM_64, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x0f 0x18 /00", "PREFETCHNTA", OperandType::MEM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x18 /01", "PREFETCHT0", OperandType::MEM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x18 /02", "PREFETCHT1", OperandType::MEM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x18 /03", "PREFETCHT2", OperandType::MEM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x0f 0x28", "MOVAPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x29", "MOVAPS", OperandType::XMM_128, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x2a", "CVTPI2PS", OperandType::XMM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x2b", "MOVNTPS", OperandType::MEM_128, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x2c", "CVTTPS2PI", OperandType::MM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x2d", "CVTPS2PI", OperandType::MM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x2e", "UCOMISS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x2f", "COMISS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x0f 0x50", "MOVMSKPS", OperandType::REG_32, OperandType::XMM_RM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x51", "SQRTPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x52", "RSQRTPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x53", "RCPPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x54", "ANDPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x55", "ANDNPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x56", "ORPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x57", "XORPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x58", "ADDPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x59", "MULPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x5c", "SUBPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x5d", "MINPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x5e", "DIVPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x5f", "MAXPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x0f 0x70", "PSHUFW", OperandType::MM, OperandType::MM_64, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xc2", "CMP, PS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::EX_MNEMONIC);
		AddInstruction("0x0f 0xc4", "PINSRW", OperandType::MM, OperandType::R32_M16, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xc5", "PEXTRW", OperandType::REG_32, OperandType::MM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xc6", "SHUFPS", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xd7", "PMOVMSKB", OperandType::REG_32, OperandType::MM_RM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xda", "PMINUB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xde", "PMAXUB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xe0", "PAVGB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xe3", "PAVGW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xe4", "PMULHUW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xe7", "MOVNTQ", OperandType::MEM_64, OperandType::MM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xea", "PMINSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xee", "PMAXSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xf6", "PSADBW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xf7", "MASKMOVQ", OperandType::MM, OperandType::MM_RM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::MODRR_REQUIRED | InstructionFlag::BITS32);


		AddInstruction("0xf3 0x0f 0x10", "MOVSS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x11", "MOVSS", OperandType::XMM_32, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0xf3 0x0f 0x2a", "CVTSI2SS", OperandType::XMM, OperandType::RM_32_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);
		AddInstruction("0xf3 0x0f 0x2c", "CVTTSS2SI", OperandType::REG_32_64, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);
		AddInstruction("0xf3 0x0f 0x2d", "CVTSS2SI", OperandType::REG_32_64, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);

		AddInstruction("0xf3 0x0f 0x51", "SQRTSS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x52", "RSQRTSS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x53", "RCPSS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x58", "ADDSS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x59", "MULSS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x5c", "SUBSS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x5d", "MINSS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x5e", "DIVSS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x5f", "MAXSS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0xc2", "CMP, SS", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::EX_MNEMONIC);


	}

	void Builder::addSSE2(void)
	{
		SetCurrentInstructionSet(InstructionSet::SSE2);

		AddInstruction("0x0f 0x5a", "CVTPS2PD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x5b", "CVTDQ2PS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xc3", "MOVNTI", OperandType::MEM_32_64, OperandType::REG_32_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64
			| InstructionFlag::PRE_REX);

		AddInstruction("0x0f 0xd4", "PADDQ", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xf4", "PMULUDQ", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0xfb", "PSUBQ", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0x10", "MOVUPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x11", "MOVUPD", OperandType::XMM_128, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x12", "MOVLPD", OperandType::XMM, OperandType::MEM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x13", "MOVLPD", OperandType::MEM_64, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);


		AddInstruction("0x66 0x0f 0x14", "UNPCKLPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x15", "UNPCKHPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x16", "MOVHPD", OperandType::XMM, OperandType::MEM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x17", "MOVHPD", OperandType::MEM_64, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x28", "MOVAPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x29", "MOVAPD", OperandType::XMM_128, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x2a", "CVTPI2PD", OperandType::XMM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x2b", "MOVNTPD", OperandType::MEM_128, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x2c", "CVTTPD2PI", OperandType::MM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x2d", "CVTPD2PI", OperandType::MM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x2e", "UCOMISD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x2f", "COMISD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0x50", "MOVMSKPD", OperandType::REG_32, OperandType::XMM_RM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::MODRR_REQUIRED);
		AddInstruction("0x66 0x0f 0x51", "SQRTPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x54", "ANDPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x55", "ANDNPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x56", "ORPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x57", "XORPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x58", "ADDPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x59", "MULPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x5a", "CVTPD2PS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x5b", "CVTPS2DQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x5c", "SUBPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x5d", "MINPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x5e", "DIVPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x5f", "MAXPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0x60", "PUNPCKLBW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x61", "PUNPCKLWD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x62", "PUNPCKLDQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x63", "PACKSSWB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x64", "PCMPGTB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x65", "PCMPGTW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x66", "PCMPGTD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x67", "PACKUSWB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x68", "PUNPCKHBW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x69", "PUNPCKHWD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x6a", "PUNPCKHDQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x6b", "PACKSSDW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x6c", "PUNPCKLQDQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x6d", "PUNPCKHQDQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0x6e", "MOVD, INVALID, MOVQ", OperandType::XMM, OperandType::RM_32_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 |
			InstructionFlag::PRE_REX | InstructionFlag::EX_MNEMONIC2);

		AddInstruction("0x66 0x0f 0x6f", "MOVDQA", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x70", "PSHUFD", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0x71 /02", "PSRLW", OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x71 /04", "PSRAW", OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x71 /06", "PSLLW", OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x72 /02", "PSRLD", OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x72 /04", "PSRAD", OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x72 /06", "PSLLD", OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x73 /02", "PSRLQ", OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x73 /03", "PSRLDQ", OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x73 /06", "PSLLQ", OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x73 /07", "PSLLDQ", OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0x74", "PCMPEQB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x75", "PCMPEQW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x76", "PCMPEQD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);


		AddInstruction("0x66 0x0f 0x7e", "MOVD, INVALID, MOVQ", OperandType::RM_32_64, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 |
			InstructionFlag::PRE_REX | InstructionFlag::EX_MNEMONIC2);

		AddInstruction("0x66 0x0f 0x7f", "MOVDQA", OperandType::XMM_128, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);


		// some more...
		AddInstruction("0x66 0x0f 0xc2", "CMP, PD", OperandType::XMM_128, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::EX_MNEMONIC);

		AddInstruction("0x66 0x0f 0xc4", "PINSRW", OperandType::XMM, OperandType::R32_M16, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xc5", "PEXTRW", OperandType::REG_32, OperandType::XMM_RM, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xc6", "SHUFPD", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xd1", "PSRLW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xd2", "PSRLD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xd3", "PSRLQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xd4", "PADDQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xd5", "PMULLW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xd6", "MOVQ", OperandType::XMM_64, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xd7", "PMOVMSKB", OperandType::REG_32, OperandType::XMM_RM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::MODRR_REQUIRED);
		AddInstruction("0x66 0x0f 0xd8", "PSUBUSB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xd9", "PSUBUSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xda", "PMINUB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xdb", "PAND", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xdc", "PADDUSB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xdd", "PADDUSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xde", "PMAXUB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xdf", "PANDN", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);


		AddInstruction("0x66 0x0f 0xe0", "PAVGB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xe1", "PSRAW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xe2", "PSRAD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xe3", "PAVGW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xe4", "PMULHUW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xe5", "PMULHW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xe6", "CVTTPD2DQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xe7", "MOVNTDQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xe8", "PSUBSB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xe9", "PSUBSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xea", "PMINSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xeb", "POR", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xec", "PADDSB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xed", "PADDSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xee", "PMAXSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xef", "PXOR", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xf1", "PSLLW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xf2", "PSLLD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xf3", "PSLLQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xf4", "PMULUDQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xf5", "PMADDWD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xf6", "PSADBW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0xf7", "MASKMOVDQU", OperandType::XMM, OperandType::XMM_RM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::MODRR_REQUIRED);
		AddInstruction("0x66 0x0f 0xf8", "PSUBB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xf9", "PSUBW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xfa", "PSUBD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xfb", "PSUBQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0xfc", "PADDB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xfd", "PADDW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xfe", "PADDD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0xf2 0x0f 0x10", "MOVSD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x11", "MOVSD", OperandType::XMM_64, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0xf2 0x0f 0x2a", "CVTSI2SD", OperandType::XMM, OperandType::RM_32_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);
		AddInstruction("0xf2 0x0f 0x2c", "CVTTSD2SI", OperandType::REG_32_64, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);
		AddInstruction("0xf2 0x0f 0x2d", "CVTSD2SI", OperandType::REG_32_64, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::BITS64 | InstructionFlag::PRE_REX);
		AddInstruction("0xf2 0x0f 0x51", "SQRTSD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x58", "ADDSD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x59", "MULSD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x5a", "CVTSD2SS", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x5c", "SUBSD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x5d", "MINSD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x5e", "DIVSD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x5f", "MAXSD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0xf2 0x0f 0x70", "PSHUFLW", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0xc2", "CMP, SD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::EX_MNEMONIC);
		AddInstruction("0xf2 0x0f 0xd6", "MOVDQ2Q", OperandType::MM, OperandType::XMM_RM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0xe6", "CVTPD2DQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x5a", "CVTSS2SD", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x5b", "CVTTPS2DQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x6f", "MOVDQU", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x70", "PSHUFHW", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x7e", "MOVQ", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x7f", "MOVDQU", OperandType::XMM_128, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0xd6", "MOVQ2DQ", OperandType::XMM, OperandType::MM_RM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::MODRR_REQUIRED);
		AddInstruction("0xf3 0x0f 0xe6", "CVTDQ2PD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

	}

	void Builder::addSSE3(void)
	{
		SetCurrentInstructionSet(InstructionSet::SSE3);

		AddInstruction("0x66 0x0f 0x7c", "HADDPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x7d", "HSUBPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0xd0", "ADDSUBPD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		//		AddInstruction("0x66 0x0f 0x7c", "FISTTP", OperandType::XMM, OperandType::XMM_128,
		//			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		//		AddInstruction("0x66 0x0f 0x7c", "FISTTP", OperandType::XMM, OperandType::XMM_128,
		//			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		//		AddInstruction("0x66 0x0f 0x7c", "FISTTP", OperandType::XMM, OperandType::XMM_128,
		//			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x12", "MOVDDUP", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x12", "MOVSLDUP", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x7c", "HADDPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x7d", "HSUBPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0xd0", "ADDSUBPS", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0xf0", "LDDQU", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x16", "MOVSHDUP", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
	}

	void Builder::addSSSE3(void)
	{
		SetCurrentInstructionSet(InstructionSet::SSSE3);

		AddInstruction("0x0f 0x38 0x00", "PSHUFB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x01", "PHADDW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x02", "PHADDD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x03", "PHADDSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x04", "PMADDUBSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x05", "PHSUBW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x06", "PHSUBD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x07", "PHSUBSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x08", "PSIGNB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x09", "PSIGNW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x0a", "PSIGND", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x0b", "PMULHRSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x1c", "PABSB", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x1d", "PABSW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x38 0x1e", "PABSD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x0f 0x3a 0x0f", "PALIGNR", OperandType::MM, OperandType::MM_64, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0x38 0x00", "PSHUFB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x01", "PHADDW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x02", "PHADDD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x03", "PHADDSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x04", "PMADDUBSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x05", "PHSUBW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x06", "PHSUBD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x07", "PHSUBSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x08", "PSIGNB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x09", "PSIGNW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x0a", "PSIGND", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x0b", "PMULHRSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x1c", "PABSB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x1d", "PABSW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x1e", "PABSD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x3a 0x0f", "PALIGNR", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);


	}

	void Builder::addSSE4_1(void)
	{
		SetCurrentInstructionSet(InstructionSet::SSE4_1);

		AddInstruction("0x66 0x0f 0x38 0x3c", "PMAXSB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x3d", "PMAXSD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x3f", "PMAXUD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x3e", "PMAXUW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x38", "PMINSB", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x39", "PMINSD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x3b", "PMINUD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x3a", "PMINUW", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0x38 0x20", "PMOVSXBW", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x21", "PMOVSXBD", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x22", "PMOVSXBQ", OperandType::XMM, OperandType::XMM_16,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x66 0x0f 0x38 0x23", "PMOVSXWD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x24", "PMOVSXWQ", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x25", "PMOVSXDQ", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x30", "PMOVZXBW", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x31", "PMOVZXBD", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x32", "PMOVZXBQ", OperandType::XMM, OperandType::XMM_16,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x33", "PMOVZXWD", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x34", "PMOVZXWQ", OperandType::XMM, OperandType::XMM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x35", "PMOVZXDQ", OperandType::XMM, OperandType::XMM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x28", "PMULDQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x40", "PMULLD", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);


		AddInstruction("0x66 0x0f 0x3a 0x09", "ROUNDPD", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x3a 0x08", "ROUNDPS", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x3a 0x0b", "ROUNDSD", OperandType::XMM, OperandType::XMM_64, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x3a 0x0a", "ROUNDSS", OperandType::XMM, OperandType::XMM_32, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

	}

	void Builder::addSSE4_2(void)
	{
		SetCurrentInstructionSet(InstructionSet::SSE4_1);

		AddInstruction("0xf2 0x0f 0x38 0xf0", "CRC32", OperandType::REG_32_64, OperandType::RM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf2 0x0f 0x38 0xf1", "CRC32", OperandType::REG_32_64, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x17", "PTEST", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x61", "PCMPESTRI", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x60", "PCMPESTRM", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x63", "PCMPISTRI", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x62", "PCMPISTRM", OperandType::XMM, OperandType::XMM_128, OperandType::IMM_8,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x66 0x0f 0x38 0x37", "PCMPGTQ", OperandType::XMM, OperandType::XMM_128,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0xf3 0x0f 0xb8", "POPCNT", OperandType::REG_FULL, OperandType::RM_FULL,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::PRE_OP_SIZE);
	}

	void Builder::addSSE4_A(void)
	{
		SetCurrentInstructionSet(InstructionSet::SSE4_A);

		// gonna have to support dual iim8 for some of these.
#if 0
		AddInstruction("0x66 0x0f 0x79", "EXTRQ", OperandType::XMM, OperandType::XMM_RM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0xf2 0x0f 0x79", "INSERTQ", OperandType::XMM, OperandType::XMM_RM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0xf2 0x0f 0x2b", "MOVNTSD", OperandType::MEM_64, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0xf3 0x0f 0x2b", "MOVNTSS", OperandType::MEM_32, OperandType::XMM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
#endif
	}

	void Builder::add3DNOW(void)
	{
		SetCurrentInstructionSet(InstructionSet::NOW3D);

		AddInstruction("0x0f 0x0d /00", "PREFETCH", OperandType::MEM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);
		AddInstruction("0x0f 0x0d /01", "PREFETCHW", OperandType::MEM,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32);

		AddInstruction("0x0f 0x0e", "FEMMS", OperandType::NONE, InstructionFlag::NONE);

		AddInstruction("0x0f 0x0f 0x0d", "PI2FD", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0x1d", "PF2ID", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0x90", "PFCMPGE", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0x94", "PFMIN", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0x96", "PFRCP", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0x97", "PFRSQRT", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0x9a", "PFSUB", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0x9e", "PFADD", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xa0", "PFCMPGT", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xa4", "PFMAX", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xa6", "PFRCPIT1", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xa7", "PFRSQIT1", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xaa", "PFSUBR", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xae", "PFACC", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xb0", "PFCMPEQ", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xb4", "PFMUL", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xb6", "PFRCPIT2", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xb7", "PMULHRW", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xbf", "PAVGUSB", OperandType::MM, OperandType::MM_64, InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);

	}

	void Builder::add3DNOWEXT(void)
	{
		SetCurrentInstructionSet(InstructionSet::NOW3DEXT);

		AddInstruction("0x0f 0x0f 0x0c", "PI2FW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0x1c", "PF2IW", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0x8a", "PFNACC", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0x8e", "PFPNACC", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
		AddInstruction("0x0f 0x0f 0xbb", "PSWAPD", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::BITS32 | InstructionFlag::NOW3D_FETCH);
	}

	void Builder::addVMX(void)
	{
		SetCurrentInstructionSet(InstructionSet::VMX);

	}

	void Builder::addSVM(void)
	{
		SetCurrentInstructionSet(InstructionSet::SVM);

	}

	void Builder::addAVX(void)
	{
		SetCurrentInstructionSet(InstructionSet::AVX);

	}

	void Builder::addFMA(void)
	{
		SetCurrentInstructionSet(InstructionSet::FMA);

	}

	void Builder::addCollisions()
	{
		SetCurrentInstructionSet(InstructionSet::NONE);

		AddInstruction("0x90", "NOP", OperandType::NONE, InstructionFlag::COLLISION);

		AddInstruction("0x63", "ARPL", OperandType::RM_16, OperandType::REG_16,
			InstructionFlag::MODRM_REQUIRED);
		AddInstruction("0x63", "MOVSXD", OperandType::REG_32_64, OperandType::RM_32,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::PRE_REX |
			InstructionFlag::BITS64 | InstructionFlag::COLLISION);

		SetCurrentInstructionSet(InstructionSet::NOW3D);

		AddInstruction("0x0f 0x0f", "NOW3D", OperandType::MM, OperandType::MM_64,
			InstructionFlag::MODRM_REQUIRED | InstructionFlag::NOW3D_FETCH | InstructionFlag::COLLISION);

	}

	void Builder::addInstructionFlags(void)
	{
		// add instruction flags to instructions.

		struct InstFlags
		{
			const char* pMnem;
			uint8_t mod, tested, undefined;
		};

		InstFlags flags[] = {
			{ "AAA", PackedCpuFlag::AUX | PackedCpuFlag::CARRY, PackedCpuFlag::AUX, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN },
			{ "AAA", PackedCpuFlag::AUX | PackedCpuFlag::CARRY, PackedCpuFlag::AUX, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY },
			{ "AAS",  PackedCpuFlag::AUX | PackedCpuFlag::CARRY, PackedCpuFlag::AUX, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY },
			{ "AAD",  PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::AUX | PackedCpuFlag::CARRY },
			{ "AAM",  PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::AUX | PackedCpuFlag::CARRY },
			{ "ADC",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, PackedCpuFlag::CARRY, 0 },
			{ "ADD",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "AND",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::AUX },
			{ "ARPL",  PackedCpuFlag::ZERO, 0, 0 },
			{ "BSF",  PackedCpuFlag::ZERO, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY },
			{ "BSR",  PackedCpuFlag::ZERO, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY },
			{ "BT",  PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY },
			{ "BTS",  PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY },
			{ "BTR",  PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY },
			{ "BTC",  PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY },
			{ "CLC",  PackedCpuFlag::CARRY, 0, 0 },
			{ "CLD",  PackedCpuFlag::DIRECTION, 0, 0 },
			{ "CLI",  PackedCpuFlag::INTERRUPT, 0, 0 },
			{ "CMC",  PackedCpuFlag::CARRY, 0, 0 },
			{ "CMP",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "CMPXCHG",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "CMPXCHG8B",  PackedCpuFlag::ZERO, 0, 0 },
			{ "CMPXCHG16B",  PackedCpuFlag::ZERO, 0, 0 }, // Same inst as previous.
			{ "COMSID", PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "COMISS",  PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "DAA",  PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, PackedCpuFlag::AUX | PackedCpuFlag::CARRY, PackedCpuFlag::OVERFLOW },
			{ "DAS",  PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, PackedCpuFlag::AUX | PackedCpuFlag::CARRY, PackedCpuFlag::OVERFLOW },
			{ "DEC",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY, 0, 0 },
			{ "DIV",  0, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY },
			{ "FCOMI",  PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "FCOMIP",  PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "FUCOMI",  PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "FUCOMIP",  PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "IDIV",  0, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY },
			{ "IMUL",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::CARRY, 0, PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY },
			{ "INC",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY, 0, 0 },
			{ "UCOMSID",  PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "UCOMISS",  PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "IRET",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY | PackedCpuFlag::INTERRUPT | PackedCpuFlag::DIRECTION, 0, 0 },
			{ "LAR",  PackedCpuFlag::ZERO, 0, 0 },
			{ "LOOPZ",  0, PackedCpuFlag::ZERO, 0 },
			{ "LOOPNZ",  0, PackedCpuFlag::ZERO, 0 },
			{ "LSL",  PackedCpuFlag::ZERO, 0, 0 },
			{ "LZCNT",  PackedCpuFlag::ZERO | PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::AUX | PackedCpuFlag::PARITY },
			{ "MUL",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::CARRY, 0, PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY },
			{ "NEG",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "OR",  PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY, PackedCpuFlag::AUX, 0 },
			{ "POPCNT",  PackedCpuFlag::ZERO, 0, 0 },
			{ "POPF",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY | PackedCpuFlag::INTERRUPT | PackedCpuFlag::DIRECTION, 0, 0 },
			{ "RSM",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY | PackedCpuFlag::INTERRUPT | PackedCpuFlag::DIRECTION, 0, 0 },
			{ "SAHF",  PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "SBB",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, PackedCpuFlag::CARRY, 0 },
			{ "STC",  PackedCpuFlag::CARRY, 0, 0 },
			{ "STD",  PackedCpuFlag::DIRECTION, 0, 0 },
			{ "STI",  PackedCpuFlag::INTERRUPT, 0, 0 },
			{ "SUB",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "TEST",  PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY, 0, PackedCpuFlag::AUX },
			{ "VERR",  PackedCpuFlag::ZERO, 0, 0 },
			{ "VERW",  PackedCpuFlag::ZERO, 0, 0 },
			{ "XADD",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, 0 },
			{ "XOR",  PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY, 0, PackedCpuFlag::AUX },
			{ "MOVS",  0, PackedCpuFlag::DIRECTION, 0 },
			{ "LODS",  0, PackedCpuFlag::DIRECTION, 0 },
			{ "STOS",  0, PackedCpuFlag::DIRECTION, 0 },
			{ "CMPS",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, PackedCpuFlag::DIRECTION, 0 },
			{ "SCAS",  PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::AUX | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, PackedCpuFlag::DIRECTION, 0 },
			{ "INS",  0, PackedCpuFlag::DIRECTION, 0 },
			{ "OUTS",  0, PackedCpuFlag::DIRECTION, 0 }
		};

		auto assignFlags = [](SourceInstruction& inst, const InstFlags& flags) {
			inst.modifiedFlags = flags.mod;
			inst.testedFlags = flags.tested;
			inst.undefinedFlags = flags.undefined;
			};

		for (size_t i = 0; i < instructions_.size(); i++)
		{
			SourceInstruction& inst = instructions_[i];

			for (const auto& mnem : inst.mnemonics)
			{
				const size_t num = sizeof(flags) / sizeof(flags[0]);
				for (size_t j = 0; j < num; j++)
				{
					if (mnem == flags[j].pMnem)
					{
						assignFlags(inst, flags[j]);
						break;
					}
				}
			}
		}

		InstFlags shiftFlagsCosnt1[] = {
			{ "RCL", PackedCpuFlag::OVERFLOW | PackedCpuFlag::CARRY, PackedCpuFlag::CARRY, 0 },
			{ "RCR", PackedCpuFlag::OVERFLOW | PackedCpuFlag::CARRY, PackedCpuFlag::CARRY, 0 },

			{ "ROL", PackedCpuFlag::OVERFLOW | PackedCpuFlag::CARRY, 0, 0 },
			{ "ROR", PackedCpuFlag::OVERFLOW | PackedCpuFlag::CARRY, 0, 0 },

			{ "SAL", PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::AUX },
			{ "SAR", PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::AUX },
			{ "SHL", PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::AUX },
			{ "SHR", PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::AUX },

			{ "SHLD", PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::AUX },
			{ "SHRD", PackedCpuFlag::OVERFLOW | PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::AUX },
		};

		InstFlags shiftFlags[] = {
			{ "RCL", PackedCpuFlag::CARRY, PackedCpuFlag::CARRY, PackedCpuFlag::OVERFLOW },
			{ "RCR", PackedCpuFlag::CARRY, PackedCpuFlag::CARRY, PackedCpuFlag::OVERFLOW },

			{ "ROL", PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW },
			{ "ROR", PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW },

			{ "SAL", PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::AUX },
			{ "SAR", PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::AUX  },
			{ "SHL", PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::AUX  },
			{ "SHR", PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::AUX  },

			{ "SHLD", PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::AUX  },
			{ "SHRD", PackedCpuFlag::SIGN | PackedCpuFlag::ZERO | PackedCpuFlag::PARITY | PackedCpuFlag::CARRY, 0, PackedCpuFlag::OVERFLOW | PackedCpuFlag::AUX  },
		};

		static_assert(sizeof(shiftFlagsCosnt1) == sizeof(shiftFlags), "Must map 1:1");

		for (size_t i = 0; i < instructions_.size(); i++)
		{
			SourceInstruction& inst = instructions_[i];

			for (const auto& mnem : inst.mnemonics)
			{
				const size_t num = sizeof(shiftFlagsCosnt1) / sizeof(shiftFlagsCosnt1[0]);
				for (size_t j = 0; j < num; j++)
				{
					if (mnem == shiftFlagsCosnt1[j].pMnem)
					{
						if (inst.operands[0] == OperandType::CONST1)
						{
							assignFlags(inst, shiftFlagsCosnt1[j]);
						}
						else
						{
							assignFlags(inst, shiftFlags[j]);
						}
						break;
					}
				}
			}
		}


		auto flagsForCondition = [](const char* pConditionStr) -> uint8_t {

			if (StrUtil::IsEqual(pConditionStr, "O")) {
				return PackedCpuFlag::OVERFLOW;
			}
			if (StrUtil::IsEqual(pConditionStr, "NO")) {
				return PackedCpuFlag::OVERFLOW;
			}

			if (StrUtil::IsEqual(pConditionStr, "B")) {
				return PackedCpuFlag::CARRY;
			}
			if (StrUtil::IsEqual(pConditionStr, "AE")) {
				return PackedCpuFlag::CARRY;
			}

			if (StrUtil::IsEqual(pConditionStr, "Z")) {
				return PackedCpuFlag::ZERO;
			}
			if (StrUtil::IsEqual(pConditionStr, "NZ")) {
				return PackedCpuFlag::ZERO;
			}

			if (StrUtil::IsEqual(pConditionStr, "BE")) {
				return PackedCpuFlag::CARRY | PackedCpuFlag::ZERO;
			}
			if (StrUtil::IsEqual(pConditionStr, "A")) {
				return PackedCpuFlag::CARRY | PackedCpuFlag::ZERO;
			}

			if (StrUtil::IsEqual(pConditionStr, "S")) {
				return PackedCpuFlag::SIGN;
			}
			if (StrUtil::IsEqual(pConditionStr, "NS")) {
				return PackedCpuFlag::SIGN;
			}

			if (StrUtil::IsEqual(pConditionStr, "P")) {
				return PackedCpuFlag::PARITY;
			}
			if (StrUtil::IsEqual(pConditionStr, "NP")) {
				return PackedCpuFlag::PARITY;
			}

			if (StrUtil::IsEqual(pConditionStr, "L")) {
				return PackedCpuFlag::SIGN | PackedCpuFlag::OVERFLOW;
			}
			if (StrUtil::IsEqual(pConditionStr, "GE")) {
				return PackedCpuFlag::SIGN | PackedCpuFlag::OVERFLOW;
			}
			if (StrUtil::IsEqual(pConditionStr, "LE")) {
				return PackedCpuFlag::SIGN | PackedCpuFlag::OVERFLOW | PackedCpuFlag::ZERO;
			}
			if (StrUtil::IsEqual(pConditionStr, "G")) {
				return PackedCpuFlag::SIGN | PackedCpuFlag::OVERFLOW | PackedCpuFlag::ZERO;
			}


			if (StrUtil::IsEqual(pConditionStr, "U")) {
				return PackedCpuFlag::PARITY;
			}
			if (StrUtil::IsEqual(pConditionStr, "NU")) {
				return PackedCpuFlag::PARITY;
			}
			if (StrUtil::IsEqual(pConditionStr, "E")) {
				return PackedCpuFlag::ZERO;
			}
			if (StrUtil::IsEqual(pConditionStr, "NE")) {
				return PackedCpuFlag::ZERO;
			}
			if (StrUtil::IsEqual(pConditionStr, "NB")) {
				return PackedCpuFlag::CARRY;
			}
			if (StrUtil::IsEqual(pConditionStr, "NBE")) {
				return PackedCpuFlag::CARRY | PackedCpuFlag::ZERO;
			}

			X_ASSERT_UNREACABLE();
			return 0;
			};

		// look for anything with prefix: SET, CMOD, FCMOV and parse the condition type from name
		for (size_t i = 0; i < instructions_.size(); i++)
		{
			SourceInstruction& inst = instructions_[i];

			for (const auto& mnem : inst.mnemonics)
			{
				// only if the string is found at the start process it.
				if (mnem.find("SET") == 0)
				{
					inst.testedFlags = flagsForCondition(mnem.c_str() + 3);
					break;
				}
				else if (mnem.find("CMOD") == 0)
				{
					inst.testedFlags = flagsForCondition(mnem.c_str() + 4);
					break;
				}
				else if (mnem.find("FCMOV") == 0)
				{
					inst.testedFlags = flagsForCondition(mnem.c_str() + 5);
					break;
				}
			}
		}

		// all the jmp instructions.
		for (size_t i = 0; i < instructions_.size(); i++)
		{
			SourceInstruction& inst = instructions_[i];

			for (const auto& mnem : inst.mnemonics)
			{
				// only if the string is found at the start process it.
				if (mnem.length() > 1 && mnem[0] == 'J')
				{
					// exclude any that are prefixed with: JM, JC, JE, JR

					if (mnem[1] != 'M' && mnem[1] != 'C' && mnem[1] != 'E' && mnem[1] != 'R')
					{
						inst.testedFlags = flagsForCondition(mnem.c_str() + 1);
						break;
					}
				}
			}
		}


	}

	void Builder::SetCurrentInstructionSet(InstructionSet::Enum instructionSet)
	{
		curInstructionSet_ = instructionSet;
	}

	void Builder::AddInstruction(const char* OpCodes, const char* Mnemonic,
		OperandType::Enum op1,
		uint64_t flags, // InstructionFlags
		FlowControl::Enum flow)
	{
		AddInstruction(OpCodes, Mnemonic, op1, OperandType::NONE,
			OperandType::NONE, OperandType::NONE, flags, flow);

	}

	void Builder::AddInstruction(const char* OpCodes, const char* Mnemonic,
		OperandType::Enum op1, OperandType::Enum op2,
		uint64_t flags, // InstructionFlags
		FlowControl::Enum flow)
	{
		AddInstruction(OpCodes, Mnemonic, op1, op2, OperandType::NONE,
			OperandType::NONE, flags, flow);
	}

	void Builder::AddInstruction(const char* OpCodes, const char* Mnemonic,
		OperandType::Enum op1, OperandType::Enum op2, OperandType::Enum op3,
		uint64_t flags, // InstructionFlags
		FlowControl::Enum flow)
	{
		AddInstruction(OpCodes, Mnemonic, op1, op2, op3, OperandType::NONE,
			flags, flow);
	}

	void Builder::AddInstruction(const char* OpCodes, const char* Mnemonic,
		OperandType::Enum op1, OperandType::Enum op2, OperandType::Enum op3, OperandType::Enum op4,
		uint64_t flags, // InstructionFlags
		FlowControl::Enum flow)
	{
		SourceInstruction inst;

		StrUtil::tokenize<std::string>(inst.mnemonics, Mnemonic, ",");
		inst.Flags = flags;
		inst.flow = flow;
		inst.set = curInstructionSet_;

		bool modRMInc = false;

		std::string opCodes(OpCodes);
		std::vector<std::string> tokens;
		StrUtil::tokenize(tokens, opCodes, std::string(" "));


		if (tokens.empty()) {
			X_ASSERT_UNREACABLE();
			return;
		}

		size_t i = 0;
		for (i = 0; i < tokens.size() - 1; i++)
		{
			const std::string& opStr = tokens[i];
			uint8_t op = StrUtil::fromString<uint8_t>(opStr);
			inst.ops[i] = op;
		}

		{
			const std::string& opLast = tokens.back();

			if (StrUtil::Find<std::string>(opLast, "//") != std::string::npos) // divided inst	
			{
				modRMInc = true;
				if (tokens.size() == 1) {
					X_ASSERT_UNREACABLE();
				}
				else if (tokens.size() == 2) {
					inst.opLen = OpCodeLen::OL_1d;
				}
				else if (tokens.size() == 3) {
					inst.opLen = OpCodeLen::OL_2d;
				}
				else {
					X_ASSERT_UNREACABLE();
				}

				inst.ops[i] = StrUtil::fromString<uint8_t>(("0x" + std::string(opLast.c_str() + 2)));
			}
			else if (StrUtil::Find<std::string>(opLast, "/") != std::string::npos) // group inst
			{
				modRMInc = true;

				if (tokens.size() == 1) {
					X_ASSERT_UNREACABLE();
				}
				else if (tokens.size() == 2) {
					inst.opLen = OpCodeLen::OL_13;
				}
				else if (tokens.size() == 3) {
					inst.opLen = OpCodeLen::OL_23;
				}
				else if (tokens.size() == 4) {
					inst.opLen = OpCodeLen::OL_33;
				}
				else {
					X_ASSERT_UNREACABLE();
				}

				inst.ops[i] = StrUtil::fromString<uint8_t>(opLast.c_str() + 1);
			}
			else
			{
				if (tokens.size() == 1) {
					inst.opLen = OpCodeLen::OL_1;
				}
				else if (tokens.size() == 2) {
					inst.opLen = OpCodeLen::OL_2;
				}
				else if (tokens.size() == 3) {
					inst.opLen = OpCodeLen::OL_3;
				}
				else if (tokens.size() == 4) {
					inst.opLen = OpCodeLen::OL_4;
				}
				else {
					X_ASSERT_UNREACABLE();
				}

				inst.ops[i] = StrUtil::fromString<uint8_t>(opLast);
			}
		}

		// check for mandatory prefix. (if more than 2 ops, not possible with 1)
		if (tokens.size() > 1) {
			for (auto& pre : mandatoryPrefix) {
				if (pre.first == inst.ops[0]) {
					inst.prefix = inst.ops[0];
					inst.prefixed = true;
					inst.entry = pre.second;

					// reduce the op length (+ shift down) since writing the instruction without it's prefix in to table.
					// makes the decoding side more simple.
					std::rotate(inst.ops, inst.ops + 1, inst.ops + sizeof(inst.ops));

					inst.ops[3] = 0; // not required, but stops confusion when inspecting.
					inst.opLen = OpCodeLen::NextOpLen(inst.opLen);
				}
			}
		}

		if (modRMInc) {
			inst.Flags |= InstructionFlag::MODRM_INCLUDED;
		}

		inst.operands[0] = op1;
		inst.operands[1] = op2;
		inst.operands[2] = op3;
		inst.operands[3] = op4;

		// turn EXPLICIT_REG in to NONE so runtime only has to check if OP is not NONE before trying to decode.
		for (i = 0; i < 4; i++)
		{
			if (inst.operands[i] == OperandType::EXPLICIT_REG) {
				inst.operands[i] = OperandType::NONE;
			}
		}

		if (op3 != OperandType::NONE) {
			inst.Flags |= InstructionFlag::USE_OP3;
		}
		if (op4 != OperandType::NONE) {
			inst.Flags |= InstructionFlag::USE_OP4;
		}

		if (bitUtil::IsBitFlagSet(inst.Flags, InstructionFlag::COLLISION)) {
			collisions_.push_back(inst);
			return;
		}

		instructions_.push_back(inst);
	}

	void Builder::BuildTable(void)
	{
		// ok so we process each instruction creating child tables if not yet created.
		// until we reach a opcode len of OL_1 where we assign the instruction info to this node.
		// We can have different sized tables depending on the type of opcode len, at each op.
		// if we already have a table type for a given opcode that is different to one we would of created
		// that is a error :(
		size_t i = 0;

		for (i = 0; i < instructions_.size(); i++)
		{
			SourceInstruction& inst = instructions_[i];

			SourceInstruction::OpCodes* pOps = inst.ops;

			AddInstructionToTable_r(root_, pOps, inst.opLen, inst);
		}
	}

	std::string Builder::FormatMnemonic(const std::string& str)
	{
		std::string s(str);
		s = StrUtil::trim(s);
		std::replace(s.begin(), s.end(), ' ', '_');
		return s;
	}

	uint16_t Builder::AddMnemonic(const std::string& mnem)
	{
		std::string trimmed = StrUtil::trim(mnem);

		// find it
		for (const auto& m : mnemoics_)
		{
			if (m.mnemonic == trimmed) {
				return m.index;
			}
		}

		// new
		MnemoicInfo info;
		info.mnemonic = trimmed;
		info.index = static_cast<uint16_t>(mnemoics_.size());

		mnemoics_.push_back(info);

		return info.index;
	}

	void Builder::AddInstructionToTable_r(TableNode& node, SourceInstruction::OpCodes* pOps,
		OpCodeLen::Enum opLen, SourceInstruction& inst)
	{
		uint8_t op = pOps[0];

		if (!inst.tag.empty()) {
			inst.tag += " ";
		}
		inst.tag += StrUtil::to_string_hex<uint32_t>(op);

		// end of the line?
		if (opLen == OpCodeLen::OL_1)
		{
			if (inst.prefixed)
			{
				// if nothing here just create a prefixed table.
				if (!node.HasChildAt(op))
				{
					node.children[op] = new TableNode(NodeType::PREFIXED, &node);
				}

				// if we have a table here and it's prefixed, add to table.
				if (node.isChildTable(op) && node.ChildAt(op)->type == NodeType::PREFIXED)
				{
					TableNode* pTable = node.ChildAt(op);

					// check for col.
					if (pTable->HasChildAt(inst.entry)) {
						X_ASSERT_UNREACABLE();
					}

					TableNode* pNode = new TableNode(NodeType::NONE, &node);
					pNode->pInst = &inst;

					pTable->children[inst.entry] = pNode;
				}
				else if (node.isChildValue(op))
				{
					TableNode* pOld = node.ChildAt(op);

					// collision?
					if (pOld->pInst->entry == inst.entry) {
						X_ASSERT_UNREACABLE();
					}

					TableNode* pTable = new TableNode(NodeType::PREFIXED, &node);

					// move old
					pTable->children[pOld->pInst->entry] = pOld;

					// and new.
					TableNode* pNode = new TableNode(NodeType::NONE, &node);
					pNode->pInst = &inst;
					pTable->children[inst.entry] = pNode;

					// override with new table.
					node.children[op] = pTable;
				}
				else
				{
					// table here already that's not prefixed :(
					X_ASSERT_UNREACABLE();
				}

				return;
			}

			// collision.
			if (node.HasChildAt(op))
			{
				X_ASSERT_UNREACABLE();
			}

			TableNode* pNode = new TableNode(NodeType::NONE, &node);
			pNode->pInst = &inst;
			node.children[op] = pNode;
			return;
		}

		// we need to make a table if we don't already have one.
		if (!node.isChildTable(op))
		{
			NodeType::Enum type = NodeType::FULL;
			if (opLen == OpCodeLen::OL_13) {
				type = NodeType::GROUP;
			}
			else if (opLen == OpCodeLen::OL_1d) {
				type = NodeType::DIVIDED;
			}

			TableNode* pChild = new TableNode(type, &node);
			pChild->parentIdx = op;
			node.children[op] = pChild;
		}
		else if (node.isChildValue(op))
		{
			// must be a table, not a value
			X_ASSERT_UNREACABLE();
		}

		// get next ops len.
		opLen = OpCodeLen::NextOpLen(opLen);
		AddInstructionToTable_r(*node.ChildAt(op), ++pOps, opLen, inst);
	}

	// ----------------------------------------------

} // namespace TDiss