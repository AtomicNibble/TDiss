#include "stdafx.h"

#include "Pe.h"

using namespace TDiss;

struct ModuleTest : public testing::TestWithParam<std::string>
{

};

INSTANTIATE_TEST_CASE_P(Default, ModuleTest, ::testing::Values(
	std::string("KernelBase_win7_1.dll"),
	std::string("KernelBase_win7_2.dll"),
	std::string("KernelBase_win7_3.dll"),

	std::string("KernelBase_win10_1.dll"),
	std::string("KernelBase_win10_2.dll"),
	std::string("KernelBase_win10_3.dll"),

	std::string("KernelBase_win81_1.dll"),
	std::string("KernelBase_win81_2.dll"),
	std::string("KernelBase_win81_3.dll"),

	std::string("kernel32_win7_pro.dll")
));

TEST_P(ModuleTest, Diss)
{
	const std::string& dllName = GetParam();

	// we want to load kernelbase.dll :D
	// lets load it with my pe loader, i don't need to run anything.
	Swiss::Pe pe;

	ASSERT_TRUE(pe.LoadFile("test_dlls/" + dllName));

	const Swiss::ExportList exports = pe.GetExportList();

	for (const auto& exp : exports)
	{
		// skip stupid forwarded functions.
		if (exp.forwarded) {
			continue;
		}

		// get the memory address for it.
		uint64_t func = exp.iat;

		const uint8_t* pFunc = pe.GetAddressForRVA<const uint8_t>(func);
		const char* pName = pe.GetAddressForRVA<const char>(exp.nameRVA);

		ASSERT_TRUE(pFunc != nullptr);
		ASSERT_TRUE(pName != nullptr);

		gLogger.Log("Diss: ^5%s", pName);

		{
			Instruction instructions[0x200];
			size_t instrunctionCount;

			CodeStream strm(0x0, pFunc, 0x20, // 32 bytes
				DisOptions::SKIP_INVALID, CodeType::CODE_64BIT);

			DisResult::Enum result = Diss::disassemble(strm, instructions, 0x200,
				&instrunctionCount);

			ASSERT_EQ(DisResult::OK, result);
			ASSERT_GT(instrunctionCount, 0x20 / MAX_INSTRUCTION_SIZE);

			// lets check we decoded enougth instructions that are valid upto size - max_inst_size.
			const size_t minSize = 0x20 - MAX_INSTRUCTION_SIZE;
			size_t bytesDecoded = 0;
			bool flowChange = false;

			for (size_t i = 0; i < instrunctionCount; i++)
			{
				if (instructions[i].opcode == InstructionID::INVALID) {
					break;
				}

				bytesDecoded += instructions[i].size;

				if (instructions[i].flow == FlowControl::UNC_BRANCH) {
					flowChange = true;
				}
			}

			if (flowChange) {
				ASSERT_GE(bytesDecoded, 16u);
			}
			else {
				ASSERT_GE(bytesDecoded, minSize);
			}
		}
	}

}