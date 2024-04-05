#include "pch.h"
#include "Operand.h"
#include "Prefix.h"

namespace TDiss
{

	namespace
	{
		struct OpSize
		{
			enum Enum
			{
				INVALID,
				BITS_8 = 1,
				BITS_16 = 2,
				BITS_32 = 4,
				BITS_64 = 8,
				BITS_80 = 10,
				BITS_128 = 16,
				BITS_256 = 32,
			};


			// max is 32 * 8
			static int32_t OpSizeToBits(Enum size)
			{
				return static_cast<int32_t>(size) * 8;
			}
		};



		// SIB
		// http://www.c-jump.com/CIS77/CPU/x86/X77_0100_sib_byte_layout.htm
		// |  7-6   |  5-3   |   2-0  |
		// | Scale | Index | Base |
		//
		// 
		//
		//
		OperandDecodeResult::Enum ExtractScaledIndexBase(Instruction* pInst,
			PrefixState& ps, OperandIdx::Enum opIdx, CodeType::Enum effAdd, uint32_t mod, uint32_t sib)
		{
			// the Mod specifies the displacement size 8/16/32
			Operand& op = pInst->ops[opIdx];
			uint32_t vrex = ps.vrex;

			const uint8_t scale = ((sib >> 6) & 0x3);
			const uint8_t index = ((sib >> 3) & 0x7);
			const uint8_t base = (sib & 0x7);
			uint8_t* pIndex = nullptr;

			// http://www.intel.com/content/dam/www/public/us/en/documents/manuals/64-ia-32-architectures-software-developer-manual-325462.pdf#page=485
			if (index == 4) // no index.
			{
				op.type = OperandTypeAbs::SMEM;
				pIndex = &op.index;
			}
			else
			{
				op.type = OperandTypeAbs::MEM;
				pIndex = reinterpret_cast<uint8_t*>(&pInst->base);
			}

			if (base == 5)
			{
				/*
				means a disp32 with no base if the MOD is 00B. Otherwise, means disp8 or disp32 + [EBP].
				This provides the following address modes:
				MOD bits Effective Address
				00 [scaled index] + disp32
				01 [scaled index] + disp8 + [EBP]
				10 [scaled index] + disp32 + [EBP]
				*/
				if (mod != 0)
				{
					uint8_t grpOffset = 0;

					if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B)) {
						ps.addUsedPrefix(InstructionFlag::PRE_REX);

						grpOffset = RegIndex::EX_GPR_OFFSET;
					}

					if (effAdd == CodeType::CODE_64BIT)
					{
						*pIndex = RegIndex::REG_64_BASE;
						*pIndex += 5;
						*pIndex += grpOffset;
					}
					else
					{
						*pIndex = RegIndex::REG_32_BASE;
						*pIndex += 5;
						*pIndex += grpOffset;
					}
				}
				else if (index == 4)
				{
					// when here we have no scaled index and just disp32.
					op.type = OperandTypeAbs::DISP;
					return OperandDecodeResult::OK;
				}
			}
			else
			{
				if (effAdd == CodeType::CODE_64BIT) {
					*pIndex = RegIndex::REG_64_BASE;
				}
				else {
					*pIndex = RegIndex::REG_32_BASE;
				}

				if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B)) {
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
					*pIndex += RegIndex::EX_GPR_OFFSET;
				}

				*pIndex += base;
			}

			// valid index?
			if (index != 4)
			{
				if (effAdd == CodeType::CODE_64BIT) {
					//	op.size = 64;
					op.index = index + RegIndex::REG_64_BASE;
					//	op.Set64(OperandTypeAbs::REG, index);
				}
				else {
					//	op.size = 32;
					op.index = index + RegIndex::REG_32_BASE;
					//	op.Set32(OperandTypeAbs::REG, index);
				}

				pInst->scale = 0;
				if (scale != 0) {
					pInst->scale = (1 << scale); // turn it into 2,4,8
				}
			}

			return OperandDecodeResult::OK;
		}


		// http://www.c-jump.com/CIS77/CPU/x86/X77_0060_mod_reg_r_m_byte.htm
		// | 7-6 | 5-3 | 2-0
		// | MOD | REG | R/M |
		//
		// used for decoding the mod r/m which can be:
		// 00: register indirect add mode with no displacement whem R/M = 100
		//		displacement only when R/M = 101
		// 01: one byte signed dis
		// 10: four byte signed dis
		// 11: register
		// 
		OperandDecodeResult::Enum ExtractOperandModRm(CodeStream* info, Instruction* pInst, PrefixState& ps,
			OperandType::Enum opType, OperandIdx::Enum opIdx,
			CodeType::Enum effOp, CodeType::Enum effAdd,
			uint32_t instructionFlag, uint32_t mod, uint8_t rm)
		{
			Operand& op = pInst->ops[opIdx];
			uint32_t vrex = ps.vrex;

			if (mod == 3) // mmmmmmm gpr
			{
				uint16_t size = op.size;

				op.type = OperandTypeAbs::REG;

				switch (opType)
				{
				case OperandType::REG_FULL_M16:
				case OperandType::RM_FULL:

					switch (effOp)
					{
					case CodeType::CODE_16BIT:
						ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);
						if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B))
						{
							ps.addUsedPrefix(InstructionFlag::PRE_REX);
							rm += RegIndex::EX_GPR_OFFSET;
						}

						size = 16;
						rm += RegIndex::REG_16_BASE;
						break;
					case CodeType::CODE_32BIT:
						ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);
						if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B))
						{
							ps.addUsedPrefix(InstructionFlag::PRE_REX);
							rm += RegIndex::EX_GPR_OFFSET;
						}

						size = 32;
						rm += RegIndex::REG_32_BASE;
						break;
					case CodeType::CODE_64BIT:
						if (effOp == OperandType::REG_FULL_M16) {
							ps.addUsedPrefix(InstructionFlag::PRE_REX);
						}

						if (bitUtil::IsFlagSet(instructionFlag, InstructionFlag::PRE_REX)) {
							ps.addUsedPrefix(InstructionFlag::PRE_REX);
						}

						if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B))
						{
							ps.addUsedPrefix(InstructionFlag::PRE_REX);
							rm += RegIndex::EX_GPR_OFFSET;
						}

						size = 64;
						rm += RegIndex::REG_64_BASE;
						break;
					default:
						X_ASSERT_NOT_IMPLEMENTED();
						break;
					}

					break;
				case OperandType::RM_32_64:
					if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B)) {
						ps.addUsedPrefix(InstructionFlag::PRE_REX);
						rm += RegIndex::EX_GPR_OFFSET;
					}

					// promoted instruction.
					if (info->codeType() == CodeType::CODE_64BIT) {
						if (bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS64) &&
							!bitUtil::IsFlagSet(instructionFlag, InstructionFlag::PRE_REX)) {
							size = 64;
							rm += RegIndex::REG_64_BASE;
							break; // don't fall down
						}
					}

					// REX.W promoted
					if (bitUtil::IsFlagSet(vrex, RexPrefixMask::W)) {
						ps.addUsedPrefix(InstructionFlag::PRE_REX);
						size = 64;
						rm += RegIndex::REG_64_BASE;
					}
					else {
						size = 32;
						rm += RegIndex::REG_32_BASE;
					}

					break;
				case OperandType::RM_32:
					if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B))
					{
						ps.addUsedPrefix(InstructionFlag::PRE_REX);
						rm += RegIndex::EX_GPR_OFFSET;
					}
					rm += RegIndex::REG_32_BASE;

					size = 32;
					break;
				case OperandType::RM_16:
					if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B))
					{
						ps.addUsedPrefix(InstructionFlag::PRE_REX);
						rm += RegIndex::EX_GPR_OFFSET;
					}
					rm += RegIndex::REG_16_BASE;
					break;
				case OperandType::RM_8:

					if (ps.ExtType == PrefixExtType::REX)
					{
						ps.addUsedPrefix(InstructionFlag::PRE_REX);
						if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B))
						{
							rm += RegIndex::EX_GPR_OFFSET;
						}

						if (rm >= 4 && rm < 8) {
							rm += RegIndex::REG_8_REX_BASE;
							rm -= 4; // turn the 4-7 to 0-3
						}
						else {
							rm += RegIndex::REG_8_BASE;
						}
					}
					else
					{
						rm += RegIndex::REG_8_BASE;
					}
					break;

				case OperandType::MM_32:
				case OperandType::MM_64:
					size = 64;
					rm += RegIndex::REG_MMX_BASE;
					break;

				case OperandType::XMM_16:
				case OperandType::XMM_32:
				case OperandType::XMM_64:
				case OperandType::XMM_128:
					if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B))
					{
						ps.addUsedPrefix(InstructionFlag::PRE_REX);
						rm += RegIndex::EX_GPR_OFFSET;
					}

					size = 128;
					rm += RegIndex::REG_SSE_BASE;
					break;


				default:
					X_ASSERT_NOT_IMPLEMENTED();
					break;
				}

				op.size = size;
				op.index = rm;
				return OperandDecodeResult::OK;
			}

			if (effAdd == CodeType::CODE_16BIT)
			{
				if (mod == 0 && rm == 6)
				{
					op.type = OperandTypeAbs::DISP;

					pInst->displacementSize = 16;

					if (!info->ReadDisplacementValue(pInst->displacement, 2)) {
						return OperandDecodeResult::STREAM_END;
					}
				}
				else
				{
					// MEM for 16 bits indirection that requires 2 registers, E.G: [BS + SI].
					// or SMEM for a single register indirection, E.G : [BP].

					static RegIndex::Enum MODS[] = {
						RegIndex::BX, RegIndex::BX,
						RegIndex::BP, RegIndex::BP,
						RegIndex::SI, RegIndex::DI,
						RegIndex::BP, RegIndex::BX
					};
					static RegIndex::Enum MODS2[] = {
						RegIndex::SI, RegIndex::DI,
						RegIndex::SI, RegIndex::DI
					};

					if (rm < 4)
					{
						op.type = OperandTypeAbs::MEM;
						op.index = MODS2[rm];
						pInst->base = MODS[rm];
					}
					else
					{
						op.type = OperandTypeAbs::SMEM;
						op.index = MODS[rm];
					}

					if (mod == 1)
					{
						pInst->displacementSize = 8;
						if (!info->ReadDisplacementValue(pInst->displacement, 1)) {
							return OperandDecodeResult::STREAM_END;
						}
					}
					else
					{
						pInst->displacementSize = 16;
						if (!info->ReadDisplacementValue(pInst->displacement, 1)) {
							return OperandDecodeResult::STREAM_END;
						}
					}
				}

				if (rm == 2 || rm == 3 || (rm == 6 && mod != 0))
				{
					ps.useSegment(InstructionFlag::PRE_SS, info->codeType(), pInst);
				}
				else
				{
					ps.useSegment(InstructionFlag::PRE_DS, info->codeType(), pInst);
				}

			}
			else
			{
				if (mod == 0 && rm == 5)
				{
					pInst->displacementSize = 32;

					if (!info->ReadDisplacementValue(pInst->displacement, 4)) {
						return OperandDecodeResult::STREAM_END;
					}

					if (info->codeType() == CodeType::CODE_64BIT)
					{
						op.type = OperandTypeAbs::SMEM;
						op.regIndex = RegIndex::RIP;

					}
					else
					{
						// absolute
						op.type = OperandTypeAbs::DISP;
						op.size = 32;
					}
				}
				else
				{
					uint8_t sib = 0;

					if (rm == 4)
					{
						if (!info->ReadValue(sib)) {
							return OperandDecodeResult::STREAM_END;
						}

						OperandDecodeResult::Enum res = ExtractScaledIndexBase(pInst, ps, opIdx, effAdd, mod, sib);
						if (res != OperandDecodeResult::OK) {
							return res;
						}
					}
					else
					{
						op.type = OperandTypeAbs::SMEM;

						if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B))
						{
							ps.addUsedPrefix(InstructionFlag::PRE_REX);
							rm += RegIndex::EX_GPR_OFFSET;
						}

						if (effAdd == CodeType::CODE_64BIT)
						{
							op.index = RegIndex::REG_64_BASE + rm;
						}
						else
						{
							op.index = RegIndex::REG_32_BASE + rm;
						}
					}

					// ------------------


					if (mod == 1)
					{
						pInst->displacementSize = 8;

						if (!info->ReadDisplacementValue(pInst->displacement, 1)) {
							return OperandDecodeResult::STREAM_END;
						}
					}
					else if (mod == 2 || (sib & 0x7) == 5) // (SIB:base == 5) no base but disp32
					{
						pInst->displacementSize = 32;
						if (!info->ReadDisplacementValue(pInst->displacement, 4)) {
							return OperandDecodeResult::STREAM_END;
						}
					}
				}

				// breg
				uint32_t baseReg = op.index;
				if (pInst->base != RegIndex::NONE) {
					baseReg = pInst->base;
				}
				else if (pInst->scale >= 2) {
					baseReg = 0;
				}

				if (baseReg == RegIndex::EBP || baseReg == RegIndex::ESP)
				{
					ps.useSegment(InstructionFlag::PRE_SS, info->codeType(), pInst);
				}
				else
				{
					ps.useSegment(InstructionFlag::PRE_DS, info->codeType(), pInst);
				}

			}

			return OperandDecodeResult::OK;
		}

	} // namespace


	void Operand::Set8(OperandTypeAbs::Enum type_)
	{
		X_ASSERT(!(type == OperandTypeAbs::IMM || type == OperandTypeAbs::IMM1 || type == OperandTypeAbs::IMM2));

		size = 8;
		type = type_;
	}

	void Operand::Set16(OperandTypeAbs::Enum type_)
	{
		X_ASSERT(!(type == OperandTypeAbs::IMM || type == OperandTypeAbs::IMM1 || type == OperandTypeAbs::IMM2));

		size = 16;
		type = type_;
	}

	void Operand::Set32(OperandTypeAbs::Enum type_)
	{
		X_ASSERT(!(type == OperandTypeAbs::IMM || type == OperandTypeAbs::IMM1 || type == OperandTypeAbs::IMM2));

		size = 32;
		type = type_;
	}

	void Operand::Set64(OperandTypeAbs::Enum type_)
	{
		X_ASSERT(!(type == OperandTypeAbs::IMM || type == OperandTypeAbs::IMM1 || type == OperandTypeAbs::IMM2));

		size = 64;
		type = type_;
	}


	void Operand::Set8(OperandTypeAbs::Enum type_, int32_t index_)
	{
		type = type_;
		size = 8;
		index = safe_static_cast<uint8_t>(index_); // any bases must be pre applied for 8bit.
	}

	void Operand::Set16(OperandTypeAbs::Enum type_, int32_t index_)
	{
		type = type_;
		size = 16;
		index = safe_static_cast<uint8_t>(index_) + RegIndex::REG_16_BASE;
	}

	void Operand::Set32(OperandTypeAbs::Enum type_, int32_t index_)
	{
		type = type_;
		size = 32;
		index = safe_static_cast<uint8_t>(index_) + RegIndex::REG_32_BASE;
	}

	void Operand::Set64(OperandTypeAbs::Enum type_, int32_t index_)
	{
		type = type_;
		size = 64;
		index = safe_static_cast<uint8_t>(index_) + RegIndex::REG_64_BASE;
	}

	void Operand::Set(OperandTypeAbs::Enum type_, RegIndex::Enum regIndex_, uint16_t size_)
	{
		type = type_;
		size = size_;
		index = regIndex_;
	}

	// =====================================================


	OperandDecodeResult::Enum ExtractOperand(CodeStream* info, Instruction* pInst, PrefixState& ps, uint32_t instructionFlag, uint32_t modRm,
		OperandType::Enum opType, OperandIdx::Enum opIdx, CodeType::Enum effOp, CodeType::Enum effAdd)
	{

		Operand& op = pInst->ops[opIdx];

		// http://www.c-jump.com/CIS77/CPU/x86/X77_0060_mod_reg_r_m_byte.htm
		// | 7-6 | 5-3 | 2-0
		// | MOD | REG | R/M |

		const uint32_t vrex = ps.vrex;
		const uint32_t mod = ((modRm >> 6) & 0x3);
		uint32_t reg = ((modRm >> 3) & 0x7);
		uint8_t rm = (modRm & 0x7);

		// memory indirection that can't be GPR
		{
			OpSize::Enum opSize = OpSize::INVALID;
			bool handled = true;

			switch (opType)
			{
			case OperandType::MEM:
				// size unkown.
				break;
			case OperandType::MEM_32:
				opSize = OpSize::BITS_32;
				break;
			case OperandType::MEM_32_64:
				// 64bits with REX
				if (effOp == CodeType::CODE_64BIT) {
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
					opSize = OpSize::BITS_64;
				}
				else {
					opSize = OpSize::BITS_32;
				}
				break;
			case OperandType::MEM_64:
				opSize = OpSize::BITS_64;
				break;
			case OperandType::MEM_64_128:
				if (effOp == CodeType::CODE_64BIT) {
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
					opSize = OpSize::BITS_128;
				}
				else {
					opSize = OpSize::BITS_64;
				}
				break;
			case OperandType::MEM_128:
				opSize = OpSize::BITS_128;
				break;

			case OperandType::MEM_OPT:
				// mem optional only required if mod != 3
				if (mod == 0x3) {
					return OperandDecodeResult::OK;
				}
				break;

			case OperandType::FPUM16:
				opSize = OpSize::BITS_16;
				break;
			case OperandType::FPUM32:
				opSize = OpSize::BITS_32;
				break;
			case OperandType::FPUM64:
				opSize = OpSize::BITS_64;
				break;
			case OperandType::FPUM80:
				opSize = OpSize::BITS_80;
				break;

				break;
			default:
				handled = false;
				break;
			}

			if (handled)
			{
				if (mod == 0x3) {
					// GPR can't be used.
					return OperandDecodeResult::INVALID;
				}

				op.size = safe_static_cast<uint16_t>(OpSize::OpSizeToBits(opSize));

				return ExtractOperandModRm(info, pInst, ps,
					opType, opIdx, effOp, effAdd,
					instructionFlag, mod, rm);
			}
		}

		// memory indirection that can be GPR
		{
			OpSize::Enum opSize = OpSize::INVALID;
			bool handled = true;

			// handle ones that can be memory address or a GPR.
			switch (opType)
			{
			case OperandType::REG_FULL_M16:
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);
				opSize = OpSize::BITS_16;
				break;

			case OperandType::RM_FULL:
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);
				if (effOp == CodeType::CODE_16BIT)
				{
					opSize = OpSize::BITS_16;
				}
				else if (effOp == CodeType::CODE_32BIT)
				{
					opSize = OpSize::BITS_32;
				}
				else if (effOp == CodeType::CODE_64BIT)
				{
					opSize = OpSize::BITS_64;

					// only mark rex if it took rex to get here.
					if (!bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS64)) {
						ps.addUsedPrefix(InstructionFlag::PRE_REX);
					}
				}
				break;
			case OperandType::RM_32_64:
				// 32 unless rex.	
				if (effOp == CodeType::CODE_64BIT) {
					opSize = OpSize::BITS_64;

					if (bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS64) &&
						bitUtil::IsFlagSet(instructionFlag, InstructionFlag::PRE_REX)) {
						ps.addUsedPrefix(InstructionFlag::PRE_REX);
					}
				}
				else {
					opSize = OpSize::BITS_32;
				}
				break;
			case OperandType::XMM_128:
				opSize = OpSize::BITS_128;
				break;
			case OperandType::MM_64:
			case OperandType::XMM_64:
				opSize = OpSize::BITS_64;
				break;
			case OperandType::RM_32:
			case OperandType::MM_32:
			case OperandType::XMM_32:
				opSize = OpSize::BITS_32;
				break;
			case OperandType::RM_16:
			case OperandType::XMM_16:
				opSize = OpSize::BITS_16;
				break;
			case OperandType::RM_8:
				opSize = OpSize::BITS_8;
				break;

			case OperandType::MEM_FULL_M16:
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);
				opSize = OpSize::BITS_16;
				break;

			default:
				handled = false;
				break;
			}

			if (handled)
			{
				X_ASSERT(opSize != OpSize::INVALID);
				op.size = safe_static_cast<uint16_t>(OpSize::OpSizeToBits(opSize));

				return ExtractOperandModRm(info, pInst, ps,
					opType, opIdx, effOp, effAdd,
					instructionFlag, mod, rm);
			}
		}

		switch (opType)
		{
			// REL_CI_* relative to current instruction.
		case OperandType::REL_CI_8:

			op.Set8(OperandTypeAbs::PC);

			if (!info->ReadValue(pInst->imm.sint8)) {
				return OperandDecodeResult::STREAM_END;
			}
			break;
		case OperandType::REL_CI_FULL:
			ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);

			if (effOp == CodeType::CODE_16BIT)
			{
				op.Set16(OperandTypeAbs::PC);

				if (!info->ReadValue(pInst->imm.sint16)) {
					return OperandDecodeResult::STREAM_END;
				}
			}
			else
			{
				op.Set32(OperandTypeAbs::PC);

				if (!info->ReadValue(pInst->imm.sint32)) {
					return OperandDecodeResult::STREAM_END;
				}
			}

			break;

			// SEG
		case OperandType::SEG:
		{
			RegIndex::Enum segReg = RegIndex::NONE;

#if X_DEBUG
			// check the instruction flags have alleast one seg reg set.
			if (!bitUtil::IsFlagSet(instructionFlag, InstructionFlag::SEGMENTS)) {
				X_ASSERT_UNREACABLE();
			}
#endif // !X_DEBUG

			// work out the segment from instruction flag.
			switch (instructionFlag & InstructionFlag::SEGMENTS)
			{
			case InstructionFlag::PRE_CS:
				segReg = RegIndex::CS;
				break;
			case InstructionFlag::PRE_SS:
				segReg = RegIndex::SS;
				break;
			case InstructionFlag::PRE_DS:
				segReg = RegIndex::DS;
				break;
			case InstructionFlag::PRE_ES:
				segReg = RegIndex::ES;
				break;
			case InstructionFlag::PRE_FS:
				segReg = RegIndex::FS;
				break;
			case InstructionFlag::PRE_GS:
				segReg = RegIndex::GS;
				break;
			}

			op.Set(OperandTypeAbs::REG, segReg, 16);
			break;
		}
		// IMM_*

		case OperandType::IMM_8:
			op.Set8(OperandTypeAbs::IMM);

			if (!info->ReadValue(pInst->imm.uint8)) {
				return OperandDecodeResult::STREAM_END;
			}
			break;
		case OperandType::IMM_16:
			op.Set16(OperandTypeAbs::IMM);

			if (!info->ReadValue(pInst->imm.uint16)) {
				return OperandDecodeResult::STREAM_END;
			}
			break;
		case OperandType::IMM_32:
			op.Set32(OperandTypeAbs::IMM);

			if (info->codeType() == CodeType::CODE_64BIT)
			{
				// sign extended.
				uint32_t temp;
				if (!info->ReadValue(temp)) {
					return OperandDecodeResult::STREAM_END;
				}

				pInst->imm.sint64 = temp;
			}
			else
			{
				if (!info->ReadValue(pInst->imm.uint32)) {
					return OperandDecodeResult::STREAM_END;
				}
			}

			break;
		case OperandType::IMM_FULL:

			if (effOp == CodeType::CODE_16BIT)
			{
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);

				op.Set16(OperandTypeAbs::IMM);

				if (!info->ReadValue(pInst->imm.uint16)) {
					return OperandDecodeResult::STREAM_END;
				}
			}
			else if (effOp == CodeType::CODE_64BIT &&
				(bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS64) &&
					bitUtil::IsFlagSet(instructionFlag, InstructionFlag::PRE_REX)))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);

				op.Set64(OperandTypeAbs::IMM);

				if (!info->ReadValue(pInst->imm.uint64)) {
					return OperandDecodeResult::STREAM_END;
				}
			}
			else // if (effOp == CodeType::CODE_32BIT)
			{
				op.Set32(OperandTypeAbs::IMM);

				if (!info->ReadValue(pInst->imm.uint32)) {
					return OperandDecodeResult::STREAM_END;
				}
			}

			break;

		case OperandType::IMM_S_8: // sign extended 8 bits.
			op.Set32(OperandTypeAbs::IMM);

			if (bitUtil::IsFlagSet(instructionFlag, InstructionFlag::PRE_OP_SIZE) &&
				bitUtil::IsFlagSet(ps.decodedPrefixFlags, InstructionFlag::PRE_OP_SIZE))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);

				switch (info->codeType())
				{
				case CodeType::CODE_16BIT:
					op.size = 32;
					break;
				case CodeType::CODE_32BIT:
				case CodeType::CODE_64BIT:
					op.size = 16;
					break;
				}
			}
			else
			{
				op.size = 8;
			}

			if (!info->ReadValue(pInst->imm.sint8)) {
				return OperandDecodeResult::STREAM_END;
			}
			break;


			// MOFFS*
		case OperandType::MOFFS_8:
			op.size = 8;
			// fall through.
			//	break;
		case OperandType::MOFFS_FULL:
			op.type = OperandTypeAbs::DISP;

			if (op.size == 0) // if we did not fall through work out the size.
			{
				switch (effOp)
				{
				case CodeType::CODE_16BIT: op.size = 16; break;
				case CodeType::CODE_32BIT: op.size = 32; break;
				case CodeType::CODE_64BIT: op.size = 64; break;
				}
			}

			ps.useSegment(InstructionFlag::PRE_DS, info->codeType(), pInst);

			if (effAdd == CodeType::CODE_16BIT)
			{
				ps.addUsedPrefix(InstructionFlag::PRE_ADDR_SIZE);

				pInst->displacementSize = 16;
				if (!info->ReadDisplacementValue(pInst->displacement, 2)) {
					return OperandDecodeResult::STREAM_END;
				}
			}
			else if (effAdd == CodeType::CODE_32BIT)
			{
				ps.addUsedPrefix(InstructionFlag::PRE_ADDR_SIZE);

				pInst->displacementSize = 32;
				if (!info->ReadDisplacementValue(pInst->displacement, 4)) {
					return OperandDecodeResult::STREAM_END;
				}
			}
			else // 64
			{
				pInst->displacementSize = 64;

				if (!info->ReadDisplacementValue(pInst->displacement, 8)) {
					return OperandDecodeResult::STREAM_END;
				}
			}

			break;

			// ACC_*
		case OperandType::ACC_8:
			op.Set(OperandTypeAbs::REG, RegIndex::AL, 8);
			break;
		case OperandType::ACC_16:
			op.Set(OperandTypeAbs::REG, RegIndex::AX, 16);

			break;
		case OperandType::ACC_FULL_NOT64:
			// fall through
			// break;
		case OperandType::ACC_FULL:
			if (effOp == CodeType::CODE_16BIT)
			{
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);
				op.Set(OperandTypeAbs::REG, RegIndex::AX, 16);
			}
			else if (effOp == CodeType::CODE_32BIT)
			{
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);
				op.Set(OperandTypeAbs::REG, RegIndex::EAX, 32);
			}
			else // 64
			{
				// must be none auto promoted instruction in order to need a rex prefix.
				if (!bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS64)) {
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
				}

				op.Set(OperandTypeAbs::REG, RegIndex::RAX, 64);
			}
			break;


			// REG_*
		case OperandType::REG_8:
			if (ps.ExtType != PrefixExtType::NONE)
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);
				if (bitUtil::IsFlagSet(vrex, RexPrefixMask::R))
				{
					reg += RegIndex::EX_GPR_OFFSET;
				}

				if (reg >= 4 && reg < 8) {
					reg += RegIndex::REG_8_REX_BASE;
					reg -= 4; // turn the 4-7 to 0-3
				}
				else {
					reg += RegIndex::REG_8_BASE;
				}
			}
			else
			{
				reg += RegIndex::REG_8_BASE;
			}

			op.Set8(OperandTypeAbs::REG, reg);
			break;
		case OperandType::REG_16:
			op.Set16(OperandTypeAbs::REG, reg);
			break;
		case OperandType::REG_32:
			if (bitUtil::IsFlagSet(vrex, RexPrefixMask::R))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);
				reg += RegIndex::EX_GPR_OFFSET;
			}
			op.Set32(OperandTypeAbs::REG, reg);
			break;

		case OperandType::REG_32_64:
			if (bitUtil::IsFlagSet(vrex, RexPrefixMask::R))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);
				reg += RegIndex::EX_GPR_OFFSET;
			}

			if (info->codeType() == CodeType::CODE_64BIT &&
				bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS64) &&
				!bitUtil::IsFlagSet(instructionFlag, InstructionFlag::PRE_REX))
			{
				op.Set64(OperandTypeAbs::REG, reg);
				break;
			}

			if (bitUtil::IsFlagSet(vrex, RexPrefixMask::W))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);
				op.Set64(OperandTypeAbs::REG, reg);
			}
			else
			{
				op.Set32(OperandTypeAbs::REG, reg);
			}
			break;

		case OperandType::REG_FULL:
			switch (effOp)
			{
			case CodeType::CODE_16BIT:
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);
				if (bitUtil::IsFlagSet(vrex, RexPrefixMask::R))
				{
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
					reg += RegIndex::EX_GPR_OFFSET;
				}

				op.Set16(OperandTypeAbs::REG, reg);
				break;
			case CodeType::CODE_32BIT:
				if (bitUtil::IsFlagSet(vrex, RexPrefixMask::R))
				{
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
					reg += RegIndex::EX_GPR_OFFSET;
				}
				else
				{
					ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);
				}

				op.Set32(OperandTypeAbs::REG, reg);
				break;
			case CodeType::CODE_64BIT:
				ps.addUsedPrefix(InstructionFlag::PRE_REX);

				if (bitUtil::IsFlagSet(vrex, RexPrefixMask::R))
				{
					reg += RegIndex::EX_GPR_OFFSET;
				}

				op.Set64(OperandTypeAbs::REG, reg);
				break;
			default:
				X_ASSERT_NOT_IMPLEMENTED();
				break;
			}
			break;

			// instruction blocks.
		case OperandType::BLOCK_R_8:
			reg = (*(info->current() - 1) & 7);

			if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B)) // extended GPR's?
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);

				reg += RegIndex::REG_8_BASE + RegIndex::EX_GPR_OFFSET;
			}
			else if (ps.ExtType == PrefixExtType::REX)
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);

				if (reg >= 4 && reg < 8) {
					reg += RegIndex::REG_8_REX_BASE;
					reg -= 4; // turn the 4-7 to 0-3
				}
				else {
					reg += RegIndex::REG_8_BASE;
				}
			}
			else
			{
				reg += RegIndex::REG_8_BASE;
			}

			op.Set8(OperandTypeAbs::REG, reg);
			break;

		case OperandType::BLOCK_R_FULL:
			// go back to the Op code byte and get the 3 LSB's 
			reg = (*(info->current() - 1) & 7);
			switch (effOp)
			{
			case CodeType::CODE_16BIT:
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);

				if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B)) // extended GPR's?
				{
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
					reg += RegIndex::EX_GPR_OFFSET;
				}

				op.Set16(OperandTypeAbs::REG, reg);
				break;
			case CodeType::CODE_32BIT:
				if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B)) // extended GPR's?
				{
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
					reg += RegIndex::EX_GPR_OFFSET;
				}
				else
				{
					ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);
				}

				op.Set32(OperandTypeAbs::REG, reg);
				break;
			case CodeType::CODE_64BIT:
				// auto promoted can drop REX prefix.
				if (bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS64) &&
					!bitUtil::IsFlagSet(instructionFlag, InstructionFlag::PRE_REX))
				{
					if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B)) // extended GPR's?
					{
						ps.addUsedPrefix(InstructionFlag::PRE_REX);
						reg += RegIndex::EX_GPR_OFFSET;
					}
				}
				else
				{
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
					if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B)) // extended GPR's?
					{
						reg += RegIndex::EX_GPR_OFFSET;
					}
				}

				op.Set64(OperandTypeAbs::REG, reg);
				break;
			}
			break;

			// repeatable instructions
		case OperandType::REG_ESI:
			op.type = OperandTypeAbs::SMEM;

			ps.addUsedPrefix(InstructionFlag::PRE_ADDR_SIZE);

			if (bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS16))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);

				if (effOp == CodeType::CODE_16BIT)
				{
					op.size = 8;
				}
				else if (effOp == CodeType::CODE_64BIT && bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS64))
				{
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
					op.size = 64;
				}
				else // 32
				{
					op.size = 32;
				}
			}
			else
			{
				op.size = 8;
			}

			pInst->segment = RegIndex::NONE;
			ps.useSegment(InstructionFlag::PRE_DS, info->codeType(), pInst);

			if (effAdd == CodeType::CODE_16BIT)
			{
				op.regIndex = RegIndex::SI;
			}
			else if (effAdd == CodeType::CODE_32BIT)
			{
				op.regIndex = RegIndex::ESI;
			}
			else // if (effOp == CodeType::CODE_64BIT)
			{
				op.regIndex = RegIndex::RSI;
			}
			break;


		case OperandType::REG_EDI:
			op.type = OperandTypeAbs::SMEM;

			ps.addUsedPrefix(InstructionFlag::PRE_ADDR_SIZE);

			if (bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS16))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);

				if (effOp == CodeType::CODE_16BIT)
				{
					op.size = 8;
				}
				else if (effOp == CodeType::CODE_64BIT && bitUtil::IsFlagSet(instructionFlag, InstructionFlag::BITS64))
				{
					ps.addUsedPrefix(InstructionFlag::PRE_REX);
					op.size = 64;
				}
				else // 32
				{
					op.size = 32;
				}
			}
			else
			{
				op.size = 8;
			}

			if (opIdx == OperandIdx::Dest && info->codeType() != CodeType::CODE_64BIT) {
				pInst->segment = RegIndex::ES;
			}

			if (effAdd == CodeType::CODE_16BIT)
			{
				op.regIndex = RegIndex::DI;
			}
			else if (effAdd == CodeType::CODE_32BIT)
			{
				op.regIndex = RegIndex::EDI;
			}
			else // if (effOp == CodeType::CODE_64BIT)
			{
				op.regIndex = RegIndex::RDI;
			}

			break;


		case OperandType::REG_DX:
			// IN/OUT
			op.Set(OperandTypeAbs::REG, RegIndex::DX, 16);
			break;
		case OperandType::REG_CL:
			op.Set(OperandTypeAbs::REG, RegIndex::CL, 8);
			break;

		case OperandType::REG_EBXAL:
			// [(r)BX + AL] 
			ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);

			op.Set(OperandTypeAbs::MEM, RegIndex::AL, 8);

			ps.useSegment(InstructionFlag::PRE_DS, info->codeType(), pInst);

			if (effAdd == CodeType::CODE_16BIT)
			{
				pInst->base = RegIndex::BX;
			}
			else if (effAdd == CodeType::CODE_32BIT)
			{
				pInst->base = RegIndex::EBX;

			}
			else // if (effOp == CodeType::CODE_64BIT)
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);
				pInst->base = RegIndex::RBX;
			}

			break;

		case OperandType::MM:
		{
			op.Set(OperandTypeAbs::REG, static_cast<RegIndex::Enum>(RegIndex::REG_MMX_BASE + reg), 64);
			break;
		}
		case OperandType::MM_RM:
		{
			op.Set(OperandTypeAbs::REG, static_cast<RegIndex::Enum>(RegIndex::REG_MMX_BASE + rm), 64);
			break;
		}
		case OperandType::XMM:
		{
			if (bitUtil::IsFlagSet(vrex, RexPrefixMask::R))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);
				reg += RegIndex::EX_GPR_OFFSET;
			}

			op.Set(OperandTypeAbs::REG, static_cast<RegIndex::Enum>(RegIndex::REG_SSE_BASE + reg), 128);
			break;
		}
		case OperandType::XMM_RM:
		{
			if (bitUtil::IsFlagSet(vrex, RexPrefixMask::B))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);
				rm += RegIndex::EX_GPR_OFFSET;
			}

			op.Set(OperandTypeAbs::REG, static_cast<RegIndex::Enum>(RegIndex::REG_SSE_BASE + rm), 128);
			break;
		}



		// reg sets.
		case OperandType::CREG:
		{
			if (bitUtil::IsFlagSet(vrex, RexPrefixMask::R))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_REX);
				reg += RegIndex::EX_GPR_OFFSET;
			}
			else if (info->codeType() == CodeType::CODE_64BIT &&
				bitUtil::IsFlagSet(ps.decodedPrefixFlags, InstructionFlag::PRE_LOCK))
			{
				ps.addUsedPrefix(InstructionFlag::PRE_LOCK);
				reg += RegIndex::EX_GPR_OFFSET;
			}

			uint16_t regSize = 32;

			if (info->codeType() == CodeType::CODE_64BIT) {
				regSize = 64;
			}

			op.Set(OperandTypeAbs::REG, static_cast<RegIndex::Enum>(RegIndex::REG_CREG_BASE + reg), regSize);
			break;
		}
		case OperandType::DREG:
		{
			uint16_t regSize = 32;

			if (info->codeType() == CodeType::CODE_64BIT) {
				regSize = 64;
			}

			op.Set(OperandTypeAbs::REG, static_cast<RegIndex::Enum>(RegIndex::REG_DREG_BASE + reg), regSize);
			break;
		}
		case OperandType::SREG:
			op.Set(OperandTypeAbs::REG, static_cast<RegIndex::Enum>(RegIndex::REG_SREG_BASE + reg), 16);
			break;

		case OperandType::PTR16_FULL:

			if (info->codeType() == CodeType::CODE_64BIT)
			{
				X_ASSERT_UNREACABLE();
			}
			else if (info->codeType() == CodeType::CODE_16BIT)
			{
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);

				uint16_t temp = 0;

				if (!info->ReadValue(temp)) {
					return OperandDecodeResult::STREAM_END;
				}
				if (!info->ReadValue(pInst->imm.ptr.seg)) {
					return OperandDecodeResult::STREAM_END;
				}

				pInst->imm.ptr.off = temp;

				op.Set(OperandTypeAbs::PTR, RegIndex::NONE, 16);
			}
			else
			{
				ps.addUsedPrefix(InstructionFlag::PRE_OP_SIZE);

				if (!info->ReadValue(pInst->imm.ptr.off)) {
					return OperandDecodeResult::STREAM_END;
				}
				if (!info->ReadValue(pInst->imm.ptr.seg)) {
					return OperandDecodeResult::STREAM_END;
				}

				op.Set(OperandTypeAbs::PTR, RegIndex::NONE, 32);
			}
			break;

		case OperandType::CONST1:
			op.Set8(OperandTypeAbs::IMM);
			pInst->imm.uint8 = 1;
			break;

		case OperandType::FPU_SI:
		{
			uint8_t idx = (*(info->getPtr<uint8_t>() - 1) & 7);

			op.Set(OperandTypeAbs::REG, static_cast<RegIndex::Enum>(RegIndex::REG_FPU_BASE + idx), 32);
		}
		break;
		case OperandType::FPU_SSI:
		{
			// two operands are decoded.
			Operand& op2 = pInst->ops[opIdx + 1];
			uint8_t idx = (*(info->getPtr<uint8_t>() - 1) & 7);

			op.Set(OperandTypeAbs::REG, RegIndex::ST0, 32);
			op2.Set(OperandTypeAbs::REG, static_cast<RegIndex::Enum>(RegIndex::REG_FPU_BASE + idx), 32);
		}
		break;
		case OperandType::FPU_SIS:
		{
			// two operands are decoded.
			Operand& op2 = pInst->ops[opIdx + 1];
			uint8_t idx = (*(info->getPtr<uint8_t>() - 1) & 7);

			op.Set(OperandTypeAbs::REG, static_cast<RegIndex::Enum>(RegIndex::REG_FPU_BASE + idx), 32);
			op2.Set(OperandTypeAbs::REG, RegIndex::ST0, 32);
		}
		break;

		default:
			X_ASSERT_NOT_IMPLEMENTED();
			return OperandDecodeResult::INVALID;
		}

		return OperandDecodeResult::OK;
	}


} // namespace TDiss