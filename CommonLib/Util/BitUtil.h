#pragma once

X_INTRINSIC(_BitScanReverse)
X_INTRINSIC(_BitScanForward)

#if X_64
X_INTRINSIC(_BitScanReverse64)
X_INTRINSIC(_BitScanForward64)
#endif // X_64

namespace bitUtil
{
    static const unsigned int NO_BIT_SET = 255;

    namespace internal
    {
        namespace FlagType
        {
            template<typename T>
            struct return_
            {
                typedef T type;
            };

            template<uint64_t N>
            struct bytetype : return_<uint64_t>
            {
            };

            template<>
            struct bytetype<4> : return_<uint32_t>
            {
            };

            template<>
            struct bytetype<3> : return_<uint32_t>
            {
            };

            template<>
            struct bytetype<2> : return_<uint16_t>
            {
            };

            template<>
            struct bytetype<1> : return_<uint8_t>
            {
            };

        } // namespace FlagType

        template<size_t N>
        struct Implementation
        {
        };

        template<>
        struct Implementation<8u>
        {
            template<typename T>
            static inline bool IsBitFlagSet(T value, typename FlagType::bytetype<sizeof(T)>::type flag)
            {
                static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");
                static_assert(sizeof(flag) == 8, "sizeof(flag) is not 8 bytes.");

                return (static_cast<uint64_t>(value) & flag) == flag;
            }

            template<typename T>
            static inline T ClearBitFlag(T value, typename FlagType::bytetype<sizeof(T)>::type flag)
            {
                static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");
                static_assert(sizeof(flag) == 8, "sizeof(flag) is not 8 bytes.");

                return (static_cast<uint64_t>(value) & (~flag));
            }

            template<typename T>
            static inline T SetBitFlag(T value, typename FlagType::bytetype<sizeof(T)>::type flag)
            {
                static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");
                static_assert(sizeof(flag) == 8, "sizeof(flag) is not 8 bytes.");

                return (static_cast<uint64_t>(value) | flag);
            }

            template<typename T>
            static inline unsigned int CountBits(T value)
            {
                static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");

                uint64_t v = static_cast<uint64_t>(value) - ((static_cast<uint64_t>(value) >> 1ull) & 0x5555555555555555ull);
                v = (v & 0x3333333333333333ull) + ((v >> 2ull) & 0x3333333333333333ull);
                return ((((v + (v >> 4ull)) & 0xF0F0F0F0F0F0F0Full) * 0x101010101010101ull) >> 56ull);
            }

            template<typename T>
            static inline constexpr T NextPow2(T v)
            {
                static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");

                --v;
                v |= v >> 1;
                v |= v >> 2;
                v |= v >> 4;
                v |= v >> 8;
                v |= v >> 16;
                v |= v >> 32;
                ++v;
                return v;
            }

            template<typename T>
            static inline constexpr uint64_t RoundUpToMultiple(T numToRound, T multipleOf)
            {
                static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");

                return (numToRound + multipleOf - 1) & ~(multipleOf - 1);
            }

            template<typename T>
            static inline unsigned int ScanBitsForward(T value)
            {
                static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");

                unsigned long index = 0;

#if X_WIN32
                const unsigned char result = _BitScanForward64(&index, static_cast<uint64_t>(value));
                if (result == 0) {
                    return NO_BIT_SET;
                }
#else // X_WIN32
                if (value == 0) {
                    return NO_BIT_SET;
                }
                index = __builtin_ffsll(static_cast<uint64_t>(value)) - 1;
#endif // X_WIN32

                return index;
            }

            template<typename T>
            static inline unsigned int ScanBits(T value)
            {
                static_assert(sizeof(T) == 8, "sizeof(T) is not 8 bytes.");

#if X_WIN32
                unsigned long index = 0;

                const unsigned char result = _BitScanReverse64(&index, static_cast<uint64_t>(value));
                if (result == 0) {
                    return NO_BIT_SET;
                }

                return index;
#else // X_WIN32
                static const unsigned int bval[] = {
                    0,
                    1,
                    2, 2,
                    3, 3, 3, 3,
                    4, 4, 4, 4, 4, 4, 4, 4 };

                if (value == 0) {
                    return NO_BIT_SET;
                }

                unsigned int r = 0;

                if (value & 0xFFFFFFFF00000000) {
                    r += 32 / 1;
                    value >>= 32 / 1;
                }
                if (value & 0x00000000FFFF0000) {
                    r += 16 / 1;
                    value >>= 16 / 1;
                }
                if (value & 0x000000000000FF00) {
                    r += 16 / 2;
                    value >>= 16 / 2;
                }
                if (value & 0x00000000000000F0) {
                    r += 16 / 4;
                    value >>= 16 / 4;
                }
                return r + bval[value] - 1;
#endif // !X_WIN32
            }
        };

        template<>
        struct Implementation<4u>
        {
            template<typename T>
            static inline constexpr T NextPow2(T v)
            {
                static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");

                --v;
                v |= v >> 1;
                v |= v >> 2;
                v |= v >> 4;
                v |= v >> 8;
                v |= v >> 16;
                ++v;
                return v;
            }

            template<typename T>
            static inline constexpr unsigned int RoundUpToMultiple(T numToRound, T multipleOf)
            {
                static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");

                return (numToRound + multipleOf - 1) & ~(multipleOf - 1);
            }

            template<typename T>
            static inline constexpr bool IsBitFlagSet(T value, typename internal::FlagType::bytetype<sizeof(T)>::type flag)
            {
                static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");
                static_assert(sizeof(flag) == 4, "sizeof(flag) is not 4 bytes.");

                return (static_cast<uint32_t>(value) & flag) == flag;
            }

            template<typename T>
            static inline constexpr T ClearBitFlag(T value, typename internal::FlagType::bytetype<sizeof(T)>::type flag)
            {
                static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");
                static_assert(sizeof(flag) == 4, "sizeof(flag) is not 4 bytes.");

                return (static_cast<uint32_t>(value) & ~flag);
            }

            template<typename T>
            static inline constexpr T SetBitFlag(T value, typename internal::FlagType::bytetype<sizeof(T)>::type flag)
            {
                static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");
                static_assert(sizeof(flag) == 4, "sizeof(flag) is not 4 bytes.");

                return (static_cast<uint32_t>(value) | flag);
            }

            template<typename T>
            static inline unsigned int CountBits(T value)
            {
                static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");

                uint32_t v = static_cast<uint32_t>(value) - ((static_cast<uint32_t>(value) >> 1u) & 0x55555555u);
                v = (v & 0x33333333u) + ((v >> 2) & 0x33333333u);
                return ((((v + (v >> 4u)) & 0xF0F0F0Fu) * 0x1010101u) >> 24u);
            }

            template<typename T>
            static inline unsigned int ScanBitsForward(T value)
            {
                static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");

                unsigned long index = 0;

#if X_WIN32
                const unsigned char result = _BitScanForward(&index, static_cast<uint32_t>(value));
                if (result == 0) {
                    return NO_BIT_SET;
                }
#else // X_WIN32
                if (value == 0) {
                    return NO_BIT_SET;
                }
                index = __builtin_ffs(static_cast<uint32_t>(value)) - 1;
#endif // X_WIN32

                return index;
            }

            template<typename T>
            static inline unsigned int ScanBits(T value)
            {
                static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");

                unsigned long index = 0;

#if X_WIN32
                const unsigned char result = _BitScanReverse(&index, static_cast<DWORD>(value));
                if (result == 0) {
                    return NO_BIT_SET;
                }
#else // X_WIN32
                static const unsigned int bval[] = {
                    0,
                    1,
                    2, 2,
                    3, 3, 3, 3,
                    4, 4, 4, 4, 4, 4, 4, 4 };

                if (value == 0) {
                    return NO_BIT_SET;
                }

                unsigned int r = 0;

                if (value & 0x00000000FFFF0000) {
                    r += 16 / 1;
                    value >>= 16 / 1;
                }
                if (value & 0x000000000000FF00) {
                    r += 16 / 2;
                    value >>= 16 / 2;
                }
                if (value & 0x00000000000000F0) {
                    r += 16 / 4;
                    value >>= 16 / 4;
                }
                return r + bval[value] - 1;
#endif

                return index;
            }

            template<typename T>
            static inline constexpr uint8_t GetOctal(T value, T index)
            {
                static_assert(sizeof(T) == 4, "sizeof(T) is not 4 bytes.");

                const uint32_t shift = index * 3;
                const uint32_t mask = 0x7 << shift;
                const uint32_t masked = value & mask;
                const uint32_t result = masked >> shift;
                return static_cast<uint8_t>(result);
            }
        };

        template<>
        struct Implementation<2u>
        {
            template<typename T>
            static inline constexpr T SetBitFlag(T value, T flag)
            {
                static_assert(sizeof(T) == 2, "sizeof(T) is not 2 bytes");
                static_assert(sizeof(flag) == 2, "sizeof(flag) is not 2 bytes");

                return (static_cast<uint16_t>(value) | flag);
            }

            template<typename T>
            static inline constexpr bool IsBitFlagSet(T value, T flag)
            {
                static_assert(sizeof(T) == 2, "sizeof(T) is not 2 bytes");
                static_assert(sizeof(flag) == 2, "sizeof(flag) is not 2 bytes");

                return (static_cast<uint16_t>(value) & flag) == flag;
            }
        };

        template<>
        struct Implementation<1u>
        {
            template<typename T>
            static inline constexpr T SetBitFlag(T value, T flag)
            {
                static_assert(sizeof(T) == 1, "sizeof(T) is not 1 byte");
                static_assert(sizeof(flag) == 1, "sizeof(flag) is not 1 byte");

                return (static_cast<uint8_t>(value) | flag);
            }

            template<typename T>
            static inline constexpr bool IsBitFlagSet(T value, T flag)
            {
                static_assert(sizeof(T) == 1, "sizeof(T) is not 1 byte");
                static_assert(sizeof(flag) == 1, "sizeof(flag) is not 1 byte");

                return (static_cast<uint8_t>(value) & flag) == flag;
            }
        };

    } // namespace internal

    template<typename T>
    inline unsigned int CountBits(T value)
    {
        return internal::Implementation<sizeof(T)>::CountBits(value);
    }

    template<typename T>
    inline constexpr bool IsPowerOfTwo(T x)
    {
        return (x & (x - 1)) == 0;
    }

    template<typename T>
    inline constexpr T NextPow2(T value)
    {
        return internal::Implementation<sizeof(T)>::NextPow2(value);
    }

    template<typename T>
    inline constexpr T RoundUpToMultiple(T numToRound, T multipleOf)
    {
        return internal::Implementation<sizeof(T)>::RoundUpToMultiple(numToRound, multipleOf);
    }

    template<typename T>
    inline constexpr T RoundDownToMultiple(T numToRound, T multipleOf)
    {
        return numToRound & ~(multipleOf - 1);
    }

    template<typename T>
    inline constexpr bool IsBitFlagSet(T value, typename internal::FlagType::bytetype<sizeof(T)>::type flag)
    {
        return internal::Implementation<sizeof(T)>::IsBitFlagSet(value, flag);
    }

    template<typename T>
    inline constexpr T ClearBitFlag(T value, typename internal::FlagType::bytetype<sizeof(T)>::type flag)
    {
        return internal::Implementation<sizeof(T)>::ClearBitFlag(value, flag);
    }

    template<typename T>
    inline constexpr T SetBitFlag(T value, typename internal::FlagType::bytetype<sizeof(T)>::type flag)
    {
        return internal::Implementation<sizeof(T)>::SetBitFlag(value, flag);
    }

    template<typename T>
    inline unsigned int ScanBitsForward(T value)
    {
        return internal::Implementation<sizeof(T)>::ScanBitsForward(value);
    }

    template<typename T>
    inline unsigned int ScanBits(T value)
    {
        return internal::Implementation<sizeof(T)>::ScanBits(value);
    }

    template<typename T>
    inline constexpr uint8_t GetOctal(T value, T index)
    {
        return internal::Implementation<sizeof(T)>::GetOctal(value, index);
    }

} // namespace bitUtil
