#include "pch.h"
#include "Prefix.h"


namespace TDiss
{
	/*

	Flags:
	B: 1
	X: 2
	R: 4
	W: 8

	40							E			REX										Access to new 8-bit registers
	41							E			REX.B									Extension of r/m field, base field, or opcode reg field
	42							E			REX.X									Extension of SIB index field
	43							E			REX.XB									REX.X and REX.B combination
	44							E			REX.R									Extension of ModR/M reg field
	45							E			REX.RB									REX.R and REX.B combination
	46							E			REX.RX									REX.R and REX.X combination
	47							E			REX.RXB									REX.R, REX.X and REX.B combination
	48							E			REX.W									64 Bit Operand Size
	49							E			REX.WB									REX.W and REX.B combination
	4A							E			REX.WX									REX.W and REX.X combination
	4B							E			REX.WXB									REX.W, REX.X and REX.B combination
	4C							E			REX.WR									REX.W and REX.R combination
	4D							E			REX.WRB									REX.W, REX.R and REX.B combination
	4E							E			REX.WRX									REX.W, REX.R and REX.X combination
	4F							E			REX.WRXB								REX.W, REX.R, REX.X and REX.B combination

	*/

	bool PrefixState::isValidPrefix(CodeStream& strm)
	{
		if (strm.isEof()) {
			return false;
		}
		return isValidPrefix(strm.get<uint8_t>(), strm.codeType());
	}

	bool PrefixState::isValidPrefix(const uint8_t op, CodeType::Enum ct)
	{
		switch (op)
		{
		case 0x40:
		case 0x41:
		case 0x42:
		case 0x43:
		case 0x44:
		case 0x45:
		case 0x46:
		case 0x47:
		case 0x48:
		case 0x49:
		case 0x4a:
		case 0x4b:
		case 0x4c:
		case 0x4d:
		case 0x4e:
		case 0x4f:
			return (ct == CodeType::CODE_64BIT);

		case Prefix::LOCK:
		case Prefix::REPNZ:
		case Prefix::REP:
		case Prefix::CS:
		case Prefix::SS:
		case Prefix::DS:
		case Prefix::ES:
		case Prefix::FS:
		case Prefix::GS:
		case Prefix::OP_SIZE:
		case Prefix::ADD_SIZE:
			return true;

		case Prefix::VEX2b:
		case Prefix::VEX3b:
			// need to confirm these
			return true;

		default:
			break;

		}

		return false;
	}

	PrefixGroup::Enum PrefixState::getPrefixGroup(const uint8_t op, CodeType::Enum ct)
	{
		switch (op)
		{
		case 0x40:
		case 0x41:
		case 0x42:
		case 0x43:
		case 0x44:
		case 0x45:
		case 0x46:
		case 0x47:
		case 0x48:
		case 0x49:
		case 0x4a:
		case 0x4b:
		case 0x4c:
		case 0x4d:
		case 0x4e:
		case 0x4f:
		{
			if (ct == CodeType::CODE_64BIT) {
				return PrefixGroup::REX;
			}
			return PrefixGroup::NONE;
			break;
		}

		case Prefix::LOCK:
		case Prefix::REPNZ:
		case Prefix::REP:
			return PrefixGroup::LOCK_REP;

		case Prefix::CS:
		case Prefix::SS:
		case Prefix::DS:
		case Prefix::ES:
		case Prefix::FS:
		case Prefix::GS:
			return PrefixGroup::SEG;

		case Prefix::OP_SIZE:
			return PrefixGroup::OP_SIZE;

		case Prefix::ADD_SIZE:
			return PrefixGroup::ADD_SIZE;

			//	case Prefix::VEX2b:
			//	case Prefix::VEX3b:

		default:
			break;
		}

		return PrefixGroup::NONE;
	}

	// ----------------------------------------------

	PrefixState::PrefixState(IDissLogger* pLogger) :
		pLogger_(pLogger)
	{
		pStart_ = nullptr;
		pEnd_ = nullptr;
		pVex_ = nullptr;
		pRex_ = nullptr;

		ExtType = PrefixExtType::NONE;

		decodedPrefixFlags = 0;
		usedPrefixFlags = 0;
		unusedPrefixMask = 0;

		vexV = 0;
		vrex = 0;

		memset(pfIndexOff, -1, sizeof(pfIndexOff));
	}

	void PrefixState::decode(CodeStream& strm)
	{
		if (!PrefixState::isValidPrefix(strm)) {
			return;
		}

		pStart_ = strm.current();

		CodeType::Enum ct = strm.codeType();

		// There are size types of prefixes
		// and upto six prefixes before a instruction not of same type and in any order.
		// exception to this is: REX/VEX which mush precede immediately the first opcode byte.
		// VEX is only allowed once.
		size_t byteIdx = 0;

		for (; !strm.isEof() && union_cast<size_t>(strm.current() - pStart_) < MAX_INSTRUCTION_SIZE; strm.SeekBytes(1), byteIdx++)
		{
			const uint8_t op = strm.get<uint8_t>();

			// 64:
			// REX : 0x40 - 0x4f, extends register access.

			switch (op)
			{
				// rex x64 only
			case 0x40:
			case 0x41:
			case 0x42:
			case 0x43:
			case 0x44:
			case 0x45:
			case 0x46:
			case 0x47:
			case 0x48:
			case 0x49:
			case 0x4a:
			case 0x4b:
			case 0x4c:
			case 0x4d:
			case 0x4e:
			case 0x4f:
			{
				if (ct == CodeType::CODE_64BIT)
				{
					decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_REX);
					addUsedPrefix(byteIdx, PrefixGroup::REX);
					vrex = op & 0xf; // keep only the BXRW flags.
					pRex_ = strm.current();
					ExtType = PrefixExtType::REX;
				}
				else {
					goto exit_loop;
				}
				break;
			}

			// seg
			case Prefix::CS:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_CS);
				addUsedPrefix(byteIdx, PrefixGroup::SEG);
				break;
			case Prefix::SS:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_SS);
				addUsedPrefix(byteIdx, PrefixGroup::SEG);
				break;
			case Prefix::DS:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_DS);
				addUsedPrefix(byteIdx, PrefixGroup::SEG);
				break;
			case Prefix::ES:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_ES);
				addUsedPrefix(byteIdx, PrefixGroup::SEG);
				break;
			case Prefix::FS:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_FS);
				addUsedPrefix(byteIdx, PrefixGroup::SEG);
				break;
			case Prefix::GS:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_GS);
				addUsedPrefix(byteIdx, PrefixGroup::SEG);
				break;

				// lock
			case Prefix::LOCK:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_LOCK);
				addUsedPrefix(byteIdx, PrefixGroup::LOCK_REP);
				break;

				// rep
			case Prefix::REP:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_REP);
				addUsedPrefix(byteIdx, PrefixGroup::LOCK_REP);
				break;
			case Prefix::REPNZ:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_REPNZ);
				addUsedPrefix(byteIdx, PrefixGroup::LOCK_REP);
				break;

				// Op size
			case Prefix::OP_SIZE:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_OP_SIZE);
				addUsedPrefix(byteIdx, PrefixGroup::OP_SIZE);
				break;

				// Add size
			case Prefix::ADD_SIZE:
				decodedPrefixFlags = bitUtil::SetBitFlag(decodedPrefixFlags, InstructionFlag::PRE_ADDR_SIZE);
				addUsedPrefix(byteIdx, PrefixGroup::ADD_SIZE);
				break;

			default:
				goto exit_loop;
				break;
			}
		}

	exit_loop:

		// VEX 2b
		if (strm.bytesLeft() >= 2)
		{
			if (strm.get<uint8_t>() == Prefix::VEX2b)
			{
				// space?
				size_t curIs = (strm.current() - pStart_);
				if (curIs <= (MAX_INSTRUCTION_SIZE - 2))
				{
					if (ct == CodeType::CODE_64BIT || *(strm.current() + 1) == 0xc0) // DIVIDED_MODRM
					{
						TDISS_WARN("Potentially VEX2b");

					}
				}
			}
		}

		// VEX 3b
		if (strm.bytesLeft() >= 3)
		{
			if (strm.get<uint8_t>() == Prefix::VEX3b)
			{
				// space?
				size_t curIs = (strm.current() - pStart_);
				if (curIs <= (MAX_INSTRUCTION_SIZE - 3))
				{
					if (!bitUtil::IsBitFlagSet(decodedPrefixFlags, InstructionFlag::PRE_VEX))
					{
						if (ct == CodeType::CODE_64BIT || *(strm.current() + 1) == 0xc0) // DIVIDED_MODRM
						{
							TDISS_WARN("Potentially VEX3b");
						}
					}
				}
			}
		}

		pEnd_ = strm.current();
	}

	void PrefixState::addUsedPrefix(size_t idx, PrefixGroup::Enum group)
	{
		ignorePrefix(group);

		pfIndexOff[group] = static_cast<int32_t>(idx);
	}

	void PrefixState::addUsedPrefix(InstructionFlag::Enum pre)
	{
		usedPrefixFlags = bitUtil::SetBitFlag(usedPrefixFlags, pre & 0xFFFFFFFF);
	}

	void PrefixState::ignorePrefix(PrefixGroup::Enum group)
	{
		if (pfIndexOff[group] != -1) {
			unusedPrefixMask = bitUtil::SetBitFlag(unusedPrefixMask, pfIndexOff[group]);
		}
	}

	void PrefixState::removeDecodedPrefix(InstructionFlag::Enum pre)
	{
		decodedPrefixFlags = bitUtil::ClearBitFlag(decodedPrefixFlags, pre & 0xFFFFFFFF);
	}

	void PrefixState::useSegment(InstructionFlag::Enum segPrefix, CodeType::Enum ct, Instruction* pInst)
	{
		X_ASSERT_NOT_NULL(pInst);

		uint32_t flags;
		if (ct == CodeType::CODE_64BIT)
		{
			flags = decodedPrefixFlags & InstructionFlag::SEG_OVERRIDE_MASK64;
		}
		else
		{
			flags = decodedPrefixFlags & InstructionFlag::SEG_OVERRIDE_MASK;
		}

		if (flags == 0 || flags == segPrefix)
		{
			flags = segPrefix & 0xFFFFFFFF;
		}
		else
		{
			usedPrefixFlags |= flags;
		}

		switch (flags)
		{
		case InstructionFlag::PRE_ES:
			pInst->segment = RegIndex::ES;
			break;
		case InstructionFlag::PRE_CS:
			pInst->segment = RegIndex::CS;
			break;
		case InstructionFlag::PRE_SS:
			pInst->segment = RegIndex::SS;
			break;
		case InstructionFlag::PRE_DS:
			pInst->segment = RegIndex::DS;
			break;
		case InstructionFlag::PRE_FS:
			pInst->segment = RegIndex::FS;
			break;
		case InstructionFlag::PRE_GS:
			pInst->segment = RegIndex::GS;
			break;
		}

		if (ct == CodeType::CODE_64BIT && (flags & InstructionFlag::SEG_OVERRIDE_MASK32) != 0)
		{
			pInst->segment = RegIndex::NONE;
		}
	}

} // namespace TDiss