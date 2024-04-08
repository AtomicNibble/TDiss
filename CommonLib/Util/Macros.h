#pragma once

#ifdef min
#undef min
#endif
#ifdef max
#undef max
#endif

#define BIT(n) (1 << n)

#define X_ABSTRACT = 0
#define X_OVERIDE override
#define X_FINAL override final

#define X_ALIGN_AS(alignment) __declspec(align(alignment))
#define X_ALIGNED_SYMBOL(symbol, alignment) __declspec(align(alignment)) symbol
#define X_ALIGN_OF(type) __alignof(type)

#define X_HINT(hint) __assume(hint)
#define X_NO_SWITCH_DEFAULT X_HINT(0)

#define X_PACK_PUSH(val) X_PRAGMA(pack(push, val))
#define X_PACK_POP X_PRAGMA(pack(pop))

#define X_UNUSED(x) (void)(x)

#define X_NO_COPY(ClassName) \
private:                     \
    ClassName& operator=(const ClassName&);

#define X_NO_ASSIGN(ClassName) \
private:                       \
    ClassName(const ClassName&)

#define X_TAG(a, b, c, d) (uint32_t)((d << 24) | (c << 16) | (b << 8) | a);

#define X_NODISCARD [[nodiscard]]
#define X_FALLTHROUGH [[fallthrough]]

#if X_WIN32

#define X_PRAGMA(pragma) __pragma(pragma)
#define X_PUSH_WARNING_LEVEL(level) X_PRAGMA(warning(push, level))
#define X_POP_WARNING_LEVEL X_PRAGMA(warning(pop))
#define X_DISABLE_WARNING(number) X_PRAGMA(warning(push)) X_PRAGMA(warning(disable : number))
#define X_ENABLE_WARNING(number) X_PRAGMA(warning(pop))

#define X_INLINE inline
#define X_FORCE_INLINE __forceinline
#define X_NO_INLINE __declspec(noinline)

#define X_INTRINSIC(func) X_PRAGMA(intrinsic(func))

#define X_IMPORT __declspec(dllimport)
#define X_EXPORT __declspec(dllexport)

#else

#define X_PRAGMA_STR(pragma) #pragma
#define X_PRAGMA(pragma) _Pragma(X_PRAGMA_STR(pragma))
#define X_PUSH_WARNING_LEVEL(level)
#define X_POP_WARNING_LEVEL
#define X_DISABLE_WARNING(number)
#define X_ENABLE_WARNING(number)

#define X_INLINE inline
#define X_FORCE_INLINE inline
#define X_NO_INLINE __attribute__((noinline))

#define X_INTRINSIC(func)

#define X_IMPORT
#define X_EXPORT

#endif // X_WIN32
