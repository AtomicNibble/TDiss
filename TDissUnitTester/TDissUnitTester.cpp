#include "pch.h"
#include "TDissUnitTester.h"

ConsoleLogger gConsoleLog;

int main(int argc, char* argv[])
{
	int res;

	bool ci = false;
	{
	//	std::wstring cmd(lpCmdLine);
	//	if (cmd.find(L"-ci") != std::wstring::npos) {
	//		ci = true;
	//	}
	}

	if (ci)
	{
		gLogger.SetNoPause(true);
	}
	else 
	{
		gLogger.AddLogger(&gConsoleLog);
		gConsoleLog.RedirectSTD();
	}

	::testing::InitGoogleTest(&argc, argv);
	::testing::GTEST_FLAG(filter) = "Misc*";

	res = RUN_ALL_TESTS();

	gLogger.ShutDown();

	return res;
}


