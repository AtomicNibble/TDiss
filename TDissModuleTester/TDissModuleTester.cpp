#include "stdafx.h"
#include "TDissModuleTester.h"

// Google Test
#if SWISS_DEBUG == 1
SWISS_LINK_LIB("gtestd")
#else
SWISS_LINK_LIB("gtest")
#endif

SWISS_LINK_LIB("util")
SWISS_LINK_LIB("TDiss")
SWISS_LINK_LIB("Common")

ConsoleLogger gConsoleLog;

int APIENTRY _tWinMain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPTSTR    lpCmdLine,
	_In_ int       nCmdShow)
{
	UNREFERENCED_PARAMETER(hPrevInstance);
	UNREFERENCED_PARAMETER(lpCmdLine);
	int res;

	bool ci = false;
	{
		std::wstring cmd(lpCmdLine);
		if (cmd.find(L"-ci") != std::wstring::npos) {
			ci = true;
		}
	}

	if (ci)
	{
		gLogger.SetNoPause(true);
		gConsoleLog.RedirectSTD();
	}
	else
	{
		gLogger.AddLogger(&gConsoleLog);
		gConsoleLog.RedirectSTD();
	}

//	::testing::GTEST_FLAG(filter) = "x64_misc*.*";
	testing::InitGoogleTest(&__argc, __targv);
	res = RUN_ALL_TESTS();

	gLogger.ShutDown();

	return res;
}

