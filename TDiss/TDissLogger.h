#pragma once


namespace TDiss
{
	// You can implement this interface to get logging out of TDiss at runtime.
	struct IDissLogger
	{
		virtual ~IDissLogger() {}

		struct Verbosity
		{
			enum Enum
			{
				LVL0,
				LVL1,
				LVL2,
			};
		};

		virtual void Log(Verbosity::Enum verLvl, const char* pFmt, ...) X_ABSTRACT;
		virtual void Log(const char* pFmt, ...) X_ABSTRACT;
		virtual void Warning(const char* pFmt, ...) X_ABSTRACT;
		virtual void Error(const char* pFmt, ...) X_ABSTRACT;
	};


// When TDISS_DISABLE_LOGGING is defined we compile out the log sites from TDIss.
#if TDISS_DISABLE_LOGGING

#define TDISS_LOGGING 0

#define TDISS_LOG0(pFmt, ...)
#define TDISS_LOG1(pFmt, ...)
#define TDISS_LOG2(pFmt, ...)

#define TDISS_WARN(pFmt, ...) 
#define TDISS_ERR(pFmt, ...) 

#else

#define TDISS_LOGGING 1

// fixes expansion for gcc
#define X_DO_LOG_VA_ARGS(...) , ##__VA_ARGS__ 


#define TDISS_LOG0(pFmt, ...) if (pLogger_) { pLogger_->Log(IDissLogger::Verbosity::LVL0, pFmt X_DO_LOG_VA_ARGS(__VA_ARGS__)); }
#define TDISS_LOG1(pFmt, ...) if (pLogger_) { pLogger_->Log(IDissLogger::Verbosity::LVL1, pFmt X_DO_LOG_VA_ARGS(__VA_ARGS__)); }
#define TDISS_LOG2(pFmt, ...) if (pLogger_) { pLogger_->Log(IDissLogger::Verbosity::LVL2, pFmt X_DO_LOG_VA_ARGS(__VA_ARGS__)); }

#define TDISS_WARN(pFmt, ...) if (pLogger_) { pLogger_->Warning(pFmt X_DO_LOG_VA_ARGS(__VA_ARGS__)); }
#define TDISS_ERR(pFmt, ...) if (pLogger_) { pLogger_->Error(pFmt X_DO_LOG_VA_ARGS(__VA_ARGS__)); }

#endif

} // namespace TDiss