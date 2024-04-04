#include "Common.h"

#include "Logger.h"
#include "LoggerTypes.h"

#include "Process.h"

#include <io.h>
#include <stdio.h>
#include <fcntl.h>
#include <tchar.h>
#include <conio.h>

namespace
{
    enum Cols : uint8_t
    {
        COL_BLACK,
        COL_WHITE,
        COL_GRAY,
        COL_GRAY_LIGHT,

        COL_BLUE_LIGHT,
        COL_GREEN,
        COL_RED,

        COL_YELLOW,
        COL_PURPLE,
        COL_CYAN,

        COL_BLUE,
        COL_GREEN_LIGHT,
        COL_RED_LIGHT,

        COL_ORANGE,
        COL_LIGHTPINK
    };

    unsigned __int16 MakeColor(Cols For, Cols Back)
    {
        return For + (Back << 4);
    }

    const unsigned int COLOR_TABLE[16] = {
        RGB(0x10, 0x10, 0x10),
        RGB(0xff, 0xff, 0xff),
        RGB(0x10, 0x10, 0x10),
        RGB(0x70, 0x70, 0x70),

        RGB(0, 0x66, 0xcc),
        RGB(0x56, 0xa8, 0x3c),
        RGB(0xff, 0, 0),
        RGB(0xff, 0xff, 0x1c),
        RGB(0xa3, 0x38, 0xff),
        RGB(0, 0xe0, 0xe0),

        RGB(0, 0x66, 0xcc),
        RGB(0, 0x66, 0),
        RGB(0xcc, 0, 0),

        RGB(0xcc, 0x70, 0),
        RGB(0xff, 0xaa, 0x9b),
        0x000000,

    };

    const unsigned __int16 LOG_COLOR = MakeColor(COL_WHITE, COL_GRAY); // COL_WHITE;
    const unsigned __int16 WARNING_COLOR = MakeColor(COL_WHITE, COL_ORANGE);
    const unsigned __int16 ERROR_COLOR = MakeColor(COL_RED, COL_GRAY);
    const unsigned __int16 FATAL_ERROR_COLOR = MakeColor(COL_GRAY, COL_RED);
    const unsigned __int16 ASSERT_COLOR = MakeColor(COL_RED, COL_BLACK);
    const unsigned __int16 ASSERT_VARIABLE_COLOR = MakeColor(COL_WHITE, COL_RED);
    const unsigned __int16 CHANNEL_COLOR = MakeColor(COL_BLUE_LIGHT, COL_GRAY);
    const unsigned __int16 STRING_COLOR = MakeColor(COL_GREEN, COL_BLACK); // COL_GREEN;

    // 0 white
    // 1 red
    // 2 blue
    // 3 blue light
    // 4 green
    // 5 green light
    // 6 purple
    // 7 yellow
    // 8 orange
    // 9 pink light

    const unsigned __int16 COLOR_STRING_LOOKUP[17] = {
        MakeColor(COL_WHITE, COL_GRAY),
        MakeColor(COL_RED, COL_GRAY),
        MakeColor(COL_BLUE, COL_GRAY),
        MakeColor(COL_BLUE_LIGHT, COL_GRAY),
        MakeColor(COL_GREEN, COL_GRAY),
        MakeColor(COL_GREEN_LIGHT, COL_GRAY),
        MakeColor(COL_PURPLE, COL_GRAY),
        MakeColor(COL_YELLOW, COL_GRAY),
        MakeColor(COL_ORANGE, COL_GRAY),
        MakeColor(COL_LIGHTPINK, COL_GRAY),

        MakeColor(COL_WHITE, COL_RED_LIGHT),     // a
        MakeColor(COL_LIGHTPINK, COL_GRAY),      // b
        MakeColor(COL_LIGHTPINK, COL_RED_LIGHT), // c
        MakeColor(COL_LIGHTPINK, COL_RED_LIGHT), // d
        MakeColor(COL_LIGHTPINK, COL_RED_LIGHT), // e
        MakeColor(COL_LIGHTPINK, COL_RED_LIGHT), // f
    };

    int HexCharToInt(const int ch)
    {
        // 0-9
        if (ch >= '0' && ch <= '9')
            return (ch - '0');

        // a-f
        int lower = ::tolower(ch);
        if (lower >= 'a' && lower <= 'f')
            return (lower - 'A') + 10;

        return 0;
    }

    void removeColor(char* str)
    {
        char *src, *dst;
        for (src = dst = str; *src != '\0'; src++) {
            *dst = *src;
            if (*dst != '^')
                dst++;
            else {
                ++src;
            }
        }
        *dst = '\0';
    }

    void removeColor(wchar_t* str)
    {
        wchar_t *src, *dst;
        for (src = dst = str; *src != L'\0'; src++) {
            *dst = *src;
            if (*dst != L'^')
                dst++;
            else {
                ++src;
            }
        }
        *dst = L'\0';
    }

} // namespace

ConsoleLogger::ConsoleLogger() :
    window_(NULL),
    hConsole_(INVALID_HANDLE_VALUE)
{
    width_ = 180;
    height_ = 60;
    bufferLength_ = 9000;
    FreeConsole_ = true;
}

ConsoleLogger::~ConsoleLogger()
{
}

bool ConsoleLogger::Init(void)
{
    window_ = GetConsoleWindow();

    if (!window_) {
        if (!AllocConsole()) {
            gLogger.Error("Failed to alloc console");
            return false;
        }

        window_ = GetConsoleWindow();
        if (window_ == NULL) {
            gLogger.Error("Failed to get console window");
            return false;
        }
    }
    else {
        FreeConsole_ = false;
    }

    hConsole_ = GetStdHandle(STD_OUTPUT_HANDLE);
    if (hConsole_ == INVALID_HANDLE_VALUE) {
        lastError::Description Dsc;
        gLogger.Error("Failed to get console output handle. Error: %s",
            lastError::ToString(Dsc));
        return false;
    }
    // If an application does not have associated standard handles,
    // such as a service running on an interactive desktop, and has not redirected them,
    // the return value is NULL.
    else if (hConsole_ == NULL) {
        gLogger.Error("Failed to get console output handle. result NULL");
        return false;
    }

    resizeConsole(width_, height_, bufferLength_);
    setColorTable();

    // show it.
    ::ShowWindow(window_, SW_SHOW);

    return true;
}

void ConsoleLogger::RecreateConsole(void)
{
    hConsole_ = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,
        FILE_SHARE_READ | FILE_SHARE_WRITE,
        NULL,
        CONSOLE_TEXTMODE_BUFFER,
        NULL);

    SetConsoleActiveScreenBuffer(hConsole_);

    if (!::SetStdHandle(STD_OUTPUT_HANDLE, hConsole_)) {
        lastError::Description Dsc;
        gLogger.Error("Cannot set stdHandle. Error: %s", lastError::ToString(Dsc));
    }

    resizeConsole(width_, height_, bufferLength_);
}

void ConsoleLogger::ShutDown(void)
{
    if (FreeConsole_) {
        ::FreeConsole();
    }
}

void ConsoleLogger::Log(const char* fmt, va_list args)
{
    char asciiMsg[4096];
    char oemMsg[4096];

    int32_t length;
    int32_t NumberOfCharsWritten;
    int32_t SectionSize = 0;
    char* pOem;
    char* pMsgEnd;

    if (fmt == NULL) {
        ::MessageBoxA(NULL, "Logger called with null format", "Fatal Error", MB_OK);
        std::abort();
    }

    if (args == NULL) {
        ::MessageBoxA(NULL, "Logger called with null args", "Fatal Error", MB_OK);
        std::abort();
        return;
    }

    length = _vsnprintf_s(asciiMsg, sizeof(asciiMsg) - 2, fmt, args); // -2 so i can add \n
    if (length < 0) {
        return;
    }

    CharToOemA(asciiMsg, oemMsg);

    pOem = oemMsg;
    pMsgEnd = &oemMsg[length];

    if (oemMsg < pMsgEnd) {
        do {
            if (SectionSize >= length) {
                break;
            }

            if (*(pOem + SectionSize) == '^') {
                // is it a color?
                int ch = *(pOem + SectionSize + 1);
                if (::isxdigit(ch)) {
                    ch = HexCharToInt(ch);

                    NumberOfCharsWritten = 0;
                    WriteConsoleA(pOem, SectionSize,
                        reinterpret_cast<PDWORD>(&NumberOfCharsWritten));

                    length -= (SectionSize + 2);
                    pOem = (pOem + SectionSize + 2);
                    SectionSize = 0;
                    SetConsoleTextAttribute(hConsole_, COLOR_STRING_LOOKUP[ch]);
                }
            }

            ++SectionSize;
        } while (pOem < pMsgEnd);
    }

    pOem[length] = '\n';
    pOem[length + 1] = '\0';

    int32_t msgEnd = 0;
    WriteConsoleA(pOem, length + 1, reinterpret_cast<PDWORD>(&msgEnd));
    SetConsoleTextAttribute(hConsole_, LOG_COLOR);
}

void ConsoleLogger::WriteConsoleA(const void* lpBuffer, DWORD nNumberOfCharsToWrite,
    LPDWORD lpNumberOfCharsWritten)
{
    for (size_t i = 0; i < 4; i++) {
        if (!::WriteConsoleA(hConsole_, lpBuffer, nNumberOfCharsToWrite,
                lpNumberOfCharsWritten, 0)) {
            DWORD lastErr = lastError::Get();

            if (lastErr == ERROR_INVALID_HANDLE) {
                RecreateConsole();
            }
            else {
                // try write file
                DWORD bytesWritten;
                if (!::WriteFile(hConsole_, lpBuffer, nNumberOfCharsToWrite, &bytesWritten, nullptr)) {
                    lastErr = lastError::Get();

                    lastError::Description Dsc;
                    std::string err = "ConsoleLogger::WriteConsole failed(" + std::to_string(lastErr) + "): ";
                    err += lastError::ToString(lastErr, Dsc);
                    ::MessageBoxA(NULL, err.c_str(), "Fatal Error", MB_OK);
                    std::abort();
                }
            }
        }
        else {
            break;
        }
    }
}

void ConsoleLogger::Log(const wchar_t* fmt, va_list args)
{
    wchar_t utf8Msg[4096];

    DWORD length;
    DWORD NumberOfCharsWritten;
    DWORD SectionSize = 0;
    wchar_t* pUtf;
    wchar_t* pMsgEnd;

    if (fmt == NULL) {
        ::MessageBoxA(NULL, "Logger called with null format", "Fatal Error", MB_OK);
        std::abort();
        return;
    }

    if (args == NULL) {
        ::MessageBoxA(NULL, "Logger called with null args", "Fatal Error", MB_OK);
        std::abort();
        return;
    }

    length = _vsnwprintf_s(utf8Msg, sizeof(utf8Msg) - 2, fmt, args); // -2 so i can add \n

    pUtf = utf8Msg;
    pMsgEnd = &utf8Msg[length];

    if (utf8Msg < &utf8Msg[length]) {
        do {
            if (SectionSize >= length) {
                break;
            }

            if (*(pUtf + SectionSize) == L'^') {
                // is it a color?
                int ch = *(pUtf + SectionSize + 1);
                if (::isxdigit(ch)) {
                    ch = HexCharToInt(ch);

                    NumberOfCharsWritten = 0;
                    WriteConsoleW(hConsole_, pUtf, SectionSize, &NumberOfCharsWritten, 0);

                    length -= (SectionSize + 2);
                    pUtf = (wchar_t*)(pUtf + SectionSize + 2);
                    SectionSize = 0;
                    SetConsoleTextAttribute(hConsole_, COLOR_STRING_LOOKUP[ch]);
                }
            }

            ++SectionSize;
        } while (pUtf < pMsgEnd);
    }

    pUtf[length] = L'\n';
    pUtf[length + 1] = L'\0';

    DWORD msgEnd = 0;
    WriteConsoleW(hConsole_, pUtf, length + 1, &msgEnd, 0);
    SetConsoleTextAttribute(hConsole_, LOG_COLOR);
}

void ConsoleLogger::Warning(const char* fmt, va_list args)
{
    char pBuf[2048];
    zero_object(pBuf);
    strcat_s(pBuf, "^8Warning: ");
    strcat_s(pBuf, fmt);

    Log(pBuf, args);
}

void ConsoleLogger::Error(const char* fmt, va_list args)
{
    char pBuf[2048];
    zero_object(pBuf);
    strcat_s(pBuf, "[^1 Error^0] ");
    strcat_s(pBuf, fmt);

    Log(pBuf, args);
}

void ConsoleLogger::Flush(void)
{
    std::cout.flush();
}

void ConsoleLogger::MoveTo(int x, int y)
{
    RECT rec;
    GetWindowRect(window_, &rec);

    int nHeight = rec.bottom - rec.top;
    int nWidth = rec.right - rec.left;

    if (!MoveWindow(window_, x, y, nWidth, nHeight, FALSE)) {
        lastError::Description Dsc;
        gLogger.Error("Cannot move console window. Error: %s", lastError::ToString(Dsc));
    }
}

void ConsoleLogger::SetTitle(const char* title)
{
    ::SetConsoleTitleA(title);
}

bool ConsoleLogger::SetIcon(HICON hIcon)
{
    typedef BOOL(WINAPI * SetConsoleIcon_t)(HICON handle);

    SetConsoleIcon_t pSetConsoleIcon;

    HMODULE hDll = GetModuleHandleA("kernel32");
    if (hDll) {
        pSetConsoleIcon = (SetConsoleIcon_t)GetProcAddress(hDll, "SetConsoleIcon");
        if (pSetConsoleIcon)
            return pSetConsoleIcon(hIcon) == TRUE;
    }
    return false;
}

void ConsoleLogger::PressToContinue(void)
{
    Log("^7Press Any Key To Continue...");
}

void ConsoleLogger::RedirectSTD(void)
{
    int hConHandle;
    intptr_t lStdHandle;
    FILE* fp;

    // redirect unbuffered STDOUT to the console
    lStdHandle = (intptr_t)GetStdHandle(STD_OUTPUT_HANDLE);
    hConHandle = _open_osfhandle(lStdHandle, _O_TEXT);
    fp = _fdopen(hConHandle, "w");
    *stdout = *fp;
    setvbuf(stdout, NULL, _IONBF, 0);

    // redirect unbuffered STDIN to the console
    lStdHandle = (intptr_t)GetStdHandle(STD_INPUT_HANDLE);
    hConHandle = _open_osfhandle(lStdHandle, _O_TEXT);
    fp = _fdopen(hConHandle, "r");
    *stdin = *fp;
    setvbuf(stdin, NULL, _IONBF, 0);

    // redirect unbuffered STDERR to the console
    lStdHandle = (intptr_t)GetStdHandle(STD_ERROR_HANDLE);
    hConHandle = _open_osfhandle(lStdHandle, _O_TEXT);
    fp = _fdopen(hConHandle, "w");

    *stderr = *fp;

    setvbuf(stderr, NULL, _IONBF, 0);
    std::ios::sync_with_stdio();
}

void ConsoleLogger::Log(const char* fmt, ...)
{
    va_list args;
    va_start(args, fmt);

    Log(fmt, args);

    va_end(args);
}

void ConsoleLogger::resizeConsole(unsigned int windowWidth, unsigned int windowHeight, unsigned int numLines)
{
    lastError::Description Dsc;
    CONSOLE_SCREEN_BUFFER_INFO Info;

    SHORT width = static_cast<SHORT>(windowWidth);
    SHORT height = static_cast<SHORT>(windowHeight);
    SHORT lines = static_cast<SHORT>(numLines);

    if (!GetConsoleScreenBufferInfo(hConsole_, &Info)) {
        gLogger.Error("Cannot get console buffer info. Error: %s", lastError::ToString(Dsc));
        return;
    }

    // only increase buffer width don't shrink.
    if (Info.dwSize.X < width) {
        Info.dwSize.X = Max<SHORT>(width, static_cast<SHORT>(GetSystemMetrics(SM_CXMIN)));

        if (!SetConsoleScreenBufferSize(hConsole_, Info.dwSize)) {
            gLogger.Error("Cannot set console buffer width. Error: %s", lastError::ToString(Dsc));
        }
    }

    // only increase buffer height don't shrink.
    if (Info.dwSize.Y < lines) {
        Info.dwSize.Y = Max<SHORT>(lines, static_cast<SHORT>(GetSystemMetrics(SM_CYMIN)));

        if (!SetConsoleScreenBufferSize(hConsole_, Info.dwSize)) {
            gLogger.Error("Cannot set console buffer height. Error: %s", lastError::ToString(Dsc));
        }
    }

    // confirm buffer sizes.
    GetConsoleScreenBufferInfo(hConsole_, &Info);

    width = Min<SHORT>(width, Info.dwSize.X) - 1;
    height = Min<SHORT>(height, Info.dwSize.Y) - 1;

    SMALL_RECT windowSize = {
        0,
        0,
        width,
        height};

    if (!SetConsoleWindowInfo(hConsole_, 1, &windowSize)) {
        gLogger.Error("Cannot set console window width. Error: %s", lastError::ToString(Dsc));
    }
}

void ConsoleLogger::setColorTable()
{
    CONSOLE_SCREEN_BUFFER_INFOEX InfoEx;

    InfoEx.cbSize = sizeof(CONSOLE_SCREEN_BUFFER_INFOEX);

    lastError::Description Dsc;

    if (!GetConsoleScreenBufferInfoEx(hConsole_, &InfoEx)) {
        std::cerr << "Failed get buffer info. Error: %s", lastError::ToString(Dsc);
    }

    memcpy(InfoEx.ColorTable, COLOR_TABLE, sizeof(COLOR_TABLE));

    ++InfoEx.srWindow.Right;
    ++InfoEx.srWindow.Bottom;

    if (!SetConsoleScreenBufferInfoEx(hConsole_, &InfoEx)) {
        std::cerr << "Failed to set buffer info. Error: %s", lastError::ToString(Dsc);
    }

    // set to white
    SetConsoleTextAttribute(hConsole_, COLOR_STRING_LOOKUP[0]);
}

// ==================== FileLogger ====================

FileLogger::FileLogger() :
    File_(nullptr)
{
}

FileLogger::~FileLogger()
{
    CloseFile();
}

bool FileLogger::Init(void)
{
    OpenFile();

    return isValid();
}

void FileLogger::ShutDown(void)
{
    CloseFile();
}

void FileLogger::Log(const char* fmt, va_list args)
{
    if (isValid()) {
        // want to log without color codes.
        char asciiMsg[4096];
        char* pAscii;
        char* pMsgEnd;
        int32_t length;
        int32_t NumberOfCharsWritten;
        int32_t SectionSize = 0;

        length = _vsnprintf_s(asciiMsg, sizeof(asciiMsg) - 2, fmt, args); // -2 so i can add \n

        if (length < 0) {
            return;
        }

        pAscii = asciiMsg;
        pMsgEnd = &pAscii[length];

        if (pAscii < &asciiMsg[length]) {
            do {
                if (SectionSize >= length) {
                    break;
                }

                if (*(pAscii + SectionSize) == '^') {
                    // is it a color?
                    int ch = *(pAscii + SectionSize + 1);
                    if (::isxdigit(ch)) {
                        ch = HexCharToInt(ch);

                        NumberOfCharsWritten = 0;
                        fwrite(pAscii, SectionSize, 1, File_);

                        length -= (SectionSize + 2);
                        pAscii = (pAscii + SectionSize + 2);
                        SectionSize = 0;
                    }
                }

                ++SectionSize;
            } while (pAscii < pMsgEnd);
        }

        fwrite(pAscii, length, 1, File_);
        fwrite("\n", 1, 1, File_);

#if Logfile_Flush
        fflush(File_);
#endif // !Logfile_Flush
    }
}

void FileLogger::Log(const wchar_t* fmt, va_list args)
{
    if (isValid()) {
        char asciiMsg[2096];
        int32_t length;

        {
            wchar_t utf8Msg[2096];

            length = _vsnwprintf_s(utf8Msg, sizeof(utf8Msg) - 2, fmt, args); // -2 so i can add \n

            // convert to narrow for file writing.
            StrUtil::Convert(utf8Msg, length, asciiMsg, sizeof(asciiMsg));
        }

        removeColor(asciiMsg);

        // update length.
        length = static_cast<uint32_t>(strlen(asciiMsg));

        fwrite(asciiMsg, length, 1, File_);
        fwrite("\n", 1, 1, File_);

#if Logfile_Flush
        fflush(File_);
#endif // !Logfile_Flush
    }
}

void FileLogger::Warning(const char* fmt, va_list args)
{
    char pBuf[2048];
    zero_object(pBuf);
    strcat_s(pBuf, "Warning: ");
    strcat_s(pBuf, fmt);

    Log(pBuf, args);
}

void FileLogger::Error(const char* fmt, va_list args)
{
    Log("-------------== ERROR ==-------------", va_list());
    Log(fmt, args);
    Log("-----------== ERROR END ==-----------", va_list());
}

void FileLogger::Flush(void)
{
    if (isValid()) {
        ::fflush(File_);
    }
}

void FileLogger::OpenFile(void)
{
    std::string path;

    path += "logs\\";
    path += "log.";

    FileUtil::CreateFolder(path);

    for (int i = 0;; i++) {
        if (!FileUtil::FileExsists(path + std::to_string(i) + ".txt")) {
            path += std::to_string(i) += ".txt";
            break;
        }
    }

    // for anyone that might be listening.
    ::OutputDebugStringA(("CEG_Patcher.dll LogFile: " + path).c_str());

    int errNo = ::fopen_s(&File_, path.c_str(), "w");

    if (!File_) {
        std::stringstream ss; // slow as a snail.
        ss << "Failed to open logger file err: ";
        ss << errNo;
        ::OutputDebugStringA(ss.str().c_str());
    }
    else {
        gLogger.Log("LogFile: %s", path.c_str());
    }
}

void FileLogger::CloseFile(void)
{
    if (isValid()) {
        ::fclose(File_);
        File_ = nullptr;
    }
}

// ==================== DebugLogger ====================

DebugLogger::DebugLogger()
{
}

DebugLogger::~DebugLogger()
{
}

bool DebugLogger::Init()
{
    return true;
}

void DebugLogger::ShutDown()
{
}

void DebugLogger::Log(const char* fmt, va_list args)
{
    char asciiMsg[4096];
    DWORD length;

    length = _vsnprintf_s(asciiMsg, sizeof(asciiMsg) - 2, fmt, args);

    // now remove the color codes.
    removeColor(asciiMsg);

    ::OutputDebugStringA(asciiMsg);
}

void DebugLogger::Log(const wchar_t* fmt, va_list args)
{
    wchar_t utfMsg[4096];
    DWORD length;

    length = _vsnwprintf_s(utfMsg, sizeof(utfMsg) - 2, fmt, args);

    // now remove the color codes.
    removeColor(utfMsg);

    ::OutputDebugStringW(utfMsg);
}

void DebugLogger::Warning(const char* fmt, va_list args)
{
    char pBuf[2048];
    zero_object(pBuf);
    strcat_s(pBuf, "Warning: ");
    strcat_s(pBuf, fmt);

    Log(pBuf, args);
}

void DebugLogger::Error(const char* fmt, va_list args)
{
    Log("-------------== ERROR ==-------------", va_list());
    Log(fmt, args);
    Log("-----------== ERROR END ==-----------", va_list());
}

void DebugLogger::Flush(void)
{
}