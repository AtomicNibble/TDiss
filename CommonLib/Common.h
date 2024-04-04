#pragma once

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN
#define VC_EXTRALEAN

#include <Windows.h>

#if X_WIN32
#include <conio.h>
#include <Shlobj.h>
#include <direct.h>
#endif // X_WIN32


#include <iostream>
#include <ostream>
#include <sstream> 
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

#include <assert.h>
#include <tchar.h>

#include <vector>
#include <array>
#include <queue>
#include <map>
#include <unordered_map>

#include <algorithm>
#include <numeric>

#include <inttypes.h>

#ifdef MSVC
#define PRIdS "Id"
#else
#define PRIdS "zd"
#endif

// Local

#include "Types.h"
#include "Util\Macros.h"

#include "Debugging/Assert.h"

#include "Casts\safe_static_cast.h"
#include "Casts\union_cast.h"

// misc
#include "Util\Util.h"
#include "Util\LastError.h"
#include "Util\StringUtil.h"
#include "Util\FileUtil.h"
#include "Util\BitUtil.h"

// logging
#include "Logging\Logger.h"
#include "Logging\LoggerTypes.h"



