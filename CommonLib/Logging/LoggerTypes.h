#pragma once

struct ILoggerBase
{
	virtual ~ILoggerBase()
	{
	}

	virtual bool Init(void) X_ABSTRACT;
	virtual void ShutDown(void) X_ABSTRACT;
	virtual void Log(const char* fmt, va_list args) X_ABSTRACT;
	virtual void Log(const wchar_t* fmt, va_list args) X_ABSTRACT;
	virtual void Warning(const char* fmt, va_list args) X_ABSTRACT;
	virtual void Error(const char* fmt, va_list args) X_ABSTRACT;
	virtual void Flush(void) X_ABSTRACT;
};

class ConsoleLogger : public ILoggerBase
{
public:
	ConsoleLogger();
	~ConsoleLogger() X_FINAL;

	virtual bool Init(void) X_FINAL;
	virtual void ShutDown(void) X_FINAL;

	virtual void Log(const char* fmt, va_list args) X_FINAL;
	virtual void Log(const wchar_t* fmt, va_list args) X_FINAL;
	virtual void Warning(const char* fmt, va_list args) X_FINAL;
	virtual void Error(const char* fmt, va_list args) X_FINAL;
	virtual void Flush(void) X_FINAL;

	bool isValid(void) const
	{
		return hConsole_ != INVALID_HANDLE_VALUE;
	}

	void SetSize(int width, int height, int bufferLength = 9000)
	{
		width_ = width;
		height_ = height;
		bufferLength_ = bufferLength;

		if (isValid()) {
			resizeConsole(width, height, bufferLength);
		}
	}

	void MoveTo(int x, int y);
	void SetTitle(const char* title);
	bool SetIcon(HICON icon);
	void PressToContinue(void);
	void RedirectSTD(void);

private:
	void Log(const char* fmt, ...);

	void WriteConsoleA(const void* lpBuffer, DWORD nNumberOfCharsToWrite, LPDWORD lpNumberOfCharsWritten);

	void RecreateConsole(void);

	void resizeConsole(unsigned int windowWidth, unsigned int windowHeight, unsigned int numLines);
	void setColorTable(void);

private:
	int width_;
	int height_;
	int bufferLength_;
	HWND window_;
	HANDLE hConsole_;
	bool FreeConsole_;
};

class FileLogger : public ILoggerBase
{
public:
	FileLogger();
	~FileLogger() X_FINAL;

	virtual bool Init(void) X_FINAL;
	virtual void ShutDown(void) X_FINAL;

	virtual void Log(const char* fmt, va_list args) X_FINAL;
	virtual void Log(const wchar_t* fmt, va_list args) X_FINAL;
	virtual void Warning(const char* fmt, va_list args) X_FINAL;
	virtual void Error(const char* fmt, va_list args) X_FINAL;
	virtual void Flush(void) X_FINAL;

	bool isValid(void) const
	{
		return File_ != nullptr;
	}

private:
	void OpenFile(void);
	void CloseFile(void);

private:
	FILE* File_;
};

class DebugLogger : public ILoggerBase
{
public:
	DebugLogger();
	~DebugLogger() X_FINAL;

	virtual bool Init(void) X_FINAL;
	virtual void ShutDown(void) X_FINAL;

	virtual void Log(const char* fmt, va_list args) X_FINAL;
	virtual void Log(const wchar_t* fmt, va_list args) X_FINAL;
	virtual void Warning(const char* fmt, va_list args) X_FINAL;
	virtual void Error(const char* fmt, va_list args) X_FINAL;
	virtual void Flush(void) X_FINAL;

	bool isValid(void) const
	{
		return true;
	}

private:
};

