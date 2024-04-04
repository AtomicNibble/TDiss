#pragma once

#include <string>

#ifdef GetTempFileName
#undef GetTempFileName
#endif

#ifdef DeleteFile
#undef DeleteFile
#endif 

namespace FileUtil
{
	int64_t FileSize(const std::string& path);
	int64_t FileSize(const std::wstring& path);

	bool FileExsists(const std::string& path);
	bool FileExsists(const std::wstring& path);
	bool FolderExsists(const std::string& path);
	bool FolderExsists(const std::wstring& path);
	bool CreateFolder(const std::string& path);
	bool CreateFolder(const std::wstring& path);

	std::string GetTempDir(void);
	std::wstring GetTempDirW(void);
	std::string GetTempFileName(void);
	std::wstring GetTempFileNameW(void);

	class FileListData
	{
	public:
		FileListData() = default;
		~FileListData() = default;

		void clear(void) {
			relativePaths_.clear();
		}

		void setBase(const std::wstring& base) {
			base_ = base;
		}

	public:
		inline size_t numPaths(void) const {
			return relativePaths_.size();
		}
		inline std::wstring Get(size_t idx) const {
			std::wstring myBase = base_;
			return myBase + relativePaths_[idx];
		}
		inline std::wstring& GetRelative(size_t idx) {
			return relativePaths_[idx];
		}
		inline const std::wstring& GetRelative(size_t idx) const {
			return relativePaths_[idx];
		}

	public:
		std::wstring base_;
		std::vector<std::wstring> relativePaths_;
	};

	// takes multiple patterns using ';' as delimiter
	bool GetDirectoryListing(const std::wstring& folder, const std::wstring& pattens,
		FileListData& out);
	// traverses directories.
	bool GetDirectoryListing_r(const std::wstring& folder, const std::wstring& pattens,
		FileListData& out);


	class ScopedFile
	{
	public:
		ScopedFile() : f(nullptr) {}
		~ScopedFile() {
			Close();
		}

		bool Open(const std::string& name, const char* mode) {
			return Open(name.c_str(), mode);
		}

		bool Open(const char* name, const char* mode) {
			Close();
			errno_t err = fopen_s(&f, name, mode);
			if (IsValid()) {
				return true;
			}

			lastError::Description Dsc;
			std::cout << "Failed to open file: '" << name << "' Error: " << lastError::ToString(err, Dsc) << "\n";
			return false;
		}

		inline operator bool() const {
			return IsValid();
		}

		inline bool IsValid(void) const {
			return f != nullptr;
		}

		void Close(void) {
			if (IsValid())
				fclose(f);
		}

		bool Read(uint8_t* pDest, size_t numBytes) {
			return fread(pDest, 1, numBytes, f) == numBytes;
		}

		template<typename T>
		bool Write(const T& obj) {
			return Write(reinterpret_cast<const uint8_t*>(&obj), sizeof(T));
		}
		template<typename T>
		bool Write(const std::vector<T>& vec) {
			return Write(vec.data(), vec.size() * sizeof(T));
		}

		bool Write(const uint8_t* pSrc, size_t numBytes) {
			return fwrite(pSrc, 1, numBytes, f) == numBytes;
		}
		bool Write(const void* pSrc, size_t numBytes) {
			return fwrite(pSrc, 1, numBytes, f) == numBytes;
		}

		size_t GetLength(void) {
			long current = ftell(f);
			fseek(f, 0, SEEK_END);
			long length = ftell(f);
			fseek(f, current, SEEK_SET);
			return static_cast<size_t>(length);
		}

		size_t Tell(void) {
			return static_cast<size_t>(ftell(f));
		}

		inline FILE* operator->(void) {
			return f;
		}
		inline const FILE* operator->(void) const {
			return f;
		}
		inline operator FILE*(void) {
			return f;
		}
		inline operator const FILE*(void) const {
			return f;
		}

	private:
		FILE* f;
	};

	// TODO: remove we don't have a need to use a win32 specific type anymore.
	class ScopedFileWin32
	{
	public:
		ScopedFileWin32();
		~ScopedFileWin32();

		bool Open(const std::string& name, DWORD access, DWORD CreationDispo);
		bool Open(const std::wstring& name, DWORD access, DWORD CreationDispo);
		bool Open(const wchar_t* name, DWORD access, DWORD CreationDispo);

		inline operator bool() const {
			return IsValid();
		}

		inline bool IsValid(void) const {
			return hFile_ != INVALID_HANDLE_VALUE;
		}

		void Close(void);

		template<typename T>
		bool Read(T& obj) {
			return Read(reinterpret_cast<void*>(&obj), sizeof(T));
		}

		bool Read(void* pDest, size_t numBytes);

		template<typename T>
		bool Write(const T& obj) {
			return Write(reinterpret_cast<const uint8_t*>(&obj), sizeof(T));
		}
		template<typename T>
		bool Write(const std::vector<T>& vec) {
			return Write(vec.data(), vec.size() * sizeof(T));
		}

		bool Write(const uint8_t* pSrc, size_t numBytes);
		bool Write(const void* pSrc, size_t numBytes);
		bool WriteStr(const char* pStr);
		bool WriteFmt(const char* pFmt, ...);

		size_t GetLength(void);
		size_t Tell(void);
		int64_t GetLengthEx(void);
		int64_t TellEx(void);

		bool Seek(DWORD MoveMethod, int64_t seek);

	private:
		HANDLE hFile_;
	};

}
