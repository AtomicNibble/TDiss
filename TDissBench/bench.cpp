#include "pch.h"

#include <Random/Random.h>

namespace
{
	// Random bit of valid byte code from this program.
	const uint8_t ops[1060] = {
		0x48, 0x89, 0x5C, 0x24, 0x20,
		0x55,
		0x56,
		0x57,
		0x41, 0x54,
		0x41, 0x55,
		0x41, 0x56,
		0x41, 0x57,
		0x48, 0x8D, 0x6C, 0x24, 0xD9,
		0x48, 0x81, 0xEC, 0xD0, 0x00, 0x00, 0x00,
		0x48, 0x8B, 0x05, 0x95, 0x76, 0x00, 0x00,
		0x48, 0x33, 0xC4,
		0x48, 0x89, 0x45, 0x1F,
		0x45, 0x33, 0xDB,
		0x48, 0x89, 0x54, 0x24, 0x28,
		0x4D, 0x89, 0x18,
		0x4D, 0x8B, 0xE0,
		0x8B, 0x41, 0x30,
		0x48, 0x8B, 0xFA,
		0x83, 0xE0, 0x7F,
		0x48, 0x8B, 0xD9,
		0x89, 0x44, 0x24, 0x20,
		0x45, 0x8B, 0xFB,
		0x48, 0x8B, 0x41, 0x10,
		0x48, 0x3B, 0x41, 0x20,
		0x0F, 0x83, 0x94, 0x03, 0x00, 0x00,
		0x41, 0x8D, 0x73, 0x04,
		0x0F, 0x1F, 0x00,
		0x4C, 0x8B, 0x73, 0x08,
		0x48, 0x8D, 0x53, 0x08,
		0x4C, 0x2B, 0x73, 0x18,
		0x48, 0x8D, 0x4D, 0x87,
		0x0F, 0x57, 0xC0,
		0x4C, 0x89, 0x5D, 0x8F,
		0x4C, 0x03, 0xF0,
		0x66, 0x0F, 0x7F, 0x45, 0x97,
		0x66, 0x0F, 0x6F, 0x05, 0xA9, 0x54, 0x00, 0x00,
		0x48, 0x8B, 0x03,
		0x48, 0x89, 0x45, 0x87,
		0x4C, 0x89, 0x5D, 0xA7,
		0x48, 0xC7, 0x45, 0xAF, 0x00, 0x00, 0x00, 0x00,
		0x44, 0x89, 0x5D, 0xB7,
		0x66, 0x44, 0x89, 0x5D, 0xBB,
		0x48, 0xC7, 0x45, 0xBF, 0x00, 0x00, 0x00, 0x00,
		0x0F, 0x11, 0x45, 0xC7,
		0x66, 0x0F, 0x7E, 0x45, 0xD7,
		0xE8, 0xB7, 0xFA, 0xFF, 0xFF,
		0x83, 0x7B, 0x34, 0x02,
		0x75, 0x5C,
		0x8B, 0x4D, 0xB3,
		0x8B, 0xC1,
		0xC1, 0xE8, 0x0E,
		0xA8, 0x01,
		0x74, 0x29,
		0x48, 0x8B, 0x43, 0x10,
		0x48, 0xFF, 0xC8,
		0x48, 0x39, 0x45, 0xA7,
		0x74, 0x1C,
		0x8B, 0x55, 0xC7,
		0xC7, 0x45, 0xAF, 0x00, 0x00, 0x00, 0x00,
		0x83, 0xFA, 0xFF,
		0x74, 0x0D,
		0x0F, 0xB7, 0x45, 0xBB,
		0x0F, 0xAB, 0xD0,
		0x66, 0x89, 0x45, 0xBB,
		0xEB, 0x04,
		0x0F, 0xB7, 0x45, 0xBB,
		0xF7, 0xC1, 0xC0, 0x03, 0x00, 0x00,
		0x74, 0x1B,
		0x81, 0xE1, 0x3F, 0xFC, 0xFF, 0xFF,
		0x89, 0x4D, 0xB3,
		0x8B, 0x4D, 0xCF,
		0x83, 0xF9, 0xFF,
		0x74, 0x0A,
		0x0F, 0xB7, 0xC0,
		0x0F, 0xAB, 0xC8,
		0x66, 0x89, 0x45, 0xBB,
		0x4C, 0x3B, 0x7B, 0x40,
		0x0F, 0x83, 0xF8, 0x02, 0x00, 0x00,
		0x49, 0x6B, 0xC7, 0x38,
		0x48, 0x8D, 0x55, 0x87,
		0x48, 0x8B, 0xCB,
		0x48, 0x03, 0xF8,
		0x4C, 0x8B, 0xC7,
		0xE8, 0x95, 0xDA, 0xFF, 0xFF,
		0x48, 0x8B, 0x4B, 0x38,
		0x8B, 0xD0,
		0x49, 0x23, 0xCE,
		0x48, 0x89, 0x0F,
		0x85, 0xC0,
		0x75, 0x16,
		0x0F, 0xB6, 0x45, 0x97,
		0x2A, 0x45, 0x8F,
		0x00, 0x47, 0x1B,
		0x49, 0xFF, 0x04, 0x24,
		0x45, 0x33, 0xDB,
		0xE9, 0x71, 0x01, 0x00, 0x00,
		0xFF, 0xC8,
		0xA9, 0xFC, 0xFF, 0xFF, 0xFF,
		0x0F, 0x85, 0x0D, 0x02, 0x00, 0x00,
		0x83, 0xFA, 0x02,
		0x0F, 0x84, 0x0D, 0x02, 0x00, 0x00,
		0x8B, 0x43, 0x30,
		0xC1, 0xE8, 0x08,
		0xA8, 0x01,
		0x0F, 0x84, 0xF6, 0x01, 0x00, 0x00,
		0x4C, 0x8B, 0x4D, 0x97,
		0x4C, 0x8B, 0x55, 0x8F,
		0x4D, 0x2B, 0xCA,
		0x0F, 0x84, 0xAC, 0x00, 0x00, 0x00,
		0x45, 0x33, 0xDB,
		0x48, 0x8B, 0xD7,
		0x45, 0x8B, 0xC3,
		0x4D, 0x03, 0xF9,
		0x0F, 0x1F, 0x40, 0x00,
		0x66, 0x66, 0x0F, 0x1F, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x4C, 0x89, 0x5D, 0xF7,
		0x48, 0x8D, 0x45, 0x0B,
		0x48, 0x8B, 0xCE,
		0x0F, 0x1F, 0x44, 0x00, 0x00,
		0x44, 0x89, 0x58, 0xFE,
		0x48, 0x8D, 0x40, 0x04,
		0x48, 0x83, 0xE9, 0x01,
		0x75, 0xF2,
		0x44, 0x89, 0x5D, 0x05,
		0x4C, 0x89, 0x5D, 0xE7,
		0x4C, 0x89, 0x5D, 0xEF,
		0x0F, 0x10, 0x45, 0xE7,
		0x66, 0x44, 0x89, 0x5D, 0x02,
		0x66, 0xC7, 0x45, 0xFF, 0x8C, 0x8C,
		0x0F, 0x11, 0x02,
		0x44, 0x88, 0x5D, 0x01,
		0x0F, 0x10, 0x4D, 0xF7,
		0x44, 0x89, 0x5D, 0x19,
		0x0F, 0x10, 0x45, 0x07,
		0x66, 0x44, 0x89, 0x5D, 0x1D,
		0x0F, 0x11, 0x4A, 0x10,
		0xF2, 0x0F, 0x10, 0x4D, 0x17,
		0x0F, 0x11, 0x42, 0x20,
		0xF2, 0x0F, 0x11, 0x4A, 0x30,
		0xC6, 0x42, 0x1B, 0x01,
		0x43, 0x0F, 0xB6, 0x04, 0x10,
		0x49, 0xFF, 0xC0,
		0x88, 0x42, 0x10,
		0x48, 0x8B, 0x43, 0x38,
		0x49, 0x23, 0xC6,
		0x49, 0xFF, 0xC6,
		0x48, 0x89, 0x02,
		0x48, 0x83, 0xC2, 0x38,
		0x49, 0xFF, 0x04, 0x24,
		0x4D, 0x3B, 0xC1,
		0x0F, 0x82, 0x70, 0xFF, 0xFF, 0xFF,
		0xEB, 0x03,
		0x45, 0x33, 0xDB,
		0x49, 0x6B, 0xD7, 0x38,
		0x4C, 0x89, 0x5D, 0xF7,
		0x48, 0x8D, 0x45, 0x0B,
		0x48, 0x03, 0x54, 0x24, 0x28,
		0x48, 0x8B, 0xCE,
		0x0F, 0x1F, 0x80, 0x00, 0x00, 0x00, 0x00,
		0xC7, 0x40, 0xFE, 0x00, 0x00, 0x00, 0x00,
		0x48, 0x8D, 0x40, 0x04,
		0x48, 0x83, 0xE9, 0x01,
		0x75, 0xEF,
		0x89, 0x4D, 0x05,
		0x66, 0x89, 0x4D, 0x02,
		0x88, 0x4D, 0x01,
		0x89, 0x4D, 0x19,
		0x4C, 0x89, 0x5D, 0xE7,
		0x4C, 0x89, 0x5D, 0xEF,
		0x0F, 0x10, 0x45, 0xE7,
		0x66, 0xC7, 0x45, 0xFF, 0x8C, 0x8C,
		0x0F, 0x10, 0x4D, 0xF7,
		0x66, 0x44, 0x89, 0x5D, 0x1D,
		0x0F, 0x11, 0x02,
		0x0F, 0x10, 0x45, 0x07,
		0x0F, 0x11, 0x4A, 0x10,
		0xF2, 0x0F, 0x10, 0x4D, 0x17,
		0x0F, 0x11, 0x42, 0x20,
		0xF2, 0x0F, 0x11, 0x4A, 0x30,
		0xC6, 0x42, 0x1B, 0x01,
		0x48, 0x8B, 0x43, 0x10,
		0x0F, 0xB6, 0x08,
		0x88, 0x4A, 0x10,
		0x48, 0x8B, 0x43, 0x38,
		0x49, 0x23, 0xC6,
		0x48, 0x89, 0x02,
		0x48, 0xFF, 0x43, 0x10,
		0x49, 0xFF, 0x04, 0x24,
		0x49, 0xFF, 0xC7,
		0x83, 0x7C, 0x24, 0x20, 0x00,
		0x0F, 0x84, 0x83, 0x00, 0x00, 0x00,
		0x0F, 0xB6, 0x57, 0x21,
		0x84, 0xD2,
		0x74, 0x7B,
		0x8B, 0x4B, 0x30,
		0xF6, 0xC1, 0x01,
		0x74, 0x09,
		0x80, 0xFA, 0x01,
		0x0F, 0x84, 0xF4, 0x00, 0x00, 0x00,
		0x8B, 0xC1,
		0xC1, 0xE8, 0x05,
		0xA8, 0x01,
		0x74, 0x09,
		0x80, 0xFA, 0x06,
		0x0F, 0x84, 0xE2, 0x00, 0x00, 0x00,
		0x8B, 0xC1,
		0xC1, 0xE8, 0x04,
		0xA8, 0x01,
		0x74, 0x09,
		0x80, 0xFA, 0x05,
		0x0F, 0x84, 0xD0, 0x00, 0x00, 0x00,
		0x8B, 0xC1,
		0xC1, 0xE8, 0x03,
		0xA8, 0x01,
		0x74, 0x09,
		0x40, 0x3A, 0xD6,
		0x0F, 0x84, 0xBE, 0x00, 0x00, 0x00,
		0x8B, 0xC1,
		0xC1, 0xE8, 0x06,
		0xA8, 0x01,
		0x74, 0x09,
		0x80, 0xFA, 0x07,
		0x0F, 0x84, 0xAC, 0x00, 0x00, 0x00,
		0x8B, 0xC1,
		0xD1, 0xE8,
		0xA8, 0x01,
		0x74, 0x09,
		0x80, 0xFA, 0x02,
		0x0F, 0x84, 0x9B, 0x00, 0x00, 0x00,
		0xC1, 0xE9, 0x02,
		0xF6, 0xC1, 0x01,
		0x74, 0x09,
		0x80, 0xFA, 0x03,
		0x0F, 0x84, 0x8A, 0x00, 0x00, 0x00,
		0x48, 0x8B, 0x43, 0x10,
		0x48, 0x3B, 0x43, 0x20,
		0x0F, 0x83, 0x7C, 0x00, 0x00, 0x00,
		0x48, 0x8B, 0x7C, 0x24, 0x28,
		0xE9, 0xE5, 0xFC, 0xFF, 0xFF,
		0x83, 0xFA, 0x02,
		0x0F, 0x85, 0x92, 0x00, 0x00, 0x00,
		0x8B, 0x43, 0x30,
		0xC1, 0xE8, 0x08,
		0xA8, 0x01,
		0x0F, 0x84, 0x84, 0x00, 0x00, 0x00,
		0x33, 0xC9,
		0x48, 0x8D, 0x45, 0x0B,
		0x48, 0x89, 0x4D, 0xF7,
		0x0F, 0x1F, 0x40, 0x00,
		0x89, 0x48, 0xFE,
		0x48, 0x8D, 0x40, 0x04,
		0x48, 0x83, 0xEE, 0x01,
		0x75, 0xF3,
		0x89, 0x4D, 0x05,
		0x48, 0x89, 0x4D, 0xE7,
		0x48, 0x89, 0x4D, 0xEF,
		0x0F, 0x10, 0x45, 0xE7,
		0x66, 0x89, 0x4D, 0x02,
		0x66, 0xC7, 0x45, 0xFF, 0x8C, 0x8C,
		0x0F, 0x11, 0x07,
		0x88, 0x4D, 0x01,
		0x0F, 0x10, 0x4D, 0xF7,
		0x89, 0x4D, 0x19,
		0x0F, 0x10, 0x45, 0x07,
		0x66, 0x89, 0x4D, 0x1D,
		0x0F, 0x11, 0x4F, 0x10,
		0xF2, 0x0F, 0x10, 0x4D, 0x17,
		0x0F, 0x11, 0x47, 0x20,
		0xF2, 0x0F, 0x11, 0x4F, 0x30,
		0x33, 0xC0,
		0x48, 0x8B, 0x4D, 0x1F,
		0x48, 0x33, 0xCC,
		0xE8, 0x85, 0x08, 0x00, 0x00,
		0x48, 0x8B, 0x9C, 0x24, 0x28, 0x01, 0x00, 0x00,
		0x48, 0x81, 0xC4, 0xD0, 0x00, 0x00, 0x00,
		0x41, 0x5F,
		0x41, 0x5E,
		0x41, 0x5D,
		0x41, 0x5C,
		0x5F,
		0x5E,
		0x5D,
		0xC3,
		0xB8, 0x03, 0x00, 0x00, 0x00,
		0xEB, 0xD2,
		0xB8, 0x02, 0x00, 0x00, 0x00,
		0xEB, 0xCB,
	};

} // namespace

static void BM_decode(benchmark::State& state)
{
	size_t instructionCount = 0;
	std::vector<TDiss::Instruction> instructions;
	instructions.resize(288);

	for (auto _ : state) {
		TDiss::CodeStream strm(0x0, ops, sizeof(ops), TDiss::DisOptions::SKIP_INVALID, TDiss::CodeType::CODE_64BIT);
		TDiss::DisResult::Enum result = TDiss::Diss::disassemble(strm, instructions.data(), instructions.size(), &instructionCount);

		// result == OK
		// instructionCount == 288
		::benchmark::DoNotOptimize(result);
	}

	state.SetBytesProcessed(state.iterations() * sizeof(ops));
}


static void BM_decode_random(benchmark::State& state)
{
	auto size = state.range(0);

	size_t instructionCount = 0;
	std::vector<TDiss::Instruction> instructions;
	instructions.resize(size);

	for (auto _ : state) {
		state.PauseTiming();

		std::vector<uint8_t> bytes = util::GenRandBytes(size);

		state.ResumeTiming();

		TDiss::CodeStream strm(0x0, bytes.data(), bytes.size(), TDiss::DisOptions::SKIP_INVALID, TDiss::CodeType::CODE_64BIT);
		TDiss::DisResult::Enum result = TDiss::Diss::disassemble(strm, instructions.data(), instructions.size(), &instructionCount);

		::benchmark::DoNotOptimize(result);
	}

	state.SetBytesProcessed(state.iterations() * state.range(0));
}


constexpr size_t upper_size = 1 << 22;

BENCHMARK(BM_decode);
BENCHMARK(BM_decode_random)->Range(512, upper_size);

BENCHMARK_MAIN();