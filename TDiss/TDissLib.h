#pragma once

#ifndef TDISS_API

#ifdef TDISS_STATIC
#define TDISS_API
#else // TDISS_STATIC
#ifdef DLL_EXPORTS
#define TDISS_API X_EXPORT
#else // DLL_EXPORTS
#define TDISS_API X_IMPORT
#endif // DLL_EXPORTS
#endif // TDISS_STATIC

#endif // TDISS_API

#include "TDiss.h"