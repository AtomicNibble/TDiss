#pragma once

constexpr std::size_t operator"" _sz(unsigned long long sz)
{
	return static_cast<std::size_t>(sz);
}

constexpr inline uint8_t operator"" _ui8(unsigned long long int x)
{
    return static_cast<uint8_t>(x);
}

constexpr inline uint16_t operator"" _ui16(unsigned long long int x)
{
    return static_cast<uint16_t>(x);
}

constexpr inline uint32_t operator"" _ui32(unsigned long long int x)
{
    return static_cast<uint32_t>(x);
}

constexpr inline uint64_t operator"" _ui64(unsigned long long int x)
{
    return static_cast<uint64_t>(x);
}

constexpr inline int8_t operator"" _i8(unsigned long long int x)
{
    return static_cast<int8_t>(x);
}

constexpr inline int16_t operator"" _i16(unsigned long long int x)
{
    return static_cast<int16_t>(x);
}

constexpr inline int32_t operator"" _i32(unsigned long long int x)
{
    return static_cast<int32_t>(x);
}

constexpr inline int64_t operator"" _i64(unsigned long long int x)
{
    return static_cast<int64_t>(x);
}