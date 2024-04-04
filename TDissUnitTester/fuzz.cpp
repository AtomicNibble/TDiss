#include "pch.h"

#include <Random/Random.h>

using namespace TDiss;

#if X_ASSERT_DISABLE

TEST(fuzz, basic)
{
	// Feed in some random data make sure we don't crash.
	// TODO: proper fuzz
	for (size_t i = 0; i < 0x1000; i++) {
		Instruction instructions[0x200];
		size_t instructionCount;

		std::vector<uint8_t> bytes = util::GenRandBytes(i + 1);

		CodeStream strm(0x0, bytes.data(), bytes.size(), DisOptions::SKIP_INVALID, CodeType::CODE_64BIT);

		DisResult::Enum result = Diss::disassemble(strm, instructions, 0x200, &instructionCount);
		ASSERT_NE(DisResult::INVALID_PARAM, result);
	}
}

#endif // X_ASSERT_DISABLE