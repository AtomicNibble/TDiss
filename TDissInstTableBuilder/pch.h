#pragma once

#include <Common.h>

#define X_TDISS_TABLE_BUILDER

// This is a little funky as we basically need some types from TDiss
// But TDiss can't build before we run.
// So we just link against some of the code directly so need to define TDISS_API as empty.
#define TDISS_API

#include "../TDiss/Instruction.h"
#include "../TDiss/TDissOptions.h"

