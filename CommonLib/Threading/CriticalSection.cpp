#include "Common.h"
#include "CriticalSection.h"


CriticalSection::CriticalSection(void)
{
	InitializeCriticalSection(&cs_);
}


CriticalSection::CriticalSection(unsigned int spinCount)
{
	InitializeCriticalSectionAndSpinCount(&cs_, spinCount);
}


CriticalSection::~CriticalSection(void)
{
	DeleteCriticalSection(&cs_);
}


void CriticalSection::Enter(void)
{
	EnterCriticalSection(&cs_);
}

bool CriticalSection::TryEnter(void)
{
	return TryEnterCriticalSection(&cs_) != 0;
}

void CriticalSection::Leave(void)
{
	LeaveCriticalSection(&cs_);
}