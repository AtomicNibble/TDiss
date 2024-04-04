#pragma once


#include <Common.h>

#include "TDissLogger.h"


#ifdef TDISS_STATIC
#define TDISS_API
#else // TDISS_STATIC
#ifdef DLL_EXPORTS
#define TDISS_API X_EXPORT
#else // DLL_EXPORTS
#define TDISS_API X_IMPORT
#endif // DLL_EXPORTS
#endif // TDISS_STATIC