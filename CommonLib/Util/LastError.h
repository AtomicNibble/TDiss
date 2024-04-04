#pragma once

namespace lastError
{
	typedef char Description[512];

	unsigned int Get(void);
	const char* ToString(DWORD error, Description& desc);
	const char* ToString(Description& desc);
}
