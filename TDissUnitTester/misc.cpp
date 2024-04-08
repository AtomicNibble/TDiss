#include "pch.h"

TEST(Misc, RegIndexString)
{
	EXPECT_STREQ(TDiss::RegIndex::ToString(TDiss::RegIndex::EAX), "EAX");
	EXPECT_STREQ(TDiss::RegIndex::ToString(TDiss::RegIndex::R13W), "R13W");
	EXPECT_STREQ(TDiss::RegIndex::ToString(TDiss::RegIndex::DR0), "DR0");
	EXPECT_STREQ(TDiss::RegIndex::ToString(TDiss::RegIndex::MM3), "MM3");
	EXPECT_STREQ(TDiss::RegIndex::ToString(TDiss::RegIndex::XMM11), "XMM11");
	EXPECT_STREQ(TDiss::RegIndex::ToString(TDiss::RegIndex::NONE), "NONE");
}

TEST(Misc, InstructionIDString)
{
	EXPECT_STREQ(TDiss::InstructionID::ToString(TDiss::InstructionID::AAA), "AAA");
	EXPECT_STREQ(TDiss::InstructionID::ToString(TDiss::InstructionID::CLD), "CLD");
	EXPECT_STREQ(TDiss::InstructionID::ToString(TDiss::InstructionID::CMOVNZ), "CMOVNZ");
	EXPECT_STREQ(TDiss::InstructionID::ToString(TDiss::InstructionID::FCMOVNBE), "FCMOVNBE");
	EXPECT_STREQ(TDiss::InstructionID::ToString(TDiss::InstructionID::INVD), "INVD");
	EXPECT_STREQ(TDiss::InstructionID::ToString(TDiss::InstructionID::INVALID), "INVALID");
}
