#pragma once

namespace internal
{
    /// Base template for casting from one type into another
    template<bool IsFromSigned, bool IsToSigned>
    struct safe_static_cast_helper;

    template<>
    struct safe_static_cast_helper<false, false>
    {
        template<typename TO, typename FROM>
        static inline TO cast(FROM from)
        {
            X_ASSERT(from >= std::numeric_limits<TO>::min());
            X_ASSERT(from <= std::numeric_limits<TO>::max());
            return static_cast<TO>(from);
        }
    };

    /// Template specialization for casting from an unsigned type into a signed type
    template<>
    struct safe_static_cast_helper<false, true>
    {
        template<typename TO, typename FROM>
        static inline TO cast(FROM from)
        {
            X_ASSERT(from <= static_cast<typename std::make_unsigned<FROM>::type>(std::numeric_limits<TO>::max()));
            X_ASSERT(static_cast<TO>(from) >= 0);
            return static_cast<TO>(from);
        }
    };

    /// Template specialization for casting from a signed type into an unsigned type
    template<>
    struct safe_static_cast_helper<true, false>
    {
        template<typename TO, typename FROM>
        static inline TO cast(FROM from)
        {
            // make sure the input is not negative
            X_ASSERT(from >= 0);

            // assuring a positive input, we can safely cast it into its unsigned type and check the numeric limits
            X_ASSERT(static_cast<typename std::make_unsigned<FROM>::type>(from) >= std::numeric_limits<TO>::min());
            X_ASSERT(static_cast<typename std::make_unsigned<FROM>::type>(from) <= std::numeric_limits<TO>::max());

            return static_cast<TO>(from);
        }
    };

    /// Template specialization for casting from a signed type into a signed type
    template<>
    struct safe_static_cast_helper<true, true>
    {
        template<typename TO, typename FROM>
        static inline TO cast(FROM from)
        {
            X_ASSERT(from >= std::numeric_limits<TO>::min());
            X_ASSERT(from <= std::numeric_limits<TO>::max());
            return static_cast<TO>(from);
        }
    };

} // namespace internal

template<typename TO, typename FROM>
X_INLINE TO safe_static_cast(FROM from)
{
#if X_ENABLE_SAFE_STATIC_CAST
    return internal::safe_static_cast_helper<std::numeric_limits<FROM>::is_signed, std::numeric_limits<TO>::is_signed>::template cast<TO>(from);
#else // X_ENABLE_SAFE_STATIC_CAST
    return static_cast<TO>(from);
#endif // X_ENABLE_SAFE_STATIC_CAST
}

