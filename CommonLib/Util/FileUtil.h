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
    std::string GetTempFileName(void);

    class ScopedFile
    {
    public:
        ScopedFile() :
            f(nullptr)
        {
        }
        ~ScopedFile()
        {
            Close();
        }

        bool Open(const std::string& name, const char* mode)
        {
            return Open(name.c_str(), mode);
        }

        bool Open(const char* name, const char* mode);

        inline operator bool() const
        {
            return IsValid();
        }

        inline bool IsValid(void) const
        {
            return f != nullptr;
        }

        void Close(void)
        {
            if (IsValid()) {
                fclose(f);
            }
        }

        size_t Read(uint8_t* pDest, size_t numBytes)
        {
            return fread(pDest, 1, numBytes, f);
        }

        template<typename T>
        size_t Write(const T& obj)
        {
            return Write(reinterpret_cast<const uint8_t*>(&obj), sizeof(T));
        }
        template<typename T>
        size_t Write(const std::vector<T>& vec)
        {
            return Write(vec.data(), vec.size() * sizeof(T));
        }

        size_t Write(const uint8_t* pSrc, size_t numBytes)
        {
            return fwrite(pSrc, 1, numBytes, f);
        }
        size_t Write(const void* pSrc, size_t numBytes)
        {
            return fwrite(pSrc, 1, numBytes, f);
        }

        size_t WriteStr(const char* pStr);
        size_t WriteFmt(const char* pFmt, ...);

        size_t GetLength(void)
        {
            long current = ftell(f);
            fseek(f, 0, SEEK_END);
            long length = ftell(f);
            fseek(f, current, SEEK_SET);
            return static_cast<size_t>(length);
        }

        size_t Tell(void)
        {
            return static_cast<size_t>(ftell(f));
        }

        inline FILE* operator->(void)
        {
            return f;
        }
        inline const FILE* operator->(void) const
        {
            return f;
        }
        inline operator FILE*(void)
        {
            return f;
        }
        inline operator const FILE*(void) const
        {
            return f;
        }

    private:
        FILE* f;
    };

} // namespace FileUtil
