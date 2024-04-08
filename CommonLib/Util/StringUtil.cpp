#include "Common.h"
#include "StringUtil.h"

#include <locale>
#include <codecvt>

namespace StrUtil
{

	bool IsEqual(const char* startInclusiveS1, const char* startInclusiveS2)
	{
		// defer to one below.
		return IsEqual(startInclusiveS1, startInclusiveS1 + std::strlen(startInclusiveS1), startInclusiveS2);
	}

	bool IsEqual(const char* startInclusiveS1, const char* endExclusiveS1,
		const char* startInclusiveS2)
	{
		return IsEqual(startInclusiveS1, endExclusiveS1, startInclusiveS2, startInclusiveS2 + std::strlen(startInclusiveS2));
	}

	bool IsEqual(const char* startInclusiveS1, const char* endExclusiveS1,
		const char* startInclusiveS2, const char* endExclusiveS2)
	{
		const size_t len1 = endExclusiveS1 - startInclusiveS1;
		const size_t len2 = endExclusiveS2 - startInclusiveS2;

		if (len1 == len2) {
			return memcmp(startInclusiveS1, startInclusiveS2, len1) == 0;
		}

		return false;
	}

	bool IsEqualCaseInsen(const std::string& str1, const std::string& str2)
	{
		if (str1.size() != str2.size()) {
			return false;
		}
		for (std::string::const_iterator c1 = str1.begin(), c2 = str2.begin(); c1 != str1.end(); ++c1, ++c2) {
			if (::tolower(*c1) != ::tolower(*c2)) {
				return false;
			}
		}
		return true;
	}

	bool IsEqualCaseInsen(const std::wstring& str1, const std::wstring& str2)
	{
		if (str1.size() != str2.size()) {
			return false;
		}
		for (std::wstring::const_iterator c1 = str1.begin(), c2 = str2.begin(); c1 != str1.end(); ++c1, ++c2) {
			if (::tolower(*c1) != ::tolower(*c2)) {
				return false;
			}
		}
		return true;
	}

	bool IsEqualCaseInsen(const char* str1, const char* str2)
	{
		while (*str1 && (::tolower(*str1) == ::tolower(*str2))) {
			str1++, str2++;
		}

		// are they both null ?
		return (*(const uint8_t*)str1 - *(const uint8_t*)str2) == 0;
	}

	bool IsEqualCaseInsen(const char* startInclusiveS1, const char* endExclusiveS1, const char* startInclusiveS2)
	{
		size_t Len = endExclusiveS1 - startInclusiveS1;

		while (Len && *startInclusiveS2
			   && (::tolower(*startInclusiveS1) == ::tolower(*startInclusiveS2))) {
			Len--;
			startInclusiveS1++;
			startInclusiveS2++;
		}

		return Len == 0 && !(*startInclusiveS2);
	}

	std::string& ltrim(std::string& s)
	{
		s.erase(s.begin(), std::find_if(s.begin(), s.end(), [](unsigned char ch) {
			return !std::isspace(ch);
		}));
		return s;
	}

	// trim from end (in place)
	std::string& rtrim(std::string& s)
	{
		s.erase(std::find_if(s.rbegin(), s.rend(), [](unsigned char ch) {
			return !std::isspace(ch);
		}).base(),
			s.end());

		return s;
	}

	std::string& trim(std::string& s)
	{
		return ltrim(rtrim(s));
	}

	std::string ltrim(const std::string& s)
	{
		std::string c(s);
		return ltrim(c);
	}

	std::string rtrim(const std::string& s)
	{
		std::string c(s);
		return rtrim(c);
	}

	std::string trim(const std::string& s)
	{
		std::string c(s);
		return ltrim(rtrim(c));
	}

	std::string BytesToString(const uint8_t* pByes, size_t len, std::string_view separator)
	{
		std::string s;
		s.reserve(len * (separator.length() + 4)); // ' 0x00'

		const char* phexLookup = {"0123456789ABCDEF"};

		for (size_t i = 0; i < len; i++) {
			s.append(" 0x");

			const uint8_t byte = pByes[i];

			s.push_back(phexLookup[byte >> 4]);
			s.push_back(phexLookup[byte & 0xf]);

			if (!separator.empty() && (i + 1) < len) {
				s.append(separator);
			}
		}

		return s;
	}

	std::wstring stringToWstring(const std::string& str)
	{
		std::wstring_convert<std::codecvt_utf8<wchar_t>> converter;
		const std::wstring wideStr = converter.from_bytes(str);
		return wideStr;
	}

} // namespace StrUtil