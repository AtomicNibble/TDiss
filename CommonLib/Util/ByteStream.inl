


X_INLINE void ByteStream::Reserve(const size_t bytes)
{
	if (bytes > Size()) {
		stream_.reserve(bytes);
	}
}

X_INLINE size_t ByteStream::Size(void) const
{
	return stream_.size();
}

X_INLINE const uint8_t* ByteStream::Data(void) const
{
	return stream_.data();
}

X_INLINE void ByteStream::WriteString(const std::string& str)
{
	if (!str.empty()) {
		uint8_t* pBuf = AddMem(StringBytesIncNull(str));
		
		memcpy(pBuf, str.data(), str.length() + 1);
	}
}

X_INLINE void ByteStream::WriteString(const std::wstring& str)
{
	if (!str.empty()) {
		size_t len = StringBytesIncNull(str);
		uint8_t* pBuf = AddMem(len);

		memcpy(pBuf, str.data(), len);
	}
}


template<typename T>
X_INLINE void ByteStream::WritePOD(const T& obj)
{
	T* pData = AddMem<T>();
	*pData = obj;
}

template<typename T>
X_INLINE void ByteStream::WritePOD(const T* pObj, const size_t num)
{
	T* pData = AddMem<T>(num);

	for (size_t i = 0; i < num; i++) {
		pData[i] = pObj[i];
	}
}

template<typename T>
X_INLINE void ByteStream::WriteVec(const std::vector<T>& vec)
{
	size_t i, num = vec.size();
	if (vec.empty() == false) 
	{
		T* pData = AddMem<T>(num);
		for (i = 0; i < num; i++) {
			pData[i] = vec[i];
		}
	}
}

X_INLINE void ByteStream::WriteStream(const ByteStream& oth)
{
	if (oth.Size() > 0) {
		uint8_t* pData = AddMem(oth.Size());
		memcpy(pData, oth.stream_.data(), oth.Size());
	}
}

X_INLINE void ByteStream::WriteBytes(const uint8_t* pDataIN, size_t numBytes)
{
	if (numBytes > 0) {
		uint8_t* pData = AddMem(numBytes);
		memcpy(pData, pDataIN, numBytes);
	}
}

template<typename T>
X_INLINE T* ByteStream::AddMem()
{
	return reinterpret_cast<T*>(AddMem(sizeof(T)));
}

template<typename T>
X_INLINE T* ByteStream::AddMem(const size_t num)
{
	return reinterpret_cast<T*>(AddMem(sizeof(T) * num));
}

X_INLINE uint8_t* ByteStream::AddMem(const size_t numBytes)
{
	stream_.resize(Size() + numBytes);

	return stream_.data() + (Size() - numBytes);
}