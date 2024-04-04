#pragma once


namespace TDiss
{
	struct OpCodeLen
	{
		enum Enum
		{
			OL_1,	// insert
			OL_13,	// has 3 bit reg
			OL_1d,
			OL_23,	// has 3 bit reg
			OL_2d,
			OL_33,	// has 3 bit reg
			OL_2,	// std 2 byte op
			OL_3,	// std 3 byte op
			OL_4
		};

		static OpCodeLen::Enum NextOpLen(OpCodeLen::Enum len);
		static size_t NumOps(OpCodeLen::Enum len);
	};

	struct SourceInstruction
	{
	public:
		typedef uint8_t OpCodes;
		typedef std::vector<std::string> MnemonicArr;

		const static int32_t MAX_OPERANDS = 4;

	public:
		SourceInstruction();

		bool HasOperands(void) const;
		size_t NumOperands(void) const;

		MnemonicArr mnemonics;
		std::string tag;
		OpCodes ops[MAX_OPERANDS];
		OpCodeLen::Enum opLen;

		OperandType::Enum operands[MAX_OPERANDS];

		uint64_t Flags; // InstructionFlag
		InstructionSet::Enum set;
		FlowControl::Enum flow;
		// man prefix
		bool prefixed;
		uint8_t prefix;
		uint8_t entry;
		uint8_t _pad;

		uint8_t modifiedFlags;
		uint8_t testedFlags;
		uint8_t undefinedFlags;
	};


	struct TableNode
	{
		TableNode(NodeType::Enum type, TableNode* pParent);
		~TableNode();

		inline bool HasChildAt(size_t idx) const {
			return children[idx] != nullptr;
		}
		inline TableNode* ChildAt(size_t idx) {
			return children[idx];
		}

		inline size_t Size(void) const {
			return children.size();
		}

		inline bool isChildTable(size_t idx) {
			if (children[idx]) {
				return children[idx]->type != NodeType::NONE;
			}
			return false;
		}
		inline bool isChildValue(size_t idx) {
			if (children[idx]) {
				return children[idx]->type == NodeType::NONE;
			}
			return false;
		}

		inline SourceInstruction* ChildValue(size_t idx) {
			if (children[idx]) {
				if (children[idx]->type == NodeType::NONE) {
					return children[idx]->pInst;
				}
			}
			return nullptr;
		}

		std::string GetTagHierarchyStr(void) const;
		std::vector<uint8_t> GetTagHierarchy(void) const;

		// values
		SourceInstruction* pInst;
		TableNode* pParent_;

		// child table.
		NodeType::Enum type;
		int32_t parentIdx;

		std::vector<TableNode*> children;
	};


	class OperandBuilder
	{
	public:
	
		struct OperandResult
		{
			OperandResult();
			OperandResult(OperandTypeAbs::Enum opType);
			OperandResult(OperandTypeAbs::Enum opType, int32_t size);
			OperandResult(OperandTypeAbs::Enum opType, int32_t size, int32_t index);

			OperandTypeAbs::Enum operandType;
			int32_t size;
			int32_t index;
		};

		struct ImmType
		{
			enum Enum
			{
				NONE,
				S8,
				U8,
				S16,
				U16,
				S32,
				U32,
				S64,
				U64,
				PTR,
			};
		};

		struct OperandInstructionInfo
		{
			OperandInstructionInfo();
			OperandInstructionInfo(uint64_t displacement, uint8_t displacementSize, 
				RegIndex::Enum segment, RegIndex::Enum base, uint8_t scale);
			OperandInstructionInfo(ImmVal imm, ImmType::Enum immType);
			explicit OperandInstructionInfo(RegIndex::Enum segment);


			ImmType::Enum immType;
			ImmVal imm;

			uint64_t displacement;
			RegIndex::Enum segment;
			RegIndex::Enum base;
			uint8_t scale;
			uint8_t displacementSize;
		};

	private:
		struct OperandData : public OperandResult
		{
			OperandData();
			OperandData(const std::string& op, OperandTypeAbs::Enum type);
			OperandData(const std::string& op, OperandTypeAbs::Enum type, int32_t size, int32_t index);
			// OperandInstructionInfo
			OperandData(const std::string& op, OperandTypeAbs::Enum type, OperandInstructionInfo info);
			OperandData(const std::string& op, OperandTypeAbs::Enum type,
				int32_t size, int32_t index, OperandInstructionInfo info);

			std::string operand;

			// when operands are merged together only one can have this set.
			std::shared_ptr<OperandInstructionInfo> instInfo;
		};

	public:
		// For the test we want to fully verify operands got decoded correct.
		// The problem is stuff like segment and base is decoded into the instruction info.
		// since only one operand can affect them per a instruction.
		// Since operands can be mixed and matched when we select two the relevant info needs merging to a single copy.
		struct MergedOperand
		{
			MergedOperand();

			std::string operands;

			// the expected operand specific results.
			OperandResult operandResults[MAX_OPERANDS];

			OperandInstructionInfo instInfo;
		};

	public:
		typedef std::vector<MergedOperand> MergedOperandsArr;
		typedef std::vector<OperandData> OperandDataArr;

	public:
		OperandBuilder();

		void BuildTables(CodeType::Enum codeType, bool full);

		MergedOperandsArr GetOperands(const SourceInstruction& inst);
		OperandDataArr GetOperand(const SourceInstruction& inst, size_t opIdx);

	private:
		void AddSegs(OperandDataArr& arr, OperandType::Enum opType, const SourceInstruction& inst);

		void Add_CREG(OperandDataArr& arr);
		void Add_DREG(OperandDataArr& arr);
		void Add_SREG(OperandDataArr& arr);
		void Add_8BitGPR(OperandDataArr& arr, bool IncExt, bool IncAccume = false);
		void Add_16BitGPR(OperandDataArr& arr, bool IncExt, bool IncAccume = false);
		void Add_32BitGPR(OperandDataArr& arr, bool IncExt, bool IncAccume = false);
		void Add_64BitGPR(OperandDataArr& arr, bool IncExt, bool IncAccume = false);

		void DereferenceOperands(OperandDataArr& arr, int32_t prefixSize = -1);

		MergedOperandsArr::value_type CombineOperands(const OperandData& op1, 
			const OperandData& op2);

	private:
		bool full_;
		bool _pad[3];
		CodeType::Enum codeType_;
		OperandDataArr operandTable_[OperandType::NUM_ENUM];
	};


	class TestBuilder
	{
		struct ScopedTest
		{
			ScopedTest(TestBuilder* pBuilder, const char* pName);
			~ScopedTest();

		private:
			void TestBegin(const char* pName);
			void TestEnd(void);

		private:
			TestBuilder& builder_;
		};

		struct TestResult
		{
			TestResult();

			std::string InstId; // mnemonic

			InstructionSet::Enum instSet;
			FlowControl::Enum flow;

			// Eflags
			uint16_t modifiedFlags;
			uint16_t testedFlags;
			uint16_t undefinedFlags;

			OperandBuilder::MergedOperand operandResult;
		};

		struct TestInstruction
		{
			typedef uint8_t OpCode;
			typedef std::vector<uint8_t> OpCodeArr;

			// expected info after disassemble
			TestResult expected;
			// the bytes for the complete instruction: prefix + inst + ops
			OpCodeArr opcodes;

			std::string preAssemble;
		};

		struct TestData
		{
			typedef std::vector<TestInstruction> TestInstArr;

			TestData();

			size_t numOpBytes(void) const;

		public:
			TestInstArr instructions;
			CodeType::Enum codeType;

			uint32_t decodeFlags;
		};

	public:
		TestBuilder(CodeType::Enum type);

		bool SaveTests(const std::wstring& outDir, size_t numTestFiles);
		void CreateTestForInst(const SourceInstruction& inst);

	private:
		void CreateTestForInst_int(const SourceInstruction& inst, bool FlowFlip);
		void WriteImmValCheck(const OperandBuilder::MergedOperand& opRes,
			std::stringstream& ss);
		void CreateOperandResult(size_t idx, const OperandBuilder::OperandResult& opRes,
			std::stringstream& ss);
		void AddFlowOptions(FlowControl::Enum flow, bool FlowFlip, std::stringstream& ss);


	private:
		std::string InstructionIdOverride(const std::string& instId);

		void AddNasmOverRides(void);
		std::string ApplyNasmOveride(const SourceInstruction& inst, const std::string& nasm, const std::string& operands);
		bool GenerateTestInstructions(const SourceInstruction& inst, TestData& dataOut);
		bool Assemble(const CodeType::Enum type, const std::string& byteSource, std::vector<uint8_t>& bytes);
		bool AssembleFile(const CodeType::Enum type, const std::wstring& Path, std::vector<uint8_t>& bytes);

		static std::wstring GetTempFileName(void);

		std::string MakeTestName(const SourceInstruction& inst);
		std::string FormatNameString(const std::string& str);
		std::string GetTestClass(const SourceInstruction& inst) const;
		std::string GetStatsStr(void) const;

	private:
		struct Test
		{
			std::string name;
			std::string body;
		};

		struct Stats
		{
			typedef std::vector<std::string> FailedTestArr;

			Stats();

			size_t totalInst; // num inst sent for test creation
			size_t totalGenRealInst; // total real instructions generated.
			size_t genInst;		// total instructions real instructions where made for.
			size_t failedInst;	// the number of instructions we failed to generate real instructions for.

			FailedTestArr failedTests;
		};

		struct NasmOverride
		{
			NasmOverride();
			NasmOverride(std::string nasm, OperandType::Enum reqOpType);
			NasmOverride(std::string nasm, std::string operandAppend);
			NasmOverride(std::string nasm, std::string operandAppend, OperandType::Enum reqOpType);

			OperandType::Enum requiredOpType;
			std::string nasm;
			std::string operandAppend;
		};

		typedef std::unordered_map<std::string, uint32_t> TestNameMap;
		typedef std::multimap<std::string, NasmOverride> NasmOverideMap;
		typedef std::vector<std::unique_ptr<Test>> TestArr;

		const CodeType::Enum codeType_;
		const std::wstring tempPath_;

		Stats stats_;
		TestArr tests_;
		TestNameMap testNames_;
		OperandBuilder opBuilder_;
		NasmOverideMap nasmOverRides_;
	};


	class Builder
	{
		static std::pair<uint8_t, uint8_t> mandatoryPrefix[4];
		static std::array<std::vector<uint8_t>, 1> exportedTreeNodes;

	public:
		Builder();
		~Builder();

		bool Build(void);
		bool SaveTables(const std::wstring& outPath);
		bool SaveMnemocis(const std::wstring& outHeader, const std::wstring& outSource);
		bool SaveTests(const std::wstring& outDir, size_t numTestFiles);

	private:
		void BuildTable(void);

		void AddInstructionToTree(const SourceInstruction& inst);

		void addBaseInstructions(void);
		void addFPU(void);
		void addP6(void);
		void addMMX(void);
		void addSSE1(void);
		void addSSE2(void);
		void addSSE3(void);
		void addSSSE3(void);
		void addSSE4_1(void);
		void addSSE4_2(void);
		void addSSE4_A(void);
		void add3DNOW(void);
		void add3DNOWEXT(void);
		void addVMX(void);
		void addSVM(void);
		void addAVX(void);
		void addFMA(void);
		void addCollisions(void);
		void addInstructionFlags(void);

		void AddInstructionToTable_r(TableNode& node, SourceInstruction::OpCodes* pOps,
			OpCodeLen::Enum opLen, SourceInstruction& inst);

	private:
		
		void SetCurrentInstructionSet(InstructionSet::Enum instructionSet);

		void AddInstruction(const char* OpCodes, const char* Mnemonic,
			OperandType::Enum op1,
			uint64_t flags, // InstructionFlags
			FlowControl::Enum flow = FlowControl::NONE);

		void AddInstruction(const char* OpCodes, const char* Mnemonic,
			OperandType::Enum op1, OperandType::Enum op2,
			uint64_t flags, // InstructionFlags
			FlowControl::Enum flow = FlowControl::NONE);

		void AddInstruction(const char* OpCodes, const char* Mnemonic,
			OperandType::Enum op1, OperandType::Enum op2, OperandType::Enum op3,
			uint64_t flags, // InstructionFlags
			FlowControl::Enum flow = FlowControl::NONE);

		void AddInstruction(const char* OpCodes, const char* Mnemonic,
			OperandType::Enum op1, OperandType::Enum op2, OperandType::Enum op3, OperandType::Enum op4,
			uint64_t flags, // InstructionFlags
			FlowControl::Enum flow);

	private:
		struct MnemoicInfo
		{
			MnemoicInfo() = default;
			MnemoicInfo(const std::string& mne, uint16_t idx);

			std::string mnemonic;
			uint16_t index = 0;
		};

		struct ExportedNode
		{
			ExportedNode() = default;
			ExportedNode(const std::string& str, uint16_t idx);

			std::string tag;
			uint16_t index = 0;
		};

		static bool Mnemocis_sortName(const MnemoicInfo& lhs, const MnemoicInfo& rhs);
		static bool Mnemocis_sortIdx(const MnemoicInfo& lhs, const MnemoicInfo& rhs);

		uint16_t AddMnemonic(const std::string& str);

	public:
		static std::string FormatMnemonic(const std::string& str);

	private:
		typedef std::vector<SourceInstruction> InstructionList;
		typedef std::vector<std::pair<uint16_t, std::string>> FlatTree;
		typedef std::queue<size_t> IndexArr;
		typedef std::vector<InstInfo> InstInfoArr;
		typedef std::vector<InstInfoEx> InstInfoExArr;
		typedef std::vector<InstSharedInfo> SharedInfoArr;
		typedef std::vector<uint32_t> FlagsArr;
		typedef std::vector<MnemoicInfo> MnemoicsArr;
		typedef std::vector<ExportedNode> ExportedTreeNodeArr;

		MnemoicsArr mnemoics_;

		FlatTree tree_;
		IndexArr treeTableIndxes_;
		InstInfoArr instInfo_;
		InstInfoExArr instInfoEx_;
		SharedInfoArr sharedInfo_;
		FlagsArr flags_;
		ExportedTreeNodeArr exportedTreeNodes_;

		InstructionSet::Enum curInstructionSet_;
		InstructionList instructions_;
		InstructionList collisions_;
		TableNode root_;
	};


} // namespace TDiss