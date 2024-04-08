#include "Common.h"
#include "Util/BitUtil.h"

namespace FileUtil
{
	std::string GetTempFileName(void)
	{
#if X_WIN32
		CHAR tempDir[MAX_PATH];
		CHAR tempFileName[MAX_PATH] = {0};

		DWORD dwRetVal = GetTempPathA(MAX_PATH, tempDir);
		if (dwRetVal > MAX_PATH || (dwRetVal == 0)) {
			// failed :(
			return "";
		}

		//  Generates a temporary file name.
		dwRetVal = ::GetTempFileNameA(tempDir, "tdiss", 0, tempFileName);
		if (dwRetVal == 0) {
			return "";
		}

		return std::string(tempFileName);
#else
		char filename[L_tmpnam];
		char* pResult = std::tmpnam(filename);
		if (pResult == nullptr) {
			std::abort();
		}

		return std::string(filename);
#endif
	}

	// ------------------------

	bool ScopedFile::Open(const char* name, const char* mode)
	{
		Close();

#if X_WIN32
		errno_t err = fopen_s(&f, name, mode);
		if (IsValid()) {
			return true;
		}

		lastError::Description Dsc;
		std::cerr << "Failed to open file: '" << name << "' Error: " << lastError::ToString(err, Dsc) << "\n";
#else  // X_WIN32

		f = fopen(name, mode);
		if (IsValid()) {
			return true;
		}

		lastError::Description Dsc;
		std::cerr << "Failed to open file: '" << name << "' Error: " << lastError::ToString(Dsc) << "\n";
#endif // X_WIN32

		return false;
	}

	size_t ScopedFile::WriteStr(const char* pStr)
	{
		size_t len = std::strlen(pStr);

		return Write(pStr, len);
	}

	size_t ScopedFile::WriteFmt(const char* pFmt, ...)
	{
		va_list args;
		va_start(args, pFmt);

		int numBytes = fprintf(f, pFmt, args);

		va_end(args);

		return numBytes;
	}

} // namespace FileUtil