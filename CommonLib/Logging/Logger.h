#pragma once

#include "Threading\CriticalSection.h"

struct ILoggerBase;

struct Logger
{
	Logger();
	~Logger();

	void Init(void);
	void ShutDown(void);
	void Flush(void);
	void Log(const char* fmt, ...);
	void Log(const wchar_t* fmt, ...);
	void Warning(const char* fmt, ...);
	void Error(const char* fmt, ...);
	void CriticalError(const char* fmt, ...);

	void LogVa(const char* fmt, va_list args);
	void LogVa(const wchar_t* fmt, va_list args);
	void WarningVa(const char* fmt, va_list args);
	void ErrorVa(const char* fmt, va_list args);


	void PressToContinue(void);

	void AddLogger(ILoggerBase* pLogger);

	void SetNoPause(bool noPause);

private:
	void SendToDebugOutput(const char* fmt, va_list args);

private:
	typedef std::vector<ILoggerBase*> Loggers;

	CriticalSection critical_;

	Loggers loggers_;
	bool noPause_;
};

// TODO: remove
extern Logger gLogger;

