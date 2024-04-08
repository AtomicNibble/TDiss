#include "pch.h"
#include "Builder.h"

#include <CLI11.hpp>

int main(int argc, char* argv[])
{
	CLI::App app{ "TableBuilder" };

	std::string outputDir;
	app.add_option("--out", outputDir);

	size_t numTestFiles = 8;
	app.add_option("--numTestFiles", numTestFiles);

	// By default we output tables.
	bool saveTests = false;
	app.add_flag("--tests", saveTests);

	CLI11_PARSE(app, argc, argv);

	StrUtil::EnsureSlash(outputDir);

	const std::string file = outputDir + "tables.cpp";
	const std::string mneHeader = outputDir + "mnemonics.h";
	const std::string mneSource = outputDir + "mnemonics.cpp";
	const std::string testSource = outputDir;

	TDiss::Builder builder;
	if (!builder.Build()) {
		return -1;
	}

	if (saveTests)
	{
		if (!builder.SaveTests(testSource, numTestFiles)) {
			return -1;
		}
	}
	else
	{
		if (!builder.SaveTables(file) ||
			!builder.SaveMnemocis(mneHeader, mneSource)) {
			return -1;
		}
	}

	return 0;
}

