#pragma once

namespace StrUtil
{
	const char* Convert(const wchar_t *input, char *output, unsigned outputLength);
	const char* Convert(const wchar_t *input, unsigned inputLength, char *output, unsigned outputLength);

	const wchar_t* Convert(const char *input, wchar_t *output, unsigned outputLength);
	const wchar_t* Convert(const char *input, unsigned inputLength, wchar_t *output, unsigned outputLength);

	bool IsEqual(const char* startInclusiveS1, const char* startInclusiveS2);
	bool IsEqual(const char* startInclusiveS1, const char* endExclusiveS1, const char* startInclusiveS2);
	bool IsEqual(const char* startInclusiveS1, const char* endExclusiveS1, const char* startInclusiveS2, const char* endExclusiveS2);

	bool IsEqual(const wchar_t* startInclusiveS1, const wchar_t* startInclusiveS2);
	bool IsEqual(const wchar_t* startInclusiveS1, const wchar_t* endExclusiveS1, const wchar_t* startInclusiveS2);
	bool IsEqual(const wchar_t* startInclusiveS1, const wchar_t* endExclusiveS1, const wchar_t* startInclusiveS2, const wchar_t* endExclusiveS2);


	bool IsEqualCaseInsen(const std::string& str1, const std::string& str2);
	bool IsEqualCaseInsen(const std::wstring& str1, const std::wstring& str2);
	bool IsEqualCaseInsen(const char* str1, const char* str2);
	bool IsEqualCaseInsen(const char* startInclusiveS1, const char* endExclusiveS1, const char* startInclusiveS2);



	// this is not needed since it's the same as str.find(); but it's here for completeness
	// since we have a CaseInsen verison.
	template<class T>
	typename T::size_type Find(const T& haystack, const T& needle, typename T::size_type Off = 0);

	template<class T>
	typename T::size_type FindCaseInsensitive(const T& haystack, const T& needle, typename T::size_type Off = 0);

	template<typename T>
	T Folder(const T& str);
	template<typename T>
	T FileName(const T& str);
	template<typename T>
	T FileNameNoExt(const T& str);

	template<typename T>
	T FileExtension(const T& str, bool includeDot = false);
	
	template<typename T>
	T RemoveExtension(const T& str);

	std::string& EnsureExtension(std::string& str, std::string ext);
	std::string EnsureExtension(const std::string& str, std::string ext);
	template<typename T>
	void EnsureSlash(T& str);
	template<typename T>
	T EnsureSlash(const T& str);

	template<typename T>
	std::string BytesToHuman(T num);

	std::string FileTimeToStringA(FILETIME ft);
	std::wstring FileTimeToStringW(FILETIME ft);


	template<typename T>
	T ToLower(const T& str);
	void ToLower(std::string& str);
	void ToLower(std::wstring& str);
	void ToLower(char* str); // modifes the provided buffer
	void ToLower(char* str, char* end);

	template<typename T>
	inline std::string to_string_hex(const T& val)
	{
		std::stringstream ss;
		ss << "0x" << std::hex << val;
		return ss.str();
	}

	template<typename T>
	inline std::string to_string(const T& val)
	{
		std::stringstream ss;
		ss << std::dec << val;
		return ss.str();
	}

	template<typename T>
	inline std::wstring to_stringW(const T& val)
	{
		std::wstringstream ss;
		ss << std::dec << val;
		return ss.str();
	}

	template<typename T>
	inline T fromString(const std::string& str);

	std::string& ltrim(std::string& s);
	std::string ltrim(const std::string& s);
	std::string& rtrim(std::string& s);
	std::string rtrim(const std::string& s);
	std::string& trim(std::string& s);
	std::string trim(const std::string& s);

	template<typename TStr>
	void tokenize(std::vector<TStr>& tokensOut,
		const TStr& str, const TStr& delimiter);

	std::string BytesToString(const uint8_t* pByes, size_t len, std::string_view separator);

	std::wstring stringToWstring(const std::string& str);

} // namespace StrUtil

#include "StringUtil.inl"

