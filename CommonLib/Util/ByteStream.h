#pragma once

class ByteStream
{
	typedef std::vector<uint8_t> Stream;

public:
	ByteStream() = default;
	~ByteStream() = default;

	X_INLINE void Reserve(const size_t numBytes);
	X_INLINE size_t Size(void) const;
	X_INLINE const uint8_t* Data(void) const;

	X_INLINE void WriteString(const std::string& str);
	X_INLINE void WriteString(const std::wstring& str);

	// could make these all overloads.
	template<typename T>
	X_INLINE void WritePOD(const T& obj);
	template<typename T>
	X_INLINE void WritePOD(const T* pObj, const size_t num);
	template<typename T>
	X_INLINE void WriteVec(const std::vector<T>& vec);

	X_INLINE void WriteStream(const ByteStream& oth);

	X_INLINE void WriteBytes(const uint8_t* pData, size_t numBytes);

	// write to file.
	bool WriteToFile(FileUtil::ScopedFile& file) const;

private:
	template<typename T>
	X_INLINE T* AddMem();
	template<typename T>
	X_INLINE T* AddMem(const size_t num);
	X_INLINE uint8_t* AddMem(const size_t numBytes);

private:
	Stream stream_;
};

#include "ByteStream.inl"

