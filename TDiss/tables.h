#pragma once

#include <stdint.h>
#include "Instruction.h"

namespace TDiss
{
	extern const InstInfo II_NOP;
	extern const InstInfo II_MOVSXD;
	extern const InstInfo II_NOW3D;

	extern const InstNode TableNode_0f_0f;

	extern const InstNode InstTree[];
	extern const uint32_t Flags[];
	extern const InstInfo instInfo[];
	extern const InstInfoEx instInfoEx[];
	extern const InstSharedInfo SharedInfo[];

} // namespace TDiss

