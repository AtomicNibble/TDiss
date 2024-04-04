#include "Common.h"
#include "Util\BitUtil.h"

namespace FileUtil
{
	int64_t FileSize(const std::string& path)
	{
		WIN32_FILE_ATTRIBUTE_DATA fad;
		if (!GetFileAttributesExA(path.c_str(), GetFileExInfoStandard, &fad))
		{
			lastError::Description Dsc;
			gLogger.Error("FileSize: Failed for: %s Error: %s", path.c_str(), lastError::ToString(Dsc));
			return -1;
		}
		LARGE_INTEGER size;
		size.HighPart = fad.nFileSizeHigh;
		size.LowPart = fad.nFileSizeLow;
		return size.QuadPart;
	}

	int64_t FileSize(const std::wstring& path)
	{
		WIN32_FILE_ATTRIBUTE_DATA fad;
		if (!GetFileAttributesExW(path.c_str(), GetFileExInfoStandard, &fad))
		{
			lastError::Description Dsc;
			gLogger.Error("FileSize: Failed for: %ls Error: %s", path.c_str(), lastError::ToString(Dsc));
			return -1;
		}
		LARGE_INTEGER size;
		size.HighPart = fad.nFileSizeHigh;
		size.LowPart = fad.nFileSizeLow;
		return size.QuadPart;
	}

	bool FileExsists(const std::string& path)
	{
		DWORD dwAttrib = GetFileAttributesA(path.c_str());

		return (dwAttrib != INVALID_FILE_ATTRIBUTES &&
			!(dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
	}

	bool FileExsists(const std::wstring& path)
	{
		DWORD dwAttrib = GetFileAttributesW(path.c_str());

		return (dwAttrib != INVALID_FILE_ATTRIBUTES &&
			!(dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
	}

	bool FolderExsists(const std::string& path)
	{
		DWORD dwAttrib = GetFileAttributesA(path.c_str());

		return (dwAttrib != INVALID_FILE_ATTRIBUTES &&
			(dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
	}

	bool FolderExsists(const std::wstring& path)
	{
		DWORD dwAttrib = GetFileAttributesW(path.c_str());

		return (dwAttrib != INVALID_FILE_ATTRIBUTES &&
			(dwAttrib & FILE_ATTRIBUTE_DIRECTORY));
	}

	bool CreateFolder(const std::string& path)
	{
		std::string folder = StrUtil::Folder(path);

		if (folder.empty()) {
			return true;
		}

		int res;
		char buf[2048];
		lastError::Description Dsc;

		if (GetFullPathNameA(folder.c_str(), 2048, buf, NULL) == 0) {
			gLogger.Error("GetFullPathNameA: Error: %s", lastError::ToString(Dsc));
			return false;
		}

		if ((res = SHCreateDirectoryExA(NULL, buf, NULL)) == ERROR_SUCCESS) {
			return true;
		}

		if (res == ERROR_FILE_EXISTS || res == ERROR_ALREADY_EXISTS) {
			return true;
		}

		gLogger.Error("CreateFolder: Error: %s path: %s", lastError::ToString(Dsc), buf);
		return false;
	}

	bool CreateFolder(const std::wstring& path)
	{
		std::wstring folder = StrUtil::Folder(path);

		if (folder.empty()) {
			return true;
		}

		int res;
		wchar_t buf[2048];
		lastError::Description Dsc;

		if (GetFullPathNameW(folder.c_str(), 2048, buf, NULL) == 0) {
			gLogger.Error("GetFullPathNameA: Error: %s", lastError::ToString(Dsc));
			return false;
		}

		if ((res = SHCreateDirectoryExW(NULL, buf, NULL)) == ERROR_SUCCESS) {
			return true;
		}

		if (res == ERROR_FILE_EXISTS || res == ERROR_ALREADY_EXISTS) {
			return true;
		}

		gLogger.Error("CreateFolder: Error: %s path: %s", lastError::ToString(Dsc), buf);
		return false;
	}

	std::string GetTempDir(void)
	{
		CHAR tempDir[MAX_PATH];

		DWORD dwRetVal = GetTempPathA(MAX_PATH, tempDir);
		if (dwRetVal > MAX_PATH || (dwRetVal == 0)) {
			// failed :(
			return "";
		}
		return std::string(tempDir);
	}

	std::wstring GetTempDirW(void)
	{
		WCHAR tempDir[MAX_PATH];

		DWORD dwRetVal = GetTempPathW(MAX_PATH, tempDir);
		if (dwRetVal > MAX_PATH || (dwRetVal == 0)) {
			// failed :(
			return L"";
		}

		return std::wstring(tempDir);
	}


	std::string GetTempFileName(void)
	{
		CHAR tempDir[MAX_PATH];
		CHAR tempFileName[MAX_PATH] = { 0 };

		DWORD dwRetVal = GetTempPathA(MAX_PATH, tempDir);
		if (dwRetVal > MAX_PATH || (dwRetVal == 0)) {
			// failed :(
			return "";
		}

		//  Generates a temporary file name. 
		dwRetVal = ::GetTempFileNameA(tempDir, "tan", 0, tempFileName);
		if (dwRetVal == 0) {
			return "";
		}

		return std::string(tempFileName);
	}


	std::wstring GetTempFileNameW(void)
	{
		WCHAR tempDir[MAX_PATH];
		WCHAR tempFileName[MAX_PATH] = { 0 };

		DWORD dwRetVal = GetTempPathW(MAX_PATH, tempDir);
		if (dwRetVal > MAX_PATH || (dwRetVal == 0)) {
			// failed :(
			return L"";
		}

		//  Generates a temporary file name. 
		dwRetVal = ::GetTempFileNameW(tempDir, L"tan", 0, tempFileName);
		if (dwRetVal == 0) {
			return L"";
		}

		return std::wstring(tempFileName);
	}


	namespace
	{
		bool GetDirectoryListing_Internal(const std::wstring& slashedFolder,
			const std::wstring& patten, std::wstring& rel,
			FileListData& out, bool recursive = false)
		{
			std::wstring dirPat = slashedFolder + patten;

			WIN32_FIND_DATAW fd;
			HANDLE hFind = ::FindFirstFileW(dirPat.c_str(), &fd);
			std::wstring name;

			if (hFind == INVALID_HANDLE_VALUE) {
				return true;
			}

			do
			{
				name = fd.cFileName;
				if (bitUtil::IsFlagSet(fd.dwFileAttributes, FILE_ATTRIBUTE_DIRECTORY))
				{
					if (recursive)
					{
						if (name != L"." && name != L"..")
						{
							std::wstring scopedRel = rel + name;
							std::wstring subDir = slashedFolder + name;
							StrUtil::EnsureSlash(subDir);
							StrUtil::EnsureSlash(scopedRel);

							if (!GetDirectoryListing_Internal(subDir,
								patten, scopedRel, out, recursive)) {
								return false;
							}
						}
					}
				}
				else
				{
					out.relativePaths_.push_back(rel + name);
				}

			} while (FindNextFileW(hFind, &fd));

			::FindClose(hFind);
			return true;
		}
	} // namespace

	bool GetDirectoryListing(const std::wstring& folder, const std::wstring& pattens,
		FileListData& out)
	{
		// get everything.
		std::wstring rel;
		std::wstring slashedFolder = folder;
		StrUtil::EnsureSlash(slashedFolder);

		std::vector<std::wstring> tokens;
		StrUtil::tokenize<std::wstring>(tokens, pattens, L";");

		out.setBase(folder);
		StrUtil::EnsureSlash(out.base_);
		out.relativePaths_.clear();
		out.relativePaths_.reserve(4096);

		for (auto& token : tokens)
		{
			if (!GetDirectoryListing_Internal(slashedFolder, token, rel, out))
				return false;
		}

		return true;
	}

	bool GetDirectoryListing_r(const std::wstring& folder, const std::wstring& pattens,
		FileListData& out)
	{
		// get everything.
		std::wstring rel;
		std::wstring slashedFolder = folder;
		StrUtil::EnsureSlash(slashedFolder);

		std::vector<std::wstring> tokens;
		StrUtil::tokenize<std::wstring>(tokens, pattens, L";");

		out.setBase(folder);
		StrUtil::EnsureSlash(out.base_);
		out.relativePaths_.clear();
		out.relativePaths_.reserve(1024);

		for (auto& token : tokens)
		{
			if (!GetDirectoryListing_Internal(slashedFolder, token, rel, out, true)) {
				return false;
			}
		}

		return true;
	}

	// =================================

	ScopedFileWin32::ScopedFileWin32() :
		hFile_(INVALID_HANDLE_VALUE)
	{

	}

	ScopedFileWin32::~ScopedFileWin32()
	{
		Close();
	}


	bool ScopedFileWin32::Open(const std::string& name, DWORD access, DWORD CreationDispo)
	{
		return Open(std::wstring(name.begin(), name.end()), access, CreationDispo);
	}

	bool ScopedFileWin32::Open(const std::wstring& name, DWORD access, DWORD CreationDispo)
	{
		return Open(name.c_str(), access, CreationDispo);
	}

	bool ScopedFileWin32::Open(const wchar_t* name, DWORD access, DWORD CreationDispo)
	{
		Close();

		hFile_ = ::CreateFileW(name, access,
			FILE_SHARE_READ | FILE_SHARE_WRITE, NULL,
			CreationDispo, FILE_ATTRIBUTE_NORMAL, NULL);

		if (IsValid()) {
			return true;
		}

		lastError::Description Dsc;
		gLogger.Error("Failed to open file: '%s' Error: %s", name, lastError::ToString(Dsc));
		return false;
	}

	void ScopedFileWin32::Close(void)
	{
		if (IsValid()) {
			::CloseHandle(hFile_);
		}
	}

	bool ScopedFileWin32::Read(void* pDest, size_t numBytes)
	{
		DWORD bytesRead;
		if (!::ReadFile(hFile_, pDest, static_cast<DWORD>(numBytes), &bytesRead, NULL)) {
			return false;
		}
		return bytesRead == numBytes;
	}

	bool ScopedFileWin32::Write(const uint8_t* pSrc, size_t numBytes)
	{
		DWORD bytesWrite;
		if (!::WriteFile(hFile_, pSrc, static_cast<DWORD>(numBytes), &bytesWrite, NULL)) {
			return false;
		}
		return bytesWrite == numBytes;
	}

	bool ScopedFileWin32::Write(const void* pSrc, size_t numBytes)
	{
		DWORD bytesWrite;
		if (!::WriteFile(hFile_, pSrc, static_cast<DWORD>(numBytes), &bytesWrite, NULL)) {
			return false;
		}
		return bytesWrite == numBytes;
	}

	bool ScopedFileWin32::WriteStr(const char* pStr)
	{
		size_t len = strlen(pStr);

		return Write(pStr, len);
	}

	bool ScopedFileWin32::WriteFmt(const char* pFmt, ...)
	{
		va_list args;
		va_start(args, pFmt);

		char buf[1024];
		const int charactersWritten = _vsnprintf_s(buf, sizeof(buf), _TRUNCATE, pFmt, args);

		va_end(args);

		return Write(buf, charactersWritten);
	}

	size_t ScopedFileWin32::GetLength(void)
	{
		LARGE_INTEGER lInt;
		GetFileSizeEx(hFile_, &lInt);

#if X_64
		return lInt.QuadPart;
#else
		X_ASSERT(lInt.HighPart == 0);
		return lInt.LowPart;
#endif // !X_64
	}

	int64_t ScopedFileWin32::GetLengthEx(void)
	{
		LARGE_INTEGER lInt;
		GetFileSizeEx(hFile_, &lInt);

		return lInt.QuadPart;
	}

	size_t ScopedFileWin32::Tell(void)
	{
		LARGE_INTEGER LInt;
		LInt.QuadPart = 0;
		SetFilePointerEx(hFile_, LInt, &LInt, FILE_CURRENT);

#if X_64
		return LInt.QuadPart;
#else
		X_ASSERT(LInt.HighPart == 0);
		return LInt.LowPart;
#endif // !X_64
	}

	int64_t ScopedFileWin32::TellEx(void)
	{
		LARGE_INTEGER LInt;
		LInt.QuadPart = 0;
		SetFilePointerEx(hFile_, LInt, &LInt, FILE_CURRENT);
		return LInt.QuadPart;
	}

	bool ScopedFileWin32::Seek(DWORD MoveMethod, int64_t seek)
	{
		LARGE_INTEGER LInt;
		LInt.QuadPart = seek;
		return SetFilePointerEx(hFile_, LInt, NULL, MoveMethod) == TRUE;
	}

} // namespaceFileUtil