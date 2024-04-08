#pragma once

#if X_WIN32

#define NOMINMAX
#define WIN32_LEAN_AND_MEAN
#define WIN32_EXTRA_LEAN
#define VC_EXTRALEAN

#include <Windows.h>
#include <tchar.h>

#include <conio.h>
#include <Shlobj.h>
#include <direct.h>

#endif // X_WIN32


#include <assert.h>
#include <inttypes.h>
#include <stdio.h>

#include <memory>
#include <iostream>
#include <ostream>
#include <sstream> 
#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <array>
#include <queue>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <numeric>
#include <limits>
#include <cstring>
#include <cstdarg>

#ifdef X_WIN32
#define PRIdS "Id"
#else // X_WIN32
#define PRIdS "zd"
#endif // X_WIN32

// Local

#include "Types.h"
#include "Util/Macros.h"

#include "Debugging/Assert.h"

#include "Casts/safe_static_cast.h"
#include "Casts/union_cast.h"

// misc
#include "Util/Util.h"
#include "Util/LastError.h"
#include "Util/StringUtil.h"
#include "Util/FileUtil.h"
#include "Util/BitUtil.h"
#include "Util/UserLiterals.h"




