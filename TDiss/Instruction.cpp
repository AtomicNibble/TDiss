#include "pch.h"
#include "Instruction.h"

#include "tables.h"

#include "TDiss.h"
#include "Prefix.h"
#include "Operand.h"

namespace TDiss
{

	namespace
	{

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


	const InstInfo* Diss::instGetInfo(InstNode in, int32_t index) const
	{
		in = InstTree[NodeType::GetNodeIndex(in) + index];

		if (NodeType::GetNodeType(in) == NodeType::NONE) {
			return nullptr;
		}

		int32_t instIndex = NodeType::GetNodeIndex(in);

		if (NodeType::GetNodeType(in) == NodeType::INFOEX) {
			return &instInfoEx[instIndex];
		}
		return &instInfo[instIndex];
	}

	// current decoding mode to effective operand size.
	// 64 bit needs to handle rex and promoted instructions
	CodeType::Enum Diss::GetEffectiveOperandSize(uint32_t prefixes, uint32_t instructionFlags, uint32_t rex) const
	{
		CodeType::Enum OpSizeTable[]{
			CodeType::CODE_32BIT,
			CodeType::CODE_16BIT,
			CodeType::CODE_16BIT,
		};

		if (bitUtil::IsFlagSet(prefixes, InstructionFlag::PRE_OP_SIZE)) {
			return OpSizeTable[strm_.codeType()];
		}

		if (strm_.codeType() == CodeType::CODE_64BIT)
		{
			if (bitUtil::IsFlagSet(instructionFlags, InstructionFlag::BITS64) &&
				!bitUtil::IsFlagSet(instructionFlags, InstructionFlag::PRE_REX))
			{
				return CodeType::CODE_64BIT;
			}
			// need to check if rex has operand width.
			else if (bitUtil::IsFlagSet(prefixes, InstructionFlag::PRE_REX) &&
				bitUtil::IsFlagSet(rex, RexPrefixMask::W))
			{
				return CodeType::CODE_64BIT;
			}

			return CodeType::CODE_32BIT;
		}

		return strm_.codeType();
	}

	CodeType::Enum Diss::GetEffectiveAddressSize(uint32_t prefixes) const
	{
		CodeType::Enum AddSizeTable[]{
			CodeType::CODE_32BIT,
			CodeType::CODE_16BIT,
			CodeType::CODE_32BIT,
		};

		if (bitUtil::IsFlagSet(prefixes, InstructionFlag::PRE_ADDR_SIZE)) {
			return AddSizeTable[strm_.codeType()];
		}

		return strm_.codeType();
	}

	const InstInfo* Diss::instLookupPreFixed(PrefixState& ps, InstNode in) const
	{
		const uint32_t pre = ps.decodedPrefixFlags & (InstructionFlag::PRE_OP_SIZE |
			InstructionFlag::PRE_REP | InstructionFlag::PRE_REPNZ);

		int32_t index = 0;
		bool checkOpSize = false;

		if (pre == 0)
		{
			index = 0;
		}
		else if (pre == InstructionFlag::PRE_OP_SIZE)
		{
			index = 1;
			ps.removeDecodedPrefix(InstructionFlag::PRE_OP_SIZE);
		}
		else if (pre == InstructionFlag::PRE_REP)
		{
			index = 2;
			ps.removeDecodedPrefix(InstructionFlag::PRE_REP);
		}
		else if (pre == InstructionFlag::PRE_REPNZ)
		{
			index = 3;
			ps.removeDecodedPrefix(InstructionFlag::PRE_REPNZ);
		}
		else
		{
			bool preRep = bitUtil::IsFlagSet(ps.decodedPrefixFlags, InstructionFlag::PRE_REP);
			bool preRepNz = bitUtil::IsFlagSet(ps.decodedPrefixFlags, InstructionFlag::PRE_REPNZ);

			if (preRep && preRepNz) {
				return nullptr;
			}
			if (preRepNz) {
				index = 3;
				ps.removeDecodedPrefix(InstructionFlag::PRE_REPNZ);
			}
			else if (preRep) {
				index = 2;
				ps.removeDecodedPrefix(InstructionFlag::PRE_REP);
			}
			checkOpSize = true;
		}

		const InstInfo* pInstInfo = instGetInfo(in, index);

		if (checkOpSize) {
			if (!pInstInfo) {
				return nullptr;
			}

			// check instruction supports pre op size.
			const InstSharedInfo& sharedInfo = SharedInfo[pInstInfo->sharedIdx];
			uint32_t flags = Flags[sharedInfo.flagsIdx];

			if (!bitUtil::IsFlagSet(flags, InstructionFlag::PRE_OP_SIZE)) {
				return nullptr;
			}
		}

		if (!pInstInfo) {
			pInstInfo = instGetInfo(in, 0);
		}

		return pInstInfo;
	}

	const InstInfo* Diss::instLookup3DNow(void)
	{
		if (strm_.bytesLeft() < 1) {
			TDISS_WARN("Failed to extract 3dnow instruction, missing trailing id byte");
			return nullptr;
		}

		// i need the start of the 0f 0f table to add the index to.
		uint8_t index = strm_.getSeek<uint8_t>();

		InstNode node = TableNode_0f_0f;

		return instGetInfo(node, index);
	}


	const InstInfo* Diss::instLookup(PrefixState& ps)
	{
		if (strm_.isEof()) {
			TDISS_WARN("Failed to lookup instruction, end of code stream.");
			return nullptr;
		}

		uint8_t op = strm_.getSeek<uint8_t>();

		InstNode in = InstTree[op];
		NodeType::Enum instType = NodeType::GetNodeType(in);
		if (instType == NodeType::NONE) {
			// no instruction or table :Z
			return nullptr;
		}

		if ((instType <= NodeType::INFOEX))
		{
			switch (op)
			{
			case 0x63: //
				if (strm_.codeType() == CodeType::CODE_64BIT) {
					return &II_MOVSXD;
				}
				break;

			case 0x90: //check if it's nop instead of XCHG

				if (bitUtil::IsFlagSet(ps.vrex, RexPrefixMask::W)) {
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
				}

				if (strm_.codeType() != CodeType::CODE_64BIT || !bitUtil::IsFlagSet(ps.vrex, RexPrefixMask::B)) {
					return &II_NOP;
				}

				break;
			default:
				break;
			}

			int nodeIdx = NodeType::GetNodeIndex(in);

			if (instType == NodeType::INFOEX) {
				return &instInfoEx[nodeIdx];
			}
			return &instInfo[nodeIdx];
		}

		// read another byte :(
		if (strm_.isEof()) {
			TDISS_WARN("Failed to lookup multi-byte instruction, end of code stream.");
			return nullptr;
		}

		uint8_t op2 = strm_.getSeek<uint8_t>();

		if (instType == NodeType::GROUP) {
			return instGetInfo(in, (op2 >> 3) & 7);
		}
		else if (instType == NodeType::DIVIDED) // single byte with reg byte
		{
			if (op2 < 0xc0) { // DIVIDED_MODRM
				op2 = (op2 >> 3) & 7;
			}
			else {
				op2 -= (0xc0 - 8); // DIVIDED_MODRM
			}

			int nodeIdx = NodeType::GetNodeIndex(in);
			in = InstTree[nodeIdx + op2];
			instType = NodeType::GetNodeType(in);
			if (instType == NodeType::NONE) {
				return nullptr;
			}

			nodeIdx = NodeType::GetNodeIndex(in);

			if (instType == NodeType::INFOEX) {
				return &instInfoEx[nodeIdx];
			}
			return &instInfo[nodeIdx];
		}
		else if (instType == NodeType::FULL)
		{
			int nodeIdx = NodeType::GetNodeIndex(in);
			in = InstTree[nodeIdx + op2];
			instType = NodeType::GetNodeType(in);
			if (instType == NodeType::NONE) {
				return nullptr;
			}

			if (op == 0xf && op2 == 0xf) {
				return &II_NOW3D;
			}

			if (instType <= NodeType::INFOEX)
			{
				nodeIdx = NodeType::GetNodeIndex(in);

				if (instType == NodeType::INFOEX) {
					return &instInfoEx[nodeIdx];
				}
				return &instInfo[nodeIdx];
			}

			if (instType == NodeType::PREFIXED) {
				return instLookupPreFixed(ps, in);
			}
		}

		if (strm_.isEof()) {
			TDISS_WARN("Failed to lookup multi-byte instruction, end of code stream.");
			return nullptr;
		}

		uint8_t op3 = strm_.getSeek<uint8_t>();

		// 2 bytes + reg instruction
		if (instType == NodeType::GROUP)
		{
			int nodeIdx = NodeType::GetNodeIndex(in);
			nodeIdx += ((op3 >> 3) & 7);

			in = InstTree[nodeIdx];

			instType = NodeType::GetNodeType(in);
			nodeIdx = NodeType::GetNodeIndex(in);

			if (instType == NodeType::NONE) {
				return nullptr;
			}
			if (instType == NodeType::INFOEX) {
				return &instInfoEx[nodeIdx];
			}
			if (instType == NodeType::INFO) {
				return &instInfo[nodeIdx];
			}

			// prefixed?
			return instLookupPreFixed(ps, in);
		}
		else if (instType == NodeType::DIVIDED) // 2 bytes + divided range
		{
			int nodeIdx = NodeType::GetNodeIndex(in);
			nodeIdx += ((op3 >> 3) & 7);

			// don't overide in, we might need it below.
			InstNode in2 = InstTree[nodeIdx];

			instType = NodeType::GetNodeType(in2);
			nodeIdx = NodeType::GetNodeIndex(in2);

			{
				const InstInfo* pInfo = nullptr;

				if (instType == NodeType::INFO) {
					pInfo = &instInfo[nodeIdx];
				}
				else if (instType == NodeType::INFOEX) {
					pInfo = static_cast<const InstInfo*>(&instInfoEx[nodeIdx]);
				}

				if (pInfo) {
					// need to check this is not divided.
					const InstSharedInfo& sharedInfo = SharedInfo[pInfo->sharedIdx];
					const uint32_t flags = Flags[sharedInfo.flagsIdx];

					if (bitUtil::IsFlagSet(flags, InstructionFlag::NOT_DIVIDED)) {
						return pInfo;
					}
				}

				// check for divided range.
				if (op3 > 0xc0) {
					return instGetInfo(in, (op3 - 0xc0) + 8);
				}

				// might not be null and didn't pass either of the above conditions
				return pInfo;
			}
		}
		else if (instType == NodeType::FULL) // 3 full bytes
		{
			int32_t nodeIdx = NodeType::GetNodeIndex(in) + op3;

			in = InstTree[nodeIdx];

			instType = NodeType::GetNodeType(in);
			nodeIdx = NodeType::GetNodeIndex(in);

			if (instType == NodeType::NONE) {
				return nullptr;
			}

			if (instType == NodeType::INFO) {
				return &instInfo[nodeIdx];
			}
			else if (instType == NodeType::INFOEX) {
				return static_cast<const InstInfo*>(&instInfoEx[nodeIdx]);
			}

			// prefixed?
			if (instType == NodeType::PREFIXED) {
				return instLookupPreFixed(ps, in);
			}
		}

		return nullptr;
	}

	Diss::InstrDecodeResult::Enum Diss::decodeInst(PrefixState& ps, Instruction* pInst)
	{
		strm_.setMarker();

		const uint8_t* pStart = strm_.current(); // used for size calculation.
		const InstInfo* pInstInfo = nullptr;

		{
			const size_t bytesLeft = strm_.bytesLeft();

			pInstInfo = instLookup(ps);
			if (!pInstInfo)
			{
				// print out a few bytes.
				std::string bytes = StrUtil::BytesToString(pStart, Min<size_t>(MAX_INSTRUCTION_SIZE, bytesLeft), " ");

				TDISS_ERR("Unknown op starting with(0x%" PRIx64 ",0x%" PRIx64 "): %s",
					strm_.currentVA(), strm_.currentVA() - strm_.baseVA(), bytes.c_str());

				strm_.setToMarker();
				return InstrDecodeResult::UNKNOWN_INST;
			}

#if X_DEBUG
			// check for table issues,
			// this will fail to decode if falls through but this just make the reason more clear.
			if (pInstInfo->opcodeId == InstructionID::INVALID)
			{
				std::string bytes = StrUtil::BytesToString(pStart, Min<size_t>(MAX_INSTRUCTION_SIZE, bytesLeft), " ");

				TDISS_ERR("Invalid op code id(table err): %s", bytes.c_str());

				strm_.setToMarker();
				return InstrDecodeResult::INVALID;
			}
#endif // !X_DEBUG 
		}

		InstSharedInfo sharedInfo = SharedInfo[pInstInfo->sharedIdx];
		uint32_t flags = Flags[sharedInfo.flagsIdx];
		uint32_t modRm = 0;

		// not valid in x64
		if (strm_.codeType() == CodeType::CODE_64BIT &&
			bitUtil::IsFlagSet(flags, InstructionFlag::INVALID_64))
		{
			strm_.setToMarker();

			TDISS_ERR("Instruction %s is not valid in x64 (0x%" PRIx64 ",0x%" PRIx64 ")",
				InstructionID::ToString(pInstInfo->opcodeId),
				strm_.currentVA(), strm_.currentVAOffset()
			);

			return InstrDecodeResult::INVALID;
		}
		// only valid in x64
		if (strm_.codeType() != CodeType::CODE_64BIT &&
			bitUtil::IsFlagSet(flags, InstructionFlag::BITS64_FETCH))
		{
			strm_.setToMarker();

			TDISS_ERR("Instruction %s is only valid in x64 (0x%" PRIx64 ",0x%" PRIx64 ")",
				InstructionID::ToString(pInstInfo->opcodeId),
				strm_.currentVA(), strm_.currentVAOffset()
			);

			return InstrDecodeResult::INVALID;
		}

		// got ModRm?
		if (bitUtil::IsFlagSet(flags, InstructionFlag::MODRM_REQUIRED))
		{
			if (!bitUtil::IsFlagSet(flags, InstructionFlag::MODRM_INCLUDED)) {
				if (strm_.isEof()) {
					TDISS_ERR("Failed to read required modR/m byte. code stream is empty");
					return InstrDecodeResult::STREAM_END;
				}
				modRm = strm_.getSeek<uint8_t>();
			}
			else {
				// load the last inst byte.
				modRm = *(strm_.getPtr<uint8_t>() - 1);
			}
		}
		else
		{
			modRm = 0;
		}

		CodeType::Enum effOp = GetEffectiveOperandSize(ps.decodedPrefixFlags, flags, ps.vrex);
		CodeType::Enum effAdd = GetEffectiveAddressSize(ps.decodedPrefixFlags);

		// decode operands
		if (sharedInfo.d != OperandType::NONE)
		{
			OperandDecodeResult::Enum opRes = ExtractOperand(&strm_, pInst, ps, flags, modRm, sharedInfo.d,
				OperandIdx::Dest, effOp, effAdd);
			if (opRes != OperandDecodeResult::OK)
			{
				strm_.setToMarker();

				TDISS_ERR("Failed to decode dest operand for(0x%" PRIx64 ",0x%" PRIx64 "): %s opType: %s",
					strm_.currentVA(), strm_.currentVAOffset(),
					InstructionID::ToString(pInstInfo->opcodeId),
					OperandType::ToString(sharedInfo.d));

				if (opRes == OperandDecodeResult::STREAM_END) {
					return InstrDecodeResult::STREAM_END;
				}

				return InstrDecodeResult::OPERAND_DECODE_FAIL;
			}
		}
		if (sharedInfo.s != OperandType::NONE)
		{
			OperandDecodeResult::Enum opRes = ExtractOperand(&strm_, pInst, ps, flags,
				modRm, sharedInfo.s, OperandIdx::Src, effOp, effAdd);

			if (opRes != OperandDecodeResult::OK)
			{
				strm_.setToMarker();

				TDISS_ERR("Failed to decode src operand for(0x%" PRIx64 ",0x%" PRIx64 "): %s opType: %s",
					strm_.currentVA(), strm_.currentVAOffset(),
					InstructionID::ToString(pInstInfo->opcodeId),
					OperandType::ToString(sharedInfo.s));

				if (opRes == OperandDecodeResult::STREAM_END) {
					return InstrDecodeResult::STREAM_END;
				}

				return InstrDecodeResult::OPERAND_DECODE_FAIL;
			}
		}
		if (bitUtil::IsFlagSet(flags, InstructionFlag::USE_OP3))
		{
			const InstInfoEx* pExtInto = static_cast<const InstInfoEx*>(pInstInfo);

			OperandDecodeResult::Enum opRes = ExtractOperand(&strm_, pInst, ps, flags, modRm,
				pExtInto->op3, OperandIdx::Op3, effOp, effAdd);

			if (opRes != OperandDecodeResult::OK)
			{
				strm_.setToMarker();

				TDISS_ERR("Failed to decode op3 operand for(0x%" PRIx64 ",0x%" PRIx64 "): %s opType: %s",
					strm_.currentVA(), strm_.currentVAOffset(),
					InstructionID::ToString(pInstInfo->opcodeId),
					OperandType::ToString(pExtInto->op3));

				if (opRes == OperandDecodeResult::STREAM_END) {
					return InstrDecodeResult::STREAM_END;
				}

				return InstrDecodeResult::OPERAND_DECODE_FAIL;
			}
		}
		if (bitUtil::IsFlagSet(flags, InstructionFlag::USE_OP4))
		{
			const InstInfoEx* pExtInto = static_cast<const InstInfoEx*>(pInstInfo);

			OperandDecodeResult::Enum opRes = ExtractOperand(&strm_, pInst, ps, flags, modRm,
				pExtInto->op4, OperandIdx::Op4, effOp, effAdd);

			if (opRes != OperandDecodeResult::OK)
			{
				strm_.setToMarker();

				TDISS_ERR("Failed to decode op4 operand for(0x%" PRIx64 ",0x%" PRIx64 "): %s opType: %s",
					strm_.currentVA(), strm_.currentVAOffset(),
					InstructionID::ToString(pInstInfo->opcodeId),
					OperandType::ToString(pExtInto->op4));

				if (opRes == OperandDecodeResult::STREAM_END) {
					return InstrDecodeResult::STREAM_END;
				}

				return InstrDecodeResult::OPERAND_DECODE_FAIL;
			}
		}


		if (bitUtil::IsFlagSet(flags, InstructionFlag::NOW3D_FETCH)) {
			pInstInfo = instLookup3DNow();
			if (pInstInfo == nullptr) {
				return InstrDecodeResult::INVALID;
			}

			sharedInfo = SharedInfo[pInstInfo->sharedIdx];
			flags = Flags[sharedInfo.flagsIdx];
		}


		pInst->opcode = pInstInfo->opcodeId;

		const bool ExMnem = bitUtil::IsFlagSet(flags, InstructionFlag::EX_MNEMONIC);
		const bool ExMnem2 = bitUtil::IsFlagSet(flags, InstructionFlag::EX_MNEMONIC2);
		const bool preAddSize = bitUtil::IsFlagSet(flags, InstructionFlag::PRE_ADDR_SIZE);

		if (ExMnem && preAddSize)
		{
			ps.addUsedPrefix(InstructionFlag::PRE_ADDR_SIZE);

			if (effAdd == CodeType::CODE_16BIT) {
				pInst->opcode = static_cast<const InstInfoEx*>(pInstInfo)->opcodeId;
			}
			else if (effAdd == CodeType::CODE_32BIT) {
				pInst->opcode = static_cast<const InstInfoEx*>(pInstInfo)->opcodeId2;
			}
			// auto promoted.
			else if (effAdd == CodeType::CODE_64BIT) {
				pInst->opcode = static_cast<const InstInfoEx*>(pInstInfo)->opcodeId3;
			}
		}
		else if (effOp == CodeType::CODE_16BIT)
		{
			//
		}
		else if (effOp == CodeType::CODE_32BIT)
		{
			if (ExMnem)
			{
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);

				if (bitUtil::IsFlagSet(flags, InstructionFlag::EX_MNEMONIC_MODRM_BASED)) {
					if (modRm < 0xc0) {
						pInst->opcode = static_cast<const InstInfoEx*>(pInstInfo)->opcodeId2;
					}
					else {
						// opcodeid. (already set above, so redundant)
					}
				}
				else {
					pInst->opcode = static_cast<const InstInfoEx*>(pInstInfo)->opcodeId2;
				}
			}
		}
		else if (effOp == CodeType::CODE_64BIT)
		{
			if (ExMnem || ExMnem2)
			{
				if (bitUtil::IsFlagSet(flags, InstructionFlag::EX_MNEMONIC_MODRM_BASED) && modRm >= 0xc0) {
					return InstrDecodeResult::INVALID;
				}

				if (ExMnem2 && bitUtil::IsFlagSet(ps.vrex, RexPrefixMask::W))
				{
					ps.addUsedPrefix(InstructionFlag::PRE_REX);

					pInst->opcode = static_cast<const InstInfoEx*>(pInstInfo)->opcodeId3;
				}
				else
				{
					pInst->opcode = static_cast<const InstInfoEx*>(pInstInfo)->opcodeId2;
				}
			}
		}

		pInst->flow = sharedInfo.flow;
		pInst->instSet = sharedInfo.instSet;

		pInst->modifiedFlags = unpackCpuFlagsToEFlags(sharedInfo.modifiedFlags);
		pInst->testedFlags = unpackCpuFlagsToEFlags(sharedInfo.testedFlags);
		pInst->undefinedFlags = unpackCpuFlagsToEFlags(sharedInfo.undefinedFlags);

		{
			uintptr_t instructionSize = (union_cast<uintptr_t>(strm_.current()) -
				union_cast<uintptr_t>(pStart));

			if (instructionSize > MAX_INSTRUCTION_SIZE) {
#if TDISS_LOGGING
				TDISS_ERR("Deoded instruction size is invalid: %" PRIxPTR " max-size: %" PRIdS " Instruction id: %s",
					instructionSize, MAX_INSTRUCTION_SIZE, InstructionID::ToString(pInstInfo->opcodeId));
#endif
				return InstrDecodeResult::INVALID;
			}

			pInst->size = static_cast<uint8_t>(instructionSize);
		}

		return InstrDecodeResult::OK;
	}



} // namespace TDiss