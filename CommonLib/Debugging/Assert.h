#pragma once

#include <assert.h>

#include "Util/Macros.h"


#if X_ASSERT_DISABLE


#define X_ASSERT(cond)				X_UNUSED(cond);
#define X_ASSERT_TRUE(cond)			X_UNUSED(cond);
#define X_ASSERT_FALSE(cond)		X_UNUSED(cond);
#define X_ASSERT_NOT_NULL(ptr)		X_UNUSED(ptr);
#define X_ASSERT_UNREACABLE()		
#define X_ASSERT_NOT_IMPLEMENTED()	

#else // X_ASSERT_DISABLE

#define X_ASSERT(cond)				assert(cond);
#define X_ASSERT_TRUE(cond)			assert(cond);
#define X_ASSERT_FALSE(cond)		assert(cond == false);
#define X_ASSERT_NOT_NULL(ptr)		assert(ptr != nullptr);
#define X_ASSERT_UNREACABLE()		assert(false);
#define X_ASSERT_NOT_IMPLEMENTED()	assert(false);

#endif // !X_ASSERT_DISABLE

