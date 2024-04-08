#include "Common.h"
#include "LastError.h"

namespace lastError
{
#if X_WIN32

	ErrorInt Get(void)
	{
		return ::GetLastError();
	}

	const char* ToString(DWORD error, Description& desc)
	{
        desc[0] = '\0';

        Description tmp;

        DWORD size = ::FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM, // It's a system error
            NULL,                                                 // No string to be formatted needed
            error,
            MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT), // Do it in the standard language
            tmp,                                       // Put the message here
            sizeof(tmp),                               // Number of bytes to store the message
            NULL);

        if (size == 0) {
            return desc;
        }
        // remove \n
        if (size > 1) {
            tmp[size - 2] = '\0';
        }

        int err = snprintf(desc, sizeof(desc), "Error(0x%08x): %s", error, tmp);
        if (err < 0) {
            std::strncpy(desc, "Failed to encode error message", sizeof(desc));
        }

        return desc;
	}

	const char* ToString(Description& desc)
	{
		return ToString(::GetLastError(), desc);
	}

#else // X_WIN32

    ErrorInt Get(void)
    {
        return errno;
    }

    const char* ToString(ErrorInt error, Description& desc)
    {
        desc[0] = '\0';

        Description tmp;
        const char* pErrStr = ::strerror_r(error, tmp, safe_static_cast<int>(sizeof(tmp)));

        snprintf(desc, sizeof(desc), "Error(0x%08x): %s", error, pErrStr);
        return desc;
    }

    const char* ToString(Description& desc)
    {
        return ToString(Get(), desc);
    }

#endif // X_WIN32

}