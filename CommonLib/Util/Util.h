#pragma once


template<class T> inline T Max(T x, T y) { return (x > y) ? x : y; }
template<class T> inline T Min(T x, T y) { return (x < y) ? x : y; }

template<class T> inline T Max(T x, T y, T c) { return Max(Max(x, y), c); }
template<class T> inline T Min(T x, T y, T c) { return Min(Min(x, y), c); }

template<typename T>
void zero_object(T& obj)
{
	memset(&obj, 0, sizeof(T));
}

template<typename T>
void zero_this(T* obj)
{
	memset(obj, 0, sizeof(T));
}

inline void zero_str_buf(char* str)
{
	memset(str, 0, std::strlen(str));
}

template<typename T>
inline void zero_vec(std::vector<T>& vec)
{
	memset(vec.data(), 0, vec.size() * sizeof(T));

}

template <typename T, typename T2>
inline float PercentageOf(const T& sub, const T2& of)
{
	return (static_cast<float>(sub) / static_cast<float>(of)) * 100;
}

template <typename T>
inline bool IsAligned(T* value, unsigned int alignment)
{
	return (reinterpret_cast<uintptr_t>(value) % alignment) == 0;
}

template<typename T>
T* AlignTop(T* ptr, size_t alignment)
{
	union
	{
		T* as_type;
		void* as_void;
		uintptr_t as_uintptr_t;
	};

	const size_t mask = alignment - 1;
	as_void = ptr;
	as_uintptr_t += mask;
	as_uintptr_t &= ~mask;
	return as_type;
}

template<typename T>
T* AlignBottom(T* ptr, size_t alignment)
{
	union
	{
		T* as_type;
		void* as_void;
		uintptr_t as_uintptr_t;
	};

	const size_t mask = alignment - 1;
	as_void = ptr;
	as_uintptr_t &= ~mask;
	return as_type;
}

template<typename T>
inline T RoundDownToMultiple(T numToRound, T multipleOf)
{
	return numToRound & ~(multipleOf - 1);
}

template<typename T>
inline T RoundUpToMultiple(T numToRound, T multipleOf)
{
	const T mask = multipleOf - 1;
	return (numToRound + mask) & ~(mask);
}

template<typename T>
inline T RoundDownToMultipleNonePow(T numToRound, T multipleOf)
{
	if (multipleOf == 0) {
		return numToRound;
	}

	T remainder = numToRound % multipleOf;
	if (remainder == 0) {
		return numToRound;
	}

	return numToRound - remainder;
}


template<typename T>
inline bool isFlagSet(const T val, const uint32_t flag)
{
	return (val & flag) != 0;
}

template<typename T>
inline size_t StringBytesIncNull(const T& str);

template<>
inline size_t StringBytesIncNull(const std::string& str)
{
	return str.length() + 1;
}

template<>
inline size_t StringBytesIncNull(const std::wstring& str)
{
	return (str.length() + 1) * 2;
}


template<typename T>
inline size_t StringBytes(const T& str);

template<>
inline size_t StringBytes(const std::string& str)
{
	return str.length();
}

template<>
inline size_t StringBytes(const std::wstring& str)
{
	return str.length() * 2;
}


typedef char BitsString[65];

template<typename T>
const char* AsBits(const T& val, BitsString& str)
{
	int i, num = (sizeof(T) * 8);

	zero_object(str);

	for (i = 0; i < num; i++) {
		str[num - (i + 1)] = (val & (static_cast<T>(1) << i)) ? '1' : '0';
	}

	str[i] = '\0';
	return str;
}
