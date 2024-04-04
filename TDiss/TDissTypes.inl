#pragma once

namespace TDiss
{

    X_INLINE CodeStream::CodeStream(uint64_t codeVirtualAdd, const uint8_t* pCode,
        intptr_t codeLen, uint32_t options, CodeType::Enum codeType)
    {
        codeVirtualAdd_ = codeVirtualAdd;
        pCur_ = pCode;
        pBegin_ = pCode;
        pBegin_ = pCode;
        pEnd_ = pCode + codeLen;
        pMarker_ = nullptr;
        options_ = options;
        codeType_ = codeType;
    }

    X_INLINE bool CodeStream::IsAddMask32(void) const
    {
        return bitUtil::IsFlagSet(options_, DisOptions::ADDRESS_MASK_32);
    }

    X_INLINE bool CodeStream::is64BitDecode(void) const
    {
        return codeType_ == CodeType::CODE_64BIT;
    }

    X_INLINE bool CodeStream::is32itDecode(void) const
    {
        return codeType_ == CodeType::CODE_32BIT;
    }

    X_INLINE bool CodeStream::stopOnFlowEnabled(void) const
    {
        return bitUtil::IsFlagSet(options_, DisOptions::STOP_ON_FLOW);
    }

    X_INLINE CodeType::Enum CodeStream::codeType(void) const
    {
        return codeType_;
    }

    X_INLINE uint32_t CodeStream::options(void) const
    {
        return options_;
    }

    X_INLINE void CodeStream::setOptions(uint32_t op)
    {
        options_ = op;
    }

    X_INLINE const uint8_t* CodeStream::current(void) const
    {
        return pCur_;
    }

    X_INLINE const uint8_t* CodeStream::begin(void) const
    {
        return pBegin_;
    }

    X_INLINE const uint8_t* CodeStream::end(void) const
    {
        return pEnd_;
    }

    X_INLINE intptr_t CodeStream::length(void) const
    {
        return pEnd_ - pBegin_;
    }

    X_INLINE intptr_t CodeStream::bytesLeft(void) const
    {
        return pEnd_ - pCur_;
    }

    X_INLINE uint64_t CodeStream::baseVA(void) const
    {
        return codeVirtualAdd_;
    }

    X_INLINE uint64_t CodeStream::currentVA(void) const
    {
        return codeVirtualAdd_ + union_cast<uintptr_t>(pCur_ - pBegin_);
    }

    X_INLINE uint64_t CodeStream::currentVAOffset(void) const
    {
        return union_cast<uintptr_t>(pCur_ - pBegin_);
    }

    X_INLINE void CodeStream::setMarker(void)
    {
        pMarker_ = pCur_;
    }

    X_INLINE void CodeStream::setToMarker(void)
    {
        if (pMarker_) {
            pCur_ = pMarker_;
        }
    }

    X_INLINE bool CodeStream::ReadDisplacementValue(uint64_t& out, size_t size)
    {
        if (bytesLeft() < static_cast<intptr_t>(size)) {
            return false;
        }

        if (size == 1) {
            out = *pCur_;
        }
        else if (size == 2) {
            out = *reinterpret_cast<const uint16_t*>(pCur_);
        }
        else if (size == 4) {
            out = *reinterpret_cast<const uint32_t*>(pCur_);
        }
        else if (size == 8) {
            out = *reinterpret_cast<const uint64_t*>(pCur_);
        }
        else {
            X_ASSERT_NOT_IMPLEMENTED();
        }

        pCur_ += size;
        return true;
    }

	template<typename T>
	X_INLINE bool CodeStream::ReadValue(T& out)
	{
		const size_t size = sizeof(T);
		if (bytesLeft() < size) {
			return false;
		}

		out = *getSeekPtr<const T>();
		return true;
	}

	X_INLINE void CodeStream::SeekBytes(size_t num)
	{
		Seek<uint8_t>(num);
	}

	X_INLINE void CodeStream::SignedSeek(intptr_t num)
	{
		pCur_ -= num;

		if (pCur_ < pBegin_) {
			pCur_ = pBegin_;
		}
		else if (pCur_ > pEnd_) {
			pCur_ = pEnd_;
		}
	}

	template<typename Type>
	X_INLINE void CodeStream::Seek(size_t num)
	{
		union {
			const Type* as_type;
			const uint8_t* as_self;
		};

		as_self = pCur_;
		as_type += num;
		pCur_ = as_self;
	}


	template<typename Type>
	X_INLINE const Type CodeStream::getSeek(void)
	{
		return *getSeekPtr<Type>();
	}

	template<typename Type>
	X_INLINE const Type* CodeStream::getSeekPtr(void)
	{
		const Type* val = getPtr<Type>();
		Seek<Type>(1);
		return val;
	}

	template<typename Type>
	X_INLINE const Type CodeStream::get(void) const
	{
		return *getPtr<Type>();
	}

	template<typename Type>
	X_INLINE const Type* CodeStream::getPtr(void) const
	{
		return reinterpret_cast<const Type*>(pCur_);
	}

	X_INLINE bool CodeStream::isEof(void) const
	{
		return pCur_ >= pEnd_;
	}

} // namespace TDiss