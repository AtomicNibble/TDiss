#pragma once

X_DISABLE_WARNING(4324) // structure was padded due to alignment specifier

class alignas(64) CriticalSection
{
public:
	CriticalSection(void);
	explicit CriticalSection(unsigned int spinCount);
	~CriticalSection(void);

	void Enter(void);

	bool TryEnter(void);
	void Leave(void);

	inline CRITICAL_SECTION* GetNativeObject(void);

	class ScopedLock
	{
	public:
		inline explicit ScopedLock(CriticalSection& criticalSection);
		inline ~ScopedLock(void);

	private:
		ScopedLock(const ScopedLock&);
		ScopedLock& operator = (ScopedLock);

		CriticalSection& cs_;
	};

private:
	CRITICAL_SECTION cs_;
};

X_ENABLE_WARNING(4324)


inline CRITICAL_SECTION* CriticalSection::GetNativeObject(void)
{
	return &cs_;
}

CriticalSection::ScopedLock::ScopedLock(CriticalSection& criticalSection) :
	cs_(criticalSection)
{
	cs_.Enter();
}

CriticalSection::ScopedLock::~ScopedLock()
{
	cs_.Leave();
}

