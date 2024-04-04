#include "Common.h"
#include "LastError.h"

namespace lastError
{
	unsigned int Get(void) {
		return ::GetLastError();
	}

	const char* ToString(DWORD error, Description& desc)
	{
		zero_object(desc);

		DWORD size = ::FormatMessageA(FORMAT_MESSAGE_FROM_SYSTEM,	// It´s a system error
			NULL,													// No string to be formatted needed
			error,
			MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),				// Do it in the standard language
			desc,													// Put the message here
			sizeof(Description),									// Number of bytes to store the message
			NULL);

		desc[size] = '\0';
		return desc;
	}

	const char* ToString(Description& desc)
	{
		return ToString(::GetLastError(), desc);
	}
}