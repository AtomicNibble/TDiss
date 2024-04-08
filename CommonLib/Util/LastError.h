#pragma once

namespace lastError
{
#ifdef X_WIN32
    using ErrorInt = uint32_t;
#else // X_WIN32
    using ErrorInt = int32_t;
#endif// X_WIN32

	typedef char Description[512];

	ErrorInt Get(void);
	X_NO_INLINE const char* ToString(ErrorInt error, Description& desc);
	X_NO_INLINE const char* ToString(Description& desc);
} // namespace lastError
