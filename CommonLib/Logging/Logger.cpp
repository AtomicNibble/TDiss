#include "Common.h"
#include "Logger.h"
#include "LoggerTypes.h"

Logger gLogger;

Logger::Logger()
{
	noPause_ = false;
}

Logger::~Logger()
{
	ShutDown();
}

void Logger::Init(void)
{
}

void Logger::ShutDown(void)
{
	std::unique_lock lock(critical_);

	for (const auto& logger : loggers_) {
		logger->ShutDown();
	}

	loggers_.clear();
}

void Logger::Flush(void)
{
	std::unique_lock lock(critical_);

	for (const auto& logger : loggers_) {
		logger->Flush();
	}
}

void Logger::Log(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);

	LogVa(fmt, args);

	va_end(args);
}

void Logger::Log(const wchar_t* fmt, ...)
{
	va_list args;
	va_start(args, fmt);

	LogVa(fmt, args);

	va_end(args);
}

void Logger::Warning(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);

	WarningVa(fmt, args);

	va_end(args);
}

void Logger::Error(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);

	ErrorVa(fmt, args);

	va_end(args);
}

void Logger::CriticalError(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);

	char tempFmt[1024];
	char asciiMsg[4096];

	zero_object(tempFmt);

	strcat_s(tempFmt, "CriticalError: ");
	strcat_s(tempFmt, fmt);

	SendToDebugOutput(fmt, args);

	// sync
	std::unique_lock lock(critical_);

	Loggers::iterator it = loggers_.begin();
	for (; it != loggers_.end(); ++it) {
		(*it)->Error(fmt, args);
		(*it)->Flush();
	}

	// message box
	if (!noPause_) {
		vsprintf_s(asciiMsg, sizeof(asciiMsg), fmt, args);
		::MessageBoxA(NULL, asciiMsg, "CriticalError", MB_OK);
	}

	va_end(args);

	Log("=== Closing application ===");

	::ExitProcess(0x1);
}

void Logger::LogVa(const char* fmt, va_list args)
{
	std::unique_lock lock(critical_);

	for (const auto& logger : loggers_) {
		logger->Log(fmt, args);
	}
}

void Logger::LogVa(const wchar_t* fmt, va_list args)
{
	std::unique_lock lock(critical_);

	for (const auto& logger : loggers_) {
		logger->Log(fmt, args);
	}
}

void Logger::WarningVa(const char* fmt, va_list args)
{
	std::unique_lock lock(critical_);

	for (const auto& logger : loggers_) {
		logger->Warning(fmt, args);
	}
}

void Logger::ErrorVa(const char* fmt, va_list args)
{
	SendToDebugOutput(fmt, args);

	std::unique_lock lock(critical_);

	for (const auto& logger : loggers_) {
		logger->Error(fmt, args);
	}
}

void Logger::PressToContinue(void)
{
	Log("^7Press Any Key To Continue...");
	if (!noPause_) {
		_getch();
	}
}

void Logger::AddLogger(ILoggerBase* pLogger)
{
	X_ASSERT_NOT_NULL(pLogger);

	std::unique_lock lock(critical_);

	if (pLogger->Init()) {
		loggers_.push_back(pLogger);
	}
}

void Logger::SetNoPause(bool noPause)
{
	noPause_ = noPause;
}

void Logger::SendToDebugOutput(const char* fmt, va_list args)
{
	char asciiMsg[4096];
	vsprintf_s(asciiMsg, sizeof(asciiMsg), fmt, args);

	::OutputDebugStringA(asciiMsg);
	::OutputDebugStringA("\n");
}
