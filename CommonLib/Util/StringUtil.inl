
namespace StrUtil
{
	template<class T>
	inline typename T::size_type Find(const T& haystack, const T& needle, typename T::size_type Off)
	{
		return haystack.find(needle, Off);
	}

	template<class T>
	inline typename T::size_type FindCaseInsensitive(const T& haystack, const T& needle, typename T::size_type Off)
	{
		auto it = std::search(
			haystack.begin() + Off, haystack.end(),
			needle.begin(), needle.end(),
			[](typename T::traits_type::char_type ch1, typename T::traits_type::char_type ch2) {
				return ::toupper(ch1) == ::toupper(ch2);
			}
		);
		if (it != haystack.end()) {
			return it - haystack.begin();
		}
		return T::npos;
	}


	template<>
	inline std::string Folder(const std::string& str)
	{
		std::string out;
		const size_t last_slash_idx = str.find_last_of("\\/");
		if (std::string::npos != last_slash_idx) {
			out = str.substr(0, last_slash_idx + 1);
		}
		else {
			out = "";
		}
		return out;
	}

	template<>
	inline std::wstring Folder(const std::wstring& str)
	{
		std::wstring out;
		const size_t last_slash_idx = str.find_last_of(L"\\/");
		if (std::wstring::npos != last_slash_idx) {
			out = str.substr(0, last_slash_idx + 1);
		}
		else {
			out = L"";
		}
		return out;
	}


	template<>
	inline std::string FileName(const std::string& str)
	{
		std::string out;
		const size_t last_slash_idx = str.find_last_of("\\/");
		if (std::string::npos != last_slash_idx) {
			out = str.substr(last_slash_idx + 1);
		}
		else {
			out = str;
		}
		return out;
	}

	template<>
	inline std::wstring FileName(const std::wstring& str)
	{
		std::wstring out;
		const size_t last_slash_idx = str.find_last_of(L"\\/");
		if (std::wstring::npos != last_slash_idx) {
			out = str.substr(last_slash_idx + 1);
		}
		else {
			out = str;
		}
		return out;
	}

	template<>
	inline std::string FileNameNoExt(const std::string& str)
	{
		return RemoveExtension<std::string>(FileName<std::string>(str));
	}


	template<>
	inline std::wstring FileNameNoExt(const std::wstring& str)
	{
		return RemoveExtension<std::wstring>(FileName<std::wstring>(str));
	}

	template<>
	inline std::string FileExtension(const std::string& str, bool includeDot)
	{
		const size_t last_slash_idx = str.find_last_of("\\/");
		const size_t last_dot_idx = str.find_last_of(".");

		if (last_dot_idx == std::string::npos) {
			return std::string();
		}

		if (last_slash_idx != std::string::npos)
		{
			if (last_slash_idx > last_dot_idx) {
				return std::string();
			}
		}

		// we have a dot and it's after a slash.
		return str.substr(last_dot_idx + (includeDot ? 0 : 1));
	}

	template<>
	inline std::wstring FileExtension(const std::wstring& str, bool includeDot)
	{
		const size_t last_slash_idx = str.find_last_of(L"\\/");
		const size_t last_dot_idx = str.find_last_of(L".");

		if (last_dot_idx == std::wstring::npos) {
			return std::wstring();
		}

		if (last_slash_idx != std::wstring::npos)
		{
			if (last_slash_idx > last_dot_idx) {
				return std::wstring();
			}
		}

		// we have a dot and it's after a slash.
		return str.substr(last_dot_idx + (includeDot ? 0 : 1));
	}

	template<typename T>
	T RemoveExtension(const T& str)
	{
		if (str.empty()) {
			return str;
		}

		T Ext = FileExtension<T>(str, true);
		if (Ext.empty()) {
			return str;
		}

		typename T::size_type pos = str.find(Ext);
		return T(str.begin(), str.begin() + pos);
	}


	template<>
	inline std::string EnsureSlash(const std::string& c_str)
	{
		if (c_str.empty())
			return c_str;
		std::string::size_type pos = c_str.find_last_of('\\');
		if (pos == std::string::npos || pos < (c_str.length() - 1)) {
			return c_str + "\\";
		}
		return c_str;
	}

	template<>
	inline std::wstring EnsureSlash(const std::wstring& c_str)
	{
		if (c_str.empty())
			return c_str;
		std::wstring::size_type pos = c_str.find_last_of(L'\\');
		if (pos == std::wstring::npos || pos < (c_str.length() - 1)) {
			return c_str + L"\\";
		}
		return c_str;
	}


	template<>
	inline void EnsureSlash(std::string& str)
	{
		if (str.empty()) {
			return;
		}
		std::string::size_type pos = str.find_last_of('\\');
		if (pos == std::string::npos || pos < (str.length() - 1)) {
			str.append("\\");
		}
	}

	template<>
	inline void EnsureSlash(std::wstring& str)
	{
		if (str.empty()) {
			return;
		}
		std::wstring::size_type pos = str.find_last_of(L'\\');
		if (pos == std::wstring::npos || pos < (str.length() - 1)) {
			str.append(L"\\");
		}
	}

	template<typename T>
	T ToLower(const T& str)
	{
		T temp(str);
		std::transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
		return temp;
	}

	template<>
	inline uint8_t fromString(const std::string& str) {
		if (str.find("0x") == 0) {
			return static_cast<uint8_t>(std::stoi(str, 0, 0));
		}
		return static_cast<uint8_t>(std::stoi(str));
	}
	template<>
	inline uint16_t fromString(const std::string& str) {
		if (str.find("0x") == 0) {
			return static_cast<uint16_t>(std::stoi(str, 0, 0));
		}
		return static_cast<uint16_t>(std::stoi(str));
	}
	template<>
	inline int fromString(const std::string& str) {
		if (str.find("0x") == 0) {
			return std::stoi(str, 0, 0);
		}
		return std::stoi(str);
	}
	template<>
	inline unsigned int fromString(const std::string& str) {
		if (str.find("0x") == 0) {
			return std::stoul(str, 0, 0);
		}
		return std::stoul(str);
	}
	template<>
	inline unsigned long fromString(const std::string& str) {
		if (str.find("0x") == 0) {
			return std::stoul(str, 0, 0);
		}
		return std::stoul(str);
	}
	template<>
	inline long long fromString(const std::string& str) {
		if (str.find("0x") == 0) {
			return std::stoll(str, 0, 0);
		}
		return std::stoll(str);
	}
	template<>
	inline unsigned long long fromString(const std::string& str) {
		if (str.find("0x") == 0) {
			return std::stoull(str, 0, 0);
		}
		return std::stoull(str);
	}


	template<typename TStr>
	void tokenize(std::vector<TStr>& tokensOut,
		const TStr& str, const TStr& delimiter)
	{
		typename TStr::size_type start = 0, end = 0;

		tokensOut.clear();

		while (end != TStr::npos)
		{
			end = str.find(delimiter, start);

			typename TStr::size_type subEnd = (end == TStr::npos) ? TStr::npos : end - start;
			tokensOut.push_back(str.substr(start, subEnd));

			start = ((end > (TStr::npos - delimiter.size()))
				? TStr::npos : end + delimiter.size());
		}
	}

} // namespace StrUtil